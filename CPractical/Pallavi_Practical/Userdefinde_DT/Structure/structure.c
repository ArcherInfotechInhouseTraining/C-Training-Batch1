/*
#include<stdio.h>
int main()
{
    struct Book
    {
        int bkid;
        int bknot;
        float bkpr;
        char bknm[50];
    };

    struct Book b;
    printf("\n Enter book name: ");
    gets(b.bknm);
    printf("\n Enter book id and not: ");
    scanf("%d%d",&b.bkid,&b.bknot);
    printf("\n Enter book price: ");
    scanf("%f",&b.bkpr);

    printf("\n Book Details : ");
    printf("\n Book name: %s",b.bknm);
    printf("\t Book id: %d\t Book not: %d\t Book price: %f",b.bkid,b.bknot,b.bkpr);

    return 0;
}
*/

///----------------------------------------------------------------------------------------------
/// Initilization of structure variable
/*
#include<stdio.h>
struct Book
{
    int bkid;
    int bknot;
    float bkpr;
};
int main()
{
    struct Book b={1,23,456.67};

    printf("\n Book id: %d\t Book not: %d\t Book price: %f",b.bkid,b.bknot,b.bkpr);

    return 0;
}

*/


///======================================================================
/// Input and display the structure data
/*
struct Student
{
    int sid;
    char snm[50];
    float per10;
    float per12;
};

int main()
{
    struct Student s;

    printf("\n Enter student details: ");
    printf("\n Student name: ");
    gets(s.snm);
    printf("\n Enter student id,10 marks and 12 marks:");
    scanf("%d%f%f",&s.sid,&s.per10,&s.per12);

    printf("\n Display student details: \n");
    printf("\n Student ID: %d\n Student name: %s\n 10th Marks: %f\n 12th Marks: %f",s.sid,s.snm,s.per10,s.per12);
}
*/

///============================================================================================
/// Write a structure to represent all details of item and perform IO operation.

/*

struct Item
{
    int icode;
    char inm[50];
    float ipr;
};
void in(struct Item *t)
{
    printf("\n Enter the Name of Item: ");
    gets(t->inm);

    printf("\n Enter the Code and Price of Item: ");
    scanf("%d %f",&t->icode,&t->ipr);
}
void out(struct Item t )
{
    printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",t.inm, t.icode, t.ipr);
}

int main()
{
    struct Item t;
    in(&t);
    out(t);

    return 0;
}
*/

///============================================================================================
/// Using the typedef
/*

typedef struct
{
    int icode;
    char inm[50];
    float ipr;
}item;

int main()
{
    item t;

    printf("\n Enter the Name of Item: ");
    gets(t.inm);

    printf("\n Enter the Code and Price of Item: ");
    scanf("%d %f",&t.icode,&t.ipr);

    printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",t.inm, t.icode, t.ipr);
    return 0;
}
*/
///-----------------------------------------------------------------
/// Passing the structure variable to function(using typedef)
/*
typedef struct
{
    int icode;
    char inm[50];
    float ipr;
}item;

void display( item a)
{
     printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",a.inm, a.icode, a.ipr);
}
int main()
{
    item t;

    printf("\n Enter the Name of Item: ");
    gets(t.inm);

    printf("\n Enter the Code and Price of Item: ");
    scanf("%d %f",&t.icode,&t.ipr);

    display(t);


    return 0;
}
*/

/// Passing the structure variable to function(without using typedef)
/*
#include<stdio.h>
struct item
{
    int icode;
    char inm[50];
    float ipr;
};

void display( struct item a)
{
     printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",a.inm, a.icode, a.ipr);
}
int main()
{
   struct item t;

    printf("\n Enter the Name of Item: ");
    gets(t.inm);

    printf("\n Enter the Code and Price of Item: ");
    scanf("%d %f",&t.icode,&t.ipr);

    display(t);

    return 0;
}
*/

///---------------------------------------------------
///  Passing the structure variable by reference
/*
struct Item
{
    int icode;
    char inm[50];
    float ipr;

};
void display(struct Item t)
{
    printf("\n Item code: %d\t Item name: %s\t Item price: %f",t.icode,t.inm,t.ipr);
}
void input(struct Item *p)
{
    printf("\n Enter item name: ");
    gets(p->inm);
    printf("\n Enter item code and item price: ");
    scanf("%d%f",&p->icode,&p->ipr);
}
int main()
{
    struct Item t;
    input(&t);
    display(t);

    return 0;
}
*/

