/* 5 4 3 2 1
   5 4 3 2
   5 4 3
   5 4
   5
*/
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
	 for(j=n;j>=i;j--)
	  printf("%5d",j);
	  printf("\n");
       }
       getch();
}