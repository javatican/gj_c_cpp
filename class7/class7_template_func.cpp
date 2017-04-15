#include <iostream>
#include <cstdlib>
using namespace std;

template<class T> T mymax(T a, T b){
	return (a>b)?a:b;
}

int main(){
	int v1, v2;
	double v4, v5;
	v1=20;
	v2=30;
	v4=50.88;
	v5=60.88;
	cout<<"v1:"<<v1<<",v2:"<<v2<<" ,max:"<<mymax(v1,v2)<<endl;
	cout<<"v4:"<<v4<<",v5:"<<v5<<" ,max:"<<mymax(v4,v5)<<endl;
	//
	string s1, s2;
	s1="John";
	s2="Tom";
	cout<<"max:"<<mymax(s1,s2)<<endl;
	return 0;
}	

