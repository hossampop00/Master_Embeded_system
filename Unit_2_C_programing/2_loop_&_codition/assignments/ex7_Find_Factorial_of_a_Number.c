/*
 * ex7.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX7
 */

#include <stdio.h>

int main()
{
	int n , i  ;
	unsigned long long int factorial = 1 ;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	if(n < 0)
		printf("Error! Factorial of a negative number doesn't exist.");
	else
	{
		for(i=1 ;i<=n ;++i)
		{
			factorial = factorial * i ;
		}
		printf("Factorial of %d = %llu", n, factorial);
	}

	return 0 ;
}


