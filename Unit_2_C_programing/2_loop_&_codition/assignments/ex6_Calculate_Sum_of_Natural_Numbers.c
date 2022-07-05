/*
 * ex6.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX6
 */

#include <stdio.h>

int main()
{
	int x , i , sum ;
	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	for(i=1; i<=x ; ++i)
	{
		sum = sum +i ;
	}
	printf("sum = %d ",sum);


	return 0 ;
}


