//输入三个数字或者字符串，按从小到大的顺序输出

//#include<stdio.h>
//void main()
//{   int *p,a[3],i,j,t;
//    p=&a[0];
//    for(i=0;i<3;i++)
//		scanf("%d",p++);
//    for(j=0;j<2;j++)
//	 for(i=0;i<2-j;i++)
//		if(a[i]>a[i+1])
//		{  t=a[i];
//		  a[i]=a[i+1];
//		  a[i+1]=t;
//		}
//   for(i=0;i<3;i++)
//		printf("%d ",a[i]);
// }


#include<stdio.h>
#include<string.h>
void main()
{  char a[3][10],t[10];
   int i,j;
   for(i=0;i<3;i++)
		gets(a[i]);
   for(j=0;j<2;j++)
	 for(i=0;i<2-j;i++)
		if(strcmp(a[i],a[i+1])>0)
		{
		    strcpy(t,a[i]);
		   strcpy(a[i],a[i+1]);
		   strcpy(a[i+1],t);
		}
    for(i=0;i<3;i++)
		puts(a[i]);
}
