/*
 ============================================================================
 Name        : DIMOND.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,n=1,k;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
		for(k=limit;k>=i;k++){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			printf("*");
		}
	}
		printf("\n");

	return EXIT_SUCCESS;
}
