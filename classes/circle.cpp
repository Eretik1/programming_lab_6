#include "circle.h"

circle::circle(){};

circle::circle(std::string Name, int Radius){
    setName(Name);
    radius = Radius;
};

int circle::getRadius(){
    return radius;
};