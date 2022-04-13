#include<iostream>
using namespace std;

int f1(int num){
  if(num == 0) return 0;
  return f1(num-1);
}

int main(){
  int n = 10000;
  cout << f1(n) << endl; 
  return 0;
}

// 0  -> correct
// 1000
// 1
// error