#include<stdio.h>
int main()
{  int a[10]={2,18,5,1,7,3,9,8,11,26};
   int i,j,t,m;
   for(i=0;i<9;i++)
   {
       for(j=0;j<10-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
       }
       //printf("第%d趟：",i+1);
       //for(m=0;m<10;m++)
        //printf("%3d",a[m]);
       //printf("\n");
   }
   for(i=0;i<10;i++)
   {
       printf("%3d",a[i]);
   }
   return 0;
}
//注释部分为将排序每一步都输出，可以清楚的看到冒泡法的过程步骤（从右到左）
