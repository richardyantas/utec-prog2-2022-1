#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// struct, pair

int main(){
  vector<int> alturas = {4,5,3,6,7}; // NO, YES 
  bool isbalanced = true;
  sort(alturas.begin(), alturas.end());
  int a = *alturas.begin();
  int b = *alturas.end();
  if(a-b>1){
    cout << "is not balanced" << endl;
  }
  else{
    cout << "is balanced" << endl;
  }
  // for(int i=0; i<alturas.size(); i++){
  //   for(int j=0; j<alturas.size(); j++){
  //     if(alturas[i]-alturas[j]>=1){
  //       isbalanced = false;
  //       break;
  //     }
  //     cout << alturas[j];
  //   }      
  // }

  // vector<int>::iterator it;
  // for(it=alturas.begin();it!=alturas.end();++it){
  //   cout << *it << endl;
  // }

  return 0;
}