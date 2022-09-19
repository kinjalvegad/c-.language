//input an int no.wap that check whether the no is murpy or not//
#include<math.h>
void main()
{
	int n,p,m,c=0,s;
	clrscr();
	printf("Enter no:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
	   c++;
	   n=n/10;
	}
	s=m*m;
	p=pow(10,c);
	n=s%p;
	if(m==n)
		printf("\n%d is murpy",m);
	else
		printf("\n%d is not murpy",m);
	getch();
}



