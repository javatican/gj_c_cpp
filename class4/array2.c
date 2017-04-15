#include <stdio.h>
#include <stdlib.h>
void printArray(int[], int);
int g=0;
int main(){	
	int a[10];
	int i;
	int length=sizeof a/sizeof a[0]; //10
	for(i=0; i<10; i++){
		a[i]=100+i;
		float g=10;
		printf("g=%f\n",g);
	}
	printf("g=%d\n",g);
	printArray(a,length);
	return 0;
}

void printArray(int a[],int length){
	int i;
	for(i=0; i<length; i++){
		printf("i=%d\n",a[i]);
	}
}
