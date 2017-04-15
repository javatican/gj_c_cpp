#include <stdio.h>
#include <stdlib.h>
int main(){	
	int a[4][5]={
				{1,2,3,4,5},
				{11,12,13,14,15},
				{21,22,23,24,25},
				{31,32,33,34,35}
	};
	int i,j;
	for(i=0; i<4; i++){
		 for(j=0; j<5; j++){
		 	printf("a[%d][%d]=%d\n",i,j, a[i][j]);
		 }
	}
	return 0;
}
