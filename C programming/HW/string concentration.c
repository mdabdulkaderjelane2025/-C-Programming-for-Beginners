#include<stdio.h>
#include<string.h>
 int main()
 {
     int i,j,count;
     char s1[100],s2[100];

     gets(s1);
     gets(s2);

     for(i=0;s1[i]!=NULL;i++)
     {
         count++;
     }
     for(j=0;s2[j]!=NULL;j++)
     {
         s1[count+j]=s2[j];
     }
     puts(s1);

   return 0;
 }
