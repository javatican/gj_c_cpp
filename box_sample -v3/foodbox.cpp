#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;

FoodBox::FoodBox(int w,int h, int d, string food): Box(w,h,d){
	this->food=food;
}
void FoodBox::print(){
	Box::print();
	cout<<"food:"<<food<<endl;
}

