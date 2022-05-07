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

NO
YES
NO
YES
NO

*/