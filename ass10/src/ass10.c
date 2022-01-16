/*
 ============================================================================
 Name        : ass10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr1[100],arr2[100],size,i,temp[100];
	setbuf(stdout,NULL);
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the values of Array1 :\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the values of Array2 :\n");
		for(i=0;i<size;i++){
			scanf("%d",&arr2[i]);
		}
		for(i=0;i<size;i++){
		temp[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp[i];
		}
		printf("sorted values of Array1 is :\n");
		for(i=0;i<size;i++){
		printf("%d \n",arr1[i]);
		}
		printf("sorted values of Array2 is :\n") ;
		for(i=0;i<size;i++){
		printf("%d \n",arr2[i]);
		}
	return EXIT_SUCCESS;
}
