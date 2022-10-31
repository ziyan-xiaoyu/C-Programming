int isprime(int m)
{ int i;
  for(i=2;i<m;i++)
    if(m%i==0)return 0;
  if(i==m)return 1;
}
#include<stdio.h>
void main()
{
    int y,k=2;
    scanf("%d",&y);
    while(k<=y)
    {
        if(y%k==0&&isprime(k))
            printf("%d ",k);
        k++;
    }
}
