//#include<stdio.h>
//void main()
//{ int i,n;
//  for(n=2;n<=100;n++)
//  {
//      for(i=2;i<n;i++)
//      {
//          if(n%i==0)break;
//      }
//      if(i==n)
//      printf("%d ",n);
//  }
//}
//#include<stdio.h>
//void main()
//{ int i,j=0,n;
//  for(n=2;n<=100;n++)
//  {
//      for(i=2;i<n;i++)
//      {
//          if(n%i==0)break;
//      }
//      if(i==n)
//      {
//          printf("%-3d ",n);
//          j++;
//      }
//      if(j%5==0)printf("\n");
//  }
//}
#include<stdio.h>
void main()
{ int i,j=0,n;
  for(n=2;n<=100;n++)
  {
      for(i=2;i<n;i++)
      {
          if(n%i==0)break;
      }
      if(i==n)
      {
          printf("%d\t",n);
          j++;
      }
      if(j%5==0)printf("\n");
  }
}
