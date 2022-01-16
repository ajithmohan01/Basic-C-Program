/*
 ============================================================================
 Name        : deletingnuminchar.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,length=0,k;
	char word[100],num;
	setbuf(stdout,NULL);
	printf("enter the word :");
	gets(word);
	for(i=0;word[i]!='\0';i++){
		length++;
	}
	printf("\n%d",length);
	printf("\n");
	for(i=0;i<length;i++){
		num='0';
		for(j=0;j<10;j++){
			if(word[i]==num){
				for(k=i;k<length;k++){
				word[k]=word[k+1];
			}
				length--;
				i--;
			}
			num++;
		}
	}
	printf("arra after delecting :%s",word);
	return EXIT_SUCCESS;
}
