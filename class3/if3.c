#include <stdio.h>
#include <stdlib.h>
int main(){
	char input;
	printf("�п�J�@�Ӧr��:");
	scanf("%c",&input);
	//
	if(input>='0' && input<='9'){
		printf("%c�O�Ʀr\n",input);
	} else if(input>='A' && input<='Z'){
		printf("%c�O�j�g�r��\n",input);
	} else if(input>='a' && input<='z'){
		printf("%c�O�p�g�r��\n",input);
	} else {
		printf("%c�O��L�r��\n",input);
	}
	return 0;
}
