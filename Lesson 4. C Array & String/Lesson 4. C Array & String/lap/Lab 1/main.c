/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main ()
{
	int i;
	float degrees[10];
	for(i=0 ; i<10 ; i++)
	{
		printf("\n please enter the student no %d degrees",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degrees[i]);

	}

	for(i=0 ; i<10 ; i++)
	{
		printf("\n the student no %d degrees= %f", i+1 , degrees[i]);
	}
}



