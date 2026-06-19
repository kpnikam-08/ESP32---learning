import requests
import random
import time

SERVER_URL = "http://127.0.0.1:8000/readings"

DEVICE_ID = "ESP32_001"

print("ESP32 Simulator Started")
print("-" * 40)

while True:
    try:
        temperature = round(random.uniform(25, 35), 1)
        humidity = round(random.uniform(50, 80), 1)

        payload = {
            "device_id": DEVICE_ID,
            "temperature": temperature,
            "humidity": humidity
        }

        print(f"Sending: {payload}")

        response = requests.post(
            SERVER_URL,
            json=payload,
            timeout=5
        )

        print(f"HTTP Response Code: {response.status_code}")
        print(f"Server Response: {response.json()}")
        print("-" * 40)

    except Exception as e:
        print(f"Error: {e}")
        print("-" * 40)

    time.sleep(5)
