#include<stdio.h>
int main()
{ int i,j,n;
  float e=1,x,a=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=i;j++)
      {
          a=a*j;
      }
      x=1/a;
      e=e+x;
      a=1;
  }
  printf("e=%.4f",e);
  return 0;
}
