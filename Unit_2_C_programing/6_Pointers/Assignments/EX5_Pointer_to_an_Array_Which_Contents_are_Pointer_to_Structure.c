/*
 * ex5.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Pointers) >> EX5
 */

//Write a program in C to show a pointer to an array which contents are pointer to structure


#include <stdio.h>

struct SEmployee{
	char *name;
	int id;
};

int main() {
	struct SEmployee emp1 ={"Jhon",1001},emp2 ={"Alex",1002},emp3={"Taylor",1003};
	struct SEmployee *arr[]={&emp1,&emp2,&emp3};
	struct SEmployee *(*pt)[3] = &arr;

	printf("Employee name : %s \n",(*(*pt+1))->name);
	printf("Employee ID : %d \n",(*(*pt+1))->id);

	return 0;
}




















