
// polimorfismo basado en herencia
#include "entity.h"
#include "point.h"
#include "screen.h"
#include <iostream>
using namespace std;

int main() {
    // // Point<int> p(6, 5);
    // Point<int> p;
    // int a = 4;
    // // cout << p;
    // Point<int> p1(0, 1);
    // Point<int> p3(1, 1);
    // p = p1 + p3;
    // cout << p << endl;

    Screen screen;
    while (1) {
        vector<Entity> entities;
        screen.render(entities);
    }

    return 0;
}