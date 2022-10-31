#include<stdio.h>
void main()
{ int i,j=0,a[20];
  a[0]=1;a[1]=1;
  for(i=2;i<20;i++)
  {
      a[i]=a[i-2]+a[i-1];
  }
  for(i=0;i<20;i++)
  {
      printf("%-5d ",a[i]);
      j++;
      if(j%5==0)printf("\n");
  }
}
