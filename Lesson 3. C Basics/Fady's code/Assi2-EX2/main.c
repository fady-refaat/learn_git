/*
 * main.c
 *
 *      Author: Fady
 */
#include "stdio.h"
int main(){
	char alphabet = 0;
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alphabet);
	if(alphabet == 'A'||'a'||'E'||'e'||'I'||'i'||'o'||'O'||'u'||'U')
		printf("\n %C is a vowel. ",alphabet);
	else
		printf("\n %C is a consonant. ",alphabet);
	return 0;
}
