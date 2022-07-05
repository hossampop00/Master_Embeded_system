/*
 * ex7.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX7
 */

#include <stdio.h>

int main()
{
	float a , b ;
	printf("Enter value of a :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	// swapping

	a = a - b;     // a = (initial_a - initial_b)

	b = a + b;    // b = (initial_a - initial_b) + initial_b = initial_a

	a = b - a;   // a = initial_a - (initial_a - initial_b) = initial_b

	printf("after swaping , value of a = %0.2f \n",a); // %.2lf displays numbers up to 2 decimal places
	printf("after swaping , value of b = %0.1f \n",b);

	return 0 ;

}


