#include <iostream>
#include <cstdlib>
#include "product.h"
using namespace std;

Food::Food(){
	this->flavor= "�����w";
	this->weight=0;
	cout<<"Food�w�]�غc���Q�I�s"<<endl; 
}

//Food::Food(int price, string name, int weight, string flavor): Product(price,name){
//	this->weight=weight;
//	this->flavor=flavor;
//	cout<<"Food�غc��2�Q�I�s"<<endl; 
//}

Food::Food(int price, string name, int weight, string flavor){
	setPrice(price);
	setName(name);
	this->weight=weight;
	this->flavor=flavor;
	cout<<"Food�غc��2�Q�I�s"<<endl; 
}

Food::~Food(){
	cout<<"Food�Ѻc���Q�I�s"<<endl; 
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
