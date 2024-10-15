/**

	Structure: It is user-defined data type, used to collect number of elements together under single unit,
		   which may be of same or different type. It is ordered collection of unindexed elements.

	// Syntax of structure templet (Def. of your own type)

	struct <Tage_Nm>
	{
		member1;
		member2;	memberN --> Having any type it may be of int, char, float, double, array, pointer
		member3;		    or may be of any user-defined type.
		.
		.
		.
	};

	// How to create the structure variable

		struct <Tage_Nm> <Variable_nm>;

*/

// #include<stdio.h>
//
//
// int main()
// {
//     struct Book{
//       char nm[10];
//       int id;
//       double pr;
//       int top;
//     };
//
//
// struct Book b;
//
// printf("\n Enter The Book Name :");
// gets(b.nm);
// printf("\n Enter The Book Id :");
// scanf("%d",&b.id);
// printf("\n Enter The Book Price : ");
// scanf("%lf",&b.pr);
// printf("\n Enter The Number of Topics :");
// scanf("%d",&b.top);
//
// printf("\n Book Name : %s \t Book Id :%d \t Book Price :%lf \t Book Topics :%d" ,b.nm,b.id,b.pr,b.top); printf("\n");
//
// return 0;
// }
//===============================================================================================================================================================================
/// Initialization of structure variable

//#include<stdio.h>
//
//int main()
//{
//   typedef struct{
//    char nm[10];
//    int id;
//    double pr;
//    int top;
//    }book;
//
//
//    book b={"hobbit",1643,139.54,19};
//
//    printf("\n Name of Book :%s \t Book Id :%d \t Book Price :%0.2lf \t Book Topics : %d",b.nm,b.id,b.pr,b.top);  printf("\n");
//
//    return 0;
//
//}
//===============================================================================================================================================================================
/// Input and display the structure data

// #include<stdio.h>
//
// struct student{
// int id;
// char nm[10];
// float per10;
// float per12;
// };
//
// int main()
//{
//    struct student s;
//
//    printf("\n Enter The Student Details :");
//    printf("\n Enter Name Of The Student :");
//    scanf("%s",&s.nm);
//
//    printf("\n Enter The Student ID :");
//    scanf("%d",&s.id);
//
//    printf("\n Enter The Student 10th Percentage :");
//    scanf("%0.2f",&s.per10);
//
//    printf("\n Enter The Student 12th Percentage :" );
//    scanf("%f0.2",&s.per12);
//
// return 0;
//}
//===============================================================================================================================================================================
/// Write a structure to represent all details of item and perform IO operation.

//#include<stdio.h>
//
//struct item{
//
// int icode;
// char inm[10];
// float ipr;
//
//};
//
//int main()
//{
//    struct item i;
//    printf("\n ENter The Item Details :");
//    printf("\n Enter The Item Code :");
//    scanf("%d",&i.icode);
//
//    printf("\n Enter The Name Of The Item :");
//    scanf("%s",&i.inm);
//
//    printf("\n Enter The Item Price :");
//    scanf("%0.2f",&i.ipr);
//
//    printf("\n Item Name : %s \t Item Code : %d \t Item Price : %0.2f" ,i.inm, i.icode, i.ipr);
//
//    return 0;
//}
//===============================================================================================================================================================================
/** Using the typedef: It is used to define the type, in such case no need of using
                       struct keyword.
*/

//typedef struct
//{
//    int icode;
//    char inm[50];
//    float ipr;
//}item;
//
//int main()
//{
//    item t;  // here no need of using struct keyword now
//
//    printf("\n Enter the Name of Item: ");
//    gets(t.inm);
//
//    printf("\n Enter the Code and Price of Item: ");
//    scanf("%d %f",&t.icode,&t.ipr);
//
//    printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",t.inm, t.icode, t.ipr);
//    return 0;
//}
//===============================================================================================================================================================================
/// Structure with multiple variable

