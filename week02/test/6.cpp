
#include<iostream>
using namespace std;

int main(){
  char letra='A';
  int opt = 2;
  switch(opt--) // 1
  {
    case 1:
      if(letra!='B')cout << "A"; break;
    case 2:
      cout << "B"; break;
    default:
      cout << "C"; break;
  }
  return 0;
}

// A 
// B <-
// C
// D
