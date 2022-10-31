#include<stdio.h>
struct student
{
    char number[10];
    char name[10];
    float c1,c2,c3,ave;
}stu[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
    	scanf("%s",stu[i].number);
    	scanf("%s",stu[i].name);
    	scanf("%f %f %f",&stu[i].c1,&stu[i].c2,&stu[i].c3);
	}
	for(i=0;i<5;i++)
    {
    	printf("%s ",stu[i].number);
    	printf("%s ",stu[i].name);
    	printf("%f %f %f\n",stu[i].c1,stu[i].c2,stu[i].c3);
    }
    for(i=0;i<5;i++)
        stu[i].ave=(stu[i].c1+stu[i].c2+stu[i].c3)/3;
    FILE *fp;
    fp=fopen("E:\\stud.txt","w");
    for(i=0;i<5;i++)
    {
        fputs(stu[i].number,fp);
        fputc(' ',fp);
        fputs(stu[i].name,fp);
        fprintf(fp,"  %.1f,%.1f,%.1f   %.2f",stu[i].c1,stu[i].c2,stu[i].c3,stu[i].ave);
        fprintf(fp,"\n");
	}
    fclose(fp);
}
