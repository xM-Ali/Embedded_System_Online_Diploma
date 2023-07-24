/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,elm,loc, matrix[101];
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

	printf("\nEnter the element to be inserted : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&elm);

	printf("Enter the location : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&loc);

	for(i=num;i>=loc;i--)
		matrix[i]=matrix[i-1];


	matrix[loc-1]=elm;

	for(i=0;i<=num;i++)
		printf("%d  ",matrix [i]);






}
