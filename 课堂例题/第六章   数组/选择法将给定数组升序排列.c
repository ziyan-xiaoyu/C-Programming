#include<stdio.h>
void main()
{  int a[10]={2,18,5,1,7,3,9,8,11,26};
   int i,j,t,k,m;
   for(i=0;i<9;i++)
   {
       k=i;
       for(j=i+1;j<10;j++)
       {
           if(a[k]>a[j])k=j;
       }
       t=a[i];a[i]=a[k];a[k]=t;
       //printf("��%d�ˣ�",i+1);
       //for(m=0;m<10;m++)
        //printf("%3d",a[m]);
       //printf("\n");
   }
   for(i=0;i<10;i++)
    printf("%3d",a[i]);
}
//ע�Ͳ���Ϊ������ÿһ�����������������Ŀ���ѡ�񷨵Ĺ��̲��裨�����ң�
