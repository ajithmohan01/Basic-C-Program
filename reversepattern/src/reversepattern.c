/*
 ============================================================================
 Name        : reversepattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=limit;i>=1;i--){
		for(k=limit;k>i;k--){
			printf(" ");
		}
		for(j=1;j<i;j++){
			printf(" *");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
