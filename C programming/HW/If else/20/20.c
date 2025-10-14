//Days in a Month
#include<stdio.h>
int main()
{
    int month;
    scanf("%d", &month);

    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("This month have 31 days");
    }
    else if (month==4 || month==6 || month==9 || month==11)
    {
        printf("This month have 30 days");
    }
    else if (month==2)
    {
        printf("This month have 28 or 29 days");
    }
    else
    {
        printf("Invalid Month Number");
    }

    return 0;
}

