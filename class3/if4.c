#include <stdio.h>
#include <stdlib.h>
int main(){
	char input;
	printf("�п�J�@�Ӧr��(R,G��Y):");
	scanf("%c",&input);
	//
	if(input == 'R' || input=='r'){
		printf("���O��\n");
	} else if(input=='G'){
		printf("��O��");
	} else if(input=='Y'){
		printf("���O�Фp��");
	} else {
		printf("���i�H�x��",input);
	}
	return 0;
}
