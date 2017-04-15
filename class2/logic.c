#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	a=10; //true
	b=20; //true
	c=0; //false
	printf("a && b = %d\n",a && b);
	printf("a || b = %d\n",a || b);
	printf("a && c = %d\n",a && c);
	return 0;
}
