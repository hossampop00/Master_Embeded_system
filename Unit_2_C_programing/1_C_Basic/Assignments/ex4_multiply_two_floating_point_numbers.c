/*
 * ex4.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX4
 */

#include <stdio.h>

int main()
{
	float x = 0 , y = 0 ;
	printf("Enter two numbers :");
	fflush(stdin); fflush(stdout);
	scanf(" %f \n %f",&x,&y);
	printf("Product :%f",x*y);
	return 0;

}
