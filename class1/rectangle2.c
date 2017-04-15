#include <stdio.h>
#include <stdlib.h>
int main() {
	//定義變數 
	int h;
	int w;
	//h=100;
	//w=200;
	printf("h?");
	scanf("%d",&h);
	printf("w?");
	scanf("%d",&w);
	int area;
	int c;
	area = h*w;
	c=(w+h)*2;
	printf("h=%d,w=%d, area=%d, c=%d\n",h,w,area,c);
	return 0;
}
