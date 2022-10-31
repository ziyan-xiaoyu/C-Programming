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
   int m,n,k,i,j=0,per;                                           //m，n为计算的数，k用于随机生成符号，j、per用于统计正确率,i用于循环，flag用于判断是否继续
   float answer[5],write[5];                                           //answer为正确答案，write为输入的答案
   char c,tap,yesno;                                                   //c用于储存符号，yesno判断是否继续，tap用来收容回车键 
   printf("学号：20002462  姓名：刘子言\n");
   printf("--------------------------------\n");                                                       
   printf("计算练习，电脑随机生成5道题目\n");
   printf("二十以内加、减、乘、除（四舍五入保留2位小数），请答题：\n");
   fprintf(fp,"二十以内加、减、乘、除（四舍五入保留2位小数）：\n");// 
   
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
        fprintf(fp,"正确答案：%f\n",answer[i-1]);//

        if(answer[i-1]==write[i-1])j++;
    }
    per=j*100/5.0;
    printf("正确率为%d%%\n",per);
    fprintf(fp,"正确率为%d%%\n",per);
    j=0;
    
    printf("是否继续，如果是输入Y，否则输入N\n");
    tap=getchar();
    scanf("%c",&yesno);
    }while(yesno=='Y');
    fclose(fp);//
   return 0;
}
