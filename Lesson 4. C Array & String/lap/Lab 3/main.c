/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main()
{
	int i , j;
	float M[3][3] , Mt[3][3];
	//get the data from the user
	for( i=0 ; i<3 ; i++ )
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("please enter the item (%d , %d)\n ", i , j);
			fflush(stdout); fflush(stdin);
			scanf("%f" , &M[i][j]);
		}
	}

	//printing the matrix
	printf("the matrix is \n");
	for(i=0 ; i<3; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("\t %.2f ", M[i][j]);

		}
		printf("\n");

	}
	//transpose steps
	for(i=0 ;i<3 ;i++)
	{
		for(j=0 ; j<3; j++)
		{
			Mt[j][i] = M[i][j];
		}
	}
	printf("the matrix is \n");
		for(i=0 ; i<3; i++)
		{
			for(j=0 ; j<3 ; j++)
			{
				printf("\t %.2f ", Mt[i][j]);

			}
			printf("\n");
}
}

