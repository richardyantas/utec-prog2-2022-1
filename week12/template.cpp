#include <iostream>
using namespace std;

// template <typename T> T func(T a) { return a + 1; }

template <typename T> class A {
    T data;

  public:
    A() { data = 0; }
    // void print() { cout << data << endl; }
    virtual void print() = 0;
};

template <typename T> class B : public A<T> {
    T data2;

  public:
    B() : A<T>() { data2 = 1; }
    void print() { cout << data2 << endl; }
};

template <typename T> class C : public A<T> {
    T data3;

  public:
    C() : A<T>() { data3 = 2; }
    void print() { cout << data3 << endl; }
};

int main() {
    // cout << func<long long>(2147483647) << endl;
    // A<int> a;
    // a.print();

    B<int> b;
    b.print();
    return 0;
}
