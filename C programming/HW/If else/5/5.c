#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);

    if (m > 0)
    {
        n = 1;
    }
    else if (m == 0)
    {
        n = 0;
    }
    else if (m < 0)
    {
        n = -1;
    }

    printf("The value of n= %d",n);

    return 0;
}

