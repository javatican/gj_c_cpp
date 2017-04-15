#include <iostream>
#include <cstdlib>
#include "Point.h"
#include "Triangle.h"
using namespace std;
Triangle::Triangle(Point& p1, Point& p2, Point& p3){
    p[0]=p1;
    p[1]=p2;
    p[2]=p3;
    get3Sides();
}
float* Triangle::get3Sides(){
    side[0]=p[0].distanceTo(p[1]);
    side[1]=p[1].distanceTo(p[2]);
    side[2]=p[2].distanceTo(p[0]);
    return side;
}
void Triangle::print(){
    cout<<"p[0]:";
    p[0].print();
    cout<<"p[1]:";
    p[1].print();
    cout<<"p[2]:";
    p[2].print();
    for(int i=0; i<3; i++){
        cout<<side[i]<<endl;
    };
}
int main(){
    Point p1(10,20);
    Point p2(10,0);
    Point p3;
    Triangle t(p1,p2,p3);
    t.print();
	return 0;
}	

