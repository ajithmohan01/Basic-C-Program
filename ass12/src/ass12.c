/*
 ============================================================================
 Name        : ass12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr1[100],size,i,j,temp[100];
	setbuf(stdout,NULL);
	printf("Enter the size of array :\n ");
	scanf("%d",&size);
	printf("Enter the values of array :\n ");
	for(i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr1[i]<arr1[j]){
				temp[i]=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp[i];
			}
		}

	}
	printf("Sorted elements are :\n");
	for(i=0;i<size;i++){
		printf("%d ",arr1[i]);
	}
	return EXIT_SUCCESS;
}
