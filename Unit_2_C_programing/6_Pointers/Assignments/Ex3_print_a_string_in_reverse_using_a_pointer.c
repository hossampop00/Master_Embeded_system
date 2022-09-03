/*
 * ex3.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Pointers) >> EX3
 */

//Write a program in C to print a string in reverse using a pointer


#include <stdio.h>

int main() {
	char str1[50];
	char rev[50];
	char *sptr =str1;
	char *rvptr = rev;
	int i = -1 ;

	printf("INPUT  a string :");
	fflush(stdout);fflush(stdin);
	scanf("%s",str1);
	while(*sptr)
	{
		sptr++;
		i++;
	}
	while(i>=0)
	{
		sptr--;
		*rvptr=*sptr;
		rvptr++;
		--i;
	}
	*rvptr ='\0';
	printf("Reverse of string is : %s",rev);

	return 0;
}




















