/*
 * ex1.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Pointers) >> EX1
 */

//write a program in C to demonstrate how to handle the pointers in the program

#include <stdio.h>

int main() {
	int m = 29 ,*ab=&m;
	printf("Address of m : %p\n",&m);  //or ab
	printf("value of m : %d\n",m);

	printf("now ab is assigned with the address of m");
	printf("Address of pointer ab : %p\n",ab);
	printf("content of ab : %d\n",*ab);
	m = 34;
	printf("The value of m assigned to 34 now .\n");
	printf("Address of pointer ab is :%p\n",ab);
	printf("Content of pointer ab is :%d\n",*ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with value 7 now .\n");
	printf("Address of m : %p\n",&m);  //or ab
	printf("value of m : %d\n",m);







	return 0;
}




















