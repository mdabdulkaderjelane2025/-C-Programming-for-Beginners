#include<stdio.h>
#include<math.h>

int main()
{
    float  y,m,x,c;

    scanf("%f %f %f",&m,&x,&c);

    y=((m*x)/pow(c,2))+ sqrt(m);

    printf("The value of Y= %0.2f",y);

    return 0;
}
