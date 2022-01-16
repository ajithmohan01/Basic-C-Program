/*
 ============================================================================
 Name        : stardown.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n=10;
	setbuf(stdout,NULL);
			for(i=1;i<=5;i++){
				for(j=0;j<n;j++){
					printf("*");
				}
				printf("\n");
				for(k=1;k<=i;k++){
					printf("*\n");
				}
				n=n-2;
			}
			printf("\n");

	return EXIT_SUCCESS;
}
