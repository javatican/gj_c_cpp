#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,total;
	i=1;
	total=0;
	while(i<=100){
		total = total+i;
		printf("total=%d\n",total);
		i++;
	}
	return 0;
}
