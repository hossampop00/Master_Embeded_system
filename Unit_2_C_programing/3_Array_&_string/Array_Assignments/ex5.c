/*
 * ex5.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Array) >> EX5
 */

// search an element

#include <stdio.h>

int main()
{
	int a[100];
	int num,element,i;
	printf("Enter no. of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	//scanning
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	//search start from zero
	i = 0 ;
	while(i<num && element !=a[i])
	{
		i++;
	}
	//if i< num then match found
	if(i<num)
	{
		printf("Number found at location : %d",i+1);
	}
	else
		printf("Number not found ");


	return 0 ;
}


