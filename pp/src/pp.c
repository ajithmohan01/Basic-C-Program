/*
 ============================================================================
 Name        : pp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k;
	for(i=5;i>=1;i--){
		for(k=5;k>i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
