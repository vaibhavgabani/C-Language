/*
 * realloc.c
 *
 *  Created on: 22-Feb-2024
 *      Author: root
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *ptr;
	ptr=(char *)malloc(30);
	strcpy(ptr," Fundamentals of Programming");
	printf("%s, Address = %u\n",ptr,ptr);
	ptr=(char *)realloc(ptr,50);
	strcat(ptr," Using C-1");
	printf("%s, Address = %u\n",ptr,ptr);
	free(ptr);
	return 0;
}
