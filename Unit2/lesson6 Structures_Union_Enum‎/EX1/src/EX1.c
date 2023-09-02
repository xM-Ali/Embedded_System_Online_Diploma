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

struct student
{
	char name[50];
	int roll;
	float marks;
};
int main(void) {
	struct student s;
	printf("Enter information about students:\n");
	printf("Enter name:\n");
		fflush(stdin);
		fflush(stdout);
		scanf("%s",s.name);

		printf("Enter roll:\n");
				fflush(stdin);
				fflush(stdout);
				scanf("%d",&s.roll);

				printf("Enter marks:\n");
						fflush(stdin);
						fflush(stdout);
						scanf("%f",&s.marks);

						printf("disblay informations:\n");
							printf("name:%s\n",s.name);
							printf("roll:%d\n",s.roll);
							printf("marks:%f\n",s.marks);
	return 0;
}
