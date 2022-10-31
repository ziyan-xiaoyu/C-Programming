
//用函数调用和指针输出一个矩阵的转置
void turn(int *p)
{  int i,j,t;
   for(i=0;i<3;i++)
   for(j=i;j<3;j++)
   {
       t=*(p+3*i+j);
      *(p+3*i+j)=*(p+3*j+i);
	  *(p+3*j+i)=t;
   }
}
#include<stdio.h>
void main()
{  int a[3][3],*p,i;
   for(i=0;i<3;i++)
     scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
   p=&a[0][0];
   turn(p);
   for(i=0;i<3;i++)
     printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
}
