//input 5 numbers.wap that print smallest no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter 5 numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a<b&&a<c&&a<d&&a<e)
		printf("%d is smallest",a);
	else if(b<a&&b<c&&b<d&&b<e)
		printf("%d is smallest",b);
	else if(c<a&&c<b&&c<d&&c<e)
		printf("%d is smallest",c);
	else if(d<a&&d<b&&d<c&&d<e)
		printf("%d is smallest",d);
	else
		printf("%d is smallest",e);
	getch();
}