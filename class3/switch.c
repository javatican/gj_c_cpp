#include <stdio.h>
#include <stdlib.h>
int main(){
	char input;
	printf("�п�J�@�Ӧr��(R,G��Y):");
	scanf("%c",&input);
	switch(input){
		case 'R':
			printf("���O��\n");
			break;
		case 'G':
			printf("��O��\n");
			break;
		case 'Y':
			printf("���O�Фp��\n");
			break;
		default:
			printf("���i�H�x��\n",input);
			break;
	}
//	if(input == 'R' ){
//		printf("���O��\n");
//	} else if(input=='G'){
//		printf("��O��");
//	} else if(input=='Y'){
//		printf("���O�Фp��");
//	} else {
//		printf("���i�H�x��",input);
//	}
	return 0;
}
