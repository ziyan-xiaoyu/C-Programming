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
{ int score[100][7]={0};//赋初始值为0很重要
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
          printf("%5d",score[i][j]);//注意输出数据的位数，这里换成了5
      }
      printf("\n");//不要忘记换行
  }
  return 0;
}
