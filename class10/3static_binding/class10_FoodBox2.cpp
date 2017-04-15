#include <iostream>
#include <cstdlib>
#include "Box2.h"
using namespace std;

FoodBox::FoodBox(){ 
    cout<<"FoodBox Constructor 1 is called"<<endl;
}

FoodBox::FoodBox(string food) { 
    this->food=food;
    cout<<"FoodBox Constructor 2 is called"<<endl;
}

FoodBox::FoodBox(int w, int h, int d, string food): Box(w,h,d) { 
    this->food=food;
    cout<<"FoodBox Constructor 3 is called"<<endl;
}

FoodBox::~FoodBox(){ 
    cout<<"FoodBox Destructor is called"<<endl;
}  

void FoodBox::print(){
    cout<<"FoodBox print() is called."<<endl;
	Box :: print();	
    cout<<"Food="<<food<<endl;
}

void FoodBox::set(string food){
	this->food=food;
}

void FoodBox::set(int w, int h, int d, string food){
    Box :: set(w,h,d);	
	this->food=food;
}