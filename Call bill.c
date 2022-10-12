#include <stdio.h>
#include<conio.h>
void main()
{
    int call;
    float rs;
    printf("enter total number of calls");
    scanf("%d",&call);
    if(call<=100)
    {
        rs=call*0;
    }
    else if(call<=300)
    {
        rs=(call-100)*1.10+330;
    }
    else
    {
        rs=(call-300)*1.20+330+360;
    }
    printf("number of calls=rs %2f",rs);
    getchar();
 }
