/*
 ============================================================================
 Name        : diffpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,k,a;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=0;i<=limit;i++){
		for(j=limit;j>=i;j--){
			printf(" ");
		}
		for(a=i;a>=0;a--){
			printf("%d",a);
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
