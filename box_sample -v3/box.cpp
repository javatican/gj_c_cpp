#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;
Box::Box(){
	cout<<"Box預設建構式被呼叫!"<<endl;
	set(1,1,1);
}
Box::Box(int w, int h, int d){
	cout<<"Box三個參數的建構式被呼叫!"<<endl;
	set(w,h,d);
}
Box::Box(const Box& b){
	cout<<"Box複製建構式被呼叫!"<<endl;
	set(b.w,b.h,b.d);
}
Box::~Box() {
	cout<<"Box解構式被呼叫!"<<endl;
}
int	Box::volume(){	 
	return w*h*d;
}	
void Box::print(){
	cout<<"w:"<<w
	<<",h:"<<h
	<<",d:"<<d
	<<",volume:"<<volume()<<endl;
}
void Box::set(int w, int h, int d){
	this->w=w<0?1:w;
	this->h=h<0?1:h;
	this->d=d<0?1:d;
}	

bool Box::compare(Box b){
	return this->volume()>b.volume()? true: false;
} 
		

