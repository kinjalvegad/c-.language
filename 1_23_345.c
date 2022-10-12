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

	  for(j=1;j<=i;j++)
	  {
	  printf("%5d",i+j-1);
	  
	  }
	  printf("\n");
	}
	getch();
}
