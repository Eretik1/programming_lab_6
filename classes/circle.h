#pragma once
#include "object.h"

class circle: public object{
    public:
    circle();
    circle(std::string Name, int Radius);
    int getRadius();
    private:
    int radius;
}; 