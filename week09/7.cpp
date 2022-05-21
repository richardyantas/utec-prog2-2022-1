#include<iostream>
using namespace std;

class A{
  int x;
  public:
  A(int a){
    cout << "constructor called" <<  a << endl;
  };
  ~A(){
    cout << "destructor called" << endl;
  };
};

void func(){  
  // A a;
  A *p = new A(3);
  delete p;
}

int main(){
  // A *p = new A;
  // delete p;
  // cout << "deleted called" << endl;
  func();
  cout << "after func" << endl;
  return 0;
}