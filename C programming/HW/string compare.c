#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count,s1len,s2len;
    char s1[100],s2[100];


    gets(s1);
    gets(s2);

    for(i=0;s1[i]!=NULL;i++)
    {
       s1len++;
    }
        for(j=0;s2[j]!=NULL;j++)
    {
        s2len++;
    }

    if(s1len!=s2len)
    {
        printf(" not same");
    }

    else
    {
        for(i=0;i<s1;i++)
        {
            if(s1[i]==s2[i])
            {
                count++;
            }
        }
        if(count==s1len)
        {
            printf("same");
        }
        else
        {
            printf("not same");
        }

    }



  return 0;
}
