#include<stdio.h>
void main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        j=0;
        while('A'+i-j>='A'&&j<m)//一定要限制条件j<m，防止出现宽度不够到A的情况
        {
            printf("%c",'A'+i-j);
            j++;
        }
        for(k=1;k<=m-j;k++)
            printf("%c",'A'+k);
        printf("\n");
    }
}
