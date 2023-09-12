/*
 ============================================================================
 Name        : mid(2).c
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
	int num,temp;
	float root=0;
	printf("\nEnter the number to calculate it's square root : ");
	prt
	scanf("%d",&num);
	while(temp!=num)
	{
		root+=0.000001;
		temp=root*root;
	}

	printf("%.3f ",root);
	return 0;
}
