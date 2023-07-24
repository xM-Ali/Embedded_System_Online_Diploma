/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,sum=0;
			printf("Enter a number : ");
					fflush(stdin);
					fflush(stdout);
					scanf("%d",&num);

			for(i=0;i<=num;i++)
			 sum+=i;

			printf("sum = %d",sum);

			return 0;
}
