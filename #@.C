/*#
  @#
  #@#
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
	    for (j=i;j>=1;j--)
	    {
	      if(j%2==0)
		 printf("@");
	      else
		  printf("#");
	    }
	    printf("\n");
	    }
	    getch();
}



















