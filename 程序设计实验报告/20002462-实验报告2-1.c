#include<stdio.h>
void main()
{  int id[17],i,yushu=0;                     //id���������֤ǰʮ��λ���֣�yushu���һϵ�м���֮��õ�������
   char last,result;                         //last������֤���һλ��У���룬result���������Ӧ��У����
   for(i=0;i<17;i++)
    scanf("%1d",&id[i]);
   scanf("%c",&last);
   for(i=0;i<17;i++)                         //���
       switch((i+1)%10)
       {
           case 1:yushu+=7*id[i];break;
           case 2:yushu+=9*id[i];break;
           case 3:yushu+=10*id[i];break;
           case 4:yushu+=5*id[i];break;
           case 5:yushu+=8*id[i];break;
           case 6:yushu+=4*id[i];break;
           case 7:yushu+=2*id[i];break;
           case 8:yushu+=1*id[i];break;
           case 9:yushu+=6*id[i];break;
           default:yushu+=3*id[i];
       }
   yushu=yushu%11;                            //������
   switch(yushu)                             //ת���ɶ�ӦУ����
       {
           case 0:result='1';break;
           case 1:result='0';break;
           case 2:result='x';break;
           case 3:result='9';break;
           case 4:result='8';break;
           case 5:result='7';break;
           case 6:result='6';break;
           case 7:result='5';break;
           case 8:result='4';break;
           case 9:result='3';break;
           default:result='2';
       }
    if(last==result)                           //�ж�У�����Ƿ���ȷ
    {
        printf("correct,����������Ϊ��");
        printf("%d%d%d%d��%d%d��%d%d��\n",id[6],id[7],id[8],id[9],id[10],id[11],id[12],id[13]);
    }
    else
        printf("wrong\n");
    printf("-------------------------------------\n");
    printf("ѧ�ţ�20002462    ������������\n");
}
