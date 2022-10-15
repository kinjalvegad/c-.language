#include<stdio.h>
#include<conio.h>
int main()
{
    int countPositive=0, countNegative=0, countZero=0, arr[10], n, i;
    printf("How many numbers you want to enter ? ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
            countNegative++;
        else if(arr[i]>0)
            countPositive++;
        else
            countZero++;
    }
    printf("\nOccurrence of");
    printf("\nPositive Numbers = %d times", countPositive);
    printf("\nNegative Numbers = %d times", countNegative);
    printf("\nZero = %d times", countZero);
    getch();
    return 0;
}
