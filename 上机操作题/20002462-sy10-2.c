#include<stdio.h>
struct student
{
    char number[10];
    char name[10];
    float c1,c2,c3,ave;
}stu[5];
void main()
{
   FILE *fp1;
   fp1=fopen("E:\\stud.txt","r");
   int i,j;
   struct student temp;
   for(i=0;i<5;i++)
   {
       fscanf(fp1,"%s",stu[i].number);
       fscanf(fp1,"%s",stu[i].name);
       fscanf(fp1,"%f,%f,%f %f",&stu[i].c1,&stu[i].c2,&stu[i].c3,&stu[i].ave);
   }
   fclose(fp1);
   for(i=0;i<4;i++)
    for(j=0;j<5-i-1;j++)
   {
       if(stu[j].ave<stu[j+1].ave)
       {
           temp=stu[j];
           stu[j]=stu[j+1];
           stu[j+1]=temp;
       }
   }
   FILE *fp2;
   fp2=fopen("E:\\stu_sort.txt","w");
   for(i=0;i<5;i++)
   {
       fputs(stu[i].number,fp2);
        fputc(' ',fp2);
        fputs(stu[i].name,fp2);
        fprintf(fp2," %.1f,%.1f,%.1f %.2f",stu[i].c1,stu[i].c2,stu[i].c3,stu[i].ave);
        fprintf(fp2,"\n");
   }
   fclose(fp2);
}
