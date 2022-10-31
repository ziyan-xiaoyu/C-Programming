#include<stdio.h>
int main()
{ int z=0,l=0,w=0,i;
  char s;
  for(i=1;i<=10;i++)
  {
      scanf("%c",&s);
      if(s=='\n')
      scanf("%c",&s);
      switch(s)
      {
          case 'z':z++;break;
          case 'l':l++;break;
          case 'w':w++;
      }
  }
  printf("z=%d,l=%d,w=%d",z,l,w);
  return 0;

}
