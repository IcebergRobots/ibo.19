#include "Utility.h"

Condition::Condition() {}

void Condition::setState(int s) {
  if (millis() - timer >= 400) {
    s = constrain(s, 0, RANGE);
    if (s != state) {
      timer = millis();
      state = s;
      Serial.println(state);
    }
  }
}

int Condition::getState() {
  return state;
}

void Condition::increaseState() {
  setState(state + 1);
  //Serial.println("in");
}

void Condition::decreaseState() {
  setState(state - 1);
  //Serial.println("de");
}

