/*
 ============================================================================
 Name        : 2pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
			setbuf(stdout,NULL);
			for(i=1;i<=7;i++){
				for(j=1;j<=7;j++){
					if(j==1||i==1||j==7||i==7||i==j||i+j==7+1){
				printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
