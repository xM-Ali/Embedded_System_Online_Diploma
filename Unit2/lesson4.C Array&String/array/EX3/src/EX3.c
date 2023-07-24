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

int main(void) {
	int i,j,r,c;
	float matrix [50][50],trans[50][50];

	printf("Enter the number of coloms : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&c);

	printf("Enter the number of rows : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&r);

	if(r>0 && r<=50 && c>0 && r<=50)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{printf("Enter a%d%d \n",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix [i][j]);}
		}

		printf("Entered matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{printf("%f ",matrix [i][j]);
			if (j==c-1)
				printf("\n");}
		}

		printf("transpos of matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				trans [j][i]=matrix [i][j];
		}

		for(i=0;i<c;i++)
		{
			for(j=0;j<r;j++)
			{ printf(" %.1f ",trans [i][j]);
			if (j==r-1)
				printf("\n");}
		}

	}
	else
		printf("ERROR! rows and coloms should be in rang (1 to 50)\n");
}
