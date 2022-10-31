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
    return c;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int lun=1,m,n,k,i,right,rate,j,number[5];
    float answer,write,rightanswer[5];
    char c,yesno,tape;
    printf("算术练习，电脑随机生成五道算术题\n");
    printf("二十以内加、减、乘、除（四舍五入保留两位小数）运算，请答题：\n");
    do
    {
        printf("\n第%d轮开始：\n",lun);
        lun++;
        right=0;
        j=0;
        srand(time(NULL));
        for(i=1;i<=5;i++)
        {
            m=1+rand()%20;
            n=1+rand()%20;
            k=1+rand()%4;
            switch(k)
            {
                case 1:c='+';answer=add(m,n);break;
                case 2:c='-';answer=sub(m,n);break;
                case 3:c='*';answer=mul(m,n);break;
                default:c='/';answer=dive(m,n);
            }
            printf("%d%c%d=",m,c,n);
            scanf("%f",&write);
            if(write==answer)right++;
            else
            {
                number[j]=i;
                rightanswer[j]=answer;
                j++;
            }
        }
        rate=right*100/5;
        printf("答对%d道题，正确率%d%%\n",right,rate);
        for(i=0;i<j;i++)
          printf("第%d题答错，正确答案为%-.2f\n",number[i],rightanswer[i]);
        printf("是否继续练习，如果是，输入y，否则输入n\n");
        tape=getchar();
        scanf("%c",&yesno);
    }while(yesno=='y');
    return 0;
}
