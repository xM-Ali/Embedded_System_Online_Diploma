/*
 ============================================================================
 Name        : mid(4).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main()
{
	int num;
	char str[100];
	gets(str);
	strrev(str);
	num=atoi(str);
	printf("%d",num);

	return 0;

}
