/*
 ============================================================================
 Name        : oodorevenpatter.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,length=0;
	char str[100];
	setbuf(stdout,NULL);
	printf("enter the string :");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	printf("the length is :%d",length);
	printf("\n");

		for(i=1;i<=length;i++){
			for(j=1;j<=length;j++){
				if(i==j||j==length-i+1){
					printf("x");
				}
				else{
					printf(" ");
				}
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
