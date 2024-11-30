#include "doc.h"
#include <iostream>

doc::doc(){};

doc::doc(std::string path){
    std::cout << "import from " << path << std::endl;
};

void doc::addObject(object Object){
    objects.push_back(Object);
    std::cout << "added object " << Object.getName() << std::endl;
};

std::vector<object> doc::getObjevts(){
    std::cout << "objects:" << std:: endl;
    for(int i = 0; i < objects.size(); i++){
        std::cout << "  " << objects[i].getName() << std::endl;
    }
    return objects;
};

void doc::delObject(){
    std::cout << "deleted object " << objects[objects.size() - 1].getName() << std::endl;
    objects.pop_back();
};

void doc::exportDoc(std::string path){
    std::cout << "the file has been exported to " << path << std::endl;
};