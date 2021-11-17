/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main() {
	float X[100], sum = 0.0, avg = 0;
	int i, n;
	//get the number of user
	printf("Enter the number of users :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);

	//correct the no of users in case of wrong no

	while (n > 100 || n <= 0) {
		printf("the number of	 users should be in range of (1 -> 100)\n"
				"Enter the number of users :");
		fflush(stdout);
		fflush(stdin);
		scanf("%d", &n);
	}

	//fill in the users number

	for (i = 0; i < n; i++) {
		printf("\n%d. Enter number :", i + 1);
		fflush(stdout);
		fflush(stdin);
		scanf("%f", &X[i]);
		sum += X[i];
	}

	avg = sum / n;
	printf("Average = %.2f", avg);
	return 0;

}
