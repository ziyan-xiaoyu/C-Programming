#include<stdio.h>
#define N 5
struct stdudent
{
  char name[10];
  int math,english,c,sum;
};
int main()
{
  int i,j,k;
  struct stdudent temp;
  struct stdudent stu[N]={{"��",67,87,90},{"��",65,90,76},{"��",98,90,89},{"��",45,34,67},{"��",90,89,78}};
  for(i=0;i<N;i++)
  {
      stu[i].sum=stu[i].math+stu[i].english+stu[i].c;
  }
//  for(i=0;i<N-1;i++)//ѡ������
//  {
//      k=i;
//      for(j=i+1;j<N;j++)
//      {
//          if(stu[j].sum>stu[k].sum)k=j;
//      }
//      if(i!=k)
//      {
//          temp=stu[i];
//          stu[i]=stu[k];
//          stu[k]=temp;
//      }
//  }
  for(i=0;i<N-1;i++)//ð�ݷ����򣨸���һЩ��
  {
      for(j=0;j<N-1-i;j++)
        {
            if(stu[j].sum<stu[j+1].sum)
            {
               temp=stu[j+1];
               stu[j+1]=stu[j];
               stu[j]=temp;
            }
        }
  }
  printf("���    ����    ��ѧ    Ӣ��    C����   �ܷ�\n");
  for(i=0;i<N;i++)
  {
       printf("%-8d",i+1);
       printf("%-8s",stu[i].name);
       printf("%-8d",stu[i].math);
       printf("%-8d",stu[i].english);
       printf("%-8d",stu[i].c);
       printf("%-8d",stu[i].sum);
       printf("\n");
  }
  return 0;
}
