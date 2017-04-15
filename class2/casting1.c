#include <stdio.h>
#include <stdlib.h>
int main(){
	char a;
	short b;
	a='A';
	b=10;
	printf("sizeof(a)=%d\n",sizeof (a));
	printf("sizeof(b)=%d\n",sizeof (b));
	printf("sizeof(a-b)=%d\n",sizeof (a-b));
	return 0;
}
