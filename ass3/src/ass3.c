/*
 ============================================================================
 Name        : ass3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
int principal_amount;
float interest_rate,number_of_years,simple_interest;
setbuf(stdout,NULL);
printf("Enter the principal amount :");
scanf("%d",&principal_amount);
printf("Enter the interest rate :");
scanf("%f",&interest_rate);
printf("Enter the number of years :");
scanf("%f",&number_of_years);
simple_interest=(interest_rate*principal_amount*number_of_years)/100;
printf("The simple interest is  : %f",simple_interest);

	return EXIT_SUCCESS;
}
