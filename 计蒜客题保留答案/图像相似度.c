#include<stdio.h>
void main()
{
    int m,n,i,j;
    float t=0,d;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n],b[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])t++;
        }
    d=100*t/(m*n);
    printf("%.2f%",d);
}
