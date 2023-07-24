/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,elm,x=0, matrix[101];
	printf("Enter no of elements : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{printf("Enter number %d: \n",i+1);
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&matrix [i]);}

	for(i=0;i<num;i++)
		printf("%d  ",matrix [i]);

	printf("\nEnter the element to be searched : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&elm);

	for(i=0;i<num;i++)
	{
		if(matrix[i]==elm)
		{printf("number found at location : %d  ",i+1);
		x=1;
		break;
		}

	}
	if(x=0)
		printf("number not founded");
}
