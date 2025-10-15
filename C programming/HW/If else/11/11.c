//Admission Eligibility Check
#include<stdio.h>
int main()
{  int math,phy,che,total,totalpm;

 scanf("%d %d %d",&math,&che,&phy);

 if (math>=65 && phy>=55 && che>=50)
 {
     total=math+phy+che;
     totalpm=math+phy;

     if (total>=190 || totalpm>=140)
     {
         printf("The candidate is  eligible for admission.");
     }
    else if
    {
        printf("The candidate is not eligible for admission.");
    }
 }

 else
 {
     printf("The candidate is not eligible for admission.");
 }
    return 0;
}
