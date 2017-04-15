#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int count=0;
	int success=0;
	//int answer=77; //答案 
	//int answer = rand() % 100 +1;
	srand(time(NULL));
	int answer =  rand() % 100 +1;
	int input; //使用者輸入值 
	printf("請給我一個1-100的數字:");
	do{
		scanf("%d",&input);
		count++;
		if(input==answer){
			printf("答對了!!!\n");
			success=1;
		} else if( input< answer){
			printf("大一點!!!\n");
		} else if( input> answer){
			printf("小一點!!!\n");
		}
		if(count==3 && success==0){
			printf("您已經猜了三次了");
			break;
		}
	} while(success==0);
	return 0;
}



