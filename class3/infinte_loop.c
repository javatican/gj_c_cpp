#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	a =0;
	b=10;
	while(b==10){
		a++;
		printf("a=%d\n",a);
		if(a==1000) b--;
	}
	
	return 0;
}
