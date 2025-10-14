//Triangle Validity by Angles
#include<stdio.h>
int main()
{
    int angle1, angle2, angle3;
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("Triangle is Valid ");
    }
    else
    {
        printf("Triangle is Invalid ");
    }

    return 0;
}

