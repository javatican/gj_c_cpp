#include <iostream>
#include <cstdlib>
using namespace std;
 
class Box{
public:
    
    int volume();
    void print();
    void set(int, int, int);
    bool compare(Box);
    
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

void Box::set(int w, int h, int d){
    this->w=w<=0?1:w;
    this->h=h<=0?1:h;
    this->d=d<=0?1:d;;
}

bool Box::compare(Box b2){
    return this->volume()>b2.volume();
}
int main(){ 
    Box b1,b2;
    b1.set(20,20,30);
    b1.print();
    b2.set(-1,0,10);
    b2.print();
    if (b1.compare(b2)){
        cout<<"b1 is larger"<<endl;
    } else{
        cout<<"b2 is larger"<<endl;
    }
	return 0;
}	

