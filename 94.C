//  wap to create  pointer of array 94
void main()
{
	int a[5],i,*p;
	clrscr();
	p=a;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",p);
		p++;
       }
       p=a;
       for(i=0;i<5;i++)
       {
		printf("\n a[%d]=%d",i,*p);
		p++;
      }
      getch();
}