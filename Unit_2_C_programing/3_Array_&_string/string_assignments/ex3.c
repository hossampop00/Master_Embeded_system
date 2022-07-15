/*
 * ex3.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (String) >> EX3
 */

//Reverse string

#include <stdio.h>
#include<string.h>

int main()
{
	char str1[1000] , temp;
	int i , j = 0 ;

	printf("Enter string : ");
	fflush(stdin); fflush(stdout);
	gets(str1);

	i=0;
	j=strlen(str1)-1 ; //
	while(i<j)
	{
		temp = str1[i] ;
		str1[i] =str1[j];
		str1[j]= temp ;
		i++;
		j-- ;
	}
	printf("\nReverse string is : %s",str1);

	return 0 ;
}


