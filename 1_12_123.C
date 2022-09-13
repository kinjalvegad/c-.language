/* 1
   1 2
   1 2 3
   1 2 3 4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=i;j++)
	   printf("%5d",j);
	   printf("\n");
	}
	getch();
}

