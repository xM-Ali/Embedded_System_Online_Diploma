/*
 ============================================================================
 Name        : mid(5).c
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
	int num,one=0,bin=0,i=1;
	scanf("%d",&num);
	while(num>0)
	{
		one+=(num%2);
		bin+=(num%2)*i;
		i*=10;
		num/=2;
	}
	printf("0%d --> ",bin);
	printf("number of one's= %d",one);


	return 0;

}
