#include<stdio.h>
int main()
{
    int x,sum;
    char a;
    printf("学号：20002462    姓名：刘子言\n");
    printf("-------------------------------------\n");
    printf("请输入重量及是否加急（加急输入y，不加急输入n）:\n");
    scanf("%d %c",&x,&a);
    if(x<=1000)
        sum=8;
    else if((x-1000)%500==0)
        sum=8+4*((x-1000)/500);
    else
        sum=8+4*((x-1000)/500+1);
    if(a=='y')
        sum=sum+5;
    printf("邮资为：%d元",sum);
    return 0;
}
