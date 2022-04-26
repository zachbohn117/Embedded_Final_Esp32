#include <Arduino.h>
#include <Wire.h>


void setup() {
  Serial.begin(115200);
  while(!Serial){} // wait for serial to connect
  Serial.println("Serial connected");
  Wire.begin();
  Serial.println("Wire begun");
}

void loop() {
  Serial.println("begining transmission");
  Wire.beginTransmission(1337);
  Serial.println("sending LEET");
  Wire.write("LEET");
  Wire.endTransmission();

  delay(200);
}
