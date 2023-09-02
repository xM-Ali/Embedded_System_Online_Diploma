/*
 ============================================================================
 Name        : EX4.c
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
	int arr[15],*ptr,num,i;
	ptr=arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	prt
	scanf("%d",&num);
	ptr=arr;
	printf("Input %d number of elements in the array \n:",num);
		prt
	for(i=0;i<num;i++)
	{
		printf("element - %d : ",i+1);
		prt
		scanf("%d",&arr[i]);
		ptr++;
	}
		printf("The elements of array in reverse order are : \n ");
		for(i=0;i<num;i++)
			{
			    ptr--;
				printf("element - %d :%d \n ",i+1,*ptr);

			}
}
