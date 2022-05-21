#include<iostream>
#include<cstring>
using namespace std;

class A{
  public:
  A(){};
  string name(){
    return "peru";
  }
};

void foo(A la[]){
  int n = sizeof(la)/sizeof(la[0]);
  cout << "n: " << n << endl;
  for(int i=0;i<n;i++){
    cout << la[i].name() << endl;
  }
}

int main(){
  A la[]={A(),A()};
  A *p = &la[0];
  cout << p->name() << endl;  
  cout << "**" << endl;
  foo(la);

  return 0;
}