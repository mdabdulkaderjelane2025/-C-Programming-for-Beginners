//Geometrical Shapes Area Calculator
#include<stdio.h>

int main()
{
    int choice;
    float radius, length, width, base, height, area;

    printf("1. Circle\n2. Rectangle\n3. Triangle");
    scanf("%d", &choice);

    if (choice==1)
    {
        scanf("%f", &radius);
        area = 3.1416 * radius * radius;
        printf("The area is : %f", area);
    }
    else if (choice ==2)
    {
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("The area is : %f", area);
    }

    else if (choice==3)
    {
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("The area is : %f", area);
    }

    else
    {
        printf("error");
    }

    return 0;
}

