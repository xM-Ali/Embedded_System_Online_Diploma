/*
 ============================================================================
 Name        : mid(1).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,sum=0;
	scanf("%d",&num);
	fflush(stdin);
	fflush(stdout);
	while(num!=0)
	{
		sum+=num%10;
		num/=10;
	}

	printf("%d",sum);

	return 0;

}


