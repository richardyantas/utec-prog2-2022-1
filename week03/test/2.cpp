#include<iostream>
using namespace std;

int f1(int num){  
  return num+1;
}

int f2(int num){
  return num+2;
}

int main(){
  int n = 1;  
  cout << f1(f2(n)) << endl; 
  return 0;
}

// 4  -> correct
// 1
// 2
// 3 