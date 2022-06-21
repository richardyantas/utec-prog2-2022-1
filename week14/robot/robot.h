#pragma once
#include "entity.h"
#include "point.h"
#include <iostream>

class Robot : public Entity {

    Point<int> pos;

  public:
    Robot() : Entity(){};
    void move() {}
};

class RobotLight : public Robot {
  public:
    RobotLight() : Robot() {}
};

class Drone : public RobotLight {
  public:
    Drone() : RobotLight() {}
};

class Humanoid : public RobotLight {
  public:
    Humanoid() : RobotLight() {}
};

class RobotHeavy : public Robot {
  public:
    RobotHeavy() : Robot(){};
};

class Tank : public RobotHeavy {
  public:
    Tank() : RobotHeavy(){};
};

class Player : public Entity {
    Point<int> pos;

  public:
    Player() : Entity(){};
};