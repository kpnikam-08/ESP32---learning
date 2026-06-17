const int potPin = 34;

void setup() {
  Serial.begin(115200);
  Serial.println("Potentiometer Reader Started");
}

void loop() {

  int sensorValue = analogRead(potPin);

  float percentage =
      (sensorValue / 4095.0) * 100.0;

  Serial.print("Raw Value: ");
  Serial.print(sensorValue);

  Serial.print(" | Percentage: ");
  Serial.print(percentage);

  Serial.println("%");

  delay(2000);
}
