#include<stdio.h>
#include<math.h>
int yesno(char *p)                     //判断后四位数是否为完全平方数
{
    int number[4],i;                    //number数组用于将后四位字符数转化成数字形式后存放
    float shu1,shu2;
    for(i=4;i<8;i++)                  //shu1记录后四位数，shu2记录开根号以后的数
      switch(*(p+i))
      {
          case '0':number[i-4]=0;break;
          case '1':number[i-4]=1;break;
          case '2':number[i-4]=2;break;
          case '3':number[i-4]=3;break;
          case '4':number[i-4]=4;break;
          case '5':number[i-4]=5;break;
          case '6':number[i-4]=6;break;
          case '7':number[i-4]=7;break;
          case '8':number[i-4]=8;break;
          default:number[i-4]=9;
      }
    shu1=number[0]*1000+number[1]*100+number[2]*10+number[3];
    shu2=sqrt(shu1);
    if((int)(shu2*100)%100==0)return 1;           //判断开根号得到的数是否为整数，若是，则原四位数是完全平方数
    else return 0;
}
int main()
{  FILE *fp;
   fp=fopen("E:\\txt.txt","r");
   char car[8][20];
   int i=0,j,t=0,flag;
   for(i=0;i<7;i++)
       fscanf(fp,"%s",car[i]);
    printf("学号：20002462    姓名：刘子言\n");
    printf("-------------------------------------\n");
    printf("请输入一个车牌号：");
    scanf("%s",car[7]);
    for(i=0;i<8;i++)
    {
      for(j=4;j<8;j++)
        if(car[i][j]<='9'&&car[i][j]>='0')t++;
      if(t==4)                                     //判断后四位是否都为数字，若是，则进一步调用函数yesno判断是否为完全平方数
      {
          flag=yesno(car[i]);
          if(flag)puts(car[i]);
      }
      t=0;
    }
    fclose(fp);
    return 0;
}
