//simple macro
#define PI 3.14

//argument macro
#define s(r) r*r

//nested macro
#define c(r) s(r)*r
void main ()
{
	float x,a,v;
	clrscr();
	printf("Enter radius:");
	scanf("%f",&x);
	a=PI*s(x);
	v=4*PI*c(x)/3;
	printf("\n area of circle=%f",a);
	printf("\n volume of sphere=%f",v);
	getch();
}