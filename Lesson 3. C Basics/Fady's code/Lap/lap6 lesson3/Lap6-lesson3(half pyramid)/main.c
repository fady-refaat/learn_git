/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main(){
	int i , j , row =10 ;
	for (i=0 ; i < row ;i++){
		for (j = 0; j < i ; j++)
		{
			printf("%d ", j+1);
		}
		printf("\n");
	}
	return 0;

}

