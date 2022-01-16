/*
 ============================================================================
 Name        : xxx.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int i,j,n=4;
	for(i=1;i<=n;i++){
		printf(" _ _");
		for(j=1;j<=n-i+1;j++){
			printf("X");
		}
		printf("\n");
		printf("_ ");
		for(j=1;j<=n-i+1;j++){
			printf("X");
	}
	printf("\n");
	for(j=1;j<=i;j++){
		printf("x\n");
	}
	}
	return EXIT_SUCCESS;
}
