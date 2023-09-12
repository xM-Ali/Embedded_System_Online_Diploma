/*
 ============================================================================
 Name        : mid(9).c
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
	int i=0,x=0,len;
	char arr[100],str[100];
	gets(arr);
	len=strlen(arr);

	while (arr[i]!='\0')
	{
		if(arr[i]==' ')
			x=i;
		i++;
	}

	if(x>0)
	{
		arr[x]='\0';
		x++;

		for(i=0;i<len;i++,x++)
			str[i]=arr[x];

		strcat(str," ");
		strcat(str,arr);
		printf("%s",str);
	}

	else
		printf("%s",arr);


}
