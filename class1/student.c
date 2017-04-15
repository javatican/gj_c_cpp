#include <stdio.h>
#include <stdlib.h>
int main() {
	//學生資料 
	int age; //年齡
	char name[20]; //名字, 字元陣列=字串 
	char gender; //性別 M: 男性 F: 女性 
	float height; //身高 
	float weight; //體重 
	printf("age:");
	scanf("%d",&age); //&age 
	getchar();
	printf("gender:");
	scanf("%c",&gender); //&gender
	
	printf("name:");
	scanf("%s",name); //name, 不需要& 
	printf("height:");
	scanf("%f", &height);
	printf("weight:");
	scanf("%f",&weight);
	//
	printf("gender:%c, age:%d, name:%s, height:%f, weight:%f\n",
		gender, age, name, height, weight);
	return 0;
}
