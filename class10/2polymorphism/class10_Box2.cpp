#include <iostream>
#include <cstdlib>
#include "Box2.h"
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


int Box::volume(){
    return w*h*d;
}

void Box::print(){
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

//AAA has no inheritance relationship with Box or ColorBox
class AAA{ 
};

int main(){ 
    Box b1(10,20,30);
    ColorBox b2(1,2,3,"red");
    Box* p1=&b1;
    ColorBox* p2 = &b2;
    p1=&b2;
    //p2=&b1; //invalid
    //p1=new AAA(); //invalid

    return 0;
}
