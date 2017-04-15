#include <iostream>
#include <cstdlib>
using namespace std;

class Triangle{
public:
    Triangle();
    Triangle(int, int);
    static const int SUM=180;
    static int NEXT_ID;
    void print();
private:
    int id;
    int b, h;
    int area;
};

int Triangle::NEXT_ID=1;
Triangle::Triangle(){
    id=Triangle::NEXT_ID++;
    b=1;
    h=1;
}

Triangle::Triangle(int b, int h){
    this->id=Triangle::NEXT_ID++;
    this->b=b;
    this->h=h;
}

void Triangle::print(){
    cout<<"id="<<id
        <<",b="<<b
        <<",h="<<h
        <<endl;
}

int main( )
{ 
    Triangle t1, t2;
    t1.print();
    t2.print();
	return 0;
}
