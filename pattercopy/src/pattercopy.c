/*
 ============================================================================
 Name        : pattercopy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

int main(void) {
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
		{

			printf(" ");
		}
		for(j=1;j<=5;j++)
		{

			if(j==1||i==5||i==j)
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
