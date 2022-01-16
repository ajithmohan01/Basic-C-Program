/*
 ============================================================================
 Name        : ass16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,flag=0;
	setbuf(stdout,NULL);
	printf("Enter the number to check : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
		if(flag==1){
			printf("It is  not prime number \n");
		}else
		{
			printf("It is prime number \n");
		}
	return EXIT_SUCCESS;
}
