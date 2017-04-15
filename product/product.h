#include <iostream>
#include <cstdlib>
using namespace std;
class Product{
	private:
		int price;
		string name;
	public:
		Product();
		Product(int, string);
		~Product();
		void setPrice(int);
		int getPrice();
		void setName(string);
		string getName();
		virtual void print();	
};

class Food : public Product{
	private:
		int weight;
		string flavor;
	public:
		Food();
		Food(int, string, int , string);
		~Food();
		void setWeight(int);
		int getWeight();
		void setFlavor(string);
		string getFlavor();
		void print();
}; 
