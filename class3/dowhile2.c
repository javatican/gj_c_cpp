#include <stdio.h>
#include <stdlib.h>
int main(){
	int success=0;
	int answer=77; //���� 
	int input; //�ϥΪ̿�J�� 
	printf("�е��ڤ@��1-100���Ʀr:");
	do{
		scanf("%d",&input);
		if(input==answer){
			printf("����F!!!\n");
			success=1;
		} else if( input< answer){
			printf("�j�@�I!!!\n");
		} else if( input> answer){
			printf("�p�@�I!!!\n");
		}
	} while(success==0);
	return 0;
}



