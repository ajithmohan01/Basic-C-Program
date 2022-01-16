/*
 ============================================================================
 Name        : patter12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,i,j;
	setbuf(stdout,NULL);
	printf("Enter the number of rows :");
	scanf("%d",&rows);
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){

			printf("%d",j);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
