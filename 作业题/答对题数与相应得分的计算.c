#include<stdio.h>
int main()
{ int n,s,i;
for(i=1;i<=10;i++)
{
    scanf("%d",&n);
    if(n>=0&&n<=10)
        s=6*n;
    else if(n>=11&&n<=20)
        s=6*10+2*(n-10);
    else if(n>=21&&n<=40)
        s=6*10+2*10+(n-20);
    else
        s=100;
    printf("%d ",s);
}
return 0;
}
