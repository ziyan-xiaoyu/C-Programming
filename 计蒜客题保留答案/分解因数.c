//#include<stdio.h>
//int count;
//void found(int a,int n)
//{
//    int i;
//    for(i=a;i<n;i++)     //从因数2开始试起，先找出所有带有因数2的所有分解因数，再从3开始，找出所有大于等于3的分解因数。。。以此类推，找出所有
//    {
//        if(n%i==0&&i<=n/i)   //要求i<=n/i是因为确保n/i还可以继续分解，且得到的因数都大于等于i；
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
