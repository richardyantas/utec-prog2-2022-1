
// polimorfismo basado en funciones

#include <iostream>
using namespace std;

int foo(int a) { return a + 1; }

int foo(int x, int y) { return x + y; }

float foo(float a) { return a - 1.0; }

int main() {
    cout << foo(float(1.0)) << endl;
    cout << foo(1.0f) << endl;
    return 0;
}