#include<math.h>
int Is(int a)
{
    int i,j=0,k,t;
    int m[4]={0,0,0,0};
    k=a;
    for(i=1;i<=4;i++)
     {   t=pow(10,i);
	    if(a/t==0)
        {
            j=i;break;
        }
	}   
    for(i=0;i<j;i++)
    {
        m[i]=a%10;
        a=a/10;
    }
    if(k==m[0]*m[0]*m[0]+m[1]*m[1]*m[1]+m[2]*m[2]*m[2]+m[3]*m[3]*m[3])return 1;
    else
        return 0;
}
#include<stdio.h>
void main()
{  int m,n,x;
   printf("input m:");
   scanf("%d",&m);
   printf("input n:");
   scanf("%d",&n);
   for(x=m;x<=n;x++)
     if(Is(x))printf("%d ",x);
}
