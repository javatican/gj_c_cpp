#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int, int); //�쫬�ŧi 
int main(){	
	int a,b;
	a=10;
	b=20;
	printf("�洫�e: a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("�洫��: a=%d,b=%d\n",a,b);
	return 0;
}

void swap(int x, int y){
	printf("�bswap���洫�e: x=%d,y=%d\n",x,y);
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("�bswap���洫��: x=%d,y=%d\n",x,y);
}
