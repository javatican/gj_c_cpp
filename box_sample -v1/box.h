#include <iostream>
#include <cstdlib>
using namespace std;
class Box{
	public:
		Box();
		Box(int,int,int);
		Box(const Box&);
		~Box();
		int volume();
		void print();
		void set(int,int,int);
		bool compare(Box);
	private:
		int w,h,d;
};    
 
class ColorBox: public Box{
	public:
		void setColor(string);
	private:
		string color;
};	

