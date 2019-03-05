#include "Config.h"

bool weiss = 0;
bool schwarz = 0;

bool lastSchwarz = 0;
bool lastWeiss = 0; //blubb

Condition condition;

void setup() {
  pinMode(SCHWARZ, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(WEISS, INPUT_PULLUP);
  pinMode(POTI, INPUT);
  Serial.begin(115200);
  Serial.println("Start!");
}

void loop() {
  weiss = !digitalRead(WEISS);
  schwarz = !digitalRead(SCHWARZ);
  if (weiss && !lastWeiss) condition.decreaseState();
  if (schwarz && !lastSchwarz) condition.increaseState();
  if(millis() % 1000 >= 500 || condition.getState() % 2 == 1)  analogWrite(LED, map(condition.getState(), 0, RANGE, 0.05 * 255, 255));
  else analogWrite(LED, 0);
  lastWeiss = weiss;
  lastSchwarz = schwarz;

  // Serial.println(String(weiss) + "   " + String(schwarz));
}
