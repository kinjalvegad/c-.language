//1,4,7,10,13...n nos:
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,b=1;
	clrscr();
	printf("Enter n:");
	scanf("%d"&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",b);
		b=b+3;
	}
	getch();
}