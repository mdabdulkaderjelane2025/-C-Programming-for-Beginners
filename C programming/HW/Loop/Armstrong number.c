#include <stdio.h>
#include <math.h>
int main()
{
int i,n,original,rem,sum=0,digits=0;
scanf("%d", &n);

original=n;

for (i=n;i>0;i=i/10)
    {
    digits++;
    }

for ( ;n>0;n=n/10)
    {
    rem=n%10;
    sum=sum+pow(rem,digits);
    }

if (sum==original)
    {
    printf("%d is an Armstrong number",original);
    }
else
    {
    printf("%d is not an Armstrong number",original);
    }

    return 0;
}
