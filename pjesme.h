#ifndef MBED_PJESME_H
#define MBED_PJESME_H
#include "mbed.h"
class Pjesme
{
public:
    Pjesme(PinName pin);
    void start(int n);
    void stop(void);
private:
    PwmOut _pin;
};
#endif