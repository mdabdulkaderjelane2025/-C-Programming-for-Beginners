#include <stdio.h>
int main()
{
int n,rem;
scanf("%d",&n);

for ( ;n>0;n=n/10)
    {
    rem=n%10;
    printf("%d\n",rem);
    }

    return 0;
}

