#include<stdio.h>
void main()
{  char file1[20],file2[20];
   char words[20]={'\0'};
   int n,i=0;
   printf("���������ļ�����");
   scanf("%s",file1);
   FILE *fp1;
   fp1=fopen(file1,"r");
   for(i=0;i<20;i++)
   {
 //  	   fscanf(fp1,"%c",words[i]);
       words[i]=fgetc(fp1);
   	   if(words[i]=='\0')break;
   }
   fclose(fp1);
   printf("����n��ֵ��");
   scanf("%d",&n);
   do
   {
       words[i]+=n;
       i++;
   }while(words[i]=='\0');
   printf("���������ļ�����");
   scanf("%s",file2);
   FILE *fp2;
   fp2=fopen(file2,"w");
   for(i=0;i<20;i++)
   {
//	   fprintf(fp2,"%c",words[i]);
       fputc(words[i],fp2);
	   if(words[i]=='\0')break;
   }
   fclose(fp2);
   printf("���ܳɹ��������Ϊ��");
   for(i=0;i<20;i++)
   {
//	   printf("%c",words[i]);
       putchar(words[i]);
	   if(words[i]=='\0')break;
   }
}
