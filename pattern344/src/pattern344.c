/*
 ============================================================================
 Name        : pattern344.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit,i,j,n=3;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
		for(j=1;j<=i;j++){
			printf("%d",n);
		}
		printf("\n");
		n++;
	}
	for(i=limit;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("%d",n);
			}
			printf("\n");
			n--;
		}

	return EXIT_SUCCESS;
}
