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
#define prt fflush(stdin);\
			fflush(stdout);
int main(void) {
	int m,*ptr;
	m=29;
	ptr=&m;
	printf("Adress of m %p \n",&m);
	prt
	printf("value of m %d \n\n\n",m);
    prt
	printf("Now ab is assigned with the address of m. \n");
    prt
	printf("Adress of m %p \n",ptr);
	prt
	printf("value of m %d \n\n\n",*ptr);

	m=34;
	printf("The value of m assigned to 34 now.\n");
	prt
	printf("Adress of m %p \n",ptr);
	prt
	printf("value of m %d \n\n\n",*ptr);

	*ptr=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	prt
	printf("Adress of m %p \n",ptr);
	prt
	printf("value of m %d \n",*ptr);


}
