#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;

    
    printf("Enter total units : ");
    scanf("%d", &unit);
    if(unit <= 50)
    {
        amt = unit * 2.7;
    }
    else if(unit <= 50)
    {
        amt = 50 + ((unit-50) * 3.60);
    }
    else if(unit <= 100)
    {
        amt = 100 + ((unit-100) * 4.10);
    }
    else
    {
        amt = 200 + ((unit-200) * 4.10);
    }
    
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}