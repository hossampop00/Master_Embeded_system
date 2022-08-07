/*
 * ex1.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Function) >> EX1
 */

//prime numbers between two intervals

#include <stdio.h>

int check_prime(int num);       //declare function (function prototype)

/*       main      */

int main()
{
	int num1,num2,i,flag;       //declare variable for range

	printf("Enter two numbers (intervals):");    //asking user to enter the range
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);          //scan and store the range from the user
	printf("prime numbers between %d and %d are: ",num1,num2);

	for(i=num1+1;i<num2;++i)
	{
		flag= check_prime(i); // calling function
		if(flag == 0)
			printf("%d ",i);
	}

	return 0 ;
}


/* user define function to check prime number  */
int check_prime(int num)
{
	int j ,flag = 0 ;
	for(j=2 ; j<= num/2 ;++j)
	{
		if( num%j == 0 )
		{
			flag = 1 ;
			break ;
		}
	}

	return flag ;
}






