#include "../includes/pin.h"
#include "Arduino.h"  

Pin::Pin(uint8_t id, Mode mode): 
    mId(id),
    mMode(mode)
{
    pinMode(id, mode);
}

Pin::~Pin()
{

}

bool Pin::read()
{
    return (digitalRead(mId) == 0) ? true : false;
}

void Pin::write(bool val)
{
    digitalWrite(mId, val);
}

void Pin::set()
{
    digitalWrite(mId, 1U);
}

void Pin::clr()
{
    digitalWrite(mId, 0U);
}
