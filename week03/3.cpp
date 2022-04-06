#include<iostream>
using namespace std;

void foo(string nombre){
  nombre = nombre+" 2022";
  cout << "2. nombre luego del cambio usando foo: " <<nombre << endl;
}

void foo2(string &nombre){
  nombre = nombre + " paro 2022";
  cout << "4. nombre luego del cambio usando foo2: " << nombre << endl;
}

int main(){
  string name = "utec";
  cout << "1 direccion de memoria de name: " <<  &name << endl; // 01010100101010 binario
  foo(name);
  cout << "3.variable name luego ejecutar foo: "<<  name << endl;
  foo2(name);
  cout << "5.variable name luego ejecutar foo2: "<<  name << endl;
  return 0;
}
