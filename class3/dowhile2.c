#include <stdio.h>
#include <stdlib.h>
int main(){
	int success=0;
	int answer=77; //答案 
	int input; //使用者輸入值 
	printf("請給我一個1-100的數字:");
	do{
		scanf("%d",&input);
		if(input==answer){
			printf("答對了!!!\n");
			success=1;
		} else if( input< answer){
			printf("大一點!!!\n");
		} else if( input> answer){
			printf("小一點!!!\n");
		}
	} while(success==0);
	return 0;
}



