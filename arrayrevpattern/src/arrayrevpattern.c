/*
 ============================================================================
 Name        : arrayrevpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,a[100],temp[100],n=2,count=1,p=0,j,k,p=0;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit/2;i++){
		temp[i]=a[i];
		a[i]=a[limit-1-i];
		a[limit-1-i]=temp[i];
	}
	printf("entered values are :");
	for(i=0;i<limit;i++){
		printf("%d ",a[i]);
	}
	for(i=1;i<=limit;i++){

		for(j=1;j<n;j++){
			if(p==limit){
				break;
			}
			printf("%d ",a[p]);
			++p;
		}
		printf("\n");
		for(k=1;k<=3;k++){
			if(p==limit){
				break;
		}
			printf("%d ",a[p]);
			++p;
			printf("\n");
		}
		n=n+2;
	}
	return EXIT_SUCCESS;
}
