/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct employee {
		char *name;
		int id;
	};
int main(void) {


	struct employee emp1={"mohamed",2992}, emp2={"ahmed",2007}, emp3={"omer",1234};
	struct employee (*arr[3])={&emp1,&emp2,&emp3};
	struct employee (*(*ptr)[3])=&arr;

	printf("employee name: %s\n",(*(*ptr+1))->name);
	printf("employee ID: %d",(*(*ptr+1))->id);

}
