#include <stdio.h> 
int main(){ 
	int a[5]={11,22,33,44,55};
	int n=sizeof a/sizeof a[0];
    int *ap=a;
    int i;
    //print address
	for(i=0;i<n;i++){
		printf("a+%d=%p\n",i,ap+i); 
		printf("a[%d]=%p\n",i,&ap[i]);
	}
    //print value
	for(i=0;i<n;i++){
		printf("*(a+%d)=%d\n",i,*(ap+i)); 
		printf("*a[%d]=%d\n",i,ap[i]); 
	} 
    printf("a=%p\n",ap++); 
	return 0;
}
