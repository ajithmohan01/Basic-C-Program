/*
 ============================================================================
 Name        : secondlargest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,size,arr[100],j,temp;
	setbuf(stdout,NULL);
	printf("enter the size :");
	scanf("%d",&size);
	printf("enter the values of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}

		}

	}
	 printf("The second largest number  is:");
	 printf("%d\t",arr[1]);
	return EXIT_SUCCESS;
}
