#pragma once

#include "AbstractConsole.h"
#include <Arduino.h>

class ArduinoAbstractConsole : public AbstractConsole {
public:
    void print(const char* msg) {
        Serial.print(msg);
    }

    virtual void print(int msg) {
        Serial.print(msg);
    }

    void println(const char* msg) {
        Serial.println(msg);
    }
    
    virtual void println(int msg) {
        Serial.println(msg);
    }
};
