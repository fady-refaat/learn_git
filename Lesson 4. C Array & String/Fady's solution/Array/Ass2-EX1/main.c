/*
 * main.c
 *      Author: Fady
 */
#include"stdio.h"
int main() {
	float a[2][2], b[2][2] ,c[2][2];
	int i, j;
	// fill in the 1st matrix
	printf("\nEnter the elements of 1st marix");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("\nEnter a[%d][%d] :", i + 1, j + 1);
			fflush(stdout);
			fflush(stdout);
			scanf("%f", &a[i][j]);

		}
	}
	// fill in the 2nd matrix
	printf("\nEnter the elements of 2nd marix");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("\nEnter b[%d][%d] :", i + 1, j + 1);
			fflush(stdout);
			fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}
	// adding the 2 matrices
	for(i=0 ; i < 2 ; i++){
		for(j=0 ; j<2 ; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	//printing the summation
	printf("\nSum of matrix: \n");
	for(i=0 ; i < 2 ; i++){
			for(j=0 ; j<2 ; j++){
				printf("%.2f \t", c[i][j]);
				if(j==1)
					printf("\n");
			}
		}

}
