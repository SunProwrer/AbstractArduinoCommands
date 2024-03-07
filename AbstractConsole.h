#pragma once
#include <stdint.h>
#include "defines.h"

class AbstractConsole {
public:
    virtual void print(const char* msg) = 0;
    virtual void print(int msg) = 0;
    virtual void println(const char* msg) = 0;
    virtual void println(int msg) = 0;
};
