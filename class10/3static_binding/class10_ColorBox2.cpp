#include <iostream>
#include <cstdlib>
#include "Box2.h"
/*
 *  
 */
using namespace std;

ColorBox::ColorBox(){ 
    cout<<"ColorBox Constructor 1 is called"<<endl;
}

ColorBox::ColorBox(string color) { 
    this->color=color;
    cout<<"ColorBox Constructor 2 is called"<<endl;
}

ColorBox::ColorBox(int w, int h, int d, string color): Box(w,h,d) { 
    this->color=color;
    cout<<"ColorBox Constructor 3 is called"<<endl;
}

ColorBox::~ColorBox(){ 
    cout<<"ColorBox Destructor is called"<<endl;
}  

void ColorBox::print(){
	Box :: print();	
    cout<<"Color="<<color<<endl;
}

void ColorBox::set(string color){
	this->color=color;
}

void ColorBox::set(int w, int h, int d, string color){
    Box :: set(w,h,d);	
	this->color=color;
}
