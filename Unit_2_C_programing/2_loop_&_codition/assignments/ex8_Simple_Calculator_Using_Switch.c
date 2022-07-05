/*
 * ex8.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX8
 */

#include <stdio.h>

int main()
{
	char opreator;
	float num1 ,num2 ;
	printf("Enter opreator either ( + , - , * , / ): ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&opreator);
	printf("Enter two operands :");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1 ,&num2);

	switch (opreator)
	{
	case '+':
		printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
		break;

	default:
		printf("Error! operator is not correct");
	}


	return 0 ;
}


