#include "Utility.h"
extern Person person;

bool button() {
  return !digitalRead(BUTTON);
}

void sendBool(bool mybutton) {
  Serial.println(mybutton);
}

void doppel() {
  while (digitalRead(SCHWARZ)) {} // warten solange Knopf nicht gedrückt ist
  if(stuff) person.mySend();
  while (!digitalRead(SCHWARZ)) {}
}

