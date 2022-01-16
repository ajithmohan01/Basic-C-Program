/*
 ============================================================================
 Name        : mergearray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[100],limit,b[100],limit2;
	int ex=limit+limit2;
	setbuf(stdout,NULL);
	printf("enter the limit 1st array:");
	scanf("%d",&limit);
	printf("enter the values 1st array:");
	for(i=0;i<limit;i++){
	scanf("%d",&a[i]);
		}


	printf("enter the limit 2nd array:");
	scanf("%d",&limit2);
	printf("enter the values 2nd array:");
	for(i=0;i<limit2;i++){
	scanf("%d",&b[i]);
			}

	for(i=0;i<limit2;i++){
		a[limit+i]=b[i];


	}
printf("merged array \n");
	for(i=0;i<ex;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
