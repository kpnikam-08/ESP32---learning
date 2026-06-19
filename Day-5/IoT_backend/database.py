from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker, declarative_base

# CHANGE THIS if your DB name/user/pass is different
DATABASE_URL = "mysql+pymysql://root:kp%401234@localhost/sensor_monitoring"

engine = create_engine(DATABASE_URL, echo=True)

SessionLocal = sessionmaker(autocommit=False, autoflush=False, bind=engine)

Base = declarative_base()
