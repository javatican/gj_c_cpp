#include <stdio.h>
#include <stdlib.h>
int main(){
	float x;
	int y;
	x=10.1;
	y=3;
	printf("x+y=%f\n",x+y);
	printf("x-y=%f\n",x-y);
	printf("x*y=%f\n",x*y);
	printf("x/y=%f\n",x/y);
	int z=10;
	printf("z%%y=%d\n",z%y); //取餘數 能用在整數相除 
	printf("z/y=%d\n",z/y);
	 
	return 0;
}
