#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;
Box::Box(){
	cout<<"Box�w�]�غc���Q�I�s!"<<endl;
	set(1,1,1);
}
Box::Box(int w, int h, int d){
	cout<<"Box�T�ӰѼƪ��غc���Q�I�s!"<<endl;
	set(w,h,d);
}
Box::Box(const Box& b){
	cout<<"Box�ƻs�غc���Q�I�s!"<<endl;
	set(b.w,b.h,b.d);
}
Box::~Box() {
	cout<<"Box�Ѻc���Q�I�s!"<<endl;
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
		

