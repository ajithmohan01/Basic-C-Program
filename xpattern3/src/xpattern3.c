/*
 ============================================================================
 Name        : xpattern3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit,n=1,m=1,l,c=2;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
		for(j=1;j<=n;j++){
			printf("X\n");
		}
		for(k=1;k<=m;k++){
			printf("-");
		}
		for(l=1;l<=c;l++){
			printf("X");
		}
		printf("\n");
		n++;
		m++;
		c*=2;
	}

	return EXIT_SUCCESS;
}
