/*
 ============================================================================
 Name        : downstar1.c
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
	for(i=2;i<16;i*=2){
	for(j=1;j<=i;j++){
		printf("*")
	}
	if(i==16){
		break;
	}
	printf("\n");
	}
	for(k=1;k<=3;k++){
		printf("*\n");
	}
	return EXIT_SUCCESS;
}
