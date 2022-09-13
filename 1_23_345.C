/*1
  2 3
  3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k=1;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

	  for(j=1;j<=i;j++)
	  {
	  printf("%5d",k);
	  k++;
	  }
	  printf("\n");
	}
	getch();
}

