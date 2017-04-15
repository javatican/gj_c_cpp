#include <stdio.h>
#include <stdlib.h>
int main(){	
	int a[10];
	printf("sizeof a=%d\n",sizeof a);
	printf("sizeof a[1]=%d\n",sizeof a[1]);	
	int length=sizeof a / sizeof a[0];
	printf("length=%d\n",length);
//	int i;
//	for(i=0; i<10; i++){
//		a[i]=100+i;
//	}
//	
//	for(i=0; i<10; i++){
//		printf("i=%d\n",a[i]);
//	}
	return 0;
}
