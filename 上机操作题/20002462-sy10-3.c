#include<stdio.h>
struct student
{
    char number[10];
    char name[10];
    float c1,c2,c3,ave;
}stu[6];
void main()
{
   FILE *fp3;
   fp3=fopen("E:\\stu_sort.txt","r");
   int i,j;
   struct student temp2;
   for(i=1;i<6;i++)
   {
       fscanf(fp3,"%s",stu[i].number);
       fscanf(fp3,"%s",stu[i].name);
       fscanf(fp3,"%f,%f,%f %f",&stu[i].c1,&stu[i].c2,&stu[i].c3,&stu[i].ave);
   }
   fclose(fp3);
   scanf("%s",stu[0].number);
   scanf("%s",stu[0].name);
   scanf("%f %f %f",&stu[0].c1,&stu[0].c2,&stu[0].c3);
   stu[0].ave=(stu[0].c1+stu[0].c2+stu[0].c3)/3;
   for(j=0;j<5;j++)
   {
       if(stu[j].ave<stu[j+1].ave)
       {
           temp2=stu[j];
           stu[j]=stu[j+1];
           stu[j+1]=temp2;
       }
   }
   FILE *fp4;
   fp4=fopen("E:\\stu_new.txt","w");
   for(i=0;i<6;i++)
   {
       fputs(stu[i].number,fp4);
        fputc(' ',fp4);
        fputs(stu[i].name,fp4);
        fprintf(fp4," %.1f,%.1f,%.1f %.2f",stu[i].c1,stu[i].c2,stu[i].c3,stu[i].ave);
        fprintf(fp4,"\n");
   }
   fclose(fp4);
}
