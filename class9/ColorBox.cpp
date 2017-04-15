#include <iostream>
#include <cstdlib>
#include "Box.h"
using namespace std;

class ColorBox: public Box{
    public:
		void setColor(string color);
	private:
		string color; 
};

void ColorBox::setColor(string color){
	this->color=color;
}

int main(){
	ColorBox c1;
	c1.set(11,22,33);
    c1.setColor("black");
	c1.print();
	//
	return 0;
}