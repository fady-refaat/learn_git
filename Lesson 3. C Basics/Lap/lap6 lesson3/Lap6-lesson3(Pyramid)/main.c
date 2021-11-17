/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main(){
	int row,space, symbol ,Tnrow=5 ;
	//spaces
	for(row = 0 ; row < Tnrow ; row++)
	{
		//spaces
		for(space = 0; space < (Tnrow -row) ; space++)
		{
			printf(" ");

		}
		for(symbol =0 ; symbol < ((2*row)-1) ; symbol++)
		{
			printf("*");
		}
		printf("\n");
	}

		return 0;
}

