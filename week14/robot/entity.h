#pragma once
#include "point.h"
#include "screen.h"
#include <iostream>

class Entity {
    Point<int> pos;
    friend class Screen;
    std::string shape = "aha";

  public:
    Entity(){};

    void update() { std::cout << "hah" << std::endl; }

    std::string get_shape() { return this->shape; }
};