#include<stdio.h>
int main()
{  int i,j=0,sum=0;
   for(i=6;i<=1000;i++)
   {
       if(i%6==0&&i%9==0)
       {
           printf("%-5d",i);
           j++;
           sum=sum+i;
           if(j%10==0)printf("\n");
       }
   }
   printf("\n%d",sum);
   return 0;
}
