/*
 ============================================================================
 Name        : stardown1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=10;
	setbuf(stdout,NULL);
		for(i=1;i<=n;i++){
			for(j=n;j>=i;j--){
				printf("*");
			}
			printf("\n");
		for(j=1;j<=1;j++){
			for(j=1;j<=i;j++){
				printf("*\n");
			}
		}
	return EXIT_SUCCESS;
}
