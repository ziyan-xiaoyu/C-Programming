//在一串数字中查找/检索指定元素，输出下标或者Not found

int search(int list[],int n,int x)
{
   int i;
   for(i=0;i<n;i++)
       if(list[i]==x)
       {
           return i;
       }
   return -1;
}
#include<stdio.h>
void main()
{  int n,x,Index,i;
   printf("Input n(1<n<=10):");
   scanf("%d",&n);
   int a[n];
   printf("Input n integer:");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   printf("Input x:");
   scanf("%d",&x);
   Index=search(a,n,x);
   if(Index==-1)printf("Not found");
   else
    printf("Index=%d",Index);
}
