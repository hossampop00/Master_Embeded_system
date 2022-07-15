/*
 * ex4.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Array) >> EX4
 */

// insert element

#include <stdio.h>

int main()
{
	int a[100];
	int num,element,loc,i;
	printf("Enter no. of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	//scanning
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be inserted :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&loc);
	//creat space
	for(i=num ;i>=loc;i--)
	{
		a[i]=a[i-1];
	}
	num++;
	a[loc-1]=element;
	for(i=0;i<num;i++)
	{
		printf("%d\t",a[i]);
	}

	return 0 ;
}


