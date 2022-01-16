/*
 ============================================================================
 Name        : xpattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,a=1,m=1,k;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		for(j=0;j<=a;j++){
			if(j==a){
			printf("x");
			}else
			{
			printf("-");
			}
			a++;
		}
		printf("\n");
		for(k=1;k<=m;k++){
			printf("x\n");
			m++;
		}
	}
	return EXIT_SUCCESS;
}
