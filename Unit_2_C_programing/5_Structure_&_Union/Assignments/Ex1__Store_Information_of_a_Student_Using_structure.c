/*
 * ex1.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Structure & Union) >> EX1
 */

//store information(name,roll and marks) of a student using structure

#include <stdio.h>

struct student{
	char name[50];
	int roll;
	float marks;
};

int main(){
	struct student s;
	printf("Enter information of students\n");
	printf("Enter name :");
	fflush(stdout);fflush(stdin);
	scanf("%s",s.name);
	printf("\nEnter roll :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s.roll);
	printf("\nEnter marks :");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s.marks);
	printf("\nDisplaying Information\n");
	printf("name :%s\n",s.name);
	printf("Roll :%d\n",s.roll);
	printf("marks:%.2f\n",s.marks);

	return 0;

}






