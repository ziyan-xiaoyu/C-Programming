#include<stdio.h>
#include<string.h>
void main()
{   char a[20],b[20],c[20],str[20];
    printf("ÇëÊäÈëÈý¸ö×Ö·û´®£º");
    gets(a);
    gets(b);
    gets(c);
    if(strcmp(a,b)>0)strcpy(str,b);
    else
        strcpy(str,a);
    if(strcmp(str,c)>0)strcpy(str,c);
    printf("The min string is ");
    puts(str);
}
