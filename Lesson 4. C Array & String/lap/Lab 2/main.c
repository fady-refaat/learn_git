/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main()
{
	int mat[3][3] ,r ,c;
	for(r=1 ;r<=3;r++){
		for(c=1; c<=3 ;c++){
			printf("\nEnter Matrix [%d][%d] value :",r,c);
			scanf("%d",&mat[r][c]);
		}
	}
	printf("the Matrix value :");
	for(r=1;r<=3;r++){
		for(c=1;c<=3;c++){
			printf("%d \t",mat[r][c]);
		}
	}
}

