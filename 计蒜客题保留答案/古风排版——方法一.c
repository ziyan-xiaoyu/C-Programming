#include<stdio.h>
#include<string.h>
void main()
{
    int N,length,k,i,j;
    char chara[1001],temp;
    scanf("%d",&N);
    temp=getchar();//��������������Ŀո�
    gets(chara);
    length=strlen(chara);
    if(length%N==0)k=length/N;
    else k=length/N+1;
    j=length%N;
    char rebuild[N][k];
    if(j!=0)//���Ű�ĩβ����ĵط����Ͽո�
    {
        for(i=j;i<N;i++)
           rebuild[i][k-1]=' ';
    }
    j=0;
    for(i=0;i<length;i++)//���½��ַ����������µ�˳�������ź�
    {
        rebuild[j][i/4]=chara[i];
        j++;
        if(j==N)j=0;
    }
    for(i=0;i<N;i++)//��ӡ
    {
        for(j=k-1;j>=0;j--)
            printf("%c",rebuild[i][j]);
        if(i<N)printf("\n");
    }
}
