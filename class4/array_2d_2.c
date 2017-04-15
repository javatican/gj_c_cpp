#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){	
	srand(time(NULL));
	char name[4][20]={"Tom","Annie","Helen","John"};
	int a[4][5];
	int i,j;
	for(i=0; i<4; i++){
		 for(j=0; j<5; j++){
		 	//a[i][j]= i*10+j+1;
		 	a[i][j]=rand()%100+1;
		 }
	}
	int total[4]={0};
	for(i=0; i<4; i++){
		 for(j=0; j<5; j++){
		 	printf("a[%d][%d]=%d\n",i,j, a[i][j]);
		 	total[i]+=a[i][j];
		 }
	}
	int max=0;
	int ind;
	for(i=0; i<4; i++){
		if(total[i]>max){
			max=total[i];
			ind=i;
		}
	}
	printf("最高分的是%s, 分數是%d\n",name[ind],max);
	return 0;
}
