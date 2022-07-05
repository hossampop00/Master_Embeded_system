/*
 * ex3.c
 *
 *  Created on: Jul 4, 2022
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX3
 */

#include <stdio.h>

int main()
{
	int x =0 , y = 0 , sum = 0 ;
	 printf("Enter two Integer : ");
	 fflush(stdin); fflush(stdout);
	 scanf("%d \n %d",&x,&y);
	 sum = x + y ;
	 printf("sum : %d",sum);


	return 0;
}
