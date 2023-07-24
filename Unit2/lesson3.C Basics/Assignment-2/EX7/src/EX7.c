/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i;
	unsigned long long int f=1;
	printf("Enter a integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	if (num<0)
		printf("Error!!! factorial of negative number doesn't exist");
	else
	{
	for(i=1;i<=num;i++)
		f*=i;
	printf("factorial =  %lu",f);
	}
}
