//Coordinate Quadrant Identification
#include<stdio.h>
int main()
{ int a,b;
  scanf("%d %d",&a,&b);

  if (a>=0 && b>=0)
  {
      printf("The number is in 1st Quadrant ");
  }

  else if (a<0 && b>=0)
  {
      printf("The number is in 2nd Quadrant");
  }

  else if (a<0 && b<0)
  {
      printf("The number is in 3rd Quadrant");
  }

  else if (a>=0 && b<0)
  {
      printf("The number is in 4th Quadrant");
  }

    return 0;
}
