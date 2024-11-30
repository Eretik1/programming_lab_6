#pragma once

class object{
    public:
    object();
    object(std::string Name);
    std::string getName();
    void setName(std::string Name);
    private:
    std::string name;
};