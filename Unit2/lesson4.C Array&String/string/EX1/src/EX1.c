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
	char str[100],x;
	int sum =0,i=0;
	printf("Enter a string: \n");
	fflush(stdin);
	fflush(stdout);
	gets(str);

	printf("Enter a character to find frequency: \n");
		fflush(stdin);
		fflush(stdout);
	scanf("%c",&x);

	while(str[i]!=0)
	{
		if(str[i]==x)
			sum++;
		++i;
	}
	if(sum==0)
		printf("no frequency of '%c'\n",x);
	else
		printf("frequency of '%c' = %d \n",x,sum);
}
