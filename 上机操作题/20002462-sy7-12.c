#include"fun.c"
#include<stdio.h>
void main()
{  int x,y;
   char c;
   scanf("%d%c%d",&x,&c,&y);
   printf("%d%c%d=",x,c,y);
   if(c=='+')printf("%d",Add(x,y));
   else if(c=='-')printf("%d",Sub(x,y));
   else if(c=='*')printf("%d",Mul(x,y));
   else
    printf("%f",Div(x,y));
}
