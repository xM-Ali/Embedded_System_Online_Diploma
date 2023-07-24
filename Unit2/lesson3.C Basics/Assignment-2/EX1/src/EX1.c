/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	if(num%2==1)
		printf("%d is odd",num);
	else
		printf("%d is even",num);
	return 0;
}
