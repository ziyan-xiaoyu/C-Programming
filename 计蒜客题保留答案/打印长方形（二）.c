#include<stdio.h>
void main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        j=0;
        while('A'+i-j>='A'&&j<m)//һ��Ҫ��������j<m����ֹ���ֿ�Ȳ�����A�����
        {
            printf("%c",'A'+i-j);
            j++;
        }
        for(k=1;k<=m-j;k++)
            printf("%c",'A'+k);
        printf("\n");
    }
}
