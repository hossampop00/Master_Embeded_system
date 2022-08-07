/*
 * ex1.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Array) >> EX1
 */

// find sum of two matrix 2x2

#include <stdio.h>

int main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int r,c ;
	//scan first matrix
	for(r = 0 ; r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter the item of first matrix (%d,%d)",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
		}
		printf("\n");
	}
	//scan the second matrix
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter the item of second matrix (%d,%d)",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[r][c]);
		}
		printf("\n");
	}
	//sum of two matrix
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=a[r][c]+b[r][c];
		}
	}
	printf("sum of two matrix : \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%.1f\t",sum[r][c]);
		}
		printf("\n");
	}


	return 0 ;
}


