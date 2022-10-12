// first name,middle name,last name //
void main()
{
	char s[100],c;
	int i=0;
	clrscr();
	printf("Enter first name,middle name and last name\n");
	gets(s);
	printf("\n %c",s[0]);
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]==' ');
		printf("%c",s[i+1]);
	}
	getch();
}