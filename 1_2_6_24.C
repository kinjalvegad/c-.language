//1,2,6,24,120..n nos:
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1,b=1;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 printf("%d\t",a);
	 a=a*b;
	 b=b+1;
	}
	getch();
}
