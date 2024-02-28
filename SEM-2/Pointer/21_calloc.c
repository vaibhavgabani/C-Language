/*
 * 3_calloc.c
 *
 *  Created on: 21-Feb-2024
 *      Author: root
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("Enter Number of Elements : ");
	scanf("%d",&n);

	ptr=(int *)calloc(n,sizeof(int));

	//if memory can't be allocated
	if(ptr == NULL)
	{
		printf("\nERROR ! Memory Not Allocated");
		exit(0);
	}
	printf("Enter Element : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}

	printf("\nSum = %d",sum);

	//deallocating the memory
	free(ptr);

	return 0;
}
