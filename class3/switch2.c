#include <stdio.h>
#include <stdlib.h>
int main(){
	int point;
	char input;
	printf("請輸入一個字元(1-9,T,J,Q,K,A):");
	scanf("%c",&input);
	switch(input){
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			point = input-'0';
			break;
		case 'T':
		case 'J':
		case 'Q':
		case 'K':
			point =10;
			break;
		case 'A':
			point =11;
			break;
		default:
			point=0;
			break;
	}
	printf("point=%d\n",point); 
	return 0;
}
