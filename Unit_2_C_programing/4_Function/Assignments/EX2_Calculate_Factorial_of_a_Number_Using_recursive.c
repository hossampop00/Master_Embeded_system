/*
 * ex2.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Function) >> EX2
 */

//calculate factorial using recursion

#include <stdio.h>

int factorial(int num);       //declare function (function prototype)

/*       main      */

int main()
{
	int num ;
	printf("Enter an positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,factorial(num));


	return 0 ;
}


/* user define function   */
int factorial(int num)
{
	if(num != 1)
		return num*factorial(num-1);

}






