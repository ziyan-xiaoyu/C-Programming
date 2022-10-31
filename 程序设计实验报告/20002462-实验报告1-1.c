#include<stdio.h>
int N;                                                              //将N作为全局变量
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
    printf("学号：20002462  姓名：刘子言\n");
    printf("--------------------------------\n");
    printf("请输入书名的个数：\n");
    scanf("%d",&N);
    printf("书名 单价 数量\n");
    struct books book[N];                                             //定义结构体变量
    float sum(struct books book[N]);                                 //sum函数声明
    for(i=0;i<N;i++)
      scanf("%s %f %d",book[i].name,&book[i].price,&book[i].num);
    sumprice=sum(book);                                               //sum函数调用
    if(sumprice>=500)
        discountprice=sumprice*0.8;
    else if(sumprice<500&&sumprice>=100)
        discountprice=sumprice*0.9;
    else
        discountprice=sumprice;
    printf("--------------------------------\n");
    printf("书名   单价   数量   金额\n");
    for(i=0;i<N;i++)
        printf("%s   %-.2f   %-2d   %-.2f\n",book[i].name,book[i].price,book[i].num,book[i].sum);
    printf("购书总金额为：%-.2f\n",sumprice);
    printf("折扣后金额为：%-.2f\n",discountprice);
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
