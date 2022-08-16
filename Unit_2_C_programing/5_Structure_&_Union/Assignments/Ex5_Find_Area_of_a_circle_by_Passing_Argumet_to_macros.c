/*
 * ex5.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Structure & Union) >> EX5
 */

//find area of circle ,passing arguments to macros

#include <stdio.h>

#define PI 3.1415
#define area(r) (PI*r*r)

int main() {
	int radius;
	float area;
	printf("Enter radius :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);
	area = area(radius);
	printf("Area = %.2f",area);
	return 0;
}




















