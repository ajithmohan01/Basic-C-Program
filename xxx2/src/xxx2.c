/*
 ============================================================================
 Name        : xxx2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=8;
	printf("X");
	for(i=1;i<=n;i++){
		for(j=2;j<=n;j++){
			printf("X");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
