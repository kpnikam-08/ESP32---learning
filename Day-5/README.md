# Day 5 - IoT Backend with FastAPI & MySQL

## Overview

This project demonstrates an IoT data pipeline where sensor readings are sent to a FastAPI backend and stored in a MySQL database.

### Technologies Used

* Python
* FastAPI
* MySQL
* SQLAlchemy
* Uvicorn

## Project Flow

ESP32 Simulator → FastAPI Backend → MySQL Database

## Features

* Receive temperature and humidity data through REST APIs
* Store sensor readings in MySQL
* API testing using Swagger UI
* Simulated ESP32 data transmission using Python

## API Endpoints

### POST /readings

Store sensor readings in the database.

### GET /readings

Retrieve stored sensor readings.

## Running the Project

Start the backend:

```bash
python -m uvicorn main:app --reload
```

Run the ESP32 simulator:

```bash
python esp32_simulator.py
```

## Team Contributions

### Teammate Contribution

* Developed the FastAPI backend
* Integrated MySQL database
* Created API endpoints and database models

### My Contribution

* Developed the ESP32 Python Simulator
* Tested API communication and data flow
* Assisted with integration and debugging

## Learning Outcomes

* FastAPI backend development
* MySQL database integration
* REST API communication
* IoT data handling and testing

ESP32 IoT Internship - Day 5 Project
