#include <iostream>
using namespace std;

class A {
    int x;

  public:
    int getx() { return x; }
    A() { cout << "countstructor vacio called" << endl; };
    A(int a) {
        x = a;
        cout << "constructor con data called" << a << endl;
    };
    ~A() { cout << "destructor called" << endl; };
};

A *func() {
    // A a;
    A *p = new A(3);
    return p;
}

int main() {
    // A *p = new A;
    // delete p;
    // cout << "deleted called" << endl;

    A *q;
    q = func();
    cout << q->getx() << endl;
    delete q;
    cout << "after func" << endl;
    return 0;
}