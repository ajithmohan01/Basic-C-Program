/*
 ============================================================================
 Name        : ass6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	setbuf(stdout,NULL);
	printf("enter a number from 1 to 7 : ");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("SUNDAY");
			break;
		case 2:
			printf("MONDAY");
			break;
		case 3:
			printf("TUESDAY");
			break;
		case 4:
			printf("WEDNESDAY");
			break;
		case 5:
			printf("THUESDAY");
			break;
		case 6:
			printf("FRIDAY");
			break;
		case 7:
			printf("SATURDAY");
			break;
		default:
			printf("Invalid entry");
		}

	return EXIT_SUCCESS;
}
