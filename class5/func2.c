#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int, int); //原型宣告 
int main(){	
	int a,b;
	a=10;
	b=20;
	printf("交換前: a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("交換後: a=%d,b=%d\n",a,b);
	return 0;
}

void swap(int x, int y){
	printf("在swap中交換前: x=%d,y=%d\n",x,y);
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("在swap中交換後: x=%d,y=%d\n",x,y);
}
