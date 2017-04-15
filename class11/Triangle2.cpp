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
    float getArea() const;
    bool compare(const Triangle&);
private:
    int id;
    int b, h;
    float area;
};

int Triangle::NEXT_ID=1;
Triangle::Triangle(){
    id=Triangle::NEXT_ID++;
    b=1;
    h=1;
    area=b*h/2.0;
}

Triangle::Triangle(int b, int h){
    this->id=Triangle::NEXT_ID++;
    this->b=b;
    this->h=h;
    this->area=b*h/2.0;
}

void Triangle::print(){
    cout<<"id="<<id
        <<",b="<<b
        <<",h="<<h
        <<",area="<<area
        <<endl;
}
float Triangle::getArea() const{
    return area;
}
bool Triangle::compare(const Triangle& t){
    return this->getArea()>t.getArea(); 
}
int main( )
{ 
    Triangle t1, t2(2,3);
    t1.print();
    t2.print();
    if(t1.compare(t2)){
        cout<<"t1 is bigger!"<<endl;
    } else{
        cout<<"t1 is not bigger!"<<endl;
    }
	return 0;
}