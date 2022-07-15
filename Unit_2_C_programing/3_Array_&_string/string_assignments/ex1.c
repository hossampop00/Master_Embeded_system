/*
 * ex1.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (String) >> EX1
 */

// Find the frequency of character in string

#include <stdio.h>
#include<string.h>

int main()
{
	char str1[1000];
	char ch ;
	int i ,count=0;
	printf("Enter a string :");
	fflush(stdin); fflush(stdout);
	gets(str1);
	printf("\nEnter character to find frequency :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	for(i=0;str1[i]!='\0';++i)
	{
		if(ch==str1[i])
		{
			++count;
		}
	}
	printf("frequency of %c is = %d",ch,count);



	return 0 ;
}


