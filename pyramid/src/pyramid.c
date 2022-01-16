/*
 ============================================================================
 Name        : pyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,l,row,n;
	setbuf(stdout,NULL);
	printf("enter the rows ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=row;j>=i;j--){
			printf(" ");
		}
		n=i;
		for(k=1;k<=i;k++){
			printf("%d",n++);
		}
		n=n-2;
		for(l=1;l<i;l++){
			printf("%d",n--);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
