/*
 ============================================================================
 Name        : dimondbutter.c
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
	for(i=limit;i>=1;i--){
		for(j=1;j<=limit*2;j++){
			if(j<=i||j>(limit*2)-i){
				printf("*");
			}else
				printf(" ");
		}
		printf("\n");
	}

	for(i=1;i<=limit;i++){
			for(j=1;j<=limit*2;j++){
				if(j<=i||j>(limit*2)-i){
					printf("*");
				}else
					printf(" ");
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
