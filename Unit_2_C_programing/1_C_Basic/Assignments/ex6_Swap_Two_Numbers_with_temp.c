/*
 * ex6.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX6
 */

#include <stdio.h>

int main()
{
	float first , second , temp ;
	printf("Enter value of a :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&first);
	printf("Enter value of b :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&second);
	temp = first ; // value of first is assigned to temp
	first = second ; // value of second is assigned to first
	second = temp ; // value of temp (initial value of first) is assigned to second
	printf("after swaping , value of a = %0.2f \n",first);
	printf("after swaping , value of b = %0.1f \n",second);

	return 0 ;

}


