/*multiplication */
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k;
	clrscr();
	printf("\n input values in first matrix \ n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		 }
	 }
		printf("\n input values in second matrix \ n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		 }
	 }
	 for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			c[i][j]+=a[i][k]*b[k][j];
		 }
	 }
		printf("\n input values in first matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)

			printf("%d\t",a[i][j]);
			printf("\n");

	 }
	 printf("\n input values in second matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++);

			printf("%d\t",b[i][j]);
			printf("\n");

	 }
	 printf("\n input values in multiplication matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)

			printf("%d\t",c[i][j]);
			printf("\n");

       getch();
}
}