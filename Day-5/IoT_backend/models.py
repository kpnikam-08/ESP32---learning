from sqlalchemy import Column, Integer, Float, String
from database import Base

class Reading(Base):
    __tablename__ = "readings"

    id = Column(Integer, primary_key=True, index=True)

    device_id = Column(String(50), index=True)
    temperature = Column(Float)
    humidity = Column(Float)
