#pragma once
#include <Arduino.h>

#define setDigitalSignal(pin, val) digitalWrite(pin, val)
#define readDigitalSignal(pin) digitalRead(pin)