//#include<stdio.h>
//
//struct student {
//
//char nm[10];
//int id;
//int rollno;
//int age;
//float hsc;
//float ssc;
//};
//
//int main()
//{
//    struct student s1,s2,s3;
//
//    printf("\n Enter The 1st Student Details :");
//
//    printf("\n Enter The Name of Student :");
//    scanf("%s",s1.nm);
//    printf("\n Enter The ID Roll No Age HSC SSC Of Student 1 :");
//    scanf("%d%d%d%f%f",&s1.id, &s1.rollno, &s1.age, &s1.hsc, &s1.ssc);
//    printf("\n Display Student 1 Name:%s ID :%d  \t roll no:%d \t Age:%d \t HSC:%0.2f \t SSC:%0.2f" ,s1.nm, s1.id, s1.rollno, s1.age, s1.hsc, s1.ssc);
//
//    printf("\n Enter The 2nd Student Details :");
//
//    printf("\n Enter The Student Name :");
//    scanf("%s",s2.nm);
//    printf("\n Enter The ID Roll No Age HSC SSC Of Student 2");
//    scanf("%d%d%d%f%f",&s2.id, &s2.rollno, &s2.age, &s2.hsc, &s2.ssc);
//    printf("\n Display Student 2 Name:%s ID :%d  \t roll no:%d \t Age:%d \t HSC:%0.2f \t SSC:%0.2f",s2.nm, s2.id, s2.rollno, s2.age, s2.hsc, s2.ssc);
//
//    printf("\n Enter The 3rd Student Name :");
//
//    scanf("%s",s3.nm);
//    printf("\n Enter The ID Roll No Age HSC SSC Of Student 2");
//    scanf("%d%d%d%f%f",&s3.id, &s3.rollno, &s3.age, &s3.hsc, &s3.ssc);
//
//    printf("\n Display Student 3 Name:%s ID :%d  \t roll no:%d \t Age:%d \t HSC:%0.2f \t SSC:%0.2f",s3.nm, s3.id, s3.rollno, s3.age, s3.hsc, s3.ssc);
//
//
//    return 0;
//}
//===============================================================================================================================================================================
/// Array of structure variable

//#include<stdio.h>
//
//struct employee
//{
//    char nm[10];
//    int id;
//    float sal;
//};
//
//struct employee e[3];
//
// int main()
// {
//     int i;
//
//     for(i=0; i<3; i++)
//     {
//         printf("\n Enter %d Employee Details",i+1);
//
//         printf("\n Enter The Name Id Salary :");
//         scanf("%s%d%f",&e[i].nm, &e[i].id, &e[i].sal);
//     }
//
//       for(i=0; i<3; i++)
//     {
//         printf("\n Employee Name:%s \t Employee ID :%d \t Employee Salary :%0.2f",e[i].nm, e[i].id, e[i].sal);
//     }
//
// return 0;
// }
//===============================================================================================================================================================================
/// Passing the structure variable to function

//#include<stdio.h>
//
//struct student{
// int id;
// char nm[10];
// int rn;
// int age;
// float hsc,ssc;
//};
//
//void display(struct student a)
//{
//    printf("\n Student ID:%d \t Name:%s \t Roll no:%d \t age:%d \t HSC :%0.2f \t ssc :%0.2f",a.id, a.nm, a.rn, a.age, a.hsc, a.ssc);
//}
//
// int main()
//{
//     struct student s;
//
//     printf("\n Enter The Student Details :");
//
//     printf("\n Enter The Student ID Name Roll NO Age HSC SSC :");
//     scanf("%d%s%d%d%f%f", &s.id, &s.nm, &s.rn, &s.age, &s.hsc, &s.ssc);
//
//     display(s);
//}
//===============================================================================================================================================================================
/** How the structure variable is passed (By Value or By Reference )
     NOTE THAT : structure variable is passedBy Value
*/

// #include<stdio.h>
//
//struct student{
// int id,rn,age;
// char nm;
// float hsc,ssc;
//};
//
//void input(struct student a)
//{
//    printf("\n Enter The Student ID,Name,RollNo,Age,HSC,SSC : ");
//    scanf("%d%s%d%d%f%f",&a.id, &a.nm, &a.rn, &a.age, &a.hsc, &a.ssc);
//}
//
//void display(struct student b)
//{
//    printf("\n Enter The Student ID :%d \t Name :%s \t RollNo :%d \t Age :%d \t HSC :%0.2f \t SSC :%0.2f",b.id, b.nm, b.rn, b.age, b.hsc, b.ssc);
//}
//
//
//int main()
//{
//    struct student s;
//
//    input(s);
//    display(s);
//     return 0;   //
//}
//===============================================================================================================================================================================
///  Passing The Structure Variable By Reference

// #include<stdio.h>
//
// struct student{
// int id,rn,age;
// char nm[10];
// float hsc,ssc;
//};
//
//void input(struct student *a)
//{
//    printf("\n Enter The Student ID,Name,RollNo,Age,HSC,SSC : ");
//    scanf("%d%s%d%d%f%f",&a->id, &a->nm, &a->rn, &a->age, &a->hsc, &a->ssc);
//}
//
//void display(struct student b)
//{
//    printf("\n Enter The Student ID :%d \t Name :%s \t RollNo :%d \t Age :%d \t HSC :%0.2f \t SSC :%0.2f",b.id, b.nm, b.rn, b.age, b.hsc, b.ssc);
//}
//
//
//int main()
//{
//    struct student s;
//
//    input(&s);
//    display(s);
//    return 0;
//}
//===============================================================================================================================================================================
/// Display the details of Student whose SSC marks are high

