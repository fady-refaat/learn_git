/*
 * main.c
 *      Author: Fady refaat
 */
#include"stdio.h"
int main() {
	float arr[100][100], tr[100][100];
	int i, j, r, c;
	// getting the number of array elements
	printf("Enter the number of rows and columns:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &r, &c);

	//check the size of array is in the range
	while ((r | c) > 100 || (r | c) <= 0) {
		printf("the number elements should be in range of (1 -> 100)\n "
				"Please enter the number of rows and columns: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%d %d", &r, &c);
	}
	//fill in the matrix
	printf("\nEnter the elements of Matrix:");

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("\nEnter the element of a[%d][%d]:", i + 1, j + 1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f", &arr[i][j]);

		}
	}
	//printing the entered matrix
	printf("\nEntered Matrix :\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("\t%.2f", arr[i][j]);
		}
		printf("\n");
	}
	//Transposing the matrix
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			tr[j][i] = arr[i][j];
		}
	}
	//printing the transposed matrix
	printf("\nTranspose of Matrix: \n");

		for (i = 0; i < c; i++) {
			for (j = 0; j < r; j++) {
				printf("\t%.2f", tr[i][j]);
			}
			printf("\n");
		}

}

