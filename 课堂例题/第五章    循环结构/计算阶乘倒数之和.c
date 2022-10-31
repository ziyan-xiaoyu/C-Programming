#include<stdio.h>
int main()
{ int i,j=1,n;
  float e=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      e=e+1.0/(i*j);
      j=i*j;
  }
  printf("e=%f",e);
  return 0;
}
