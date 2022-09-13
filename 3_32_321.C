// 3_32_321 pyramid:
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		printf("%5d",j);
		printf("\n");
	 }
	 getch();
}

