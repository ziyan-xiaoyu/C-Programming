#include<stdio.h>
int main()
{
    int x,sum;
    char a;
    scanf("%d %c",&x,&a);
    if(x<=1000)
        sum=8;
    else if((x-1000)%500==0)
        sum=8+4*((x-1000)/500);
    else
        sum=8+4*((x-1000)/500+1);
    if(a=='y')
        sum=sum+5;
    printf("%d",sum);
    return 0;
}
