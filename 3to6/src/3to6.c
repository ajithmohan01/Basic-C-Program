/*
 ============================================================================
 Name        : 3to6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,k=3;
		setbuf(stdout,NULL);
		printf("Enter row:");
		scanf("%d",&limit);
		for(i=1;i<=limit;i++){
			for(j=1;j<=i;j++){
				printf("%d",k);
			}
			k++;
			printf("\n");
		}
		k=k-2;
			for(i=limit-1;i>=1;i--){
					for(j=1;j<=i;j++){
						printf("%d",k);
					}
					k--;
					printf("\n");
				}

	return EXIT_SUCCESS;
}
