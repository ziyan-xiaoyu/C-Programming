#include<stdio.h>
#include<string.h>
void main()
{
    char zimu[16];
    gets(zimu);
    int length,k,hang=1;
    length=strlen(zimu);
    for(hang=1;hang<=5;hang++)
    {
        if(hang==1||hang==5)
        {
            for(k=1;k<=length;k++)
            {
                if(k%3==0)printf("..*.");
                else printf("..#.");
            }
            printf(".\n");
        }
        else if(hang==2||hang==4)
        {
            for(k=1;k<=length;k++)
            {
                if(k%3==0)printf(".*.*");
                else printf(".#.#");
            }
            printf(".\n");
        }
        else
        {
            for(k=1;k<=length;k++)
            {
                if(k%3==0||(k-1)%3==0&&(k-1)!=0)printf("*.%c.",zimu[k-1]);//注意这个地方的判断条件要完整，确保*可以将#覆盖。
                else printf("#.%c.",zimu[k-1]);
            }
            if(length%3==0)printf("*\n");
            else printf("#\n");
        }
    }
}
