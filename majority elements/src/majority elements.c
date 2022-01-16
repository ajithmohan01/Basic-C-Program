/*
 ============================================================================
 Name        : majority.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int maxcount=1,i,j,limit,a[100],count,element[100],n=0,m=0;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the limit :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		count=1;
		for(j=i+1;j<limit;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(maxcount<=count){
			n++;
			maxcount=count;

			while(m<n){
				element[m]= a[i];
				m++;
			}

		}
	}

	printf("the majority elements are::");
	for(i=0;i<n;i++){
	printf("%d ,",element[i]);
	}
	printf("that occur  %d times. \n",maxcount);


	return EXIT_SUCCESS;
}
