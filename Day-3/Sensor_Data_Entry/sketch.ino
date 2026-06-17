#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

struct Reading {
  int id;
  float temperature;
  String timestamp;
};

Reading sensor;

// Function to read one line from Serial
String readInput() {
  while (!Serial.available()) {
    delay(10);
  }

  String data = Serial.readStringUntil('\n');
  data.trim();
  return data;
}

void setup() {

  Serial.begin(115200);
  delay(1000);

  Serial.println("Connecting to WiFi...");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  Serial.println();

  // Sensor ID
  Serial.println("Enter Sensor ID:");
  sensor.id = readInput().toInt();

  // Temperature
  Serial.println("Enter Temperature:");
  sensor.temperature = readInput().toFloat();

  // Timestamp
  Serial.println("Enter Timestamp:");
  sensor.timestamp = readInput();

  Serial.println();
  Serial.println("===== SENSOR DATA =====");
  Serial.print("Sensor ID: ");
  Serial.println(sensor.id);

  Serial.print("Temperature: ");
  Serial.print(sensor.temperature);
  Serial.println(" C");

  Serial.print("Timestamp: ");
  Serial.println(sensor.timestamp);
}

void loop() {
}
