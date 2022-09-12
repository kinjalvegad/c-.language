//2,4,6,8,10...n nos:
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,b=2;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",b);
		b=b+2;
	}
	getch();
}