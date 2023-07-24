/*
 ============================================================================
 Name        : EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char o;
	float num1, num2;
	printf( "Enter operator either + or - or * or divide");
	fflush(stdin);
	fflush(stdout);
	scanf( "%C", &o);

	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f", &num1,&num2);
	switch(o) {

	case '+':
	printf("%f+%f=%f", num1, num2, num1+num2);
	break;

	case '-':
	printf("%f-%f=%f" ,num1, num2, num1-num2);
	break;

	case '*':
	printf("%f *%f=%f" ,num1, num2, num1*num2);
	break;

	case '/':
	printf("%f/%f=%f", num1, num2, num1/num2);
	break;

	default:
	printf("Error! operator is not correct");
	break;
	}
	return 0;
}
