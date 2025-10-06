#include<stdio.h>
#include<math.h>
int main()
{ float v,u,a,s;

  scanf("%f %f %f",&u,&a,&s);

  v=sqrt((u*u)+2*a*s);

  printf("%f",v);

    return 0;
}
