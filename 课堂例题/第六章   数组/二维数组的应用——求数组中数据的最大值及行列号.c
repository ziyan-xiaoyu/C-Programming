#include<stdio.h>
#include<stdlib.h>
int main()
{ int score[10][6];
  int i,j,n=0;
  int max,maxi,maxj;
  for(i=0;i<10;i++)
  {
      for(j=0;j<6;j++)
      {
          score[i][j]=45+rand()%56;
      }
  }
  for(i=0;i<10;i++)
  {
      for(j=0;j<6;j++)
      {
          printf("%4d",score[i][j]);
      }
      printf("\n");
  }
  max=score[0][0];
  for(i=0;i<10;i++)
  {
      for(j=0;j<6;j++)
      {
          if(max<score[i][j])
          {
              max=score[i][j];
              maxi=i+1;
              maxj=j+1;
          }
      }
  }
//  printf("%d\n",max);
//  for(i=0;i<10;i++)
//  {
//      for(j=0;j<6;j++)
//      {
//          if(max==score[i][j])
//          {
//              n++;
//              printf("��%d�У���%d��\n",i+1,j+1);
//          }
//      }
//  }
//    printf("����%d�����ֵ",n);
  printf("%d,%d,%d",max,maxi,maxj);
  return 0;
}
//ע�Ͳ���Ϊ����������ֵ����ͨ��һ��˫��ѭ���ҳ��������м������ֵ���ֱ���ʲôλ�á�
