#include <iostream>
#include <cstdlib>
using namespace std;
 
class Box{
public:
    
    int volume();
    void print();
    void set(int, int, int);
    
private:
    int w,h,d;
};

int Box::volume(){
    return w*h*d;
}

void Box::print(){
    cout<<" W="<<w
		<<",H="<<h
		<<",D="<<d
		<<",Volume="<<volume()<<endl; 
}

void Box::set(int ww, int hh, int dd){
    w=ww<=0?1:ww;
    h=hh<=0?1:hh;
    d=dd<=0?1:dd;;
}

int main(){ 
    Box b1,b2;
    b1.set(10,20,30);
    b1.print();
    b2.set(-1,0,10);d
    b2.print();
	return 0;
}	