//#include<stdio.h>
//
//struct student{
// int id;
// char nm[10];
// int rn;
// float ssc;
//};
//
// void display(struct student s)
//{
//    printf("\n Student ID:%d \t Name:%s \t Roll No:%d \t SSC:%0.2f",s.id, s.nm, s.rn, s.ssc);
//}
// void max(struct student a, struct student b)
//{
//    if(a.ssc>b.ssc)
//    {
//        display(a);
//    }
//    else
//    {
//     display(b);
//    }
//}
//
//  struct student s1,s2,maxstudent;
//
//  int main()
//{
//    printf("\n Enter The 1 st Student Details : ");
//    printf("\n Enter The Student ID, Name,Roll No,SSC Percentage");
//    scanf("%d%s%d%f",&s1.id, &s1.nm, &s1.rn, &s1.ssc);
//
//    printf("\n Enter The 2 st Student Details : ");
//    printf("\n Enter The Student ID, Name,Roll No,SSC Percentage");
//    scanf("%d%s%d%f",&s2.id, &s2.nm, &s2.rn, &s2.ssc);
//
//    printf("\n Details Of 1st Student :");
//    display(s1);
//    printf("\n Details Of 2nd Student : \n");
//    display(s2);
//
//    printf("\n Maximum SSC Marks Of Student ");
//        max(s1,s2);
//
//        return 0;
//}
//===============================================================================================================================================================================
/// passing array to function :- Array Can Be Passed To Function As Argument


//#include<stdio.h>
// struct book{
//
// int id;
// char nm[10];
// int chp;
// float pr;
// };
//
// void display(struct book a[])
// {
//     int i;
//     printf("\n Display All Details Of Book :");
//     for(i=0; i<3; i++)
//     {
//         printf("\n ID of Book :%d \t Name Of Book:%s \t No of Chapters :%d \t Price of Book %0.2f",a[i].id,a[i].nm,a[i].chp,a[i].pr);
//     }
// }
//
//
//int main()
//{
//    struct book b[3];
//    int i;
//
//   for(i=0; i<3; i++)
//   {
//        printf("\n Enter The Book No %d Details :",i+1);
//        printf("\n Enter The Book ID, Name, No.of Chapters, Price");
//        scanf("%d%s%d%f",&b[i].id,b[i].nm,&b[i].chp,&b[i].pr);
//   }
//       display(b);
//   return 0;
//}
//===============================================================================================================================================================================
/// Above Program using type def

//#include<stdio.h>
//
//typedef struct{
//
//int id;
//char nm[10];
//int chp;
//float pr;
//}book;
//
//
//void input ( book a[])
//{
//    int i;
//    for(i=0; i<3; i++)
//    {
//        printf("\n Enter The Book No.%d Details",i+1);
//        printf("\n Enter The ID, Name,No.of Chapters,Price of Book :");
//        scanf("%d%s%d%f",&a[i].id, a[i].nm, &a[i].chp, &a[i].pr);
//    }
//}
//
//void display( book c[])
//{
//   for(int i=0; i<3; i++)
//   {
//       printf("\n Display The Book No.%d Details \n",i+1);
//        printf("\n The ID:%d \t Name:%s \t No.of Chapters:%d \t Price of Book:%0.2f",c[i].id, c[i].nm, c[i].chp, c[i].pr);
//   }
//}
//
//int main()
//{
//    book b[3];
//
//    input(b);
//    display(b);
//
//    return 0;
//}
//===============================================================================================================================================================================
/// Pointer To Structure Variable

