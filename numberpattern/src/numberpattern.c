/*
 ============================================================================
 Name        : numberpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit,n=1,p,z;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		p=i;
		for(j=limit;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=n;k++){
			printf("%d",p);
				p--;

		}
		for(z=1;z<i;z++){
			printf("%d",p);
			p++;
		}
		printf("\n");
		n+=2;

	}
	return EXIT_SUCCESS;
}
