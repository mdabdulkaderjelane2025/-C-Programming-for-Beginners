#include<stdio.h>
#include<string.h>
int main()
{

   int i,count;
   char s1[100];

   gets(s1);

   for(i=0;s1[i]!=NULL;i++)
   {
       count++;
   }
   printf("the length of string is %d",count);

  return 0;
}
