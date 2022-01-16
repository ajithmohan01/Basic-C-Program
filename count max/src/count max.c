/*
 ============================================================================
 Name        : count.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100],maxchar;
	int i,j,length=0,count=0,max;
	setbuf(stdout,NULL);
	printf("enter the word ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	for(i=0;i<length;i++){
		count=1;
		for(j=1;j<length;j++){
			if(str[i]==str[j]){
				count++;
			}
			if(max<count){
				max=count;
				maxchar = str[i];
			}
			}
	}

	return EXIT_SUCCESS;
}
