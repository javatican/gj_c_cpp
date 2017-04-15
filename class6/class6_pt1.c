#include <stdio.h>
int main(){
	int a;
int* pa;
	a=10;
	pa=&a;
	printf("a=%d,*pa=%d\n",a,*pa);
	a++;
	printf("a=%d,*pa=%d\n",a,*pa); 
// ++ and *  associate from right to left
	(*pa)++;
	printf("a=%d,*pa=%d\n",a,*pa);  
// use %p format string  to print pointers
	printf("&a=%p,pa=%p, &pa=%p\n",&a,pa, &pa);
	printf("++pa=%p\n",++pa);
	printf("size of *pa = %lu\n",sizeof(*pa));
	printf("size of pa = %lu\n",sizeof(pa));
	return 0;
}

