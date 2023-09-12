/*
 ============================================================================
 Name        : mid(3).c
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
	int f,l,i,j,count=0;

	printf("input two numbers to print all prime numbers between them:\n ");
	prt
	scanf("%d",&f);
	prt
	scanf("%d",&l);
	prt
	for(i=f;i<=l;i++)
	{

		for(j=2;j<(i/2)+1;j++)
		{
			if((i%j)==0)
				count++;
		}
		if(count==0)
		{
			printf("%d ",i);
		}
		count=0;

	}
	return 0;
}
