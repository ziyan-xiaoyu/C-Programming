#include<stdio.h>
int main()
{
    int x,sum;
    char a;
    printf("ѧ�ţ�20002462    ������������\n");
    printf("-------------------------------------\n");
    printf("�������������Ƿ�Ӽ����Ӽ�����y�����Ӽ�����n��:\n");
    scanf("%d %c",&x,&a);
    if(x<=1000)
        sum=8;
    else if((x-1000)%500==0)
        sum=8+4*((x-1000)/500);
    else
        sum=8+4*((x-1000)/500+1);
    if(a=='y')
        sum=sum+5;
    printf("����Ϊ��%dԪ",sum);
    return 0;
}
