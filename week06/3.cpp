#include <bits/stdc++.h>
using namespace std;
using std::this_thread::sleep_for;
constexpr int TIME_TO_SLEEP = 10;

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
  // int k = 0;
  
  // // init values;
  // int H=50, W=50;
  // char mapa[H][W];
  // // char worm[];
  // for(int i=0; i<H; i++){
  //   for(int j=0; j<W; j++){
  //     mapa[i][j] = '_';
  //   }
  // }
  // mapa[10][10] = '*';
  // int x=0,y=10;
  // int it = 0;
  char b[100];  
  printf("\x1b[2J");
  for (;;) {
    memset(b, 32, 100);
    for(int i=0; i < 100; i++){    
      b[i] = (i%10==0)?'\n':'*';    
    }    
    printf("\x1b[H");
    for(int i=0;i < 100;i++){
      // cout << b[i];
      putchar(i%10?b[i]:10);
    }
    // sleep_for(std::chrono::milliseconds(TIME_TO_SLEEP));

  }

  return 0;
}

// https://www.delftstack.com/es/howto/cpp/how-to-use-sleep-program-function-in-cpp/
// what is line feed character
