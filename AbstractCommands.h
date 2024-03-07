#pragma once
#include <stdint.h>
#include "defines.h"

class AbstractCommands {
public:
    virtual void setDigitalSignal(uint8_t pin, uint8_t val) = 0;
    virtual uint8_t readDigitalSignal(uint8_t pin) = 0;
    virtual void setPWMSignal(uint8_t pin, uint16_t val) = 0;
    virtual uint16_t readAnalogSignal(uint8_t pin) = 0;
};
