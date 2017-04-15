#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

double mymax(double a, double b){
	return (a>b)?a:b;
}

int mymax(int a, int b, int c=INT_MIN){
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


