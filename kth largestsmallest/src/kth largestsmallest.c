/*
 ============================================================================
 Name        : kth.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,j,a[100],temp,vl;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("enter which largest and smallest value :");
	scanf("%d",&vl);
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	printf("\n");
	for(i=0;i<limit;i++){
	  printf("%d",a[i]);
	}
	printf("\n");
	printf("the %d smallest  value is %d ::\n",vl,a[vl-1]);
	printf("the %d greatest value is %d ::\n",vl,a[limit-vl]);
	return EXIT_SUCCESS;
}
