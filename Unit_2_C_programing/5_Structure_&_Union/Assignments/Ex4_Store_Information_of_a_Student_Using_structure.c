/*
 * ex3.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Structure & Union) >> EX3
 */

//store information of students using structure

#include <stdio.h>

struct student {
	char name[50];
	int roll;
	float marks;
};

int main() {
	struct student s[10];
	int i;
	printf("Enter information of students:\n");
	for(i=0;i<10;++i)
	{
		s[i].roll=i+1;
		printf("\nFor roll number %d\n",s[i].roll);
		printf("enter name :");
		fflush(stdout);fflush(stdin);
		scanf("%s",s[i].name);
		printf("\nEnter marks :");
		fflush(stdout);fflush(stdin);
		scanf("%f",&s[i].marks);
	}
	printf("\nDisplaying information of students:\n");
	for(i=0;i<10;++i)
	{
		printf("Information of roll number %d:\n",i+1);
		printf("name:");
		puts(s[i].name);
		printf("\nmarks :%.1f",s[i].marks);
	}
	return 0 ;
}



















