//volume of cylinder
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	double r,h,voc;
	clrscr();
	printf("Enter value of r,h");
	scanf("%lf%lf",&r,&h);
	voc=PI*r*r*h;
	printf("voc is %lf",voc);
	getch();
}