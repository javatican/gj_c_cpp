#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
	printf("&p=%p\n",&p);
	p=(int*)malloc(sizeof(int));
	printf("p=%p, &p=%p,*p=%d\n",p,&p,*p);
	*p=10;
	printf("p=%p, &p=%p,*p=%d\n",p,&p,*p);
	(*p)++;
	printf("p=%p, &p=%p,*p=%d\n",p,&p,*p);
	free(p);
	
	return 0;
}

