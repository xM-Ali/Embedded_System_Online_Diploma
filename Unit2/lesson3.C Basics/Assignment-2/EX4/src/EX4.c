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
	float num;
	printf("Enter a number : ");
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&num);

	if(num==0)
		printf("you intered zero");
	else
		(num>0) ? printf("%f is positive",num): printf("%f is negative",num);

}
