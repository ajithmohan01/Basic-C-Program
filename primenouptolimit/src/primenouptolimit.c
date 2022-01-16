/*
 ============================================================================
 Name        : primenouptolimit.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,count;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++){
		count=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d ",i);
		}
	}
	return EXIT_SUCCESS;
}
