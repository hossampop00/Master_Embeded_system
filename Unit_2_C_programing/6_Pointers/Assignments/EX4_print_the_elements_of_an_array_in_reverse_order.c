/*
 * ex4.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Pointers) >> EX4
 */

//Write a program in C to print the elements of an array in reverse order.


#include <stdio.h>

int main() {
	int n , i , arr1[15];
	int *p;
	printf("enter the number of elements to store on the array(max 15)");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	p = &arr1[0];
	printf("INPut %d number of element in array :\n",n);
	for(i=0;i<n;i++)
	{
		printf("element -%d : ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",p);
		p++;
	}
	p = &arr1[n-1];
	printf("\nThe element of array in reverse order are :");
	for(i=n;i>0;i--)
	{
		printf("\n element - %d : %d",i,*p);
		p--;
	}
	printf("\n");

	return 0;
}




















