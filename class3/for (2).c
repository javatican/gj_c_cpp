#include <stdio.h>
#include <stdlib.h>
int main(){	
	int i=0;
	while(i<1000){	 
		i++;
		if(i==998) continue;
		printf("%d\n",i);
	}
	return 0;
}
