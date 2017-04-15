#include <iostream>
#include <cstdlib>
#include "product.h"
using namespace std;

int main(){
	Product * pp;
	Product p1;
	Food f1;
	pp = &p1;
	pp->print();
	pp = &f1;
	pp->print();
	
}
