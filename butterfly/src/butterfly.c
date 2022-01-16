/*
 ============================================================================
 Name        : butterfly.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,star=1,n,space,s;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	n=limit/2;
	space=limit-1;
	for(i=1;i<=limit;i++){
		for(j=1;j<=star;j++){
			printf("*");
		}
//		if(i<n){
//		star++;
//		}else
//		{
//		star--;
//		}


		for(s=1;s<space;s++){
			printf(" ");
		}
		for(j=1;j<=star;j++){
					printf("*");
				}
				if(i<n){
				star++;
				space-=2;
				}else
				{
				star--;
				space+=2;
				}
				printf("\n");

	}
	return EXIT_SUCCESS;
}
