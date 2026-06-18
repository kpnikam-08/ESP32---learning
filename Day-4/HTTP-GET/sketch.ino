#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

void setup() {
  Serial.begin(115200);

  Serial.println("Connecting to WiFi...");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected!");

  HTTPClient http;

  String url =
    "https://jsonplaceholder.typicode.com/todos/1";

  http.begin(url);

  int httpResponseCode = http.GET();

  if (httpResponseCode > 0) {

    Serial.print("HTTP Response Code: ");
    Serial.println(httpResponseCode);

    String payload = http.getString();

    Serial.println("Response:");
    Serial.println(payload);

  } else {

    Serial.print("Error Code: ");
    Serial.println(httpResponseCode);

  }

  http.end();
}

void loop() {
}
