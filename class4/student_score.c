#include <stdio.h>
#include <stdlib.h>
int main(){	
	int a[20]; 
	int i;
	int total=0;
	int n = sizeof a/sizeof a[0];
	char cont;
	//int m=0;
	for(i=0; i<n; i++){
		printf("�п�J��%d��ǥͦ��Z:\n",i+1);
		scanf("%d",&a[i]);
		//m++;
		getchar();
		total+=a[i];
		printf("�O�_�~��?(Y or N):");
		scanf("%c",&cont);
		if(cont == 'N' || cont =='n') break;
	}
	int m = i+1;
	for(i=0; i<m; i++){
		printf("��%d��ǥͦ��Z:%d\n",i+1,a[i]); 
	}
	printf("�������Ƭ�%d\n",total/m);
	int max=0;
	for (i=0; i<m; i++){
		//if(a[i]>max) max=a[i];
		max= (a[i]>max) ? a[i] : max;
	}
	//
	int min=100;
	for (i=0; i<m; i++){
		//if(a[i]<min) min=a[i];
		min = (a[i]<min) ? a[i]: min;
	}
	printf("�̰�����%d, �̧C����%d\n",max,min);
	return 0;
}
