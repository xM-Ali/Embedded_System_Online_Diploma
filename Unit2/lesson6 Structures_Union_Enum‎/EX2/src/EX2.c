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
	struct distance
	{
		int feet;
		float inch;
	}num1,num2,sum;

	printf("Enter information for 1st distance:\n");
		printf("Enter feet:\n");
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&num1.feet);
			printf("Enter inch:\n");
						fflush(stdin);
						fflush(stdout);
						scanf("%f",&num1.inch);

						printf("Enter information for 2st distance:\n");
								printf("Enter feet:\n");
									fflush(stdin);
									fflush(stdout);
									scanf("%d",&num2.feet);
									printf("Enter inch:\n");
												fflush(stdin);
												fflush(stdout);
												scanf("%f",&num2.inch);

		sum.feet=num1.feet+num2.feet;
		sum.inch=num1.inch+num2.inch;

		if(sum.inch>12)
		{sum.inch-=12;
		sum.feet++;}

		printf("sum of ddistace = %d '-%.2f'",sum.feet,sum.inch);


	return 0;
}
