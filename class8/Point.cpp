#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Point.h";
using namespace std;

Point::Point(int x, int y){
        cout<<"Point Constructor 2 is called."<<endl;
        this->x=x;
        this->y=y;
    }
Point::Point(){
        cout<<"Point Constructor 1 is called."<<endl;
        x=y=0;
    }
void Point::moveTo(int x, int y){
    this->x=x;
    this->y=y;
}
void Point::print(){
    cout<<"x="<<x<<",y="<<y<<endl;
}

int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}
float Point::distanceTo(Point& p1){
    float d1=this->getX()-p1.getX();
    float d2=this->getY()-p1.getY();
    return sqrt(d1*d1+d2*d2);
}
//
//int main(){
//    Point p1;
//    p1.moveTo(200,200);
//    p1.print();
//    Point p2(10,20);
//    p2.print();
//	return 0;
//}	
// 

