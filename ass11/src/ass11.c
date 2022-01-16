/*
 ============================================================================
 Name        : ass11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,arr[100],count=0;
	setbuf(stdout,NULL);
	printf("Enter the size of array : ");
	scanf("%d",&size);
	printf("Enter the values of array :");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]%2==0){
			count++;
		}
	}
	printf(" No of even numbers are  %d ",count);
	return EXIT_SUCCESS;
}
