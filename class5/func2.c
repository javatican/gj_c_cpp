#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int, int); // 
int main(){	
	int a,b;
	a=10;
	b=20;
	printf("ユ传玡: a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("ユ传: a=%d,b=%d\n",a,b);
	return 0;
}

void swap(int x, int y){
	printf("swapいユ传玡: x=%d,y=%d\n",x,y);
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("swapいユ传: x=%d,y=%d\n",x,y);
}
