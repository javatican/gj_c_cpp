#include <iostream>
#include <cstdlib>
#include "Box.h"
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
int main(){ 
    Box b1(1,2,3);
    Box b2=Box(4,5,6);
    Box* bp=new Box(7,8,9);

    Box barr[3]={Box(11,22,33), Box(44,55,66),Box(77,88,99)};
    Box* ap[3]={new Box(), new Box() , new Box()};

    Box* ap2[3]={&b1,bp,&barr[2]};
    delete ap2[1];
    //delete bp;  //error: double free
    delete ap[0];
    delete ap[1];
    delete ap[2];
    return 0;
}	
