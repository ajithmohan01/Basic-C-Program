/*
 ============================================================================
 Name        : ass20.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,count=1;
	setbuf(stdout,NULL);
	printf("Enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
		for(j=1;j<=i;j++){
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
