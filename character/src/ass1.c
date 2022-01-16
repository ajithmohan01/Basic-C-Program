/*
 ============================================================================
 Name        : ass1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char word;
	setbuf(stdout,NULL);
	printf("enter a character :");
	scanf("%c",&word);
	printf("the entered word is :%c",word);
	return EXIT_SUCCESS;
}
