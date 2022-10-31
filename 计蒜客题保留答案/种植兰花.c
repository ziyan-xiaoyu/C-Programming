#include<stdio.h>
#include<string.h>
int huiwen(char a[],int n,int *p)
{
    int i,back;
    if(n%2!=0)return 0;
    for(i=0;i<n/2;i++)
        if(a[i]!=a[n-1-i])return 0;
    (*p)++;
    back=huiwen(a,n/2,p);
    if(back==0)return 0;
}
void main()
{
    char lan[10000];
    int sum=0,lenth_lan,back;
    gets(lan);
    lenth_lan=strlen(lan);
    if(lenth_lan%2!=0)printf("0");
    else
    {
        back=huiwen(lan,lenth_lan,&sum);
        printf("%d",sum);
    }
}
