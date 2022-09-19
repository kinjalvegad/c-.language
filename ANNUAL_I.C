//input annual income .wap that calculate and print income tax.//
#include<stdio.h>
#include<conio.h>
void main()
{
	float ai,tax;
	clrscr();
	printf("Enter annual income");
	scanf("%f",&ai);
	if(ai<=250000)
	  tax=0;
	else if(ai<=500000)
	   tax=(ai-250000)*10/100;
       else if(ai<=750000)
	   tax=(ai-500000)*15/100+25000;
       else if(ai<=1000000)
	   tax=(ai-750000)*20/100+25000+37500;
       else if(ai<=3000000)
	   tax=(ai-1000000)*30/100+25000+37500+50000;
      else  tax=(ai-3000000)*35/100+25000+37500+50000+60000;
	 printf("\n tax=%2f",tax);
	 getch();
}

