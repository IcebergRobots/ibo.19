#include "Config.h"

void setup() {
  pinMode(SCHWARZ, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(POTI, INPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(POTI));
}

