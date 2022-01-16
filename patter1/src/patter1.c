/*
 ============================================================================
 Name        : patter1.c
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
	printf("Enter the rows :");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