//#include<stdio.h>
//
//struct mobile{
// int ram;
// int memory;
// char mnm[20];
// char onm[20];
// double pr;
//
//};
//
//void  display(struct mobile p[], int cntt)
//{
//    int i;
//    printf("\n Display The All Mobile Details ");
//
//    for(i=0; i<cntt; i++)
//    {
//        printf("\n Ram:%d \t Memory:%d \t Mobile Name:%s \t Owner Name:%s \t Mobile Price:%0.2lf" ,p[i].ram, p[i].memory, p[i].mnm, p[i].onm, p[i].pr);
//    }
//}
//
//
//
//int main()
//{
//    struct mobile *m; // pointer to structure variable
//    int i,cnt;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    m=(struct mobile*)malloc(cnt*sizeof(struct mobile*));
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("\n Enter The Mobile %d Details" ,i+1);
//        printf("\n Enter the Ram :");
//        scanf("%d",&m[i].ram);
//
//        printf("\n Enter The Memory :");
//        scanf("%d",&m[i].memory);
//
//        printf("\n Enter The Name of The Mobile :");
//        scanf("%s",m[i].mnm);
//
//        printf("\n Enter The Owner Name :");
//        scanf("%s",m[i].onm);
//
//        printf("\n Enter The Price of Mobile :");
//        scanf("%lf",&m[i].pr);
//    }
//
//    display(m,cnt);
//
//    return 0;
//}
//===============================================================================================================================================================================
/** To access the dynamically allocated location using the pointer notations, we have to use
the  -> as member access operator in place of the .(dot).
*/

//#include<stdio.h>
//struct Mobile
//{
//    int ram;
//    int memory;
//    char mnm[50];
//    char onm[40];
//    double price;
//
//};
//
//void display(struct Mobile *m,int cnt)
//{
//    int  i;
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner ",i+1);
//        printf("\n Owner Name : %s \t Mobile Name : %s \t Ram : %d \t Memory : %d \t Price : %0.3f",(m+i)->onm,(m+i)->mnm,(m+i)->ram,(m+i)->memory,(m+i)->price);
//    }
//
//}
//int main()
//{
//    struct Mobile *p;
//    int cnt,i;
//
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);//5
//
//    p=(struct mobile*)malloc(cnt*sizeof(struct mobile));
//
//    printf("\n Enter the details of Mobile :");
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner : ",i+1);
//        printf("\n  Enter the Owner name :");
//        scanf("%s",(p+i)->onm);
//
//        printf("\n Enter the Mobile Name : ");
//        scanf("%s",(p+i)->mnm);
//
//        printf("\n Enter the Ram : ");
//        scanf("%d",&(p+i)->ram);
//
//        printf("\n Enter the mobile memory : ");
//        scanf("%d",&(p+i)->memory);
//        printf("\n Enter the Mobile price : ");
//        scanf("%lf",&(p+i)->price);
//    }
//
//    display(p,cnt);
//
//     return 0;
//
//}
//===============================================================================================================================================================================
///Above Program Using typedef

//#include<stdio.h>
//
//typedef struct
//{
//    int ram;
//    int memory;
//    char mnm[50];
//    char onm[40];
//    double price;
//
//}mobile;
//
//void display(mobile *m, int cnt)
//{
//    int  i;
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner ",i+1);
//        printf("\n Owner Name : %s \t Mobile Name : %s \t Ram : %d \t Memory : %d \t Price : %0.3f",(m+i)->onm,(m+i)->mnm,(m+i)->ram,(m+i)->memory,(m+i)->price); printf("\n");
//    }
//
//}
//int main()
//{
//     mobile *p;
//    int cnt,i;
//
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);//5
//
//    p=(mobile*)malloc(cnt*sizeof(mobile));
//
//    printf("\n Enter the details of Mobile :");
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner : ",i+1);
//        printf("\n  Enter the Owner name :");
//        scanf("%s",(p+i)->onm);
//
//        printf("\n Enter the Mobile Name : ");
//        scanf("%s",(p+i)->mnm);
//
//        printf("\n Enter the Ram : ");
//        scanf("%d",&(p+i)->ram);
//
//        printf("\n Enter the mobile memory : ");
//        scanf("%d",&(p+i)->memory);
//        printf("\n Enter the Mobile price : ");
//        scanf("%lf",&(p+i)->price);
//    }
//
//    display(p,cnt);
//
//     return 0;
//
//}
//===============================================================================================================================================================================

/// Array of structure variable when array as member of structure

