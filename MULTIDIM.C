//multi  dimensional string//
void main()
{
	char s1[10][20];
	int i;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter name-%d:",i+1);
		scanf("%s",s1[i]);
       }
       for(i=0;i<10;i++)
       {
	printf("\n name-%d=%s",i+1,s1[i]);
       }
       getch();
}