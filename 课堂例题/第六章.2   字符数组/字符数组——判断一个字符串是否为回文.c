#include<stdio.h>
#include<string.h>
void main()
{  char str[100];
   int n,i,flag;
   printf("����һ���ַ�����\n");
   gets(str);
   n=strlen(str);
   flag=1;
   for(i=0;i<n/2;i++)
    if(str[i]!=str[n-1-i])
   {
       flag=0;
       break;
   }
   if(flag)printf("�ǻ���\n");
   else
     printf("���ǻ���\n");
}
