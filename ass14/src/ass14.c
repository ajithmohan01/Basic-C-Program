/*
 ============================================================================
 Name        : ass14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr1[100][100],arr2[100][100],rows,columns,i,j,sum[100][100];
	setbuf(stdout,NULL);
	printf("Enter the number of rows :");
	scanf("%d",&rows);
	printf("Enter the number of columns :");
	scanf("%d",&columns);
	printf("Enter the values array 1 :");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the values array 2 :");
		for(i=0;i<rows;i++){
			for(j=0;j<columns;j++){
				scanf("%d",&arr2[i][j]);
			}
		}
		for(i=0;i<rows;i++){
					for(j=0;j<columns;j++){
						sum[i][j]=arr1[i][j]+arr2[i][j];
					}
				}
		printf("The sum of 2 arrays are :\n");
		for(i=0;i<rows;i++){
							for(j=0;j<columns;j++){
								printf("%d ",sum[i][j]);
							}
							printf("\n");
						}

	return EXIT_SUCCESS;
}
