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
int power(int,int);

int main(void) {
	int num,p;

	printf("Enter base number:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	printf("Enter power number:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&p);

	printf(" %d^%d = %d ",num,p,power(num,p));
}


int power(int num,int p)
{

	if(p!=0)
	return num*power(num,p-1);

	else
		return 1;

}
