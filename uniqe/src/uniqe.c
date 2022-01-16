/*
 ============================================================================
 Name        : uniqe.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,limit,m,count,a[100];
    setbuf(stdout,NULL);
    printf("enter the limit :");
    scanf("%d",&limit);
    printf("enter the limit");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        count=0;
        for(j=i+1;j<=limit;j++){
            if(a[i]==a[j]){
                for(k=j;k<=limit;k++){
                    a[k]=a[k+1];
                }
                limit--;
                j--;
                count=1;
            }
        }
        if(count==1){
            for(m=i;m<limit;m++){
                a[m]=a[m+1];
            }
            limit--;
            i--;
        }

    }
    printf("the unique elements are :");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
	return EXIT_SUCCESS;
}
