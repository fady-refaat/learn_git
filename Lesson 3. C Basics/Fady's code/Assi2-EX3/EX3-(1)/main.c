/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main() {
	float no1 = 0, no2 = 0, no3 = 0;
	printf("Enter three numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f %f", &no1, &no2, &no3);
	if (no1 >= no2 && no1 >= no3)
		printf("\n Largest number = %.3f",no1);
	else if(no2 >= no1 && no2 >= no3)
		printf("\n Largest number = %.3f",no2);
	else if(no3 >= no1 && no3 >= no2)
		printf("\nLargest number = %.3f",no3);

	return 0;
}

