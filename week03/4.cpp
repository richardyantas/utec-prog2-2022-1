#include <iostream>
using namespace std;

// 0  -> 1
// 1  -> 1
// 2  -> 1*2
// 3  -> 1*2*3

void factorial(int num, int &res){  
  res = 1;
  for(int i=1; i<=num;i++){
    res = res*i; // num = 2 -> res = 1*2, num=3 -> res=1*2*3
  }
}

// n! = n*(n-1)!
int factorial2(int num){
  if(num==1) return 1;
  return num*factorial2(num-1);  // f(4)=4*f(3) -> f(3)=3*f(2) -> f(2)=2*f(1) -> f(1) = 1 
}

int main(){
  int n = 5, r;
  factorial(n, r);
  cout << "El resultado del factorial de " << n << " es:" << r << endl;
  return 0;
}