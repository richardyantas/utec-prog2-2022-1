#include<iostream>
#include<vector>
#include<map>

using namespace std;
struct B{
  int x,y;

};

class A{
  B *p;  // p->x, p->y
  int N;
  vector<int> a;

  public:
  //A(){}

  A(int N){
    this->N = N;
    a.assign(N,0);
    p = new B[10];
  };

  ~A(){
    a.clear();
    delete p;
  }
};

void func(){
  A a(2);
  A *p = new A(1);
  delete p;

}

int main(){


  func();
  return 0;
}