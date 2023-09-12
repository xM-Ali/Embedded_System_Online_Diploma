/*
 ============================================================================
 Name        : mid(8).c
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

void revers (int arr[],int n);

int main(void) {
	int n,i;
	printf("\nEnter the number of elements : ");
	prt
	scanf("%d",&n);
	int arr[100];
	printf("\nInput the array elements : ");
	prt
	for(i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}

	revers(arr,n);

	for(i = 0; i < n; ++i)
	{
		printf("%d ",arr[i]);
	}

}

void revers (int arr[],int n){
	int i,temp;
	for(i = 0; i <= n/2; ++i)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
}
