#include<stdio.h>
int main()
{
    int i;
    double h,l;
    scanf("%lf",&h);
    l=h;
    for(i=2;i<=10;i++)
    {
        l=l+h;
        h=h/2;
    }
    printf("%g\n%g",l,h/2);
    return 0;
}
