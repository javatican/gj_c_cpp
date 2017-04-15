#include <iostream>
#include <cstdlib>
class Triangle{
public:
    Triangle();
    Triangle(int, int, int);
private:
    int id;
    int b, h;
    int area;
};

Triangle::Triangle(){
    id=0;
    b=1;
    h=1;
}

Triangle::Triangle(int id, int b, int h){
    this->id=id;
    this->b=b;
    this->h=h;
}

int main( )
{ 
    Triangle t1();
	return 0;
}
