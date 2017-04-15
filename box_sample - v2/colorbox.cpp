#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;

ColorBox::ColorBox(){
	cout<<"ColorBox 預設建構式被呼叫"<<endl; 
	color="white";
}
ColorBox::ColorBox(string color){
	this->color=color;
	cout<<"ColorBox 建構式2被呼叫"<<endl; 
}
ColorBox::ColorBox(int w,int h, int d, string color):Box(w,h,d){
	this->color=color;
	cout<<"ColorBox 建構式3被呼叫"<<endl; 
}

ColorBox::~ColorBox(){
	cout<<"ColorBox 解構式被呼叫"<<endl; 
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
