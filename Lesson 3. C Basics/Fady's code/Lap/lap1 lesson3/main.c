/*
 * main.c
 *
 *      Author: fady
 */


#include<stdio.h>

 int main() {
	char choice;
	float pi , area	, circumference, radius;
	pi =3.14159;
	printf("please enter the radius of circle : ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	printf("\n Enter your choice(>> a << for calculating area , >> c << for calculating the circumference) : \n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);
	if(choice=='a')
	{
	area = pi * radius * radius;
	printf("\n the area is %f \n ", area);
	}
	else if (choice=='c')
	{
	circumference = 2 * pi * radius ;
	printf("\n the circumference is %f \n", circumference);
	}
	else
	printf("\n wrong choice \n");

	return 0;
}
