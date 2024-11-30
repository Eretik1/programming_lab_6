#pragma once
#include "object.h"
#include <vector>

class doc{
    public:
    doc();
    doc(std::string path);
    void addObject(object Object);
    void delObject();
    void exportDoc(std::string path);
    std::vector<object> getObjevts();
    private:
    std::vector<object> objects;
};