///----------------------------------------------------------------------------------
///print details of max price item
/*
#include<stdio.h>
struct Item
{
    int icode;
    char inm[50];
    float ipr;

};
struct Item maxprice(struct Item a,struct Item b)
{
    if(a.ipr>b.ipr)
    {
        return a;
    }
    else
    {
        return b;
    }
};
void display(struct Item t)
{
    printf("\n Item code: %d\t Item name: %s\t Item price: %f",t.icode,t.inm,t.ipr);
}
int main()
{
    struct Item t1,t2,max;

    printf("\n Enter item name: ");
    gets(t1.inm);
    printf("\n Enter item code and item price: ");
    scanf("%d%f",&t1.icode,&t1.ipr);

    printf("\n Enter item name: ");
    fflush(stdin);
    gets(t2.inm);
    printf("\n Enter item code and item price: ");
    scanf("%d%f",&t2.icode,&t2.ipr);

    display(t1);
    display(t2);

    max=maxprice(t1,t2);

    printf("\n Details of item having max price: ");
    display(max);

    return 0;
}
*/
///==============================================================
///Array of structure elements
/*
#include<stdio.h>
struct Student
{
    int sid;
    char snm[50];
    float sper;
};

int main()
{
    struct Student s[5];

    int i;

    printf("\n Enter the student details: ");
    for(i=0;i<5;i++)
    {
        printf("\n Student:  %d\n",i+1);
        printf("Enter name id and per: ");
        fflush(stdin);
        gets(s[i].snm);
        scanf("%d%f",&s[i].sid,&s[i].sper);
    }

    printf("\n Display student details: ");
    for(i=0;i<5;i++)
    {
        printf("\n Student: %d",i+1);
        printf("\t %s\t %d\t %f",s[i].snm,s[i].sid,s[i].sper);
    }
    return 0;
}
*/

///===========================================================
/// Passing Array To Function
/*

#include<stdio.h>
struct Student
{
    int sid;
    char snm[50];
    float sper;
};
void input(struct Student s[])
{
    printf("\n Enter student details: \n");
    for(int i=0;i<3;i++)
    {
        printf("\n Student : %d \n",i+1);
        printf("\n Enter student name id and per :");
        fflush(stdin);
        gets(s[i].snm);
        scanf("%d%f",&s[i].sid,&s[i].sper);
    }
}
void output(struct Student s[])
{
    printf("\n Details of students: ");
    for(int i=0;i<3;i++)
    {
        printf("\n Student: %d\t",i+1);
        printf("Name: %s\t ID: %d\t Per: %f",s[i].snm,s[i].sid,s[i].sper);
    }
}


int main()
{
    struct Student s[3];

     input(s);
     output(s);

    return 0;
}
*/


///========================================================================
/*
/// Pointer to structure variables.

#include<stdio.h>
int cnt;
struct Student
{
    int sid;
    char snm[50];
    float sper;
};

void display(struct Student *s)
{
    printf("\n Display student details: ");
    for(int i=0;i<cnt;i++)
    {
        printf("\n student : %d\t",i+1);
        printf("Name: %s\t Id: %d\t Per: %f",(s+i)->snm,(s+i)->sid,(s+i)->sper);
    }
}
int main()
{
    struct Student *s;

    printf("\n Enter the count ");
    scanf("%d",&cnt);

    s=(struct Student*)malloc(cnt*sizeof(struct Student));

    printf("\n Enter the detailas of %d students: ",cnt);
    for(int i=0;i<cnt;i++)
    {
        printf("\n Enter name id and per: ");
        printf("\n Student : %d\n",i+1);

        fflush(stdin);
        gets((s+i)->snm);
        scanf("%d%f",&(s+i)->sid,&(s+i)->sper);
    }

    display(s);
}

*/

//================================================================================================================================
/*
#include<stdio.h>
struct Student
{
    int sid;
    char snm[50];
    float sper;
};
int cnt;
void display(struct Student s[])
{
    printf("\n Display student data: ");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Student : %d\t",i+1);
        printf("Name: %s\t Id: %d\t Per: %f",s[i].snm,s[i].sid,s[i].sper);
    }
}
int main()
{
    struct Student *s;

    printf("\n Enter student cnt: ");
    scanf("%d",&cnt);

    s=(struct Student*)malloc(cnt*sizeof(struct Student));

    printf("\n Enterstudent details: ");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Enter Name Id and Per:");
        printf("\n Student: %d\t",i+1);

        fflush(stdin);
        gets(s[i].snm);
        scanf("%d%f",&s[i].sid,&s[i].sper);

    }

    display(s);
}
*/
///===============================================================================================================

