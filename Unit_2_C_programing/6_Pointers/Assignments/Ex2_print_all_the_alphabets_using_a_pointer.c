/*
 * ex2.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Pointers) >> EX2
 */

//Write a program in C to print all the alphabets using a pointer

#include <stdio.h>

int main() {
	char alph[27];
	int x ;
	char* ptr;
	ptr = alph; // or ptr = &alph[0]

	for(x =0 ;x<26;x++)
	{
		*ptr = x+'A';
		ptr++;
	}
	ptr = alph;

	printf("The Alphabets are : \n");
	for(x=0;x<26;x++)
	{
		printf(" %c",*ptr);
		ptr++;
	}
	printf("\n");


	return 0;
}




















