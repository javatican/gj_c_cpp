#include <iostream>
#include <cstdlib>
using namespace std;
class Point{
	public:
		Point();
		Point(int,int);
		Point(const Point&);
		~Point();
		int getX();
		int getY();
		void moveTo(int,int);
		float distanceTo(Point);
		void print();
	private:
		int x,y;
};
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
