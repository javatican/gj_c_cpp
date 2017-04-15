#include <iostream>
#include <cstdlib>
#include "product.h"
using namespace std;

Product::Product(){
	this->name= "未指定";
	this->price = 0;
	cout<<"預設建構式被呼叫"<<endl; 
}

Product::Product(int price, string name){
	this->name= name;
	this->price = price;
	cout<<"建構式2被呼叫"<<endl; 
}

Product::~Product(){
	cout<<"解構式被呼叫"<<endl; 
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
