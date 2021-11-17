/*
 * main.c
 *
 *      Author: Fady
 */
#include "stdio.h"
int main()
{
	int x = 0 ,y =0 ;
	printf("please enter 2 integers :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x, &y);
	printf("sum equal = %d ",x + y);


}


