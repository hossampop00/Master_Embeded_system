/*
 * ex2.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Structure & Union) >> EX2
 */

//Add two distances(in inch-feet)system using structure

#include <stdio.h>

struct distance{
	int feet;
	float inch;
}d1,d2,sum;

int main(){
	printf("Enter information for 1st distance\n");
	printf("Enter feet :\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&d1.feet);
	printf("Enter inch :\n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&d1.inch);
	printf("Enter information for 2nd distance\n");
	printf("Enter feet :\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&d2.feet);
	printf("Enter inch:\n");
	fflush(stdout);fflush(stdin);
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	//if inch greater than 12 changingit to feet
	if(sum.inch>12.0)
	{
		sum.inch=sum.inch-12;
		++sum.feet;
	}
	printf("Sum of distances = %d\'-%.1f\'",sum.feet,sum.inch);


	return 0;

}






