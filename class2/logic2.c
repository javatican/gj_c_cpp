#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	a=10; //true
	b=20; //true
	c=0; //false
	int d;
	d = b && a++;
	printf("d=%d\n",d);
	printf("a=%d\n",a);
	return 0;
}
