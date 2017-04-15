#include <iostream>
#include <cstdlib>
#include "box.h"
using namespace std;
int main(){
	ColorBox cb1;
	ColorBox cb2("black");
	ColorBox cb3(10,20,30,"red");
	cb1.print();
	cb2.print();
	cb3.print();
	cb1.set(50,50,50,"yellow");
	cb1.print();
	cb2.set("green");
	cb2.print();
}
