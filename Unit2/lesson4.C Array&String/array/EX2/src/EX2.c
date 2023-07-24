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

int main(void) {
	int i,n;
	float matrix [200],sum=0;

	printf("Enter the numbers of data : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	if (n>0 && n<=200)
	{
	 for(i=0;i<n;i++)
		{printf("Enter number %d: \n",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&matrix [i]);
		sum+=matrix [i];}
	 printf("average = %f \n",sum/n);
	}
	else
		printf("the numbers should be in rang (1 to 200) \n");

	return 0;
}
