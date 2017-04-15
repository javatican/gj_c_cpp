#include <iostream>
#include <cstdlib>
#include <cmath>
#include "point.h"

using namespace std;

Point::Point(){
	cout<<"Point Default constructor is called"<<endl;
	x=0;
	y=0;
}
Point::Point(int x,int y){
	cout<<"Point Constructor 2 is called"<<endl;
	this->x=x;
	this->y=y;
}
Point::Point(const Point& p){
	cout<<"Point Copy constructor is called"<<endl;
	this->x=p.x;
	this->y=p.y;
}
Point::~Point(){
	cout<<"Point Destructor is called"<<endl;
}
int Point::getX(){
	return x;
}
int Point::getY(){
	return y;
}
void Point::moveTo(int x,int y){
	this->x=x;
	this->y=y;
}
float Point::distanceTo(Point p){
	return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}
void Point::print(){
	cout<<"x="<<x
		<<",y="<<y<<endl;
}
