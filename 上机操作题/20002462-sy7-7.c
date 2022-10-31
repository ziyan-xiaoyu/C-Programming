//#include<string.h>
//int a=0,b=0,c=0,d=0;
//void number(char m[])
//{  int i,n;
//   n=strlen(m);
//   for(i=0;i<n;i++)
//   {
//       if(m[i]>='a'&&m[i]<='z'||m[i]>='A'&&m[i]<='Z')a++;
//       else if(m[i]>='0'&&m[i]<='9')b++;
//       else if(m[i]==' ')c++;
//       else
//        d++;
//    }
//}
//#include<stdio.h>
//void main()
//{
//    char x[50];
//    gets(x);
//    number(x);
//    printf("字母个数%d\n",a);
//    printf("数字个数%d\n",b);
//    printf("空格个数%d\n",c);
//    printf("其他字符个数%d\n",d);
//}


//不用全局变量
#include<stdio.h>
#include<string.h>
void main()
{
    int a=0,b=0,c=0,d=0,i,n;
    char m[50];
    gets(m);
    n=strlen(m);
   for(i=0;i<n;i++)
   {
       if(m[i]>='a'&&m[i]<='z'||m[i]>='A'&&m[i]<='Z')a++;
       else if(m[i]>='0'&&m[i]<='9')b++;
       else if(m[i]==' ')c++;
       else
        d++;
    }
    printf("字母个数%d\n",a);
    printf("数字个数%d\n",b);
    printf("空格个数%d\n",c);
    printf("其他字符个数%d\n",d);
}
