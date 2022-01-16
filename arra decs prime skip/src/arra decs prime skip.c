/*
 ============================================================================
 Name        : arra.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,a[100],temp,count,k;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		for(j=i+1;j<=limit;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the sorted values are :\n");
	for(i=0;i<limit;i++){
	printf("%d\t",a[i]);
	}
	for(i=0;i<limit;i++){
		count=0;
		for(j=1;j<=limit;j++){
			if(a[i]%j==0){
				count++;
			}
		}
			if(count==2){
				for(k=i;k<limit;k++){
					a[k+1]=a[k+3];
					a[k+2]=a[k+4];
				}
				if(i<limit-2){
					limit-=2;
				}
				else if(i<limit-1){
					limit--;
				}
		}

	}
	printf("\n");
		printf("array after skipping :\n");
		for(i=0;i<limit;i++){
			printf("%d\t",a[i]);
		}
	return EXIT_SUCCESS;
}