//#include<stdio.h>
//
//typedef struct
//{
//
//    int rn;
//    char nm[20];
//    float mrk[5];
//
//} student;
//
//void display(student a[])
//{
//    int i,j;
//    printf("\n Display All Details Of Students \n");
//
//    for(i=0; i<3; i++)
//    {
//        printf("\n Details Of %d Student",i+1);
//        printf("\n Roll No: %d \t Name:%s \n",a[i].rn, a[i].nm);
//
//        for(j=0; j<5; j++)
//        {
//            printf("\t Marks Of %d Subject :",j+1);
//            printf("%0.2f",a[i].mrk[j]);
//        }
//    }
//}
//
//int main()
//{
//    student s[3];
//    int i,j,cnt;
//    printf("\n ******* Enter The All Details Of Student ******* ");
//
//    for(i=0; i<3; i++)
//    {
//        printf("\n Enter The Student No %d Details",i+1);
//        printf("\n Enter Roll No :");
//        scanf("%d",&s[i].rn);
//
//        printf("\n Enter The Name Of Student :");
//        scanf("%s",s[i].nm);
//
//        printf("\n Enter The Marks Of 5 Subject :");
//
//        for(j=0; j<5; j++)
//        {
//            printf("\n Enter The Mark Of Subject No %d :",j+1);
//            scanf("%f",&s[i].mrk[j]);
//        }
//    }
//
//    display(s);
//
//    return 0;
//}
//===============================================================================================================================================================================
/// pointer of structure variable when pointer as member of structure

//#include<stdio.h>
//
//  typedef struct{
//
//   int rn;
//   char nm[20];
//   float *mrk;
//
//  }student;
//
// student *s;
//
//  void display(student *p, int cnt, int cntt)
//  {
//      int i,j;
//     printf("\n Display All Student Details");
//
//     for(i=0; i<cnt; i++)
//     {
//         printf("\n Roll No Of %d Student :%d",i+1,(p+i)->rn);
//         printf("\n Name Of The %d Student :%s",i+1,(p+i)->nm);
//
//         printf("\n Marks Of %d Students :",i+1);
//
//         for(j=0; j<cntt; j++)
//         {
//             printf("\n Marks of %d Subject: %0.2f",j+1,*((p + i)->mrk + j));
//         }
//     }
//  }
//
//  int main()
//{
//
//    int cnt,subcnt,i,j;
//
//    printf("\n Enter The Student Count : ");
//    scanf("%d",&cnt);
//
//    printf("\n Enter The Subject Count :");
//    scanf("%d",&subcnt);
//
//    s=(student*)malloc(cnt*sizeof(student));
//
//    printf("\n Enter All Details Of Students \n");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("\n Details Of %d Student",i+1);
//
//        printf("\n Enter The Roll No Of %d Student :",i+1);
//        scanf("%d",&(s+i)->rn);
//
//        printf("\n Enter The Name Of %d Student :",i+1);
//        scanf("%s",(s+i)->nm);
//
//        printf("\n Enter The Marks of %d Student :",i+1);
//
//         (s+i)->mrk=(float*)malloc(subcnt*sizeof(int));
//
//          for(j=0; j<subcnt; j++)
//          {
//              printf("\n Mark Of %d Subject :",j+1);
//              scanf("%f",&(s+i)->mrk+j);
//          }
//    }
//
//    display(s,cnt,subcnt);
//
//    return 0;
//}

//===============================================================================================================================================================================
/// Structure Variable As Member Of Another Structure

//#include<stdio.h>
//
//struct Date{
//
//  int mdt;
//  int mmth;
//  int myr;
//
//};
//struct Item{
//
//  char nm[20];
//  float pr;
//  int qnt;
//
//   struct Date d;
//
//};
//
//void display(struct Item i)
//{
//    printf("\n Item Name :%s \t Item Price :%0.f \t Item Quantity :%d",i.nm, i.pr, i.qnt);
//    printf("\n Item Manufacturing Date :%d \t Manufacturing Month :%d \t  Manufacturing Year :%d",i.d.mdt, i.d.mmth, i.d.myr);
//}
//
//
//int main()
//{
//    struct Item i;
//
//    printf("\n Enter The Item Name :");
//    scanf("%s",i.nm);
//
//    printf("\n Enter The Item Price :");
//    scanf("%f",&i.pr);
//
//    printf("\n Enter The Item Quantity :");
//    scanf("%d",&i.qnt);
//
//    printf("\n Enter The Item Manufacturing Date, Manufacturing Month, Manufacturing Year :");
//    scanf("%d%d%d",&i.d.mdt, &i.d.mmth, &i.d.myr);
//
//    display(i);
//
//    return 0;
//}
//===============================================================================================================================================================================
/// Self Referable Structure OR (Singly Linked List)

