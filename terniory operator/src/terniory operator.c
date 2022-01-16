/*
 ============================================================================
 Name        : terniory.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3,temp,result;
	setbuf(stdout,NULL);
	printf("enter the first number :");
	scanf("%d",&num1);
	printf("enter the second  number :");
		scanf("%d",&num2);
	printf("enter the  third number :");
		scanf("%d",&num1);
		temp=num1<num2?num1:num2;
		result=temp<num3?temp:num3;
		printf("the smallest number is: %d",result);
	return EXIT_SUCCESS;
}
