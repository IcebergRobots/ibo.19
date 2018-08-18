#ifndef Person_h
#define Person_h

#include "Config.h"

class Person
{
  public:
    Person();
    void mySend();
    int getNumber();
  private:
    bool button();
    int number = 0;
};

#endif
