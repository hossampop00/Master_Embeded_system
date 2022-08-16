/*
 * ex3.c
 *
 *  Author : Hossam ElDesokey
 *  Description : Unit 2 C-Progtamming >> Assignment (Structure & Union) >> EX3
 */

//Add two complex number by passing structure to a function

#include <stdio.h>

//declare structure

 typedef struct complex {
	 float real;
	 float imag;
 }complex;

 //declare function (function prototype)
 complex add(complex n1,complex n2);

 int main() {
	 complex n1,n2,temp;
	 printf("For 1st complex number\n");
	 printf("Enter real and Imaginary respectively\n");
	 fflush(stdout);fflush(stdin);
	 scanf("%f%f",&n1.real,&n1.imag);
	 printf("For 2nd complex number\n");
	 printf("Enter real and Imaginary respectively\n");
	 fflush(stdout);fflush(stdin);
	 scanf("%f%f",&n2.real,&n2.imag);
	 temp = add(n1,n2);
	 printf("Sum =%.1f+%.1fi",temp.real,temp.imag);

	 return 0 ;
 }

 //define function

 complex add(complex n1,complex n2){
	 complex temp;
	 temp.real=n1.real+n2.real;
	 temp.imag=n1.imag+n2.imag;
	 return(temp);
 }



















