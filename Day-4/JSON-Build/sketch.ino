#include <ArduinoJson.h>

const int sensorPin = 34;

void setup() {

  Serial.begin(115200);

}

void loop() {

  int sensorValue = analogRead(sensorPin);

  JsonDocument doc;

  doc["sensor"] = "potentiometer";
  doc["value"] = sensorValue;

  serializeJsonPretty(doc, Serial);

  Serial.println();
  Serial.println("----------------");

  delay(2000);
}
