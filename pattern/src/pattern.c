/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j;
		setbuf(stdout,NULL);
		printf("Enter row:");
		scanf("%d",&limit);
		for(i=1;i<=limit;i++){
			for(j=1;j<=limit;j++){
				if(i+j==limit+1||i==limit){

					printf("* ");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		for(i=1;i<=limit;i++){
			for(j=1;j<=limit;j++){
			if(i==j){

			printf("* ");
			}else{
				printf(" ");
			}

				printf("\n");
			}


	return EXIT_SUCCESS;
}
