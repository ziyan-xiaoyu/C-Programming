#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int add(int a,int b)
{
    return(a+b);
}
int sub(int a,int b)
{
    return(a-b);
}
int mul(int a,int b)
{
    return(a*b);
}
float dive(int a,int b)
{
    float c;
    c=(float)a/b;
    c=(int)(c*100+0.5)/1;
	c=(float)c/100;
	return(c);
}
int main()
{
   FILE *fp;//
   fp=fopen("E:\\result.txt", "w");//
   int m,n,k,i,j=0,per;                                           //m��nΪ���������k����������ɷ��ţ�j��per����ͳ����ȷ��,i����ѭ����flag�����ж��Ƿ����
   float answer[5],write[5];                                           //answerΪ��ȷ�𰸣�writeΪ����Ĵ�
   char c,tap,yesno;                                                   //c���ڴ�����ţ�yesno�ж��Ƿ������tap�������ݻس��� 
   printf("ѧ�ţ�20002462  ������������\n");
   printf("--------------------------------\n");                                                       
   printf("������ϰ�������������5����Ŀ\n");
   printf("��ʮ���ڼӡ������ˡ������������뱣��2λС����������⣺\n");
   fprintf(fp,"��ʮ���ڼӡ������ˡ������������뱣��2λС������\n");// 
   
   do
   {
    srand(time(NULL));
   for(i=1;i<=5;i++)
    {
        m=1+rand()%20;
        n=1+rand()%20;
        do
        {
            k=rand()%6;
        }while(k==2||k==4);
        c='*'+k;
        printf("%d%c%d=",m,c,n);
        fprintf(fp,"%d%c%d=",m,c,n);//
        scanf("%f",&write[i-1]);
        fprintf(fp,"%f\n",write[i-1]);//

        if(c=='+')answer[i-1]=add(m,n);
        else if(c=='-')answer[i-1]=sub(m,n);
        else if(c=='*')answer[i-1]=mul(m,n);
        else answer[i-1]=dive(m,n);
        fprintf(fp,"��ȷ�𰸣�%f\n",answer[i-1]);//

        if(answer[i-1]==write[i-1])j++;
    }
    per=j*100/5.0;
    printf("��ȷ��Ϊ%d%%\n",per);
    fprintf(fp,"��ȷ��Ϊ%d%%\n",per);
    j=0;
    
    printf("�Ƿ���������������Y����������N\n");
    tap=getchar();
    scanf("%c",&yesno);
    }while(yesno=='Y');
    fclose(fp);//
   return 0;
}
