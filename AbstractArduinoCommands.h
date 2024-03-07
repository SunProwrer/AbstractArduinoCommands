#pragma once

// #include "src/analogI.h"
// #include "src/pwmO.h"
// #include "src/digitalIO.h"
// #include "src/IOwrite.h"

#include "AbstractCommands.h"
#include <Arduino.h>

class ArduinoAbstractCommands : public AbstractCommands {
public:
    void setDigitalSignal(uint8_t pin, uint8_t val) {
        digitalWrite(pin, val);
    }

    uint8_t readDigitalSignal(uint8_t pin) {
        return digitalRead(pin);
    }

    void setPWMSignal(uint8_t pin, uint16_t val) {
        analogWrite(pin, val << 2);
    }

    uint16_t readAnalogSignal(uint8_t pin) {
        return analogRead(pin);
    }
};
