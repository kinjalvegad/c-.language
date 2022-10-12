#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{

	  for(j=i;j>=1;j--)
	  {
	  printf("%5d",j);
	  
	  }
	  printf("\n");
	}
	getch();
}
