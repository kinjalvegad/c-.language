//0,1,1,2,3,5,8,13,21...n nos:
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=-1,b=1,s;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=a+b;
		printf("%d\t",s);
		a=b;
		b=s;
	}
	getch();
}