#include<iostream>
using namespace std;
// tablas hash
int main(){
  srand(time(nullptr));
  int M[2][2];

  M[0][0] = 1;
  M[0][1] = 0;
  M[1][0] = 2;
  M[1][1] = 7;

  int T[2][2][2][2][2]; // tensores

  int H = 10;
  int W = 10;
  int image[H][W];

  for(int i=0;i<H; i++){
    for(int j=0;j<W;j++){
      image[i][j] = rand()%256; // [0-1], [0,256]      
      // image[i][j] = (rand()%256, rand()%256, rand()%256);
    }
  }

  for(int i=0;i<H; i++){
    for(int j=0;j<W;j++){
      cout << image[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}