/*
 * ex3.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX3
 */

#include <stdio.h>

int main()
{
	float x , y , z;
	printf("Enter three numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if( x > y )
	{
		if( x > z )
			printf("Largest number is : %.2f ",x);
		else
			printf("Largest number is : %.2f ",z);
	}
	else
	{
		if( y > z )
			printf("Largest number is : %.2f ",y);
		else
			printf("Largest number is : %.2f",z);
	}

	return 0 ;
}


