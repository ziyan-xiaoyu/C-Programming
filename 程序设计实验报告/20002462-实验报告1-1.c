#include<stdio.h>
int N;                                                              //��N��Ϊȫ�ֱ���
struct books
  {
     char name[20];
     float price;
     int num;
     float sum;
  };
void main()
{
    int i,j;
    float sumprice=0,discountprice;
    printf("ѧ�ţ�20002462  ������������\n");
    printf("--------------------------------\n");
    printf("�����������ĸ�����\n");
    scanf("%d",&N);
    printf("���� ���� ����\n");
    struct books book[N];                                             //����ṹ�����
    float sum(struct books book[N]);                                 //sum��������
    for(i=0;i<N;i++)
      scanf("%s %f %d",book[i].name,&book[i].price,&book[i].num);
    sumprice=sum(book);                                               //sum��������
    if(sumprice>=500)
        discountprice=sumprice*0.8;
    else if(sumprice<500&&sumprice>=100)
        discountprice=sumprice*0.9;
    else
        discountprice=sumprice;
    printf("--------------------------------\n");
    printf("����   ����   ����   ���\n");
    for(i=0;i<N;i++)
        printf("%s   %-.2f   %-2d   %-.2f\n",book[i].name,book[i].price,book[i].num,book[i].sum);
    printf("�����ܽ��Ϊ��%-.2f\n",sumprice);
    printf("�ۿۺ���Ϊ��%-.2f\n",discountprice);
}

float sum(struct books book[N])
{
    int i;
    float sumprice=0;
    for(i=0;i<N;i++)
    {
        book[i].sum=book[i].price*book[i].num;
        sumprice+=book[i].sum;
    }
    return(sumprice);
}