//#include<stdio.h>
//
//struct student
//{
//    int rno;
//    char nm;
//
//    struct student *next;
//};
//
//int main()
//{
//    struct student *tmp, *start, *last;
//    int opt;
//
//    printf("\n 1. Input \t 2.Display \t 3.Stop");
//    printf("\n Enter The Valid Option :");
//    scanf("%d",&opt);
//
//
//    while(1)
//    {
//        if(opt==1)
//        {
//            tmp=(struct student*)malloc(sizeof(struct student));
//
//            printf("\n Enter The Roll No And Name Of Student : ");
//            scanf("%d%s",&tmp->rno, tmp->nm);
//            tmp->next=NULL;
//
//            if(start==NULL)
//            {
//                start=tmp;
//                last=tmp;
//            }
//            else
//            {
//                last->next=tmp;
//                last=tmp;
//            }
//        }
//
//        else if(opt==2)
//        {
//            tmp=start;
//
//            while(tmp)
//            {
//                printf("\n Roll No :%d \t Student Name :%s",tmp->rno,tmp->nm);
//                tmp=tmp->next;
//            }
//        }
//        else if(opt==3)
//        {
//            printf("\n Thank you !!!!");
//            break;
//        }
//        else
//        {
//            printf("\n Incorrect Option !!!!");
//        }
//
//    }
//
//    return 0;
//
//}
//===============================================================================================================================================================================
/// Dynamic Implementation Of Stack

//#include<stdio.h>
//
//struct Node{
//
// int data;
// struct Node *next;
//
//};
//
// struct Node *tmp, *start, *last;
//
// int main()
//{
//    int opt;
//    start=NULL;
//
//    while(1)
//    {
//        printf("\n 1. INSERT \t 2. DELETE \t 3.DISPLAY \t 4.STOP ");
//        printf("\n Enter The Valid Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {               // Create   Node
//            case 1: tmp=(struct Node*)malloc(sizeof(struct Node));
//
//                printf("\n Enter The Data :");
//                scanf("%d",&tmp->data);
//                tmp->next=NULL;
//
//                     // insert into list
//
//                 if(start==NULL)
//                 {
//                     start=tmp;
//                     last=tmp;
//                 }
//                 else
//                 {
//                     last->next=tmp;
//                     last=tmp;
//                 }
//
//             break;
//
//             case 2: tmp=start;
//
//                    if(start==NULL)
//                    {
//                        printf("\n Stack is Empty");
//                    }
//                    else if(tmp->next==NULL)
//                    {
//                        start=NULL;              //it delete 1st stack
//                    }
//                    else
//                    {
//                        while(tmp->next!=last)
//                        {
//                            tmp=tmp->next;
//                        }
//                        tmp->next=NULL;                 // it delete stack between start and last
//
//                        printf("\n ([%d] is Popped) \n",last->data);
//                        free(last);
//                        last=tmp;
//                    }
//              break;
//              case 3: tmp=start;
//
//                     while(tmp)
//                     {
//                         printf("\t %d",tmp->data);
//                         tmp=tmp->next;
//                     }
//              break;
//
//              case 4:
//
//                   printf("\n Thank You ***");
//                   exit(0);
//
//
//        }
//    }
//return 0;
//}
//===============================================================================================================================================================================
/// Singly Circular Linked List

//#include<stdio.h>
//
//struct Node{
//
// int data;
// struct Node *next;
//
// };
//
// struct Node *tmp, *start, *last;
// int cnt=0;
//
// int main()
// {
//     int opt,i;
//     start=NULL;
//
//     while(1)
//     {
//         printf("\n 1.Insert \t 2.Display \t 3.Stop");
//         printf("\n Enter The Option ");
//         scanf("%d",&opt);
//
//         switch(opt)
//       {                // Create Node
//         case 1: tmp=(struct Node*)malloc(sizeof(struct Node));
//
//                  printf("\n Enter The Roll No :");
//                  scanf("%d",&tmp->data);
//
//                  tmp->next=start;
//
//                  if(start==NULL)
//                  {
//                      start=tmp;
//                      last=tmp;
//                  }
//                  else
//                  {
//                      last->next=tmp;
//                      last=tmp;
//                  }
//                  cnt++;
//          break;
//
//        case 2:
//                tmp=start;
//                i=0;
//                printf("\n Element Count %d And Elements Are :",cnt);
//
//                 do{
//                    printf("\t %d",tmp->data);
//                    tmp=tmp->next;
//
//                 i++;
//                 }while(i<cnt);
//
//         break;
//
//         case 3: exit(0);
//
//       }
//     }
//return 0;
// }
//===============================================================================================================================================================================
/// Doubly Linked List

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node
//{
//    int data;
//    struct Node *next;
//    struct Node *prv;
//};
//
//int main()
//{
//    struct Node *start=NULL,*last,*tmp;
//    int opt,cnt=0,i;
//
//    while(1)
//    {
//        printf("\n 1.Insert \t 2.Delete \t 3.Display \t 3.Stop ");
//        printf("\n Enter Your Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//
//                printf("\n Enter the data : ");
//                scanf("%d",&tmp->data);
//
//                tmp->next=NULL;
//                tmp->prv=NULL;
//
//                if(start==NULL)
//                {
//                    start=tmp;
//                    last=tmp;
//                }
//                else
//                {
//                    last->next=tmp;
//                    tmp->prv=last;
//                    last=tmp;
//                }
//                cnt++;
//                break;
//
//
//            case 2: tmp=start;
//
//                    if(start==NULL)
//                    {
//                        printf("\n Stack is Empty");
//                    }
//                    else if(tmp->next==NULL)
//                    {
//                        start=NULL;
//                    }
//                    else
//                    {
//                        while(tmp->next!=last)
//                        {
//                            tmp=tmp->next;
//                        }
//                          tmp->next=NULL;
//
//                          printf("\n [%d] is POPPED",last->data);
//                          free(last);
//                          last=tmp;
//                    }
//               break;
//
//            case 3:
//                tmp=start;
//                int i=0;
//                printf("\n Forward Direction ");
//
//                while(tmp)
//                {
//                    printf("\t %d ",tmp->data);
//                    tmp=tmp->next;
//                }
//
//                tmp=last;
//               // i=cnt;
//                printf("\n Reverse Direction ");
//                while(tmp)
//                  {
//                        printf("\t %d ",tmp->data);
//                        tmp=tmp->prv;
//                  }
//
//                break;
//
//            case 4:
//                exit(0);
//            default:
//                printf("\n Incorrect Option !!");
//
//        }
//
//    }
//
//    return 0;
//
//}
//===============================================================================================================================================================================
/// Doubly circular linked list

