/*
 ============================================================================
 Name        : ass8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter the limit :");
	scanf("%d",&limit);
	for(i=1;i<=limit;i+=2){
		sum=sum+i;
	}
	printf("Sum of odd numbers = %d",sum);
	return EXIT_SUCCESS;
}
