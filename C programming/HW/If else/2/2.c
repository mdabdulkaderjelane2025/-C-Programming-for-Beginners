//result sheet
#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    if (n>=80 && n<=100)
    {
        printf("A+");
    }

    else if (n>=75 && n<=79)
    {
        printf("A");
    }

    else if (n>=70 && n<=74)
    {
        printf("A-");
    }

    else if (n>=60 && n<=69)
    {
        printf("B");
    }

    else if (n>=50 && n<=59)
    {
        printf("c");
    }

    else
    {
        printf("F");
    }

    return 0;
}
