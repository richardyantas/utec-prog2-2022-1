#include<iostream>
#include<vector>
using namespace std;

// indices: 0 1 2 3 4 5 6 7 .....
// valores: 1 1 2 3 5 8 13 21 .... 

long long fibo(int index);

int N=1000;
vector<long long> f(N,0); // f = {0,0,0,0,0,0,0,0,0....};

int main(){  
  int index;  
  f.assign(N,0);
  cin >> index;
  long long value = fibo(index);
  cout << value << endl;
  f.clear();
  return 0;
}

long long fibo(int index){
  if(f[index] != 0) return f[index];
  if(index == 0)return 1;
  if(index == 1)return 1;
  return f[index] = fibo(index-1)+fibo(index-2);
}


// 0,1,2,3,5,6,7,8,9,10,11,12,13,14...
//               * * 10

