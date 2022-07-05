/*
 * ex.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic(loop & condition) >> EX2
 */

#include <stdio.h>

int main()
{
	char x ;
	int y ,Y ;
	printf("Enter an alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	Y = ( x=='A' || x =='E'|| x =='I'||x =='U'||x =='O');   //Upper case
	y = ( x=='i' || x=='e' || x =='i'||x =='u'||x =='o');   //Lower case

	if( Y || y )
	{
		printf("Your Character %c is Vowel",x);
	}
	else
	{
		printf("Your Character %c is constant",x);
	}

	return 0 ;

}


