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
    fp=fopen("E:\\ѧ��ͨѶ¼�ļ�.txt","w");
    int i,j;
    printf("������Nλͬѧ����Ϣ��ѧ�š��������绰���롢��ͥסַ\n");
    for(i=0;i<N;i++)
        scanf("%s %s %s %s",stu[i].number,stu[i].name,stu[i].telephone,stu[i].direction);
    printf("ѧ�������Ϣ��\n");
    printf("ѧ��  ����     �绰����       ��ͥסַ\n");
    for(i=0;i<N;i++)
        printf("%-5s %-7s %-15s %s\n",stu[i].number,stu[i].name,stu[i].telephone,stu[i].direction);
    fprintf(fp,"ѧ��ͨѶ¼\n");
    fprintf(fp,"ѧ��  ����     �绰����       ��ͥסַ\n");
    for(i=0;i<N;i++)
        fprintf(fp,"%-5s %-7s %-15s %s\n",stu[i].number,stu[i].name,stu[i].telephone,stu[i].direction);
    fclose(fp);
}
