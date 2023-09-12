/*
 ============================================================================
 Name        : mid(6).c
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
int x;

void unique_number(int arr[], int n)
{
	int j;

	for(j = 0; j < n; ++j)
	{
		if(arr[x] == arr[j] && x != j)
			break;
	}

	if(j == n )
	{
		printf("%d ",arr[x]);
	}
	++x;
	if (x<n)
		unique_number(arr, n);
}

int main()
{
	int n,i;
	int arr[100];

	printf("\nEnter the number of elements : ");
	prt
	scanf("%d",&n);
	printf("\nInput the array elements : ");
	prt

	for(i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}

	unique_number(arr, n);
	return 0;
}
