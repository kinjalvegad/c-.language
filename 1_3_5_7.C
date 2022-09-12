//1,3,5,7,9...n nos:
#include<conio.h>
void main()
{
	int i,n,b=1;
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