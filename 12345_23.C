/*  1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5
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
	  for(j=i;j<=n;j++)
	  printf("%5d",j);
	  printf("\n");
	 }
	 getch();
}