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
int main(){
	Box* pb[3];
	int n=sizeof(pb)/sizeof(pb[0]);
	cout<<"-------"<<0<<"-------"<<endl;
	pb[0]=new Box(10,20,30);
	cout<<"-------"<<1<<"-------"<<endl;
	pb[1]=new ColorBox(40,50,60,"red");
	cout<<"-------"<<2<<"-------"<<endl;
	pb[2]=new FoodBox(70,80,90,"fruit");
	cout<<"----------------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"-------"<<i<<"-------"<<endl;
		pb[i]->print();
	}
	cout<<"----------------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"-------"<<i<<"-------"<<endl;
		delete pb[i];
	}
	cout<<"----------------"<<endl;	
	return 0;
}
