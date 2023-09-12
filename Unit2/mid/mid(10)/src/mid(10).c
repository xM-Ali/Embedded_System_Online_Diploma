/*
 ============================================================================
 Name        : mid(10).c
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

int main()
{
	int num,one=0,bin=0,i=1,count=0,last=2,max=0;
	printf("\nEnter the number:\n ");
		prt
	scanf("%d",&num);
	while(num>0)
	{
		one=(num%2);
		bin+=(num%2)*i;
		i*=10;
		num/=2;
		if(one==0 && last==2)
		{
			last=0;
		}
		else if(one==1 && last==0)
		{
			count++;
			last=1;
		}
		else if(one==1 && last==1)
		{
			count++;
			last=1;
		}

		else if(one==0 && last==1)
		{
			if(count>max)
				max=count;
			count=0;
			last=0;
		}
	}
	if(num==0 && one==1)
	{
		if(count>max)
			max=count;
	}
	printf("0%d \n ",bin);
	printf("max number of ones between two zeros -->%d",max);

	return 0;

}

