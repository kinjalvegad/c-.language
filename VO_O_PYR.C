//volume of pyramid
#include<stdio.h>
#include<conio.h>
void main()
{
	double l,w,h,vopy;
	clrscr();
	printf("Enter value of l,w,h");
	scanf("%lf%lf%lf",&l,&w,&h);
	vopy=l*w*h/3;
	printf("vopy is %lf",vopy);
	getch();
}

