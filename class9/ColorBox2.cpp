#include <iostream>
#include <cstdlib>
#include "Box.h"
/*
 * 加上print(), set(int,int,int) 函數
 */
using namespace std;

class ColorBox: public Box{
    public:
		void setColor(string color);
        void print();
        void set(int,int,int,string);
	private:
		string color; 
};

void ColorBox::setColor(string color){
	this->color=color;
}

void ColorBox::print(){
	Box::print();	
    cout<<"Color="<<color<<endl;
}
void ColorBox::set(int w, int h, int d, string color){
    Box::set(w,h,d);	
	this->color=color;
}

int main(){
	ColorBox c1;
	c1.set(11,22,33,"black");
    c1.setColor("black");
	c1.print();
	//
	return 0;
}