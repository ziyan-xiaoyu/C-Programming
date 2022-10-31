#include<stdio.h>
void main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=1;
    for(i=1;i<=m;i++)
    {
        for(j=i-1;j<n;j++)
        {
            if((j+1)%i==0)
            {
                if(a[j]==1)a[j]=0;
                else
                    a[j]=1;
            }

        }
    }
    printf("1");
    for(i=1;i<n;i++)
        if(a[i]==0)printf(",%d",i+1);
}
