#include <stdio.h>
#include <stdlib.h>
int main() {
	//�ǥ͸�� 
	int age; //�~��
	char name[20]; //�W�r, �r���}�C=�r�� 
	char gender; //�ʧO M: �k�� F: �k�� 
	float height; //���� 
	float weight; //�魫 
	printf("age:");
	scanf("%d",&age); //&age 
	getchar();
	printf("gender:");
	scanf("%c",&gender); //&gender
	
	printf("name:");
	scanf("%s",name); //name, ���ݭn& 
	printf("height:");
	scanf("%f", &height);
	printf("weight:");
	scanf("%f",&weight);
	//
	printf("gender:%c, age:%d, name:%s, height:%f, weight:%f\n",
		gender, age, name, height, weight);
	return 0;
}
