//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{ int score[100][6];
//  int i,j;
//  for(i=0;i<100;i++)
//  {
//      for(j=0;j<6;j++)
//      {
//          score[i][j]=45+rand()%56;
//      }
//  }
//  for(i=0;i<100;i++)
//  {
//      for(j=0;j<6;j++)
//      {
//          printf("%3d",score[i][j]);
//      }
//      printf("\n");
//  }
//  return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{ int score[100][7]={0};//����ʼֵΪ0����Ҫ
  int i,j;
  for(i=0;i<100;i++)
  {
      for(j=0;j<6;j++)
      {
          score[i][j]=45+rand()%56;
          score[i][6]+=score[i][j];
      }
  }
  for(i=0;i<100;i++)
  {
      for(j=0;j<7;j++)
      {
          printf("%5d",score[i][j]);//ע��������ݵ�λ�������ﻻ����5
      }
      printf("\n");//��Ҫ���ǻ���
  }
  return 0;
}
