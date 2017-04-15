#include <stdio.h> 
int main(){ 
	int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int n,m;
	//n=sizeof(a)/sizeof(a[0]);
	//m=sizeof(a[0])/sizeof(a[0][0]);
	n=sizeof(a)/sizeof(*a);
	m=sizeof(*a)/sizeof(**a);
	int i,j;
	for(i=0;i<n;i++){ 
		for(j=0;j<m;j++){ 
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	} 
	return 0;
}

