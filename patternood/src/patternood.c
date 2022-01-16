/*
 ============================================================================
 Name        : patternood.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    int limit,i,a[100],od[100],ev[100],n=2,c=0,b=0,j,k,count=1,p=0;
	    setbuf(stdout,NULL);
	    printf("enter the limit :");
	    scanf("%d",&limit);
	    printf("enter the values :");
	    for(i=0;i<limit;i++){
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<limit;i++){
	        if(a[i]%2==0){
	            ev[c]=a[i];
	            c++;
	        }else if(a[i]%2==1){
	          od[b]=a[i];
	          b++;
	        }
	    }
	    printf("the odd no are :\n");
	    for(i=0;i<b;i++){
	        printf("%d ",od[i]);
	    }
	    printf("\nthe even no are :\n");
	    for(i=0;i<c;i++){
	        printf("%d ",ev[i]);
	    }
	    printf("\n odd numbers in pattern :\n");
	    for(i=1;p<=b;i++){
	        for(j=1;j<=n;j++){
	            if(b==p){
	                 break;
	                }
	            printf("%d ",od[p]);
	            p++;
	        }
	        printf("\n");

	    for(k=1;k<=count;k++){
	         if(b==p){
	             break;
	         }
	        printf("%d ",od[p]);
	        printf("\n");
	        p++;
	    }
	    n=n+2;
	    count++;
	    }

	return EXIT_SUCCESS;
}

