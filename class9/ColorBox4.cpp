#include <iostream>
#include <cstdlib>
#include "Box.h"
/*
 * 將setColor(string)改名為set(string)
 * 增加過載的set(int,int,int,string)函數
 */
using namespace std;

class ColorBox: public Box{
public:
        ColorBox();
        ColorBox(string);
        ColorBox(int,int,int,string);
        ~ColorBox();
		void set(string color);
        void print();
        void set(int,int,int,string);
	private:
		string color; 
};

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

int main(){
	ColorBox c1;
	c1.set(11,22,33,"black");
    c1.set("red");
	c1.print();
	return 0;
}