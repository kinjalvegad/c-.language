//1_2_3_...3__2_1...n nos:
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;++i)
		printf("%d\t",i);
	       printf("\n");
	for(i=10;i>=1;--i)
		printf("%d\t",i);
	getch();
}