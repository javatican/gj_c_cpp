#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	a=10; //true
	b=20; //true
	c=0; //false
	int d;
	d  = !a;
	printf("d=%d\n",d);
	d  = !c;
	printf("d=%d\n",d);
	return 0;
}
