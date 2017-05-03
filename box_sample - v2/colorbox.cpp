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
	cout<<"ColorBox 一個參數的建構式被呼叫"<<endl; 
}
ColorBox::ColorBox(int w,int h, int d, string color):Box(w,h,d){
	this->color=color;
	cout<<"ColorBox 四個參數的建構式被呼叫"<<endl; 
}

ColorBox::~ColorBox(){
	cout<<"ColorBox解構式被呼叫"<<endl; 
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
