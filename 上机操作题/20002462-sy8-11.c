//�ַ����Ĳ��ָ��ƣ����Ƶ�n���ַ��Ժ�����в��֣����������Ч����

int Duplicate(char *p1,char *p2,int n)
{
    int length_dest=0,length_scr=0,i=0;
    while(*(p1+i)!='\0')
      {
         length_scr++;i++;
      }
    i=0;
    if(length_scr<n)return 0;
    else
      {
        while(n+i<=length_scr)
        {
           *(p2+i)=*(p1+n-1+i);
           i++;
        }
        return i;
      }
}

#include<stdio.h>
void main()
{  char scr[20],dest[20];
   int n,turnback,i;
   printf("Input a string:");
   gets(scr);
   printf("Input a integer:");
   scanf("%d",&n);
   turnback=Duplicate(scr,dest,n);
   if(turnback==0)printf("����ʧ��");
   else
   {
      printf("Output is:");
      for(i=0;i<turnback;i++)printf("%c",dest[i]);
      printf(",%d characters.",turnback);
   }
}
