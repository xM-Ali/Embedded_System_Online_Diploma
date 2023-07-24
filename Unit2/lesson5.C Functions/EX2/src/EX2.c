/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main(void) {
	int num;

	printf("Enter an positive integer:\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&num);
		printf("factorial of %d is: %d ",num,factorial(num));
}


int factorial(int num)
{

	if(num!=1)
		num*=factorial(num-1);
	return num;
}
