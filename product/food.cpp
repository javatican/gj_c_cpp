#include <iostream>
#include <cstdlib>
#include "product.h"
using namespace std;

Food::Food(){
	this->flavor= "未指定";
	this->weight=0;
	cout<<"Food預設建構式被呼叫"<<endl; 
}

//Food::Food(int price, string name, int weight, string flavor): Product(price,name){
//	this->weight=weight;
//	this->flavor=flavor;
//	cout<<"Food建構式2被呼叫"<<endl; 
//}

Food::Food(int price, string name, int weight, string flavor){
	setPrice(price);
	setName(name);
	this->weight=weight;
	this->flavor=flavor;
	cout<<"Food建構式2被呼叫"<<endl; 
}

Food::~Food(){
	cout<<"Food解構式被呼叫"<<endl; 
}
void Food::setFlavor(string flavor){
	this->flavor=flavor;
}

string Food::getFlavor(){
	return flavor;
}

void Food::setWeight(int weight){
	this->weight=weight;
}

int Food::getWeight(){
	return weight;
}

void Food::print(){
	Product::print();
	cout<<"flavor="<<flavor<<",weight="<<weight<<endl;
}
