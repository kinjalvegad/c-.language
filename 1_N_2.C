//input an int no.wap that check whether the number is odd,even,zero
void main()
{
	int a;
	clrscr();
	printf("Enter s no.");
	scanf("%d",a);
	a==0?printf("%d is zero",a):a%2==0?printf("%d is even no",a):printf("%d is odd no",a);
	getch();
}