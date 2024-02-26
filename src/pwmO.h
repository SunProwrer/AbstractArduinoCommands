#pragma once
#include <Arduino.h>

#define setPWMSignal(pin, val) analogWrite(pin, val << 2)
