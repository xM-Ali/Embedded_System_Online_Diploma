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

void prime_numbers(int);
int flag;

int main(void) {
	int num1,num2,i;
	printf("Enter two numbers (ivervals):\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("prime numers between %d and %d are: ",num1,num2);
	for(i=num1+1;i<num2;i++)
	{prime_numbers(i);
	if(flag==0)
		printf("%d  ",i);}
}



void prime_numbers(int num)
{
	int j;

	flag=0;
	for(j=2;j<num/2;j++)
	{
		if(num%j==0)
			flag++;
	}

}
