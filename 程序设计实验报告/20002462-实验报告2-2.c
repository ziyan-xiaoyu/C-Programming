#include<stdio.h>
#include<math.h>
int yesno(char *p)                     //�жϺ���λ���Ƿ�Ϊ��ȫƽ����
{
    int number[4],i;                    //number�������ڽ�����λ�ַ���ת����������ʽ����
    float shu1,shu2;
    for(i=4;i<8;i++)                  //shu1��¼����λ����shu2��¼�������Ժ����
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
    if((int)(shu2*100)%100==0)return 1;           //�жϿ����ŵõ������Ƿ�Ϊ���������ǣ���ԭ��λ������ȫƽ����
    else return 0;
}
int main()
{  FILE *fp;
   fp=fopen("E:\\txt.txt","r");
   char car[8][20];
   int i=0,j,t=0,flag;
   for(i=0;i<7;i++)
       fscanf(fp,"%s",car[i]);
    printf("ѧ�ţ�20002462    ������������\n");
    printf("-------------------------------------\n");
    printf("������һ�����ƺţ�");
    scanf("%s",car[7]);
    for(i=0;i<8;i++)
    {
      for(j=4;j<8;j++)
        if(car[i][j]<='9'&&car[i][j]>='0')t++;
      if(t==4)                                     //�жϺ���λ�Ƿ�Ϊ���֣����ǣ����һ�����ú���yesno�ж��Ƿ�Ϊ��ȫƽ����
      {
          flag=yesno(car[i]);
          if(flag)puts(car[i]);
      }
      t=0;
    }
    fclose(fp);
    return 0;
}
