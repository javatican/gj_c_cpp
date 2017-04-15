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


bool operator>(const Box& b1, const Box& b2) {
    return b1.volume()> b2.volume();
}

bool operator>(const Box& b1, int x) {
    return b1.volume()> x;
}
      
bool operator>(int x, const Box& b1) {
    return x>b1.volume();
}  
int main(){
    Box b1(1,2,3), b2(4,5,6);
    if(b1>b2){
        cout<<"b1 is bigger!"<<endl;
    } else{
        cout<<"b1 is not bigger!"<<endl;
    }
    if(b1>100){
        cout<<"b1 is bigger than 100!"<<endl;
    } else{
        cout<<"b1 is not bigger than 100!"<<endl;
    }
    if( 100>b1){
        cout<<"100 is bigger than b1!"<<endl;
    } else{
        cout<<"100 is not bigger than b1!"<<endl;
    }
	return 0;
}
