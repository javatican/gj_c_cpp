#include <stdio.h> 
int main(){ 
	int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int n,m;
    n=sizeof a/sizeof a[0];
    m=sizeof a[0]/sizeof a[0][0];
	int i;
	for(i=0;i<n;i++){
		printf("a+%d=%p\n",i,a+i); 
		printf("a[%d]=%p\n",i,a[i]);
		printf("a[%d][0]=%p\n",i,&a[i][0]);
	}
	for(i=0;i<n;i++){
		printf("*(a+%d)=%p\n",i,*(a+i)); 
		printf("**(a+%d)=%d\n",i,**(a+i)); 
		printf("*a[%d]=%d\n",i,*a[i]); 
		printf("a[%d][0]=%d\n",i,a[i][0]);
	} 
	return 0;
}

