#include <stdio.h>
#include <stdlib.h>
int main(){
	char input;
	printf("請輸入一個字元(R,G或Y):");
	scanf("%c",&input);
	switch(input){
		case 'R':
			printf("紅燈停\n");
			break;
		case 'G':
			printf("綠燈行\n");
			break;
		case 'Y':
			printf("黃燈請小心\n");
			break;
		default:
			printf("不可以頑皮\n",input);
			break;
	}
//	if(input == 'R' ){
//		printf("紅燈停\n");
//	} else if(input=='G'){
//		printf("綠燈行");
//	} else if(input=='Y'){
//		printf("黃燈請小心");
//	} else {
//		printf("不可以頑皮",input);
//	}
	return 0;
}
