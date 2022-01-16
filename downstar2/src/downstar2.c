/*
 ============================================================================
 Name        : downstar2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,k,a=1,l,c=3;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("*\n");
	for(i=0;i<limit;i++){
		for(j=1;j<=a;j++){
			for(k=1;k<=a;k++){
			printf("*");

			}
			printf("\n");
		}
		a++;
		for(l=1;l<=c;l++){
			printf("*");
		}
		c+=3;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
