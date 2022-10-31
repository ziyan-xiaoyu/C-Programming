//#include<stdio.h>
//void main()
//{
//	float c;
//	scanf("%f",&c);
//	c=(int)(c*100+0.5)/1;
//	printf("%f\n",c);
//	c=(float)c/100;
//	printf("%f",c);
// } 
 #include<stdio.h>
void main()
{
	float c;
	int a,b;
	scanf("%d,%d",&a,&b);
	c=(float)a/b;
	printf("%f\n",c);
	c=(int)(c*100+0.5)/1;
	c=(float)c/100;
	printf("%f",c);
 } 
