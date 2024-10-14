///1.
/*
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\Demo.txt","r");

    if(fp==NULL)
    {
        printf("\n Error while opening the file...");
    }
    else
    {
        printf("\n file opend successfully...");
    }

    ///fclose(fp);
}
*/
///=====================================================================
///2.  Using fgetc() and fputc()
/*

#include<stdio.h>
#include<dos.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\Demo\\Derived_DT\\Pointer\\Practice.c","r");

    if(fp==NULL)
    {
        printf("\n Error while opening the file...");
        return;
    }
    else
    {
        printf("\n File opend successfully...");
    }

    printf("\n File Data....");

    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        //delay(20);
        printf("%c",ch);
    }
    fclose(fp);
}
 */

///==============================================================================
///3. WAP TO COUNT NO OF LINES IN FILE
/*
#include<stdio.h>
#include<dos.h>
int main()
{
    FILE *fp;
    char ch;
    int cnt=0;

    fp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\Derived_DT\\Pointer\\Pointer.c","r");

    printf("\n File Data : ");

    while(1)
    {
        ch=fgetc(fp);

        if(ch=='\n')
            cnt++;
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n No. of Lines : %d",cnt);

    fclose(fp);
}

*/
///================================================================
///4.  WAP TO COPY THE DATA FROM ONE FILE TO ANOTHER
/*

#include<stdio.h>
int main()
{
    FILE *fp,*dp;
    char ch;

    fp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\Demo1.txt","r");
    dp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\Demo.txt","w");

    while(ch=fgetc(fp)!=EOF)
    {
        fputc(ch,dp);
    }
    fclose(fp);
    fclose(dp);
}

*/
///================================================================
///5. WAP TO COPY THE DATA FROM ONE FILE TO ANOTHER

/*
#include<stdio.h>
#include<dos.h>
void main()
{
    FILE *fp,*dp;
    char ch;

    fp=("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\Demo1.txt","rb");
    dp=("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\Demo.txt","wb");

    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,dp);
    }
    fclose(fp);
    fclose(dp);

}

*/
///============================================================
///6. Using getw() and putw(): Used to read/write the integer from/to stream.
/*
#include<stdio.h>
void main()
{
    int a,b;
    FILE *fp;

    printf("\n Enter Integer number : ");
    scanf("%d",&a);

    fp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\IntFile.txt","w");
    putw(a,fp);
    fclose(fp);

    fp=fopen("C:\\Users\\COMnet\\Desktop\\Archer\\C\\Demo\\File_Handaling\\IntFile.txt","r");
    b=getw(fp);
    fclose(fp);

    printf("\n b = %d",b);
}
*/
///=======================================================================================

///7.  Using fprintf() and fscanf()
/*
#include<stdio.h>
int main()
{
    int x,a;
    float y,b;
    char z,c;
    FILE *fp;

    printf("\n Enter the values of x , y and z : ");
    scanf("%d %f %c",&x,&y,&z);

    fp=fopen("values.txt","w+");
    fprintf(fp,"%d %f %c",x,y,z);

    rewind(fp);

    fscanf(fp,"%d %f %c",&a,&b,&c);
    printf("%d %f %c",a,b,c);

    fclose(fp);
}
*/
///==============================================================

///8. Using fread() and fwrite()


#include<stdio.h>
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
  fp=fopen("admission.txt","a+");

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

