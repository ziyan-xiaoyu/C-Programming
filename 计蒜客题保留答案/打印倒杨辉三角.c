int mul(int x)//Çó½×³ËµÄº¯Êý
{
    int y=1;
    if(x==0)return 1;
    else
    {
        while(x>0)
       {
        y=y*x;
        x--;
       }
       return y;
    }
}
#include<stdio.h>
void main()
{
    int n,i,j,a,b,c;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)printf(" ");
        for(j=0;j<i;j++)
        {
            a=mul(i-1);
            b=mul(i-1-j);
            c=mul(j);
            printf("%d ",a/(b*c));
        }
        printf("\n");
    }
}
