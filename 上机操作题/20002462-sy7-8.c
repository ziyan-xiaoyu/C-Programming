//int hcf(int a,int b)
//{
//    int i;
//    do
//    {
//        i=a%b;
//        a=b;
//        b=i;
//    }while(i!=0);
//    return(a);
//}
//int lcd(int a,int b,int c)
//{
//    return(a*b/c);
//}
//
//
//#include<stdio.h>
//void main()
//{   int x,y,s,t;
//    scanf("%d,%d",&x,&y);
//    s=hcf(x,y);
//    t=lcd(x,y,s);
//    printf("最大公约数是%d\n",s);
//    printf("最小公倍数是%d\n",t);
//}


//使用全局变量：
int s,t;
void hcf(int a,int b)
{
    int i;
    do
    {
        i=a%b;
        a=b;
        b=i;
    }while(i!=0);
    s=a;
}
void lcd(int a,int b,int c)
{
    t=a*b/c;
}


#include<stdio.h>
void main()
{   int x,y;
    scanf("%d,%d",&x,&y);
    hcf(x,y);
    lcd(x,y,s);
    printf("最大公约数是%d\n",s);
    printf("最小公倍数是%d\n",t);
}
