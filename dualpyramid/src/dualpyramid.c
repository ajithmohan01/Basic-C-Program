/*
 ============================================================================
 Name        : dualpyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,k,m,n;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(k=limit;k>i;k--){
			printf(" ");
		}
		for(m=limit;m>i;m--){
			printf(" ");
		}
		for(n=1;n<=i;n++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
