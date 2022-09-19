//break_continue//
#include<conio.h>
void main()
{
	int i,n,j;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=10;j++)
		{
			if((i+j)%4==0)
			break;
			if((i*j)%4==0)
			continue;
			printf("\n i=%d\tj=%d",i,j);
		}

	 }
	 getch();
}

