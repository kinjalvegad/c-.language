//increment,decrement:
void main()
{
	int a,b;
	clrscr();
	a=1;
	b=a++;
	printf("\n a=%d\t b=%d",a,b);
	a=1;
	b=a++ + ++a;
	printf("\n a=%d\t b=%d",a,b);
	a=1;
	b=a++ + ++a + a++;
	printf("\n a=%d\t b=%d",a,b);
	a=1;
	b=a++ + ++a + a++ + ++a;
	printf("\n a=%d\t b=%d",a,b);
	a=1;
	b=a-- + ++a + a-- + ++a;
	printf("\n a=%d\t b=%d",a,b);
	getch();
}