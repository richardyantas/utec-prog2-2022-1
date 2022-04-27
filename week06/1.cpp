#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[100]; // 0-99 // 4*100 = 400 bytes

  int* p = new int[100]; // 4bytes*100 = 400bytes

  p[0] = 4;
  p[1] = 5;
  p[2] = 6;
  delete p; // 0bytes
  p = new int[50]; // 4*50 = 200 bytes
  int acum = 0;
  for(int i=0;i<55;i++){
    // acum += 4;
    acum += sizeof(*(p+i)); // verificar porque el elemento 51 tiene reservado memoria?
  }
  cout <<  acum << endl;

  return 0;
}