#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,total;
	i=1;
	total=0;
	do{
		total = total+i;
		printf("total=%d\n",total);
		i++;
	} while(i<=100);
	return 0;
}
