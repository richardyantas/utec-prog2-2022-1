/*
  Formato de entrega p1.cpp en un zip llamado p1 subir a canvas
*/
#include<iostream>
#include<vector>
using namespace std;

struct point{
  int x,y;
};

bool esta_dentro(vector<point> cuadrado, point punto){
  int xmax = max(max(max(cuadrado[0].x, cuadrado[1].x),cuadrado[2].x),cuadrado[3].x);
  int xmin = min(min(min(cuadrado[0].x, cuadrado[1].x),cuadrado[2].x),cuadrado[3].x);
  int ymax = max(max(max(cuadrado[0].y, cuadrado[1].y),cuadrado[2].y),cuadrado[3].y);
  int ymin = min(min(min(cuadrado[0].y, cuadrado[1].y),cuadrado[2].y),cuadrado[3].y);
  if( xmin >= punto.x || punto.x >= xmax  ){ return false;}
  if( ymin >= punto.y || punto.y >= ymax  ){ return false;}
  return true;
};

int main(){
  int numero_ejemplos = 5;
  cin >> numero_ejemplos;
  while(numero_ejemplos--){
    vector<point> cuadrado(4);
    point punto;
    for(int i=0;i<4;i++){
      cin >> cuadrado[i].x >> cuadrado[i].y;
    }
    cin >> punto.x >> punto.y;
    cout << (esta_dentro(cuadrado, punto)?"YES":"NO") << endl; // print YES or NO
  }
  return 0;
}

/*
Input:

5
0 5
0 10
5 5 
5 10
-1 1
-2 2
2 2
2 -2
-2 2
0 0
-2 2
2 2
2 -2
-2 2
2 2
-2 2
2 2
2 -2
-2 2
1 1
2 0
2 4
-2 4
-2 0
-3 3

Output:

NO
YES
NO
YES
NO

*/