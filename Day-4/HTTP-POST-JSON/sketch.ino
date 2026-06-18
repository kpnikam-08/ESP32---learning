#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const int sensorPin = 34;

void setup() {

  Serial.begin(115200);

  Serial.println("Connecting WiFi...");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected");

  int sensorValue = analogRead(sensorPin);

  JsonDocument doc;

  doc["sensor"] = "potentiometer";
  doc["value"] = sensorValue;

  String jsonData;

  serializeJson(doc, jsonData);

  Serial.println("JSON Payload:");
  Serial.println(jsonData);

  HTTPClient http;

  http.begin("https://postman-echo.com/post");

  http.addHeader("Content-Type", "application/json");

  int httpResponseCode =
      http.POST(jsonData);

  Serial.print("HTTP Response Code: ");
  Serial.println(httpResponseCode);

  if (httpResponseCode > 0) {

    String response =
        http.getString();

    Serial.println("Server Response:");

    Serial.println(response);
  }

  http.end();
}

void loop() {

}
