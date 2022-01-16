/*
 ============================================================================
 Name        : maximum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,max=0,count,a[100],elment;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		count=0;
		for(j=0;j<limit;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(max<count){
			max=count;
			elment=a[i];
		}
	}
	printf("array element is %d its max count  %d times",elment,max);
	return EXIT_SUCCESS;
}
