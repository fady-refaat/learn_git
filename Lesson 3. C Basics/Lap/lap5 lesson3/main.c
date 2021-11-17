/*
 * main.c
 *
 *      Author: Fady
 */
#include"stdio.h"
int main()
{
	int no_students = 0 ,i ;
	float avg = 0 , degree= 0 , sum = 0;
	printf("Enter the number of students: "); //ask user to get n of students
	fflush(stdin); fflush(stdout);
	scanf("%d", &no_students);
	for(i=1; i<=no_students; i++)
	{
		printf("\n Enter student (%d) degree :", i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degree );
		sum += degree;
		avg = sum / no_students;

	}
	printf("\n The average students degree is : %f", avg );
}

