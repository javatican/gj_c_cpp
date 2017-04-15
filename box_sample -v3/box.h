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
		ColorBox();
		ColorBox(string);
		ColorBox(int,int,int,string);
		~ColorBox();
		void set(string);
		void print();
		void set(int,int,int,string);
	private:
		string color;
};	

class FoodBox: public Box{
	public:
		FoodBox(int,int,int, string);
		void print();
	private:
		string food;
};
