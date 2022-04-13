#include<iostream>
using namespace std;

int main(){
  int a = 1000, b=2000, c=0;
  int *p, **q;
  p=&a;
  q=&p;
  cout << "Direccion de q:" << &q << endl;
  cout << "Direccion de p: " <<  q << endl;
  cout << "Valor de p (direccion de a): " << *q << endl;
  cout << "Valor de a: " << **q << endl;
  return 0;
}

/*
  a) direccion de p -> 9
  b) valor de p -> 3
*/
