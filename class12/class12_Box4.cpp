#include <iostream>
#include <cstdlib>
#include "Box4.h"
/* 
 * 
*/
using namespace std;
Box::Box(){
    cout<<"Box Constructor 1 is called."<<endl;
    w=h=d=1;
}

Box::Box(int w, int h, int d){
    cout<<"Box Constructor 2 is called."<<endl;
    set(w,h,d);
}

Box::Box(const Box& b){
    cout<<"Box Copy Constructor is called."<<endl;
    set(b.w,b.h,b.d);
}

Box::~Box(){
	cout<<"Destructor is called"<<endl;
}


int Box::volume() const{
    return w*h*d;
}

void Box::print(){
    cout<<"Box print() is called."<<endl;
    cout<<" W="<<w
		<<",H="<<h
		<<",D="<<d
		<<",Volume="<<volume()
        <<endl; 
}

void Box::set(int w, int h, int d){
    this->w=w<=0?1:w;
    this->h=h<=0?1:h;
    this->d=d<=0?1:d;;
}

bool Box::compare(Box b2){
    return this->volume()>b2.volume();
}


bool Box::operator>(const Box& b) const{
    return this->volume()> b.volume();
}

bool Box::operator>(int x) const{
    return this->volume()> x;
}
    
Box Box::operator+(const Box& b) const{
    Box r;
    r.w=(this->w > b.w)? this->w : b.w;
    r.h=(this->h > b.h)? this->h : b.h;
    r.d=this->d + b.d;
    return r;
}

void Box::operator=(int x){
    set(x,x,x);
}
int main(){
    Box b1(1,2,3);
    b1.print();
    b1=100;
    b1.print(); 
	return 0;
}
