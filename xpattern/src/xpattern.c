/*
 ============================================================================
 Name        : xpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,k,a[100],n=1,m=2,p=0;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		if(a[i]%2==1){
			for(j=i;j<limit;j++){
			a[j]=a[j+1];
			}
		limit--;
		i--;
		}
	}
	printf(" the odd numbers are :\n");
	for(i=1;i<limit;i++){
		for(j=1;j<=n;j++){
			if(p==limit){
				break;
			}
			if(j==n){
			printf("%d ",a[p]);
			p++;
			}else
			{
				printf("- ");
			}
		}
		n++;
		printf("\n");
		for(k=1;k<=m;k++){
			if(p==limit){
				break;
			}
			printf("%d ",a[p]);
			p++;
		}
		m=m+2;
		printf("\n");

	}
	return EXIT_SUCCESS;
}
