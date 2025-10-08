#include<stdio.h>
#include<math.h>

int main()
{
    float  y,m,x,c;

    scanf("%f %f %f",&m,&x,&c);

    y=((m*x)/pow(c,2))+ sqrt(m);

    printf("The Floor value of Y= %0.2f\n",floor(y));
    printf("The Round value of Y= %0.2f",round(y));


    return 0;
}

