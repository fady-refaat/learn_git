/*
 * main.c
 *      Author: Fady
 */
#include"stdio.h"
int main()
{
	int i = 0, j = 0 ,minimum ;
	printf("please enter your two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d ,%d", &i ,&j );
	minimum= (i>j)? i:j;
	printf("the minimum no equal = %d",minimum);

}
