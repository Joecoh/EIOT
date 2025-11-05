#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); 

int sensorPin = A0; 
int sensorValue = 0;

void setup() {
  Serial.begin(9600);     
  BTSerial.begin(9600);  
}

void loop() {

  sensorValue = analogRead(sensorPin);


  BTSerial.println(sensorValue);
  Serial.println(sensorValue);


  if (BTSerial.available()) {
    char command = BTSerial.read();
    if (command == '1') {
      digitalWrite(13, HIGH); 
    } else if (command == '0') {
      digitalWrite(13, LOW);   
    }
  }

  delay(500); 
}
