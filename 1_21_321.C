//1_21_321 pyramid:
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 for(j=i;j>=1;j--)
	  printf("%5d",j);
	  printf("\n");
	}
	getch();
}