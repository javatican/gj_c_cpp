#include <stdio.h>
#include <stdlib.h>
int main(){	
	int i,total;
	total=0;
	for (i=1; i<=100; i++){
		total = total+i;
		printf("total=%d\n",total);
	}
//	i=1;
//	
//	while(i<=100){
//		total = total+i;
//		printf("total=%d\n",total);
//		i++;
//	}
	return 0;
}
