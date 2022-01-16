/*
 ============================================================================
 Name        : oddstarpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,p=0,limit,a[100],n=2,b=1;

	setbuf(stdout,NULL);
	printf("enter the limit :");
	scanf("%d",&limit);
	priintf("enter the values :");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<limit;i++){
		for(j=1;j<=n;j++){
			if(p==limit){
				break;
			}
			if(a[i]%2==1){
				printf("* ");
			}else
			{
				prinf("%d ",a[p]);
			}
			p++;
		}
		printf("\n");
		for(k=1;k<=b;k++){
			 if(p==limit){
					break;
						}
						if(a[i]%2==1){
							printf("* ");
						}else
						{
							prinf("%d ",a[p]);
		          }
						p++;
						printf("\n");
	}
		b++;
		n+=2;
	}
	return EXIT_SUCCESS;
}
