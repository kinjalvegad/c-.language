//write an algorithm that calculate and print area of circle:
#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
	 float r;
	clrscr();
	printf("enter number:");
	scanf("%f",&r);
	a=pi*r*r;
	printf("area=%f",a);
	getch();
}