/// Using Array as a member of structure.
/*
#include<stdio.h>

struct Student
{
    int srno;
    char snm[50];
    int marks[5];
};

int main()
{
    struct Student s;
    int i;

    printf("\n Enter the student details: ");
    printf("\n Enter student names");
    gets(s.snm);
    printf("\n Enter student rollno");
    scanf("%d",&s.srno);
    printf("\n Enter the 5 subject marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
    }

    printf("\n Name: %s \t Rno: %d Marks:",s.snm,s.srno);

    for(i=0;i<5;i++)
    {
        printf("\t %d",s.marks[i]);
    }
    return 0;
}

*/
///------------------------------------------------
///above que. for 2 structure variables.
/*
#include<stdio.h>

struct Student
{
    int srno;
    char snm[50];
    int marks[5];
};

int main()
{
    struct Student s,s2;
    int i;

    printf("\n Enter the student details: ");

    printf("\n Enter student name: ");
    fflush(stdin);
    gets(s.snm);

    printf("\n Enter student rollno: ");
    scanf("%d",&s.srno);

    printf("\n Enter the 5 subject marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
    }

    printf("\n Details of 1st student: ");
    printf("\n Name: %s \t Rno: %d Marks:",s.snm,s.srno);

    for(i=0;i<5;i++)
    {
        printf("\t %d",s.marks[i]);
    }

    ///for s2

    printf("\n Enter student name: ");
    fflush(stdin);
    gets(s2.snm);

    printf("\n Enter student rollno: ");
    scanf("%d",&s2.srno);

    printf("\n Enter the 5 subject marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s2.marks[i]);
    }

    printf("\n Details of 2nd student: ");
    printf("\n Name: %s \t Rno: %d Marks:",s2.snm,s2.srno);

    for(i=0;i<5;i++)
    {
        printf("\t %d",s2.marks[i]);
    }
    return 0;
}
*/

///================================================================================================

///Enter the  details of 2 student
/*
#include<stdio.h>

struct Student
{
    char nm[50];
    int marks[5];
};

int main()
{
    struct Student s[2];
    int i,j;
    printf("\n Enter the details of two student: ");
    for(i=0;i<2;i++)
    {
        printf("\n Enter %d student name: ",i+1);
        fflush(stdin);
        gets(s[i].nm);
        printf("\n Enter 5 subject marks: ");
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }

    printf("\n Display student details: ");

    for(i=0;i<2;i++)
    {
        printf("\n Student %d: ",i+1);
        printf("\t Name: %s \t Marks: ",s[i].nm);

        for(j=0;j<5;j++)
        {
            printf("\t %d",s[i].marks[j]);
        }
    }
    return 0;
}

*/

///==========================================================================================
/// Pointer as a member of structure
/*
#include<stdio.h>

struct Student
{
    int rno;
    int *sub;
};

int main()
{
    struct Student s;
    int cnt,i;

    printf("\n Enter the cnt: ");
    scanf("%d",&cnt);

    s.sub=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter the student roll no : ");
    scanf("%d",&s.rno);

    printf("\n Enter the %d sub marks: ",cnt);
    for(i=0;i<cnt;i++)
    {
        //scanf("%d",&s->(sub+i));
        scanf("%d",&s.sub[i]);
    }

    printf("\n Display student details: ");
    printf("\n Roll no: %d \t Marks: ",s.rno);
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",s.sub[i]);
    }

    return 0;
}
*/
///==========================================================
/// Variable of another structure as a member of structure
/*
#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};

typedef struct
{
    int icode;
    int ipr;

    struct Date mfdt;
}Item;

int main()
{
    Item t;

    printf("\n Enter the code and price of item: ");
    scanf("%d%d",&t.icode,&t.ipr);

    printf("\n Enter the mf. date of item: ");
    scanf("%d%d%d",&t.mfdt.day,&t.mfdt.month,&t.mfdt.year);

    printf("\n Display item details: ");
    printf("\n icode: %d\t ipr:%d\t Date:%d/%d/%d",t.icode,t.ipr,t.mfdt.day,t.mfdt.month,t.mfdt.year)
}

*/

///=====================================================================================================

/// Self-referable structure: A structure having one pointer variable of same type.
///singly linked list

/*
#include<stdio.h>
 struct Student
 {
     int id;
     char nm[50];
     float per;
     struct Student *next;
 };

 int main()
 {
     struct Student *start=NULL,*last,*tmp;
     int opt;

     while(1)
     {
         printf("\n ----------MENU------------");
         printf("\n 1. Insert Data \t 2.Display Data \t 3.Stop");
         printf("\n Enter any option: ");
         scanf("%d",&opt);

         switch(opt)
         {
         case 1:
            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter Student Name: ");
            fflush(stdin);
            gets(tmp->nm);
            printf("\n Enter id and Per : ");
            scanf("%d %f",&tmp->id,&tmp->per);

            tmp->next=NULL;

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
            break;
         case 2:
            tmp=start;
            while(tmp)
            {
                printf("{%s - %d - %f}\t",tmp->nm,tmp->id,tmp->per);
                tmp=tmp->next;
            }
            break;

         case 3:
            exit(0);
         }
     }
     return 0;
 }

*/

