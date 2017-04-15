#include <iostream>
#include <cstdlib>
#include "Box.h"
/*
 * 加上建構氏及解構式
 */
using namespace std;

class ColorBox: public Box{
public:
        ColorBox();
        ColorBox(string);
        ColorBox(int,int,int,string);
        ~ColorBox();
		void setColor(string color);
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

void ColorBox::setColor(string color){
	this->color=color;
}

void ColorBox::print(){
	Box :: print();	
    cout<<"Color="<<color<<endl;
}
void ColorBox::set(int w, int h, int d, string color){
    Box :: set(w,h,d);	
	this->color=color;
}

int main(){
	ColorBox c1;
	c1.set(11,22,33,"black");
    c1.setColor("black");
	c1.print();
	//
    ColorBox c2("red");
    c2.print();
    ColorBox c3(10,30,50,"green");
    c3.print();
	return 0;
}