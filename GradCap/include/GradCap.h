#ifndef GRAD_CAP_H
#define GRAD_CAP_H

#include "Arduino.h"

#ifdef __cplusplus
extern "C"
{
#endif

// All pinout locations
#define LIGHT

class GradCap{
public:
    bool startCash();
    bool startLGH();
    bool startSandman();
private:

    /**
     * @brief Controls the way the LED lights up
     * 
     * @param pin Pin of the LED to be changed
     * @param maxBrightness Maximum (or minimum) brightness of the LED
     * @param steps How fast the LED should be lit. Should be between 2 and 6
     * @param time How long it should take to change the brightness
     * @param direction True if brighter, false if dimmer
     * 
     * @return void
     */
    void lightUp(int pin, int maxBrightness, int steps, int time, bool direction);

    unsigned long currentTime;  // Current way through the cycle
    unsigned long cash;         // Time to start cash
    unsigned long LGH;          // Time to start LGH
    unsigned long sandman;      // Time to start sandman
};


#ifdef __cplusplus
}
#endif /* extern "C" */
#endif