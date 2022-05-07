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
  // completarr
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
    cout << esta_dentro(cuadrado, punto) << endl;
  }
  return 0;
}