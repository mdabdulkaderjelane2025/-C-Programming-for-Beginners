//Quadratic Equation Roots
#include <stdio.h>
#include<math.h>
int main()

{ int a, b, c, d;
  float e,f;

  scanf("%d%d%d", &a, &b, &c);
  d = b*b - 4*a*c;
  if(d == 0)
   {
     e = -b / (2.0 * a);
     e=f;
     printf("First  Root Root1 = %f\n", e);
     printf("Second Root Root2 = %f\n", f);

     }
  else if(d > 0)
      {
          e = (-b + sqrt(d)) / (2 * a);
          f = (-b - sqrt(d)) / (2 * a);
          printf("First  Root Root1 = %f\n", e);
          printf("Second Root Root2 = %f\n", f);
      }

  else
  {
      printf("no solution to this problem because roots are imaginary");
  }


    return 0;
}
