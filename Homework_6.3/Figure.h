#pragma once
#include <iostream>

class Figure
{
public:
    std::string name = "";
    Figure();
    virtual void print_info();
};