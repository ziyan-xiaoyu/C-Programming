#include<stdio.h>
#define N 4
struct student
{
    char number[10];
    char name[10];
    char telephone[20];
    char direction[100];
}stu[N];
void main()
{
    FILE *fp;
    fp=fopen("E:\\学生通讯录文件.txt","w");
    int i,j;
    printf("请输入N位同学的信息：学号、姓名、电话号码、家庭住址\n");
    for(i=0;i<N;i++)
        scanf("%s %s %s %s",stu[i].number,stu[i].name,stu[i].telephone,stu[i].direction);
    printf("学生相关信息：\n");
    printf("学号  姓名     电话号码       家庭住址\n");
    for(i=0;i<N;i++)
        printf("%-5s %-7s %-15s %s\n",stu[i].number,stu[i].name,stu[i].telephone,stu[i].direction);
    fprintf(fp,"学生通讯录\n");
    fprintf(fp,"学号  姓名     电话号码       家庭住址\n");
    for(i=0;i<N;i++)
        fprintf(fp,"%-5s %-7s %-15s %s\n",stu[i].number,stu[i].name,stu[i].telephone,stu[i].direction);
    fclose(fp);
}
