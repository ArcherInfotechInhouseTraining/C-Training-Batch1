//***********FILE HANDLING*************
//
//
//#include<stdio.h>
//void main()
//{
//    FILE *fp;
//    fp=fopen("D:\\Archer_Infotech_C\\one\\sample.txt","r");
//
//    if(fp==NULL)
//    {
//        printf("\n Error while opening file");
//    }
//    else
//    {
//        printf("\n File opened successfully");
//    }
//    getch();
//}
//
///USING fgetc() and fputc()
//#include<stdio.h>
//#include<dos.h>
//void main()
//{
//    FILE *fp;
//    char ch;
//    fp=fopen("D:\\Archer_Infotech_C\\one\\sample.txt","r");
//    if(fp==NULL)
//    {
//        printf("\n Error while opening file");
//    }
//    else
//    {
//        printf("\n file opened successfully");
//    }
//    printf("\n File Data: \n");
//    while(1)
//    {
//        ch=fgetc(fp);
//        if(ch==EOF)
//            break;
//        //delay(20);
//        printf("%c",ch);
//    }
//    fclose(fp);
//    getch();
//}
//
///WAP TO COUNT NO OF LINES IN FILE
//#include<stdio.h>
//#include<dos.h>
//void main()
//{
//    FILE *fp;
//    int cnt=0;
//    char ch;
//    fp=fopen("D:\\Archer_Infotech_C\\one\\sample.txt","r");
//
//    printf("\n File Data: \n");
//
//    while(1)
//    {
//        ch=fgetc(fp);
//        if(ch=='\n')
//            cnt++;
//
//        if(ch==EOF)
//            break;
//        printf("%c",ch);
//    }
//    printf("\n Line Count: %d",cnt);
//    fclose(fp);
//    getch();
//}
//
/// WAP TO COPY DATA FROM ONE FILE TO ANOTHER
//#include<stdio.h>
//#include<dos.h>
//void main()
//{
//    FILE *fp,*fdp;
//    char ch;
//
//    fp=fopen("D:\\Archer_Infotech_C\\one\\sample.txt","r");
//    fdp=fopen("demo.txt","w");
//
//    while((ch=fgetc(fp))!=EOF)
//    {
//        fputc(ch,fdp);
//    }
//    printf("\n File copied");
//    fclose(fp);
//    fclose(fdp);
//    getch();
//}
//
/// copy read and write in binary
//#include<stdio.h>
//#include<dos.h>
//void main()
//{
//    FILE *fp,*fdp;
//    char ch;
//
//    fp=fopen("D:\\Archer_Infotech_C\\one\\sample.txt","rb");
//    fdp=fopen("demo.txt","wb");
//
//    while((ch=fgetc(fp))!=EOF)
//    {
//        fputc(ch,fdp);
//    }
//    printf("\n File copied");
//    fclose(fp);
//    fclose(fdp);
//    getch();
//}
//
//Using fprintf() and fscanf()
//
//#include<stdio.h>
//void main()
//{
//  char ch,a;
//  int x,b;
//  float y,c;
//  FILE *fp;
//
//  printf("\n Enter the values of ch x and y:");
//  scanf("%c %d %f",&ch,&x,&y);
//
//  fp=fopen("values.txt","w+");
//  fprintf(fp,"%c %d %f",ch,x,y);
//
//  rewind(fp);
//
//  fscanf(fp,"%c %d %f",&a,&b,&c);
//  printf("%c %d %f",a,b,c);
//
//  getch();
//}
