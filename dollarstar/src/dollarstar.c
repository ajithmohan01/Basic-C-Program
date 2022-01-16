/*
 ============================================================================
 Name        : dollarstar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2==0){
				printf("*");
			}else
				printf("$");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
