#include<stdio.h>
#include<string.h>
void main()
{  char str[100];
   int n,i,flag;
   printf("输入一个字符串：\n");
   gets(str);
   n=strlen(str);
   flag=1;
   for(i=0;i<n/2;i++)
    if(str[i]!=str[n-1-i])
   {
       flag=0;
       break;
   }
   if(flag)printf("是回文\n");
   else
     printf("不是回文\n");
}
