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
#define pi 3.14
#define area(r) (pi*r*r)

int main(void) {
	float radius,area;
	printf("enter the radius\n");
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&radius);
	area=area(radius)	;
	printf("area=%.2f",area);
}
