/*
 * ex1.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX1
 */

#include <stdio.h>

int main()
{
	int x ;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	if(x % 2 == 0)
	{
		printf("Your Integer %d is Even",x);
	}
	else
	{
		printf("Your Integer %d is Odd",x);
	}



	return 0 ;

}


