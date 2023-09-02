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

struct student
{char name[50];
int roll;
float mark;
};

int main() {
	int i;
	struct student stu[10];
	printf("Enter information of students:\n");
	for(i=0;i<10;i++)
	{
		stu[i].roll=i+1;
		printf("for roll number %d\n",stu[i].roll);
		printf("enter name\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%s",stu[i].name);
		printf("enter marks\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%f",&stu[i].mark);

	}
	printf("Display information of students:\n\n");
	for(i=0;i<10;i++)
		{

			printf("information of roll number %d\n",stu[i].roll);
			printf("name:%s\n",stu[i].name);
			printf("mark:%.2f\n",stu[i].mark);

		}
	return 0;
}
