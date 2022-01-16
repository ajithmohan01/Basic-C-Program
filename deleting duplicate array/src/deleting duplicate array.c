/*
 ============================================================================
 Name        : deleting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[50],limit,i,j,k;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);
	printf("Enter elements of array\n");
		for(i=0;i<limit;i++){
			scanf("%d",&array[i]);
		}
			for(i=0;i<limit;i++){
				for(j=i+1;j<limit;j++){
					if(array[i]==array[j]){
			for(k=j;k<limit;k++){
						array[k]=array[k+1];
					}
					limit--;
					j--;
				}
			}
			}
				printf(" elements of array after deleting \n");
			for(i=0;i<limit;i++){

				printf("%d",array[i]);
			}

	return EXIT_SUCCESS;
}
