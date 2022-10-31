#include<stdio.h>
void main()
{
    int n,c=0,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        c=c+a[i]*b[i];
    printf("%d",c);
}
