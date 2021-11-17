/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main()
{
	float a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("\n Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	a = a - b;
	b = a + b;
	a = b - a;
	printf("\nAfter swapping, value of a = %.2f ",a);
	printf("\nAfter swapping, value of b = %.2f ",b);

}


