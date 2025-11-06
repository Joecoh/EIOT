#include <SoftwareSerial.h>

SoftwareSerial gsm(7, 8);
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  gsm.begin(9600);
  delay(1000);
  gsm.println("AT");
  delay(1000);
  gsm.println("AT+CMGF=1");
  delay(1000);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  gsm.print("AT+CMGS=\"+911234567890\"\r");
  delay(1000);
  gsm.print("Sensor Value: ");
  gsm.print(sensorValue);
  gsm.write(26);
  delay(60000);
}
