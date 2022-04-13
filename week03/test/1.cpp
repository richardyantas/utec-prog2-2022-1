
#include<iostream>
using namespace std;

void f1(int &num){
  num = 5;
}

int main(){
  int n = 1;
  f1(n);
  cout << n << endl; 
  return 0;
}

// 1
// 0
// error
// 5  --> correct