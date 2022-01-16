/*
 ============================================================================
 Name        : frequency.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,arr[100],arr2[100],count=0,j;
	setbuf(stdout,NULL);
	printf("enter the size of array :");
	scanf("%d",&size);
	printf("enter the elements in array :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		count=1;
		if(arr[i]!=-1)
		{
			for(j=i+1;j<size;j++)
			{
				if(arr[i]==arr[j])
				{
				count++;
				arr[j]=-1;
				}
			}
			arr2[i]=count;
		}
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]!=-1)
		{
			printf("number of %d is %d \n",arr[i],arr2[i]);
		}
	}

	return EXIT_SUCCESS;
}
