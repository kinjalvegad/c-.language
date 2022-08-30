//volume of prism:
#include<stdio.h>
#include<conio.h>
void main()
{
	double b,h,vopr;
	clrscr();
	printf("Enter value of b,h");
	scanf("%lf%lf",&b,&h);
	vopr=b*h;
	printf("vopr is %lf",vopr);
	getch();
}