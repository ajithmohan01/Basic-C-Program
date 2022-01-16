/*
 ============================================================================
 Name        : arrayinpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,a[100],limit,n=2,k,p=0,odd[100],b=0;
	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	printf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		if(a[i]%2==1){
			odd[b]=a[i];
			b++;
		}
	}
	for(i=1;i<b;i++){
		for(j=1;j<=n;j++){
			if(p==b){
				break;
			}
			printf("%d ",odd[p]);
			p++;
		}
		printf("\n");
		for(k=1;k<=3;k++){
			if(p==b){
			break;
			}
			printf("%d ",odd[p]);
			printf("\n");
			p++;
		}
		n=n+2;
	}
	return EXIT_SUCCESS;
}
