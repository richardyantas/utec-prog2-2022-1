#include<iostream>
using namespace std;

int f1(int num){
  if(num == 0) return 0; // -> caso base
  return f1(num-1)+1; // f1(1) = f1(0) + 1 = 1
}

// f1(2) = f1(2-1)+1 = f1(1)+1  = (f1(1-1)+1) + 1 = (f1(0)+1)+1 = 2
// f1(3) = . .. ..   = 

int main(){
  int n = 1;
  cout << f1(n) << endl; 
  return 0;
}

// 0
// 1   -> correct!
// -1
// error