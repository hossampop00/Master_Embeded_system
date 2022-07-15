/*
 * ex2.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Array) >> EX2
 */

// calculate avreage

#include <stdio.h>

int main()
{
	int n ;
	float num[20];
	int i;
	float avg , sum=0;
	printf("Enter the number of data :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	//
	while(n>20 || n<=0)
	{
		printf("Error!Your number should in range of (1 to 20) \n");
		printf("Enter the number of data again :");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
	}
	//scanning
	for(i = 0 ; i<n;i++)
	{
		printf("%d.Enter number :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&num[i]);
		sum = sum+num[i];
	}
	//calc avg
	avg = sum/n ;
	printf("Avreage = %.2f",avg);
	return 0 ;
}


