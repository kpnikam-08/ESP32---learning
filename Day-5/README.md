# Day 5 - IoT Backend Integration with ESP32 Simulator

## Project Overview

This project demonstrates an IoT system where sensor data is generated using an ESP32 Simulator and sent to a FastAPI backend for storage in a MySQL database. The system enables efficient collection, processing, and retrieval of temperature and humidity readings.

## Technologies Used

* Python
* FastAPI
* MySQL
* SQLAlchemy
* ESP32 Simulator

## Project Flow

ESP32 Simulator → FastAPI Backend → MySQL Database

## My Contribution

* Developed the ESP32 Simulator in Python.
* Generated and transmitted temperature and humidity data to the FastAPI backend.
* Added device identification (`device_id`) support for sensor tracking.
* Tested API communication between the simulator and backend.
* Verified successful storage of sensor readings in MySQL.
* Assisted in integration, debugging, and end-to-end testing of the system.

## Team Collaboration

The FastAPI backend, database models, schemas, and MySQL integration were developed by a teammate. My responsibility was to build the ESP32 Simulator, validate API communication, test data transmission, and ensure successful integration between the simulator, backend, and database.

## API Endpoints

### POST /readings

Stores sensor readings in the database.

Example Request:

```json
{
  "device_id": "ESP32_001",
  "temperature": 28.5,
  "humidity": 65.2
}
```

### GET /readings

Retrieves all stored sensor readings from the database.

## Running the Project

### Start the Backend

```bash
python -m uvicorn main:app --reload
```

### Run the ESP32 Simulator

```bash
python esp32_simulator.py
```

### Access API Documentation

```text
http://127.0.0.1:8000/docs
```

## Learning Outcomes

* Understanding IoT data flow from device to database.
* Sending sensor data using HTTP requests.
* Testing and validating API communication.
* Working with MySQL-backed applications.
* Performing end-to-end integration and debugging.
* Simulating ESP32 sensor data using Python.
