#include<iostream>
#include<vector>
using namespace std;

void foo(int &a){
  a = 4;
}


int main(){
  int a = 6;
  int &b = a;
  
  b = 7;

  foo(b);

  cout << b << endl;
  return 0;
}