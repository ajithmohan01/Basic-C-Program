/*
 ============================================================================
 Name        : ass13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[100],i,length,flag=0;
	setbuf(stdout,NULL);
	printf("Enter the word to check :");
	scanf("%s",arr);
	for(i=0;arr[i]!='\0';i++){
		length++;
	}
	for(i=0;i<length;i++){
		if(arr[i]!=arr[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("The word is not palindrome ");
	}else
	{
		printf("The word is palindrome ");
	}
		return EXIT_SUCCESS;
}
