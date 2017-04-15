#include <iostream>
#include <cstdlib>
using namespace std;

int mymax(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}	
}

double mymax(double a, double b){
	return (a>b)?a:b;
}

int mymax(int a, int b, int c){
	int t;
	t=(a>b)?a:b;
	t=(t>c)?t:c;
	return t;
}
int main(){
	int v1, v2, v3;
	double v4, v5;
	v1=20;
	v2=30;
	v3=40;
	v4=50.88;
	v5=60.88;
	cout<<"v1:"<<v1<<",v2:"<<v2<<" ,max:"<<mymax(v1,v2)<<endl;
	cout<<"v4:"<<v4<<",v5:"<<v5<<" ,max:"<<mymax(v4,v5)<<endl;
    cout<<"v1:"<<v1<<",v2:"<<v2<<",v3:"<<v3<<",max:"<<mymax(v1,v2,v3)<<endl;
	return 0;
}	


