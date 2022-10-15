#include<stdio.h>
void main()
{
    int i,a[2],b[2],sum[2];
    printf("enter array");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a second array");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }
        printf("\n sum of two number=%d",sum[i]);
    sum[i]=a[i]+b[i];

    for(i=0;i<=2;i++)
    {
        printf("%d",sum[i]);
    }
    getchar();
        
    
}
