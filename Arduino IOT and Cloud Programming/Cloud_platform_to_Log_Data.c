#include <ESP8266WiFi.h>
#include <ThingSpeak.h>

WiFiClient client;

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASS";
unsigned long channelID = 123456;
const char* writeAPIKey = "YOUR_WRITE_KEY";

int sensorPin = A0;
int sensorValue = 0;

void setup() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { delay(500); }
  ThingSpeak.begin(client);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  ThingSpeak.writeField(channelID, 1, sensorValue, writeAPIKey);
  delay(2000);
}