//#include<stdio.h>
//#include<stdlib.h>
//
//struct node
//{
//
//    struct node *prv;
//    int data;
//    struct node *next;
//
//};
//
//struct node *tmp, *start, *last;
//
//int main()
//{
//    int opt,cnt=0,i;
//    start=NULL;
//    last=NULL;
//
//    while(1)
//    {
//        printf("\n 1. INSERT \t 2.DELETE \t 3.DISPLAY \t 4. STOP ");
//        printf("\n Enter The Valid Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//        case 1:
//            tmp=(struct node*)malloc(sizeof(struct node));
//
//            printf("\n Enter The Data :");
//            scanf("%d",&tmp->data);
//
//            tmp->prv=last;       // if stack is not present
//            tmp->next=start;
//
//            if(start==NULL)
//            {
//                start=tmp;
//                last=tmp;
//
//                tmp->prv=last;    // if only one stack is present
//                tmp->next=start;
//
//            }
//            else
//            {
//                last->next=tmp;
//                tmp->prv=last;
//                last=tmp;
//                start->prv=last; // start->prv=tmp;
//            }
//            cnt++;
//
//            break;
//
//        case 2:
//            tmp=start;
//
//            if(start==NULL)
//            {
//                printf("\n Stack is Empty");
//            }
//            else if(tmp->next==NULL)
//            {
//                start=NULL;
//
//            }
//            else
//            {
//                while(tmp->next!=last)
//                {
//                    tmp=tmp->next;
//                }
//                tmp->next=NULL;
//                printf("\n [%d] is POPPED",last->data);
//                free(last);
//                last=tmp;
//
//                cnt--;
//            }
//
//            break;
//
//        case 3:
//            printf("\n In Forward Direction");
//
//            tmp=start;
//
//            i=0;
//            do
//            {
//                printf("\t %d",tmp->data);
//
//                tmp=tmp->next;
//            i++;
//            }
//            while(i<cnt);
//
//            printf("\n In Reverse Direction");
//
//            tmp=last;
//
//            i=cnt;
//            do
//            {
//                printf("\t %d",tmp->data);
//                tmp=tmp->prv;
//           i--;
//            }
//            while(i>0);
//
//         break;
//
//
//        case 4:
//            exit(0);
//
//        default:
//            printf("\n Invalid Option");
//
//        }
//    }
//    return 0;
//
//}
//===============================================================================================================================================================================
/// WAP to delete the element in singly linked list

