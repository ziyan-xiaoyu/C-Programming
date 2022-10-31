#include<math.h>
int a[10];
int i,j,k;
void Dectoother(int n,int m)
{    int t;
    for(i=0;i<10;i++)
    {  t=pow(m,i);
	  if(n/t==0)
      {
        j=i;break;
      }
	} 
	k=j;   
    for(i=0;i<k;i++)
    {   
	    a[i]=n/(pow(m,j-1));
        n=n-a[i]*(pow(m,j-1));
        j--;
    }
}
#include<stdio.h>
void main()
{  int m,n;
   printf("输入数n和拟转换的进制数m：");
   scanf("%d,%d",&n,&m);
   Dectoother(n,m);
   for(i=0;i<k;i++)
    printf("%d",a[i]);
}


//只运用主函数： 
//#include<stdio.h>
//#include<math.h>
//void main()
//{  int m,n,k,i,j,t;
//   int a[10];
//   printf("输入数n和拟转换的进制数m：");
//   scanf("%d,%d",&n,&m);
//   for(i=0;i<10;i++)
//    {  t=pow(m,i);
//	  if(n/t==0)
//      {
//        j=i;
//        break;
//      }
//    }    
//    k=j;
//    for(i=0;i<k;i++)
//    {   a[i]=n/(pow(m,j-1));
//        n=n-a[i]*(pow(m,j-1));
//        j--;
//    }
//   for(i=0;i<k;i++)
//    printf("%d",a[i]);
//}

