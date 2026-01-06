#include<stdio.h>
int main()
{
    int i;

    char s1[100],s2[100];

    gets(s1);

    for(i=0;s1!=NULL;i++)
    {
        s2[i]=s1[i];
    }

    puts(s2);

 return 0;
}
