/*
 * main.c
 *
 *      Author: Fady
 */
#include "stdio.h"
int main() {
	char op = 0;
	signed int num1 = 0, num2 = 0, result = 0;
	printf("\t\t\tWelcome to calculator in c\n ");
	printf("\t\t\t**************************\n ");
	do {
		printf("Enter operator number to perform the calculation \n");
		printf(" \n 1-Addition  \t \t 2-Subtraction "
				" \n 3-Multiplication \t 4-Division "
				" \n 5-Exit ");

		scanf("%c \n", &op);
		fflush(stdin);
		fflush(stdout);

		/*printf("\nEnter the first number :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &num1);
		printf("\nEnter the second number :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d", &num2);*/

		switch (op) {
		case 1:
			printf("\nYour choice is Addition");
			printf("\nEnter the first number :");
					printf("\nEnter the second number :");
					fflush(stdin);
					fflush(stdout);
					scanf("%d", &num2);

			result = num1 + num2;
			printf("\nAddition = %d", result);
			break;

		case 2:
			printf("\nYour choice is Subtraction");
			printf("\nEnter the second number :");
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &num2);

			result = num1 - num2;
			printf("\nSubtraction = %d", result);
			break;

		case 3:
			printf("\nYour choice is Multiplication");
			printf("\nEnter the second number :");
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &num2);

			result = num1 * num2;
			printf("\nMultiplication = %d", result);
			break;

		case 4:
			printf("\nYour choice is Division");
			printf("\nEnter the second number :");
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &num2);

			result = num1 / num2;
			printf("\nMultiplication = %d", result);
			break;

		case 5:
			printf("\nYour choice is EXIT");
			break;

		default:
			printf("\nSomething is wrong!! ");
			printf("\nPlease try again. ");
			break;

		}
		printf("\n____________________________\n");

	} while (1);

	return 0;
}

