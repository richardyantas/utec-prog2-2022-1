
// polimorfismo en constructores

#include <iostream>
using namespace std;

class A {
  public:
    A(){};
    A(int a) { cout << "mundial" << endl; }
    A(int a, int b) {}
};

int main() {
    A a;
    A b(2);
    return 0;
}