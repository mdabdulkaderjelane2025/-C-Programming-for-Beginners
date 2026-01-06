#include<stdio.h>
#include<string.h>
int main()
{

    int i;
    char ch[100];

    gets(ch);

    for(i=0;ch[i]!=NULL;i++)
    {
        printf("%c",ch[i]);
    }
     printf("\n");

    puts(ch);

    printf("\n");

    for(i=0;ch[i]!=NULL;i++)
    {

    }
    printf("%s",ch);


  return 0;
}
