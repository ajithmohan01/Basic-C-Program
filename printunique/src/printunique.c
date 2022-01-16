/*
 ============================================================================
 Name        : printunique.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,j,i,count,a[100];
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("the uniqe elements are :");
	for(i=0;i<limit;i++){
		count=0;
		for(j=0;j<limit;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
	if(count==1){
		printf(" %d",a[i]);
	}
	}
	return EXIT_SUCCESS;
}
