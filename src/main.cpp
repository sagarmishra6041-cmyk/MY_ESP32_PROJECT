#include <Arduino.h>

#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("ESP32 Working - LED ON");
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  Serial.println("ESP32 Working - LED OFF");
  delay(1000);
}