/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
		int count=0,i=0;
		printf("Enter a string: \n");
		fflush(stdin);
		fflush(stdout);
		gets(str);

		while(str[i]!=0)
			{
				++count;
				++i;
			}
		printf("length of string: %d \n",count);
}
