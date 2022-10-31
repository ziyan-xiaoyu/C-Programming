#include<stdio.h>
void main()
{
    int i,n,k=0;
    scanf("%d",&n);
    int flag[n];
    for(i=0;i<n;i++)
        flag[i]=1;
    for(i=0;i<n;i++)
        if((i+1)%3==0)flag[i]=0;
    for(i=0;i<n;i++)
        if((i+1)%5==0)
        {
            if(flag[i]==0)flag[i]=1;
            else flag[i]=0;
        }
    for(i=0;i<n;i++)
        if((i+1)%7==0)
        {
            if(flag[i]==0)flag[i]=1;
            else flag[i]=0;
        }
    for(i=0;i<n;i++)
        if(flag[i]==1)k++;
    printf("%d",k);
} 
