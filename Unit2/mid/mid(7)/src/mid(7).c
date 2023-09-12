/*
 ============================================================================
 Name        : mid(7).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int i,sum;
int main() {
	if(i==100){
		sum+=100;
		printf("%d\n",sum);
	}

	if(i<100){
		sum+=i;
		i++;
		main();
	}

	return 0;
}
