int LED1=26;
void setup() {
// put your setup code here, to run once:
 Serial.begin(115200);
 Serial.println("Hello, ESP32!"); 
 pinMode (LED1, OUTPUT);
}
void loop() {
digitalWrite(LED1, HIGH);
Serial.println("ON");
delay(1000);
digitalWrite(LED1, LOW);
Serial.println("OFF");
delay (1000);
// put your main code here, to run repeatedly:
// this speeds up the simulation
}