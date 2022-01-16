/*
 ============================================================================
 Name        : ass5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter the total mark obtained :");
	scanf("%f",&mark);
	if (mark>=90&&mark<=100){
				printf("your grade is : A");
			}else if (mark>=80&&mark<=89)
				{
				printf("your grade is : B");

			}else if (mark>=70&&mark<=79)
			{
				printf("your grade is : c");
			}else if(mark>=60&&mark<=69)
			{
				printf("your grade is : D");
			}else if(mark>=50&&mark<=59)
			{
				printf("your grade is : E");
			}else if(mark>100)
			{
				printf("100 is the maximum mark you can obtain .");
			}else if (mark<50)
			{
				printf("failed");
			}
	return EXIT_SUCCESS;
}
