#include <stdio.h>

int main()

{
    char grade;

    scanf("%c",&grade);

    if (grade=='E')
    {
        printf("Excellent");
    }

    else if (grade=='V')
    {
        printf("Very good");
    }

    else if (grade=='G')
    {
        printf("good");
    }

    else if (grade=='A')
    {
        printf("Avarage");
    }

    else if (grade=='F')
    {
        printf("fail");
    }

    return 0;
}
