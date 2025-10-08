#include<stdio.h>
#include<math.h>

int main()
{
    float  y,m,x,c,w;

    scanf("%f %f %f",&m,&x,&c);

    y=((m*x)/pow(c,2))+ sqrt(m);

    printf("The value of Y= %0.2f\n",y);
    printf("The Floor value of Y= %0.2f\n",floor(y));
    printf("The Round value of Y= %0.2f\n",round(y));

    y += 2;

    w = pow(y,3)+sqrt(m);

    printf("The increment value of Y= %0.2f\n",y);
    printf("The value of W= %0.2f",w);


    return 0;
}
