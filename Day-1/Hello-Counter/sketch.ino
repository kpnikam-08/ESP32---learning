int LED1 = 26;
int count = 1;
void setup() {
  Serial.begin(115200);
  pinMode(LED1, OUTPUT);
}
void loop() {
  digitalWrite(LED1, HIGH);
  Serial.print("Hello ");
  Serial.println(count);
  delay(1000);
  digitalWrite(LED1, LOW);
  delay(1000);
  count++;
}
