#include <iostream>
#include <cstdlib>
#include "product.h"
using namespace std;

Product::Product(){
	this->name= "�����w";
	this->price = 0;
	cout<<"�w�]�غc���Q�I�s"<<endl; 
}

Product::Product(int price, string name){
	this->name= name;
	this->price = price;
	cout<<"�غc��2�Q�I�s"<<endl; 
}

Product::~Product(){
	cout<<"�Ѻc���Q�I�s"<<endl; 
} 

int Product::getPrice(){
	return price;
}

void Product::setPrice(int price){
	this->price=price;
}

string Product::getName(){
	return name;
}

void Product::setName(string name){
	this->name=name;
}

void Product::print(){
	cout<<"name="<<name<<",price="<<price<<endl;
}
