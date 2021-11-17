/*
 * main.c
 *
 *      Author: Fady
 */

#include"stdio.h"
int main()
{
	float a, b, c;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("\nEnter value of b: ");
	fflush(stdin); fflush(stdout);

	scanf("%f", &b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter swapping, value of a = %.2f", a);
	printf("\nAfter swapping, value of b = %.2f ", b);
}
