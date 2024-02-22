#pragma once

#include "Drawable.h"

#include <iostream>
using namespace std;


class Shape : public Drawable {
public:
    virtual double area() ;
    virtual void draw();
};