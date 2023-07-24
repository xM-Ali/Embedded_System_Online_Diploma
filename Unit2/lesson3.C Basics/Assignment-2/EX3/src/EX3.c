/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3;
		printf("Enter three numbers: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f %f",&num1,&num2,&num3);
		if(num1>=num2 && num1>=num3)
			printf("largest number is : %f",num1);
		else if(num2>=num1 && num2>=num3)
		    printf("largest number is : %f",num2);
		else if(num3>=num2 && num3>=num1)
		    printf("largest number is : %f",num3);
}