//#include<stdio.h>
//
//struct Node
//{
//
//    int data;
//    struct Node *next;
//
//};
//
//int main()
//{
//
//    struct Node *tmp, *start, *last;
//
//    int i,opt,no;
//   //
//    start=NULL;
//
//    while(1)
//    {
//        printf("\n 1.Insert \t 2. Delete At Start \t 3.Display \t 4. Stop");
//        printf("\n Enter The Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//        case 1:
//            tmp=(struct Node*)malloc(sizeof(struct Node));
//
//            printf("\n Enter The Data :");
//            scanf("%d",&tmp->data);
//
//            tmp->next=NULL;
//
//            if(start==NULL)
//            {
//                start=tmp;
//                last=tmp;
//            }
//            else
//            {
//                last->next=tmp;
//                last=tmp;
//            }
//
//            break;
//
//        case 2:
//
//            tmp=start;
//
//            if(start==NULL)
//            {
//               printf("\n Stack is Empty");
//            }
//           else
//            {
//					start=start->next;
//					printf("\n %d is poped",tmp->data);
//                //this loop eliminate the stack.Without this loop program run but they don't delete the 1st stack
//            }
//
//            break;
//
//        case 3:
//            tmp=start;
//
//            while(tmp)
//            {
//                printf("\t %d",tmp->data);
//                tmp=tmp->next;
//            }
//            break;
//
//        case 4:
//            printf("\n Thank You Visit Again !!!");
//            exit(0);
//
//        default :
//            printf("\n Please Enter Valid Option");
//
//        }
//    }
//
//    return 0;
//}
//===============================================================================================================================================================================
/// WAP to delete the element By Selecting Element in singly linked list

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node
//{
//
//    int data;
//    struct Node *next;
//
//};
//
//int main()
//{
//
//    struct Node *tmp, *start, *last;
//
//    int flg,i,opt,no;
//    //
//    start=NULL;
//
//    while(1)
//    {
//        printf("\n 1.Insert \t 2. Delete The Element \t 3.Display \t 4. Stop");
//        printf("\n Enter The Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//        case 1:
//
//            tmp=(struct Node*)malloc(sizeof(struct Node));
//
//            printf("\n Enter The Data :");
//            scanf("%d",&tmp->data);
//
//            tmp->next=NULL;
//
//            if(start==NULL)
//            {
//                start=tmp;
//                last=tmp;
//            }
//            else
//            {
//                last->next=tmp;
//                last=tmp;
//            }
//
//            break;
//
//        case 2:
//
//            tmp=start;
//
//            if(start==NULL)
//            {
//                printf("\n Stack is Empty");
//            }
//            else
//            {
//                printf("\n Select The Element");
//                scanf("%d",&no);
//
//                while(tmp->next!=NULL)
//                {
//                    if(tmp->next->data==no)
//                    {
//
//                         tmp->next=tmp->next->next;
//                        printf("\n [%d] is POPPED",tmp->next->data);
//                    }
//
//                    tmp=tmp->next;
//                }
//
//                break;
//
//            }
//
//            break;
//
//        case 3:
//
//            tmp=start;
//
//            while(tmp)
//            {
//                printf("\t %d",tmp->data);
//                tmp=tmp->next;
//            }
//            break;
//
//        case 4:
//
//            printf("\n Thank You Visit Again !!!");
//            exit(0);
//
//        default :
//
//            printf("\n Please Enter Valid Option");
//
//        }
//    }
//
//    return 0;
//}
//===============================================================================================================================================================================
/// WAP to delete the element in singly Circular linked list

#include<stdio.h>
struct node
{

    int data;
    struct node *next;

};

int cnt=0;

int main()
{
    struct node *tmp, *start, *last;
    start=NULL;

    int opt,i;

    while(1)
    {
        printf("\n 1.Insert \t 2. Delete At Start \t 3.Display \t 4. Stop");
        printf("\n Select Option  :- ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            tmp=(struct node*)malloc(sizeof(struct node));
            printf("\n Enter The Data : ");
            scanf("%d",&tmp->data);
            tmp->next=start;

            if(start==NULL)
            {
                start=tmp;
                last=tmp;
            }
            else
            {
                last->next=tmp;
                last=tmp;
            }
            cnt++;

            break;
        case 2:
            tmp=start;

            if(start==NULL)
            {
                printf("\n Stack is Empty");
            }
            else
            {
                printf("\n [%d is Popped] \n",start->data);
                start=start->next;
                last->next=start;

                if(tmp==NULL)
                {
                    printf("\n Stack is Empty");
                }
            }
            cnt--;
            break;

        case 3:

            tmp=start;
            i=0;
            while(i<cnt)
            {
                printf("\t %d",tmp->data);
                tmp=tmp->next;

           i++;
            }
            break;

        case 4:
            printf("\n Thank You Very Much !!!");
            exit(0);

        default:
            printf("\n Please Select Valid Option !!! ");
        }
    }
    return 0;
}
//===============================================================================================================================================================================

















