//#include<stdio.h>
//int count;
//void found(int a,int n)
//{
//    int i;
//    for(i=a;i<n;i++)     //������2��ʼ�������ҳ����д�������2�����зֽ��������ٴ�3��ʼ���ҳ����д��ڵ���3�ķֽ������������Դ����ƣ��ҳ�����
//    {
//        if(n%i==0&&i<=n/i)   //Ҫ��i<=n/i����Ϊȷ��n/i�����Լ����ֽ⣬�ҵõ������������ڵ���i��
//        {
//            count++;
//            found(i,n/i);
//        }
//        if(i>n/i)break;
//    }
//}
//void main()
//{
//    int m,n,i;
//    scanf("%d",&m);
//    for(i=0;i<m;i++)
//    {
//        scanf("%d",&n);
//        count=1;
//        found(2,n);
//        printf("%d\n",count);
//    }
//}


#include<stdio.h>
int count;
void found(int a,int m)
{
    int i;
    for(i=a;i<m;i++)
    {
        if(m%i==0&&i<=m/i)
        {
            count++;
            found(i,m/i);
        }
        if(i>m/i)break;
    }
}
void main()
{
    int n,i;
    scanf("%d",&n);
    int fig[n];
    for(i=0;i<n;i++)
        scanf("%d",&fig[i]);
    for(i=0;i<n;i++)
    {
        count=1;
        found(2,fig[i]);
        printf("%d\n",count);
    }
}
