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
    for(j=1;j<=i;j++)
      printf("  ");
   for(j=n;j>=i;j--)
     printf("%4d",j);
     printf("\n");
   }
   getch();
}















