/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alphabet;
		printf("Enter an alphabet ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&alphabet);
		(alphabet=='a'|| alphabet=='A'|| alphabet=='i'|| alphabet=='I'|| alphabet=='u'|| alphabet=='U'|| alphabet=='e'|| alphabet=='E'|| alphabet=='o'|| alphabet=='O') ? printf("%C is a vowel",alphabet): printf("%C is a consonant",alphabet);

		return 0;
}
