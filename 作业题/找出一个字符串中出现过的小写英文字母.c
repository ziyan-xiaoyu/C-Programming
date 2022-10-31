#include<stdio.h>
#include<string.h>
void main()
{ char a[80],b[80];
  int i,j=0,t=0,m,n;
  printf("Input a string:");
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
      if(a[i]>='a'&&a[i]<='z')
      {
          b[i]=a[i];
          for(m=0;m<i;m++)
          {
              if(a[i]!=b[m])t++;
          }
          if(t==i)printf("%c",a[i]);
          t=0;
          j++;
      }
  }
  if(j==0)printf("Not Found!");
}
