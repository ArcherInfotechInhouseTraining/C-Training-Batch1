/******************************  File Handling In C  *******************************

  file -->  set of or collection records.

  FILE Structure: It is Pre defined structure from stdio.h, used to
      create the pointer to refer the file from external
      memory area.

*/

//#include<stdio.h>
//int  main()
//{
//  FILE *fp;
//
//  fp=fopen("C:\\clag\\function.txt","r");
//
//  if(fp==NULL)
//  {
//    printf("\n Error while opening the file");
//  }
//  else
//  {
//    printf("\n file opened sucessfully...!!!");
//  }
//return 0;
//}
//===================================================================================================
/// Using fgetc() and fputc()

#include<stdio.h>
#include<dos.h>
int main()
{
  FILE *fp;
  char ch;

  fp=fopen("C:\\clag\\function.txt","r");
  if(fp==NULL)
  {
    printf("\n Error while opening the file");
    return;
  }
  else
  {
    printf("\n file opened sucessfully...!!!");
  }

  printf("\n the file data:\n");
  while(1)
  {
    ch=fgetc(fp);
    if(ch==EOF)
      break;

    printf("%c",ch);
  }
  fclose(fp);
  getch();

return 0;
}




































