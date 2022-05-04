#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int solver(int* cards_A, int* cards_B, int A, int B){
  int max_trade = 0;
  int rep_A=0, rep_B=0;
  int R[10000]={0}; // R[0] => 0, R[1] = 0
  
  // memset(R, 0, sizeof(R));
  for(int i=0;i<10000;i++){R[i]=0;}

  for(int i=0; i<A;i++){
    for(int j=0; j<B;j++){
      if(cards_A[i] == cards_B[j]){
        R[cards_B[j]] = 1; // 1 significa los identificadores comunes  
        // R[2] = 1
        // R[3] != 1      
      }
    }
    // if(R[cards_B[i]] != 1){ 
    //   R[cards_B[i]] == 2; // 2 significa las cartas son unicas en cada una ellas
    // }
  }

  for(int i=0; i<A;i++){
    if(R[cards_A[i]] != 1){ 
      R[cards_A[i]] == 2; // 2 significa las cartas son unicas en cada una ellas
    }
  }

  for(int i=0; i<B;i++){
    if(R[cards_B[i]] != 1){ 
      R[cards_B[i]] == 2; // 2 significa las cartas son unicas en cada una ellas
    }
  }


  // A: 1 1 1 2 5 3     [1, 2]  -> R[1,2] =>  1,  R[0,9999] = 0 ,  [5,3] -> R[5,3] = 2
  // B: 1 2 7 8 9       [1, 2] -> R[1,2] => 1,  R[7,8,9] = 2

  // idx_R   [0,1,2,3,4,5,6,7,8 . .. . . . . ..  9999]
  // R :     [0,1,1,2,0,2,0,2,2.................   0]

  // 
  int nrA=0, nrB=0;
  for(int i=0; i<A; i++){
    if(R[cards_A[i]] == 2){ //  cards_A: 1 1 1 2 5 3 -> R[] = 2
      nrA++;
    }
  }
  for(int i=0; i<B; i++){
    if(R[cards_B[i]] == 2){
      nrB++;
    }
  }

  /*
    if(nrA>nrB){
      return nrB;
    }
    else{
      return nrA;
    }
  */
  return (nrA>nrB)?nrB:nrA;
}


int main(){
  int A,B; // 1<A,B<10000
  int cards_A[10000], cards_B[10000];
  
  while(1){
    cin >> A >> B;
    if(A==0 && B==0) break;
    for(int i=0; i<A; i++ ){
      cin >> cards_A[i];
    }
    for(int i=0; i<B; i++ ){
      cin >> cards_B[i];
    }
    cout << solver(cards_A, cards_B, A, B) << endl;

  }

  return 0;
}