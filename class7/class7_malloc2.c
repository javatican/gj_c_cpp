#include <stdio.h>
#include <stdlib.h>
int main(){
	int *s;
	int i, n, total;
	printf("請輸入總人數:");
	scanf("%d", &n);
	s=(int*)malloc(sizeof(int)*n);
	total=0;
	for(i=0;i<n;i++){
		printf("第%d位學生成績:", i+1);
		scanf("%d", &s[i]);	 
		total+=s[i];		 
	}
	printf("total=%d, student count=%d, average=%d\n",total,n,total/n);
	free(s);
	return 0;
}

