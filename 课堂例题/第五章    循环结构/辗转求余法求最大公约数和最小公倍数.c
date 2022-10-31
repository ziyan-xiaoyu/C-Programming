#include<stdio.h>
int main()
{ int a,b,i,j;
  scanf("%d,%d",&a,&b);
  j=a*b;
  do
  {
      i=a%b;
      a=b;
      b=i;
  }while(i>0);
  printf("%d,%d",a,j/a);
  return 0;
}
