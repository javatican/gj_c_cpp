#include <iostream>
#include <cstdlib>
#include "point.h"

Triangle::Triangle(){
	cout<<"Triangle default constructor is called"<<endl;
	p[0]=Point(1,2);
	p[1]=Point(4,5);
	p[2]=Point(0,0);
}
Triangle::Triangle(Point& p1,Point& p2, Point& p3){
	cout<<"Triangle constructor 2 is called"<<endl;
	p[0] = p1;
	p[1] = p2;
	p[2] = p3;
	getSides();
}
Triangle::~Triangle(){
	cout<<"Triangle destructor is called"<<endl;
}
float* Triangle::getSides(){
	side[0]=p[0].distanceTo(p[1]);
	side[1]=p[1].distanceTo(p[2]);
	side[2]=p[2].distanceTo(p[0]);
}
void Triangle::print(){
	p[0].print();
	p[1].print();
	p[2].print();
	cout<<"三個邊長為:"<<side[0]<<","<<side[1] <<","<<side[2]<<endl;
}
