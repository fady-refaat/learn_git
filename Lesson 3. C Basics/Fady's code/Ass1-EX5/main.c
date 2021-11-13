/*
 * main.c
 *
 *      Author: Fady
 */

#include"stdio.h"
int main()
{
	char C;
	printf("Enter a character:");
	fflush(stdin); fflush(stdout);
	scanf("%c", &C);
	printf("\nASCII value of %c = %d",C ,C);

}
