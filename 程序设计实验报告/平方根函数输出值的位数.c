#include<stdio.h>
#include<math.h>
void main()
{
  float a,b;
  scanf("%f",&a);
  b=sqrt(a);
  printf("%f\n",b);
  if((int)(b*100)%100==0)printf("yes");
  else printf("no");

}
