//pass,fail,atkt
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3;
	clrscr();
	printf("Enter marks of 3 subject:");
	scanf("%d %d %d",&m1,&m2,&m3);
	if(m1>=40 && m2>=40 && m3>=40)
	{
	 printf("pass");
	}
	else if(m1<40 && m2>=40 && m3>=40)
	{
	   printf("ATKT");
	}
	 else if(m1>=40 && m2<40 && m3>=40)
	 {
	     printf("ATKT");
	 }
	 else if(m1>=40 && m2>=40 && m3<40)
	 {
	   printf("ATKT");
	 }
	 else
	 {
		printf("fail");
	 }
	 getch();
}