/*
 ============================================================================
 Name        : ass7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int number,i,result;
    setbuf(stdout,NULL);
    printf("Enter the number to multiple :");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
    	result=i*number;
    	printf("%dX%d=%d\n",i,number,result);
    }
	return EXIT_SUCCESS;
}

