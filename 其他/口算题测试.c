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
    printf("������ϰ����������������������\n");
    printf("��ʮ���ڼӡ������ˡ������������뱣����λС�������㣬����⣺\n");
    do
    {
        printf("\n��%d�ֿ�ʼ��\n",lun);
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
        printf("���%d���⣬��ȷ��%d%%\n",right,rate);
        for(i=0;i<j;i++)
          printf("��%d������ȷ��Ϊ%-.2f\n",number[i],rightanswer[i]);
        printf("�Ƿ������ϰ������ǣ�����y����������n\n");
        tape=getchar();
        scanf("%c",&yesno);
    }while(yesno=='y');
    return 0;
}
