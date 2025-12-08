#include <stdio.h>

int main()
{
int n,original,rev=0,rem;

scanf("%d", &n);
original = n;

for( ;n>0;n=n/10)
    {
    rem=n%10;
    rev=rev*10+rem;
    }

    if (rev==original)
        {
        printf("%d is a palindrome number",original);
        }
    else
        {
        printf("%d is not a palindrome number",original);
        }

    return 0;
}
