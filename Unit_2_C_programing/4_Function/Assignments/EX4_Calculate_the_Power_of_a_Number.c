/*
 * ex4.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Function) >> EX4
 */

//calculate the power of a number using recursion

#include <stdio.h>

int power(int num1,int num2);       //declare function (function prototype)

/*       main      */

int main()
{
	int base , exp ;
	printf("Enter base number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&exp);
	printf("%d^%d = %d",base,exp,power(base,exp));
	return 0 ;
}

/* user define function   */
int power(int base,int exp)
{

	if( exp != 0)
	{
		return (base*power(base,exp-1));
	}
	else
		return 1;

}






