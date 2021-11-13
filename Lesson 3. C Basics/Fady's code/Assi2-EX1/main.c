/*
 * main.c
 *
 *      Author: Fady
 */


#include"stdio.h"
int main(){
	int num =0;
	printf("Enter an integer you want to check:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	if((num%2)==0){
		printf("%d is odd.",num);
	}
	else{
		printf("%d is even.", num);

	}
}

