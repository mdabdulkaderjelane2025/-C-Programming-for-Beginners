//Profit and Loss Calculation
#include<stdio.h>
int main()
{
    int costPrice,sellingPrice,amount;

    scanf("%d %d",&costPrice,&sellingPrice);

    if (sellingPrice>costPrice)
    {
        amount=sellingPrice-costPrice;

        printf(" profit amount : %d", amount);
    }
    else if (costPrice > sellingPrice)
    {
        amount=costPrice-sellingPrice;

        printf(" loss amount : %d", amount);
    }


    else
    {
        printf("No Profit or Loss");
    }

    return 0;
}

