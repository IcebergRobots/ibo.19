#include "Person.h"

Person::Person() {}

void Person::mySend() {
  Serial.println(button());
  number++;
}

bool Person::button(){
  return !digitalRead(BUTTON);
}

int Person::getNumber(){
  return number;
}

