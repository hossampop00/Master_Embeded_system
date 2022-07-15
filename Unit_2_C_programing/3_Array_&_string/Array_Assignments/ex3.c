/*
 * ex3.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Array) >> EX3
 */

// Transpose matrix

#include <stdio.h>

int main()
{
	float a[10][10];
	int r,c ;
	float t[10][10];
	int i , j;

	printf("Enter rows and coulm of matrix : ");
	fflush(stdin); fflush(stdout);
	scanf("%d\n%d",&r,&c);
	//scanning the matrix
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("Enter the item (%d,%d)",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	//printing the matrix
	printf("Enterd matrix : \n");
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	// Transepose the matrix
	for(i=0;i<r;++i)
	{
		for(j=0;j<c;++j)
		{
			t[j][i]=a[i][j];
		}
	}
	//printing transpose matrix
	printf("Transepose of matrix :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%.2f\t",t[i][j]);
		}
		printf("\n");
	}

	return 0 ;
}


