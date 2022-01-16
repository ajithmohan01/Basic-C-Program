/*
 ============================================================================
 Name        : primenumsumpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,a[100],count,sum=0,n=3,k=1,m=1;
	int b;
	int flag=0;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<limit;i++){
			count=0;
			for(j=1;j<=a[i];j++){
				 if(a[i]%j==0){
					 count++;
				 }
		}
			 if(count==2){
				sum=sum+a[i];
			}
	}

		printf("sum = %d",sum);


		printf("\n");


		for(i=0;i<sum;i++){
			b=m+n;
//			if(b>=sum){
//				break;
//			}
			for(j=1;j<=n;j++){
				if(flag==sum){
					break;
				}
				printf("*");
				flag++;
			}
			printf("\n");
		n++;
		for(k=1;k<=m;k++){
			if(flag==sum){
				break;
				}
			printf("*\n");
			flag++;
		}
		m++;


		}
	return EXIT_SUCCESS;
}
