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
#define prt fflush(stdin);\
			fflush(stdout);
int main(void) {
	char str[100],vstr[100];
	char *pstr,*pvstr;
	int i;
	pstr=str;
	pvstr=vstr;
	printf("Input a string : ");
	prt
	gets(str);

	while(*pstr)
	{
		pstr++;
		i++;
	}

	while(i--)
	{
	pstr--;
	*pvstr=*pstr;
	pvstr++;
	}
	*pvstr='\0';
	printf("\n Reverse of the string is : %s",vstr);
}
