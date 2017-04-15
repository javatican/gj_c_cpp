#include <stdio.h>
#include <stdlib.h>
int main(){
	char input;
	printf("請輸入一個字元(R,G或Y):");
	scanf("%c",&input);
	//
	if(input == 'R' || input=='r'){
		printf("紅燈停\n");
	} else if(input=='G'){
		printf("綠燈行");
	} else if(input=='Y'){
		printf("黃燈請小心");
	} else {
		printf("不可以頑皮",input);
	}
	return 0;
}
