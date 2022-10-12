#include <stdio.h>
#include<conio.h>
void main()
{
    int call,total;
    float rs;
    clrscr();
    printf("enter total number of calls");
    scanf("%d",&call);

    if(call<=100)
    {
	rs=call*0;

    }
    else if(call<=300)
    {
	rs=(call-100)*1.10;

    }
    else
    {
	rs=(call-300)*1.20+220;

    }
     total =rs+(rs*12.33/100)+500;
    printf("number of calls=rs %2f %d",rs,total);
    getch();
 }