#include<iostream>
using namespace std;

int* foo(int *p, int N){
  // print a values
  for(int i=0;i<N;i++){
    //cout << *(p+i) << endl;
    cout << p[i] << endl;
  }
  return p;
}

int main(){
  int a[3]={3,4,1};
  foo(a,3);
  return 0;
} 