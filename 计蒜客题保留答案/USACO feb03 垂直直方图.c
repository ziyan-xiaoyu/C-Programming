#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k,maxc,length;
    int chara[26]={0};
    char single[80];
    for(j=0;j<4;j++)
    {
        gets(single);
        length=strlen(single);
        for(i=0;i<length;i++)
        {
            if(single[i]>='A'&&single[i]<='Z')
           {
            k=single[i]-65;
            chara[k]++;
           }
        }
    }
    maxc=chara[0];
    for(i=0;i<26;i++)
        if(chara[i]>maxc)maxc=chara[i];
    for(i=1;i<=maxc;i++)
    {
        for(j=0;j<26;j++)
        {
            if(chara[j]>=maxc+1-i)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for(i=0;i<26;i++)
        printf("%c ",'A'+i);
}
