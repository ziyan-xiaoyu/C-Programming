#include<string.h>
int k;
char str[10];

void cm(char s[5][10])
{int i,j;
 strcpy(str,s[0]);
 for(i=1;i<k;i++)
   if(strlen(str)<strlen(s[i]))strcpy(str,s[i]);
}
#include<stdio.h>
void main()
{  char m[5][10];
   int i,j;
   for(i=0;i<50;i++)
   {  j=0;
       do
      { scanf("%c",&m[i][j]);
        j++;
      }while(m[i][j-1]!=' '||'\0');
      if(m[i][j-1]=='\0')break;
   }
   k=i;
   cm(m[5][10]);
   puts(str);
}
