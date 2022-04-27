#include <bits/stdc++.h>
using namespace std;

int main(){
  printf("\x1b[2J");
  // init values;
  int H=50, W=50;
  char mapa[H][W];
  // char worm[];
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      mapa[i][j] = ' ';
    }
  }
  mapa[10][10] = '*';
  int x=0,y=10;
  int it = 0;
  for (;;) {
    // update values
    it += 1;
    x += (it%10000 == 0? 1: 0);

    mapa[x][y] = '*';
    printf("\x1b[H"); // clean the screen

    // render values
    for(int i=0; i<H; i++){
      for(int j=0; j<W; j++){
        cout << mapa[i][j];
      }
    }

  }

  return 0;
}