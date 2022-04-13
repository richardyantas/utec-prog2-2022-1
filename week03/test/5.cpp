#include<iostream>
using namespace std;

string f1(string &word){
  word = "peru";
  return word;
}

int main(){
  string word = "utec";
  string res = f1(word) + "," + (word);

  cout << res << endl; // C++
  
  printf("%s, %s",f1(word), word); // C

  return 0;
}


//  peru , utec



// {}, [], (), x, /, +, - 


// utec, peru
// peru, peru  -> correct !
// peru, utec
// utec, utec