/*
 * ex6.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Structure & Union) >> EX6
 */

//diffrent between size of ( structure and union)

#include <stdio.h>

union job{
	char name[32];   //32 bytes
	float salary ;   //4 bytes
	int workwe_no;   //4 bytes
}u;         //size = max size = 32 bytes

struct job1{
	char name[32];   //32 bytes
	float salary ;   //4 bytes
	int workwe_no;   //4 bytes
}s;         //size = sum (32+4+4) = 40 bytes

int main() {
	printf("Size of union:%d\n",sizeof(u));
	printf("Size of structure  :%d\n",sizeof(s));

	return 0;
}




















