/*
 ============================================================================
 Name        : mirrorstar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,k,j,limit,star=1,space,n;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	space=limit-1;
	n=limit/2;
	for(i=1;i<=limit;i++){
		for(j=1;j<=space;j++){
			printf(" ");
		}

		for(k=1;k<=star;k++){
		if(i%2==0){
			printf("*");
		}else
		{
			printf("-");
		}
		}
		if(i<n){
			star++;
			space--;
		}else
		{
			star--;
			space++;
		}
		printf("\n");

	}

	return EXIT_SUCCESS;
}
