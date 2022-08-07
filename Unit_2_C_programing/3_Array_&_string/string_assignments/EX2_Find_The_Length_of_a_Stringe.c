/*
 * ex2.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (String) >> EX2
 */

// Find the length of string

#include <stdio.h>
#include<string.h>

int main()
{
	char str1[1000];
	int i ;
	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
	scanf("%s",str1);
	for(i=0;str1[i] !='\0';++i) ; //count
	printf("length of string is :%d",i);

	return 0 ;
}


