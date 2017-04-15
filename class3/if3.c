#include <stdio.h>
#include <stdlib.h>
int main(){
	char input;
	printf("請輸入一個字元:");
	scanf("%c",&input);
	//
	if(input>='0' && input<='9'){
		printf("%c是數字\n",input);
	} else if(input>='A' && input<='Z'){
		printf("%c是大寫字母\n",input);
	} else if(input>='a' && input<='z'){
		printf("%c是小寫字母\n",input);
	} else {
		printf("%c是其他字元\n",input);
	}
	return 0;
}
