/*
 ============================================================================
 Name        : ass2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1;
	float number2,sum=0;
	setbuf(stdout,NULL);
	printf("Enter the 1st number :");
	scanf("%d",&number1);
	printf("Enter the 2nd number :");
	scanf("%f",&number2);
	 sum=number1+number2;
	 printf("The sum two numbers are :%f",sum);
	return EXIT_SUCCESS;
}
