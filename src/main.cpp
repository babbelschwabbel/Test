
// test kommentarda s
#include <Arduino.h>

#define LED 2
#define LED2 16
#define wait_time 1000

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  digitalWrite(LED2, HIGH);
  Serial.println("LED is on");
  delay(wait_time);
  digitalWrite(LED, LOW);
  digitalWrite(LED2, LOW);
  Serial.println("LED is off");
  delay(wait_time);
}
