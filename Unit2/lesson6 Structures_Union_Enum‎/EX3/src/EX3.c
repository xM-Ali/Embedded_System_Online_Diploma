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


struct Complex
	{
		float real;
		float imag;
	};

struct Complex add(struct Complex num1,struct Complex num2)	;

int main(void) {
	struct Complex num1,num2,sum;
	printf("for 1st complex number:\n");
			printf("Enter real:\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%f",&num1.real);
				printf("Enter imaginary:\n");
							fflush(stdin);
							fflush(stdout);
							scanf("%f",&num1.imag);

							printf("for 2st complex number:\n");
										printf("Enter real:\n");
											fflush(stdin);
											fflush(stdout);
											scanf("%f",&num2.real);
											printf("Enter imaginary:\n");
														fflush(stdin);
														fflush(stdout);
														scanf("%f",&num2.imag);
	sum=add(num1,num2);
	printf("sum=%.2f+%.2fi\n",sum.real,sum.imag);
	return 0;
}

struct Complex add(struct Complex num1,struct Complex num2)
{
struct Complex sum1;
sum1.real=num1.real+num2.real;
sum1.imag=num1.imag+num2.imag;
return sum1;


}
