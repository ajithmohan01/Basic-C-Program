/*
 ============================================================================
 Name        : unique.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,a[100],j;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			if(a[j]==a[i]){
		printf(" THE unique elements are :  ");
		for(i=0;i<limit;i++){
			printf("%d ",a[j]);
		}
	}
	}
	return EXIT_SUCCESS;
}
