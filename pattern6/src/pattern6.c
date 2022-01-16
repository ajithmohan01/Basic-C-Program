/*
 ============================================================================
 Name        : pattern6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,i,j;
					setbuf(stdout,NULL);
					printf("Enter the number of rows :");
					scanf("%d",&rows);
					for(i=rows;i>=1;i--){
						for(j=1;j<=rows;j++){
							printf("%d ",i);
						}
						printf("\n");
					}
	return EXIT_SUCCESS;
}
