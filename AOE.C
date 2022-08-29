//area of an ellipse
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float a,b,aoe;
	clrscr();
	printf("Enter value of a,b");
	scanf("%f %f",&a,&b);
	aoe=3.14*a*b;
	printf("area of an ellipse %f",aoe);
	getch();
}
