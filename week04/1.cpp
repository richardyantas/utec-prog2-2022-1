#include<iostream>
using namespace std;

int main(){
  int a = 6; // 000000000000000000000110  ->  32 bits  -> -2147483648 to 2147483647 -> long, long int, long long
  cout << &a << endl;

  int *p;
  cout << sizeof(p) << endl;
  
  p = &a;
  cout << p << endl;

  return 0;
}

// Hexadecimal
// 1byte = 8bits
// int 4 bytes =  32bits , 1bit (0,1)

// (cambio de base)
// 11 -> 1011(2)
// 11 -> b(16)
// 17 -> b1(16)
