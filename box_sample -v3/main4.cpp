#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;
int main(){
	FoodBox fb(5,6,7,"chicken");
	ColorBox cb(1,2,3,"red");
	Box b1;
	Box * bp = &b1;
	bp->print(); 
	bp = &fb;
	bp->print(); 
	bp = &cb; 
	bp->print(); 
}