///==================================================================
/// Doublly Linked List

/*

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    int per;
    struct Student *Next;
    struct Student *Prv;
};

int main()
{
    struct Student *Start=NULL,*tmp,*Last;
    int opt;

    while(1)
    {
        printf("\n ************ MENU ****************");
        printf("\n 1.Insert data \t 2.Display data \t 3. Stop");
        printf("\nEnter Any Option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            tmp=(struct Student *)malloc(sizeof(struct Student));
            printf("\n Enter Student Name : ");
            fflush(stdin);
            gets(tmp->nm);
            printf("\n Enter Id and Per : ");
            scanf("%d%d",&tmp->id,&tmp->per);
            tmp->Next=NULL;

            if(Start==NULL)
            {
                tmp->Prv=NULL;
                Start=tmp;
                Last=tmp;
            }
            else
            {
                Last->Next=tmp;
                tmp->Prv=Last;
                Last=tmp;
            }
            break;

        case 2:
            printf("\n(FWD) Display all Student details  : ");
            tmp=Start;
            while(tmp)
            {
                printf("{%s - %d - %d} \t ",tmp->nm,tmp->id,tmp->per);
                tmp=tmp->Next;
            }

            printf("\n(BWD) Display all Student details  : ");
            tmp=Last;
            while(tmp)
            {
                printf("{%s - %d - %d} \t ",tmp->nm,tmp->id,tmp->per);
                tmp=tmp->Prv;
            }

            break ;
        case 3:
            exit(0);
        }
    }
    return 0;
}
*/

///==========================================================================
///singly Circular link list
/*
#include<stdio.h>

struct Student
{
    int data;
    struct Student *Next;
};
int main()
{
    struct Student *Start,*Last,*tmp;
    int opt,cnt=0,i;
    Start=NULL;


    while(1)
    {
        printf("\n ************* MENU *************");
        printf("\n 1.Insert \t 2.Display \t 3.Stop");
        printf("\n Enter any option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter student data : ");
            scanf("%d",&tmp->data);

            tmp->Next=Start;

            if(Start==NULL)
            {
                Start=tmp;
                Last=tmp;
                tmp->Next=Start;
            }
            else
            {
                Last->Next=tmp;
                Last=tmp;
            }
            cnt++;
            break;
        case 2:
            //printf("\n Display data : ");
            tmp=Start;
            i=0;
            while(++i<=cnt)
            {
                printf("%d \t",tmp->data);
                tmp=tmp->Next;
            }
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}
*/

///=============================================================================================

/// Using Doubly Circular Linked list.
/*
#include<stdio.h>
struct Student
{
    int data;
    struct Student *prv;
    struct Student *next;
};

int main()
{
    struct Student *start,*last,*tmp;
    int opt,cnt=0,i;
    start=NULL;
    last=NULL;

    while(1)
    {
        printf("\n *********MENU*********");
        printf("\n 1.Insert \t 2.Display \t 3.Stop");
        printf("\n Enter any option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            tmp=(struct Student*)malloc(sizeof(struct Student));
            printf("\n Enter student data : ");
            scanf("%d",&tmp->data);

            tmp->next=start;
            tmp->prv=last;


            if(start==NULL)
            {
                start=tmp;
                last=tmp;
                tmp->prv=last;
                tmp->next=start;
            }
            else
            {
                last->next=tmp;
                tmp->prv=last;
                last=tmp;
                start->prv=last;
            }
            cnt++;
            break;

        case 2:
            tmp=start;
            printf("\n IN FWD Direction : \n");
            i=0;
            while(++i<=cnt)
            {
                printf("%d \t",tmp->data);
                tmp=tmp->next;
            }

            printf("\n In BWD Direction : \n");

            tmp=last;

            i=0;
            while(++i<=cnt)
            {
                 printf("%d \t",tmp->data);
                 tmp=tmp->prv;
            }

            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}
*/

///===================================================================================
#include<stdio.h>
struct Test
{
    int x;
    float y;
    char ch;
   // double db;
};

int main()
{
    struct Test t;
    printf("\n Size of Test : %d",sizeof(t));
    printf("\n Size of Test : %d",sizeof(t.x));
    printf("\n Size of Test : %d",sizeof(t.y));
    printf("\n Size of Test : %d",sizeof(t.ch));
   //  printf("\n Size of Test : %d",sizeof(t.db));

    return 0;
}










