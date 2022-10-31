int yesno(int a)
{
    if(a%3==0||a%5==0)return 1;
    else
        return 0;
}
#include<stdio.h>
void main()
{  int m[50];
   int i,j,sum=0;
   m[0]=0;
   printf("Input integers:");
   for(i=0;;i++)
   {  scanf("%d",&m[i]);
      if(m[i]<=0)break;
   }
   j=i-1;
   for(i=0;i<j;i++)
     if(yesno(m[i]))sum+=m[i];
   printf("The sum of the numbers that meet condition is %d",sum);
}
