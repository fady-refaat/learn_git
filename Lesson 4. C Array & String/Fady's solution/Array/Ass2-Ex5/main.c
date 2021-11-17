/*
 * main.c
 *      Author: Fady
 */
#include "stdio.h"
int main() {
	float arr[100], s;
	int i, n;
	printf("\nEnter the number of elements:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);
	//check the number of elements in the range
	while (n > 100 || n <= 0) {
		printf("\nThe number of elements should be in range(1---->100)\n"
				"\nEnter the number of elements:");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &n);
	}
	//fill in the array
	for (i = 0; i < n; i++) {
		scanf("\t%f", &arr[i]);

	}
	printf("\nEnter the elements to be searched");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &s);
	//search in the array
	for (i = 0; i < n; i++) {
		if (arr[i] == s) {
			printf("\nNumber found at the location: %d", i + 1);
		}
	}
}

