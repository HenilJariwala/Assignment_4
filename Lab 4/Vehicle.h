#pragma once

#include "Drawable.h"

#include <iostream>
using namespace std;

class Vehicle : public Drawable {
public:
    virtual void drive();
    virtual void draw();
};
