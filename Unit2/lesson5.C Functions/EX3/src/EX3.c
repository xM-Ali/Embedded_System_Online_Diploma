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


	void Reverse();

int main()
	{
	printf("Enter a sentence:");
	fflush(stdin);
			fflush(stdout);
	Reverse();
	return 0;
	}

	void Reverse()
	{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
	Reverse();
	printf( "%c",c);
	}
	}

