#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int success=0;
	int count=0;
	//int answer=77; //���� 
	//int answer = rand() % 100 +1;
	srand(time(NULL));
	int answer =  rand() % 100 +1;
	int input; //�ϥΪ̿�J�� 
	printf("�е��ڤ@��1-100���Ʀr:");
	do{
		scanf("%d",&input);
		count++;
		if(input==answer){
			printf("����F!!!\n");
			success=1;
		} else if( input< answer){
			printf("�j�@�I!!!\n");
		} else if( input> answer){
			printf("�p�@�I!!!\n");
		}
		if(count==5 && success==0){
			printf("�z�w�g�q�F�����F!\n");
			break;
		}
	} while(success==0);
	return 0;
}



