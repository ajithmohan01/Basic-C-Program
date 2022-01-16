/*
 ============================================================================
 Name        : ass15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getArray(int[],int);
void displayArray(int[],int);
int main(void) {
int values[100],limit;
setbuf(stdout,NULL);
printf("Enter the limit");
scanf("%d",&limit);
getArray(values,limit);
displayArray(values,limit);
	return EXIT_SUCCESS;
}
void getArray(int values[],int a){
	int i;
	printf("Enter the values: \n");
	for(i=0;i<a;i++){
		scanf("%d",&values[i]);
	}
}
void displayArray( int values[],int b){
	int i;
	printf("The entered values are : \n");
	for(i=0;i<b;i++){
		printf("%d ",values[i]);
	}
}
