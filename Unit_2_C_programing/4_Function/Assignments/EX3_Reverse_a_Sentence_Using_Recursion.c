/*
 * ex3.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Function) >> EX3
 */

//Reverse sentence using recursion

#include <stdio.h>

void reverse();       //declare function (function prototype)

/*       main      */

int main()
{
	printf("Enter a sentence : ");
	fflush(stdin); fflush(stdout);
	reverse();    //calling function

	return 0 ;
}

/* user define function   */
void reverse()
{
	char c ;
	scanf("%c",&c);
	if( c != '\n')
	{
		reverse();
		printf("%c",c);
	}

}






