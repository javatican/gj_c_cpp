#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;

ColorBox::ColorBox(){
	cout<<"ColorBox �w�]�غc���Q�I�s"<<endl; 
	color="white";
}
ColorBox::ColorBox(string color){
	this->color=color;
	cout<<"ColorBox �غc��2�Q�I�s"<<endl; 
}
ColorBox::ColorBox(int w,int h, int d, string color):Box(w,h,d){
	this->color=color;
	cout<<"ColorBox �غc��3�Q�I�s"<<endl; 
}

ColorBox::~ColorBox(){
	cout<<"ColorBox �Ѻc���Q�I�s"<<endl; 
} 
void ColorBox::set(string color){
	this->color=color;
}

void ColorBox::print(){
	Box::print();
	cout<<"color:"<<color<<endl;
}

void ColorBox::set(int w, int h, int d, string color){
	Box::set(w,h,d);
	this->color=color;
}
