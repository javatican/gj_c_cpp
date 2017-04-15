#include <stdio.h> 
int main(){ 
	int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int* ap;
	ap=a;
	int n=sizeof(a)/sizeof(a[0][0]);
int i;
	for(i=0;i<n;i++){
		printf("%d\n",*(ap++));
	}
	return 0;
}

