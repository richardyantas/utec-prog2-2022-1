#include<iostream>
using namespace std;

class Point{
  float x,y; // 2D
  public:
  Point(){
    this->x = 0;
    this->y = 0;
  }
  Point(float x, float y){
    this->x = x;
    this->y = y;
  }
  void set_x(float new_x){
    this->x = new_x;
  }
  void set_y(float new_y){
    this->y = new_y;
  }
  float get_x(){
    return x;
  }
  float get_y(){
    return y;
  }

  void print(){
    cout << "(" << "x: " << this->x << "," << "y: " <<  this->y << ")" << endl;
  }
  
  friend ostream& operator<<(ostream& os, Point p);
};

ostream& operator<<(ostream& os, Point p){
  os << "(" << "x: " << p.get_x() << "," << "y: "<< p.get_y() << ")" << endl;
  return os;
}

class Line{
  Point a,b;
  public:
  Line(){}
  Line(Point _a, Point _b){
    this->a.set_x(_a.get_x());
    this->a.set_y(_a.get_y());
    this->b.set_x(_b.get_x());
    this->b.set_y(_b.get_y());
  }
  Point get_point(string opt){
    if(opt == "first"){
      return a;
    }else{
      return b;
    }
  } 

};

int main(){
  Point p1;
  Point p2(3,3);
  Point *p = &p1;
  float x = p->get_x();
  cout << p1 << endl;
  cout << p2 << endl;
  cout << "using print method: " << endl;
  p1.print();
  p2.print();
  cout << p1.get_x() << endl;
  cout << p1.get_y() << endl;
  cout << p2.get_x() << endl;
  cout << p2.get_y() << endl;
  Line l1(p1,p2);
  //cout << l1.get_point("first").get_x() << endl;
  cout << l1.get_point("second").get_x() << endl;

  return 0;
}