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
#define prt fflush(stdin);\
			fflush(stdout);
int main(void) {
	char arr[27];
	char *ptr;
	int x;
	ptr=arr;
	for(x=0;x<26;x++)
	{
		*ptr=x+'A';
		ptr++;
	}
	printf("The Alphabets are :\n");
	ptr=arr;
	for(x=0;x<26;x++)
		{
		printf("%c  ",*ptr);
		ptr++;
		}
}
