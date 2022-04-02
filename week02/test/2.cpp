#include<iostream>
using namespace std;

int main(){
  char c = 'w';
  
  string s = "utec"; // 0,1,2,3

  if(s.size()==4){
    cout << "A";
  }
  if(s[2]=='t'){
    cout << "B";
  }
  else{
    cout << "C";
  }
  cout << endl;
  return 0;
}

// AC

// AC  <-
// Error
// Nada
// AB
// BC