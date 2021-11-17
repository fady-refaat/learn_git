/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main() {
	float arr[100];
	int i, n, in, location;

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

	for (i = 0; i < n; i++) {
		scanf("\t%f", &arr[i]);

	}
	/*for (i = 0; i < n; i++) {
	 arr[i] = i;
	 printf("\t %.1f", arr[i] + 1);
	 }
	 */
	// the element to be inserted
	printf("\nEnter the element to be inserted");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &in);

	//element's location
	printf("\nEnter the location :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &location);
	arr[location - 1] = in;

	//printing after editing
	for (i = 0; i < n; i++) {
		//arr[i] = i ;
		printf("\t %.1f", arr[i]);
	}

}

