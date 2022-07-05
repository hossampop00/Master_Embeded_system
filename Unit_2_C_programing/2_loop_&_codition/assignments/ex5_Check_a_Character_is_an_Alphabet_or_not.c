/*
 * ex5.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX5
 */

#include <stdio.h>

int main()
{
	char x ;
	printf("Enter a character : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	if( (x>='a' && x<='z') || (x >= 'A' && x <= 'z') )
	{
		printf("your character %c is alphabet ",x);
	}
	else
		printf("your character %c is not alphabet",x);

	return 0 ;
}


