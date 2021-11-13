/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main() {
	float num;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &num);
	if (num > 0)
		printf("\n %.2f is positive ", num);
	else if (num < 0)
		printf("\n %.2f is negative", num);
	else
		printf("\nYou entered zero.");

	return 0;
}

