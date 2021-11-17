/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main() {
	char text[100] ="0", let;
	int count = 0;
	printf("Enter a string :");
	fflush(stdin);
	fflush(stdout);
	gets(text);
	printf("\nEnter a character to find frequency:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &let);
	for (int i = 0; i < 100; i++) {
		if (let == text[i]) {
			count++;
		}
	}
	printf("Frequency of %c : %d", let, count);
	return 0;
}

