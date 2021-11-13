/*
 * main.c
 *
 *      Author: Fady
 */

#include"stdio.h"
int main ()
{
	float x,y ;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x ,&y);
	fflush(stdin); fflush(stdout);
	printf("\n product = %f", x*y);


}

