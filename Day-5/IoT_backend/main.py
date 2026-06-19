from fastapi import FastAPI, Depends
from sqlalchemy.orm import Session

from database import SessionLocal, engine
import models
import schemas

# create tables
models.Base.metadata.create_all(bind=engine)

app = FastAPI()


# DB dependency
def get_db():
    db = SessionLocal()
    try:
        yield db
    finally:
        db.close()


@app.get("/")
def home():
    return {"message": "Sensor Backend Running 🚀"}


# CREATE reading (ESP32 will hit this)
@app.post("/readings")
def create_reading(reading: schemas.ReadingCreate, db: Session = Depends(get_db)):
    new_reading = models.Reading(
        device_id=reading.device_id,
        temperature=reading.temperature,
        humidity=reading.humidity
    )

    db.add(new_reading)
    db.commit()
    db.refresh(new_reading)

    return new_reading


# GET all readings
@app.get("/readings")
def get_readings(db: Session = Depends(get_db)):
    return db.query(models.Reading).all()
