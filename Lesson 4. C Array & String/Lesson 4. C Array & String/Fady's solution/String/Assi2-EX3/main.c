/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
#include"string.h"
int main() {
	char text[30], rev[30];
	int i,j=0,size;
	printf("Enter the string:");
	fflush(stdin);
	fflush(stdout);
	gets(text);
	size = strlen(text);
	for (i = size; i > 0; i--) {
		rev[j]=text[i];
		j++;

	}
	fflush(stdin);
		fflush(stdout);
	printf("\nReverse string is: %s ",rev);

	return 0;
}

