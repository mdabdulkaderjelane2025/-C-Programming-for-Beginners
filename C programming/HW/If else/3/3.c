// print the bigger number among 3
#include <stdio.h>

int main()
{
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);

    if (i > j && i > k)
    {
        printf("i is greater");
    }
    else if (j > k && j > i)
    {
        printf("j is greater");
    }
    else if (k > i && k > j)
    {
        printf("k is greater");
    }
    else
    {
        printf("Others...");
    }

    return 0;
}

