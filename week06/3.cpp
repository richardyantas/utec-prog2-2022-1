#include <bits/stdc++.h>
using namespace std;

struct Point{
  int x,y;
  Point(int x,int y){
    this->x = x;
    this->y = y;
  }
};

// vector<Point> Worm;
Point* Worm;

int main(){
  int k = 0;
  char  b[1760];

  printf("\x1b[2J");
  // init values;
  int H=50, W=50;
  char mapa[H][W];
  // char worm[];
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      mapa[i][j] = '_';
    }
  }
  mapa[10][10] = '*';
  int x=0,y=10;
  int it = 0;
  for (;;) {
    memset(b, 32, 1760);
    // update values
    it += 1;
    x += (it%10000 == 0? 1: 0);
    
    // mapa[x][y] = '*';
    printf("\x1b[H"); // clean the screen
    // render values

    for (k = 0; 1761 > k; k++) {
      putchar(k % 80 ? b[k] : 10);
    }

    // for(int i=0; i<H; i++){
    //   for(int j=0; j<W; j++){
    //     cout << mapa[i][j];
    //     putchar('\n');
    //   }
      
    // }
  }

  return 0;
}