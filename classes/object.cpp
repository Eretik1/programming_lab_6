#include "object.h"

object::object(){};

object::object(std::string Name){
    name = Name;
};

std::string object::getName(){
    return name;
};

void object::setName(std::string Name){
    name = Name;
};