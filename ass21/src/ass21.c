/*
 ============================================================================
 Name        : ass21.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
int main(void) {
	int size,i,arr[10],sum[10];
	setbuf(stdout,NULL);
	printf("enter the size of an array :");
	scanf("%d",&size);
	printf("enter the values of array :");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		sum[i]=(arr[i])*(arr[i+1]);
	}
	printf(" multiple values are :\n");
	for(i=0;i<size-1;i++){
		printf("%d ",sum[i]);
	}

	return EXIT_SUCCESS;
}
