/*
 ============================================================================
 Name        : dimondhllow.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,n=1,limit;
	int space,b;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	 space=limit-1,b=limit/2;
	for(i=1;i<=limit;i++){
		for(j=1;j<=space;j++){
			printf(" ");
		}
		for(k=1;k<=n;k++){
			if(k==1||i==k||i==b||k==n||j==(limit-i)){
			printf("*");
			}else
			{
				printf(" ");
			}
			//printf("*");
		}
		if(i<b){
			space--;
			n+=2;
		}else{
			space++;
			n-=2;
	    }
			printf("\n");
	}
	return EXIT_SUCCESS;
}
