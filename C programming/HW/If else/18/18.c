//Electricity Bill Calculation___help
#include<stdio.h>
int main()
{
    int customerID, units;
    char name[50];
    float amount, surcharge;


    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);


    if (units < 200)
    {
        amount = units * 1.20;
    }
    else if (units >= 200 && units < 400)
    {
        amount = units * 1.50;
    }
    else if (units >= 400 && units < 600)
    {
        amount = units * 1.80;
    }
    else
    {
        amount = units * 2.00;
    }


    if (amount > 400)
    {
        surcharge = amount * 0.15;
        amount += surcharge;
    }


    if (amount < 100)
    {
        amount = 100;
    }


    printf("\nCustomer ID: %d", customerID);
    printf("\nCustomer Name: %s", name);
    printf("\nUnits Consumed: %d", units);
    printf("\nTotal Amount to be Paid: Rs. %.2f", amount);

    return 0;
}

