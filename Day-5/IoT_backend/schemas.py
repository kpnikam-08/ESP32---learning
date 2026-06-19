from pydantic import BaseModel

class ReadingBase(BaseModel):
    device_id: str
    temperature: float
    humidity: float


class ReadingCreate(ReadingBase):
    pass


class ReadingResponse(ReadingBase):
    id: int

    class Config:
        from_attributes = True
