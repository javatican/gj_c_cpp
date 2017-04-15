#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	a=0;
	b=1;
	int temp;
	while(b<10000){
		temp=b;
		b=a+b;
		a=temp;
		printf("b=%d\n",b);
		printf("a/b=%.10f\n",(float)a/b);
	}
	return 0;
}
