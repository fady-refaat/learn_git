/*
 * main.c
 *
 *      Author: Fady
 */

#include "stdio.h"
int main(){
	char text[100];
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(text);
	int i=0;
	while(text[i] != 0 ){
		i++;
	}
	printf("\nLength of string:%d",i);
	return 0;
}
