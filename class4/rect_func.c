#include <stdio.h>
#include <stdlib.h>
int calcArea(int,int);
int main(){	
	int w,h;
	w=10;
	h=20;
	int area;
	//area=w*h;
	area=calcArea(w,h);
	printf("w=%d,h=%d,area=%d\n",w,h,area);
	return 0;
}

int	calcArea(int x, int y){
	x++;
	printf("x=%d\n",x);
	return x*y;		
}
