/*
 ============================================================================
 Name        : pattern1232.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit,z;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		z=i;


		for(k=limit;k>i;k--){
			printf("  ");
		}
		for(j=1;j<i;j++){
			 printf("%d ",z++);


		}
		for(j=1;j<=i;j++){

				 printf("%d ",z--);




				}

		printf("\n");

	}
	return EXIT_SUCCESS;
}
