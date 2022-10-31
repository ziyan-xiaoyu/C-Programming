#include<stdio.h>
void main()
{ int i,j=0,a1=1,a2=1;
  for(i=1;i<=10;i++)
  {
      printf("%-5d %-5d ",a1,a2);
      a1=a1+a2;
      a2=a1+a2;
      j=j+2;
      if(j%4==0)
        printf("\n");
  }
}
