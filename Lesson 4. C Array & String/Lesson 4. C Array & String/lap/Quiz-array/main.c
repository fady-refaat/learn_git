/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main(){
	int arr[1000] ,i,count=0;
	for (i=0;i<1000;i++){
		arr[i]=rand()%(1000+1-0)-0;
	}
	for(i=1;i<1000;i++){
		if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
			count++;

		}
	}
	for(i=0 ;i<1000 ;i++){
		printf("index no [%d] filled with :%d\n",i+1,arr[i]);
	}
	printf("Number of values that satisfy the condition =%d",count);
	return 0;
}

