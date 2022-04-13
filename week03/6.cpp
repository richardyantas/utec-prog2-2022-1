#include<iostream>
using namespace std;

int f1(int &num){
  num = 1;
  return num;
}

int main(){
  int num=0;
  // string res = f1(word) + "," + (word);
  // cout << res << endl;

  printf("%d, %d\n", f1(num), num);
  
  return 0;
}
