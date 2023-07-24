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
#include "string.h"
int main(void) {
		char str[100],temp;
		int len,i=0;

			printf("Enter a string: \n");
			fflush(stdin);
			fflush(stdout);
			gets(str);

		len=strlen(str)-1;

		while(i<len)
		{
			temp=str[i];
			str[i]=str[len];
			str[len]=temp;
			++i;
			--len;
		}

		printf("reverse string is : %s \n",str);
}
