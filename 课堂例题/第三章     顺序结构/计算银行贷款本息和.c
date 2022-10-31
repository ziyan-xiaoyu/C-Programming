#include<stdio.h>
#include<math.h>
int main()
{
FILE *fp;
float money,rate,sum;
int year;
fp=fopen("E:\\credit1.txt","r");
fscanf(fp,"%f,%d,%f",&money,&year,&rate);
sum=money*pow((1+rate),year);
printf("%.2f",sum);
return 0;
}
