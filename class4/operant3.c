#include <stdio.h>
#include <stdlib.h>
int main(){	
	int a[3]; 
	int i;
	int total=0;
	int n = sizeof a/sizeof a[0];
	for(i=0; i<n; i++){
		printf("請輸入第%d位學生成績:", i+1);
		scanf("%d",&a[i]);
		total+=a[i];
	}
	printf("total=%d\n",total);
	printf("average=%d\n",total/n);
	int max=0;
	int min=100;
	for(i=0; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("max=%d\n",max);
	//
	for(i=0; i<n; i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("min=%d\n",min);
	return 0;
}
