#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	int y;
	x=10;
	y=20;
	printf("x>y=%d\n",x>y); //�u: 1, ��:0 
	printf("x<y=%d\n",x<y); //�u: 1, ��:0 
	printf("x>=y=%d\n",x>=y-10); //�u: 1, ��:0 
	printf("x<=y=%d\n",x<=y-10); //�u: 1, ��:0 
	printf("x==y =%d\n",x==y);
	printf("x!=y =%d\n",x!=y);
	return 0;
}
