//150,151,151,152....n
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=-1, b=1,s,i,n;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 s=a+b;
	 printf("%d\t",s+150);
	 a=b;
	 b=s;
	}
	getch();
}