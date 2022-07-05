/*
 * ex4.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX4
 */

#include <stdio.h>

int main()
{
	float x ;
	printf("Enter a number  : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	if(x>0)
	{
		printf("Your number %.2f is positive",x);
	}
	else if(x<0)
	{
		printf("Your number %.2f is negative",x);
	}
	else
		printf("your number %.2f is zero",x);


	return 0 ;
}


