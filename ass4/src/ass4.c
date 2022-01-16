/*
 ============================================================================
 Name        : ass4.c
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
			printf("Enter the mark obtained :");
			scanf("%f",&mark);
			if(mark>=50&&mark<=100){
				printf("Passed");
			}else if(mark<50)
			{
				printf("Failed");
			}
			else
			{
			printf("Maximum Mark is 100");
			}

	return EXIT_SUCCESS;
}
