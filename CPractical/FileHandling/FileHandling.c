///1
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("d:\\demo.txt","r");

    if(fp==NULL)
    {
        printf("\n Error:");
    }
    else
    {
        printf("\n Open Successfully:");
    }
    return 0;
}
*/
//=========================================================
///2  // Using fgetc() and fputc()
/*
#include<stdio.h>
#include<dos.h>
int main()
{
    FILE *fp;
    char ch;

    fp=fopen("main.c","r");

    if(fp==NULL)
    {
        printf("\n Error While Open File:");
    }
    else
    {
        printf("\n Open Successfully:");
    }

    printf("\n FIle Data\n");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
            delay(20);
            printf("%c",ch);
        }
        fclose(fp);
    }
    return 0;
}
*/
//===========================================================================================
/// WAP TO COUNT NO OF LINES IN FILE
/*
#include<stdio.h>
int main()
{
    FILE *fp;
    int cnt=0;
    char ch;
    fp=fopen("C:\\Users\\USER\\Documents\\C Programming\\Arrays\\main.c","r");

    printf("\n File Data:\n");
    while(1)
    {
        ch=fgetc(fp);
        if(ch=='\n')
            cnt++;
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n Line Count = %d",cnt);
    fclose(fp);
    return 0;
}
*/
//========================================================================================
/// WAP TO COPY THE DATA FROM ONE FILE TO ANOTHER
/*
#include<stdio.h>
int main()
{
    FILE *fp,*dp;

    char ch;

   fp=fopen("C:\\Users\\USER\\Documents\\C Programming\\Arrays\\main.c","r");
   dp=fopen("D:\\demo.txt","w");

   while((ch=fgetc(fp))!=EOF)
   {
       fputc(ch,dp);
   }
   fclose(fp);
   fclose(dp);

    return 0;
}
*/
//=====================================================================================================
///Using getw() and putw(): Used to read/write the integer from/to stream.

/*
#include<stdio.h>
int main()
{
    int a,b;
    FILE *fp;

    printf("\n ENter the a:");
    scanf("%d",&a);

    fp=fopen("D:\\New.txt","w");
    putw(a,fp);
    fclose(fp);

    fp=fopen("D:\\New.txt","r");
    b=getw(fp);
    fclose(fp);
    printf("\n b= %d",b);


    return 0;
}

*/
//===========================================================================================================
/// Using fprintf() and fscanf()
/*
#include<stdio.h>
int main()
{
    char ch,a;
    int x,b;
    float y,c;

    FILE *fp;

    printf("\n Enter The Values Of ch x And y:");
    scanf("%c %d %f",&ch,&x,&y);

    fp=fopen("D:\\New.txt","w+");
    fprintf(fp,"%c %d %f",ch,x,y);


    rewind(fp);
    fscanf(fp,"%c %d %f",&a,&b,&c);
    printf("%c %d %f",a,b,c);
    return 0;
}
*/
//=================================================================================================
/// Using fread() and fwrite()
/*
#include<stdio.h>
#include<stdlib.h>
struct student
{
  int rno;
  char nm[40];
};
void main()
{
  struct student s;
  int opt,i;
  FILE *fp;
  fp=fopen("New1.txt","a+");

  do
  {
    printf("\n ******* Menu ********\n");
    printf("\n 1.Input \n 2.Display \n 3.stop");

    printf("\n Select your option: ");
    scanf("%d",&opt);


    if(opt==1)
    {
      printf("\n Enter the name of student: ");
      fflush(stdin);
      gets(s.nm);

      printf("\n Enter the rno: ");
      scanf("%d",&s.rno);

      fwrite(&s,sizeof(s),1,fp);
    }
    else if(opt==2)
    {
      rewind(fp);
      i=0;
      do
      {
        fread(&s,sizeof(s),1,fp);
        printf("\n name: %s \t RNO: %d",s.nm,s.rno);
        i++;
      }while(!feof(fp));

    }
    else
    {
      exit(0);
    }
  }while(1);
}
*/
//======================================================================================
