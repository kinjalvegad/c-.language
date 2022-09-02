//input 3 nums.wap that check the nums are side of triangle or not:
#include<stdio.h>
#include<conio.h>
void main()
{
	float x,y,z;
	clrscr();
	printf("Enter value of x,y,z");
	scanf("%f%f%f",&x,&y,&z);
	if(x<y+z && y<x+z && z<x+y)
		printf("side of the triangle",x,y,z);
	else
		printf("not side of triangle",x,y,z);
	getch();
}