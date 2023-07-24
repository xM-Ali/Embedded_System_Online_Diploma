/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float matrix_1 [2][2];
	float matrix_2 [2][2];
	float matrix_sum [2][2];
	int i,j;
	printf("Enter the elements of the 1st matrix \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			{printf("Enter a%d%d \n",i+1,j+1);
		fflush(stdin);
			fflush(stdout);
		  scanf("%f",&matrix_1 [i][j]);}
	}

	printf("Enter the elements of the 2st matrix\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
				{printf("Enter b%d%d\n",i+1,j+1);
			fflush(stdin);
				fflush(stdout);
			  scanf("%f",&matrix_2 [i][j]);}
		}
		printf("suming natrix is:\n");
		for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
						{matrix_sum [i][j]= matrix_1 [i][j]+matrix_2 [i][j];
					printf(" %.1f ",matrix_sum [i][j]);
					if (j==1)
						printf("\n");}
				}


	return 0;
}
