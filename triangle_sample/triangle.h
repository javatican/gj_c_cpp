#include <iostream>
#include <cstdlib>
#include "point.h"
using namespace std;
class Triangle{
	public:
		Triangle();
		Triangle(Point&,Point&, Point&);
		~Triangle();
		float* getSides(); 
		void print();
	private:
		Point p[3];
		float side[3];
};
	
