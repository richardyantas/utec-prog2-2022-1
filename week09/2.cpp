#include<iostream>
using namespace std;

void x(string s){
  //printf("%s", s);
  cout << s << endl;
}

class A{
  public:
  A(){
    b();
  }
  A(string n){
    x(n);
  }
  void b();
};

void A::b(){
  cout << "B" << endl;
}

int main(){
  A a("UTEC");
  return 0;
}
