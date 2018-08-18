#ifndef Utility_h
#define Utility_h

#include "Config.h"

class Condition{
  public:
    Condition();
    void setState(int s);
    int getState();
    void increaseState();
    void decreaseState();
  private:
    int state = 0;
    unsigned long timer = 0;
};

#endif
