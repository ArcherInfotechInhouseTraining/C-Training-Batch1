///Simple Example
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Book
    {
        int id;
        char nm[40];
        int not;
    };

    struct Book b;

    printf("\n Enter details of Book");
    gets(b.nm);
    printf("\n Enter The Book Id And Not");
    scanf("%d%d",&b.id,&b.not);

    printf("\n Display The details");
    printf("\n Id= %d\t name = %s\t Number of Topic = %d",b.id,b.nm,b.not);

    return 0;
}
*/
//====================================================================================
///Struct Global
/*
#include <stdio.h>
#include <stdlib.h>
struct Book
{
    int id;
    char nm[40];
    int not;
};
int main()
{

    struct Book b;

    printf("\n Enter details of Book");
    gets(b.nm);
    printf("\n Enter The Book Id And Not");
    scanf("%d%d",&b.id,&b.not);

    printf("\n Display The details");
    printf("\n Id= %d\t name = %s\t Number of Topic = %d",b.id,b.nm,b.not);

    return 0;
}
*/
//==============================================================================
///Initilization of structure variable
/*
#include<stdio.h>

struct Book
{
    int id;
    float pr;
    int not;
};

int main()
{
    struct Book b={1,456.55,93};

    printf("\n Display The details:");

    printf("\n id = %d\tprice = %f\tNum Of Topic = %d",b.id,b.pr,b.not);
    return 0;
}
*/
//=================================================================================
///Input and display the structure data
/*
#include<stdio.h>
struct Student
{
    int stid;
    char stnm[40];
    float stper10;
    float stper12;
};
int main()
{
    struct Student s;

    printf("\n Enter STudent Id");
    scanf("%d",&s.stid);

    fflush(stdin);
    printf("\n Enter The student Name:");
    gets(s.stnm);

    printf("\n Enter The Student per10 and per12");
    scanf("%f%f",&s.stper10,&s.stper12);

    printf("\n --Student Details--");
    printf("\n Id=%d\t name=%s\t 10per=%f\t 12per=%.2f",s.stid,s.stnm,s.stper10,s.stper12);


    return 0;
}
*/
//=====================================================================================
/// Write a structure to represent all details of item and perform IO operation.
///or
/// How the structure variable is passed (By Value or By Reference )
/// Note that the simple variable of structure type is always passed by value
/*
#include<stdio.h>
#include<stdlib.h>
struct item
{
    int itid;
    float itpr;
    char itnm[40];
};

void input(struct item *a)
{
    printf("\n Enter The Items Details");

    printf("\n Enter The Name Of item:");
    gets(a->itnm);

    printf("\n Enter The item Id and item price:");
    scanf("%d%f",&a->itid,&a->itpr);
}

void display(struct item a)
{
    printf("\n Id=%d\t Name=%s\t Price=%f",a.itid,a.itnm,a.itpr);
}
int main()
{
    struct item it;

    input(&it);
    display(it);

    return 0;
}
*/
//==========================================================================================
///Using the typedef: It is used to define the type, in such case no need of using struct keyword.
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int Icode;
    char Inm[40];
    float Ipr;
}item;

int main()
{
    item I1;

    printf("\n Enter The Details Of Items:");
    printf("\n Enter The Name:");
    gets(I1.Inm);

    printf("\n Enter The I-code and I price:");

    scanf("%d%f",&I1.Icode,&I1.Ipr);

    printf("\nDisplay the Details Of item");
    printf("\n Icode=%d\t Name=%s\t I-price=%f",I1.Icode,I1.Inm,I1.Ipr);


    return 0;
}
*/
//================================================================================================
/// Passing the structure variable to function
/*
struct item
{
    int icode;
    char inm[50];
    float ipr;
};

void display(struct item b)
{
    printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",b.inm, b.icode, b.ipr);
}
int main()
{
    struct item i;  // note here no need of using struct keyword now

    printf("\n Enter the Name of Item: ");
    gets(i.inm);

    printf("\n Enter the Code and Price of Item: ");
    scanf("%d %f",&i.icode,&i.ipr);

    display(i);

    return 0;
}
*/
//===================================================================================================
///Find max
/*
#include<stdio.h>
#include<stdlib.h>

struct Item
{
    int id;
    float pr;
    char nm[40];
};
void display(struct Item I)
{
    printf("\n name=%s\t Id=%d\t price=%f",I.nm,I.id,I.pr);
}
struct Item FindMax(struct Item a,struct Item b)
{
    if(a.pr>b.pr)
    {
        return a;
    }
    else
    {
        return b;
    }
};

int main()
{
    struct Item a,b,temp;


    printf("\n enter the details of item I");
    printf("\n enter the item name");
    gets(a.nm);
    printf("\n enter the details of item id and price:");
    scanf("%d%f",&a.id,&a.pr);



    fflush(stdin);
    printf("\n enter the details of item II ");
    printf("\n enter the item name");
    gets(b.nm);
    printf("\n enter the details of item id and price:");
    scanf("%d%f",&b.id,&b.pr);

    display(a);
    display(b);


    temp=FindMax(a,b);
    printf("\n Details Of item having the max price:");
    display(temp);

    return 0;
}
*/
//===================================================================================================

///As A array
/*
#include<stdio.h>
struct Student
{
    int sid;
    char snm[40];
    float sper;

};

int main()
{
    struct Student s[5];

    printf("\n Enter The details Of Students:");
    for(int i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\n Enter The name Of student %d:",i+1);
        gets(s[i].snm);
        printf("\n Enter The Id and Per Of student %d:",i+1);
        scanf("%d%f",&s[i].sid,&s[i].sper);
    }


    printf("\n Display The Details Of student:");
    for(int i=0;i<5;i++)
    {
        printf("\n Student %d",i+1);
        printf("\t Name:%s",s[i].snm);
        printf("\t Id:%d \t Perce:%.2f",s[i].sid,s[i].sper);
    }

    return 0;
}
*/
//====================================================================================================
/// Passing Array To Function: Array can be passed to function as a argument.
///  Note like other arrays, Array of structure elements, bydefault passed by ref.

///Using Typedef:
/*
#include<stdio.h>
typedef struct
{
    int stid;
    char stnm[50];
    float stper;

}Student;


void input(Student Stu[])
{
    printf("\n Enter The details Of student:");
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\n Enter The  %d Student Name:",i+1);
        gets(Stu[i].stnm);
        printf("\n Enter The %d Student Id And Per:",i+1);
        scanf("%d%f",&Stu[i].stid,&Stu[i].stper);
    }
}

void display(Student Stu[])
{
    printf("\n Student Details");
    for(int i=0;i<3;i++)
    {
        printf("\n Student %d",i+1);
        printf("\t Id : %d \t Name : %s \t Percen : %.2f",Stu[i].stid,Stu[i].stnm,Stu[i].stper);
    }
}

int main()
{
    Student s[3];

    input(s);
    display(s);

    return 0;
}
*/
//=================================================================================================
///without typerdef
/*
#include<stdio.h>
struct Student
{
    int stid;
    char stnm[50];
    float stper;

};

void input( struct Student Stu[])
{
    printf("\n Enter The details Of student:");
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\n Enter The Student %d Name:",i+1);
        gets(Stu[i].stnm);
        printf("\n Enter The Student %d Id And Per:",i+1);
        scanf("%d%f",&Stu[i].stid,&Stu[i].stper);
    }
}

void display(struct Student Stu[])
{
    printf("\n Student Details");
    for(int i=0;i<3;i++)
    {
        printf("\n Student %d",i+1);
        printf("\t Id : %d \t Name : %s \t Percen : %.2f",Stu[i].stid,Stu[i].stnm,Stu[i].stper);
    }
}

int main()
{
    struct Student s[3];

    input(s);
    display(s);

    return 0;
}
*/
//========================================================================================================
///Pointer to structure variables.
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[40];
    float per;
};
int cnt;
int main()
{

    struct Student *s;

    printf("\n Enter The Count Of Students:");
    scanf("%d",&cnt);

    s=(struct Student*)malloc(cnt*sizeof(struct Student));


    printf("\n Enter The Students %d Details:",cnt);
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\n Enter The Name Of Student %d:",i+1);
        gets(s[i].nm);
        printf("\n Enter The Id And Percentage Of Student %d:",i+1);
        scanf("%d%f",&s[i].id,&s[i].per);
    }

    printf("\n Display The Details Of Student:");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Student %d",i+1);
        printf("\t Id : %d\t Name:%s\t Percsentage:%.2f",s[i].id,s[i].nm,s[i].per);
    }

    return 0;
}
*/
//==================================================================================================

///using take pointer and collect values in pointer
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[40];
    float per;
};

int main()
{

    struct Student *p;
    int cnt;

    printf("\n Enter The Count Of Student:");
    scanf("%d",&cnt);

    p=(struct Student*)malloc(cnt*sizeof(struct Student));

    printf("\n Enter The Details for %d Students:",cnt);
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\n Enter The Name Of Student %d:",i+1);
        gets((p+i)->nm);
        printf("\n Enter The Id And Per Of student %d",i+1);
        scanf("%d%f",&(p+i)->id,&(p+i)->per);
    }

    printf("\n Display The Details Of students:");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Student : %d",i+1);
        printf("\t Id:%d\t Name:%s\t Per:%.2f",(p+i)->id,(p+i)->nm,(p+i)->per);
    }

    return 0;
}
//it will show error
*/
//==================================================================================================
///IO methods For Pointer and Collect in array
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[40];
    float per;
};
int cnt;

void input(struct Student s[])
{
    printf("\n Enter The Students %d Details:",cnt);
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\n Enter The Name Of Student %d:",i+1);
        gets(s[i].nm);
        printf("\n Enter The Id And Percentage Of Student %d:",i+1);
        scanf("%d%f",&s[i].id,&s[i].per);
    }
}

void display(struct Student s[])
{
    printf("\n Display The Details Of Student:");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Student %d",i+1);
        printf("\t Id : %d\t Name:%s\t Percsentage:%.2f",s[i].id,s[i].nm,s[i].per);
    }
}

int main()
{

    struct Student *s;

    printf("\n Enter The Count Of Students:");
    scanf("%d",&cnt);

    s=(struct Student*)malloc(cnt*sizeof(struct Student));

    input(s);
    display(s);

    return 0;
}
*/
//======================================================================================================
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[40];
    float per;
};
int cnt;
void display(struct Student *p)
{
    printf("\nStudent Details:");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Student %d:",i+1);
        printf("\t Id = %d\t Name = %s\t Per= %.2f",(p+i)->id,(p+i)->nm,(p+i)->per);

    }
}
int main()
{
    struct Student *s;

    printf("\n Enter The Cnt of Students:");
    scanf("%d",&cnt);

    s=(struct Student*)malloc(cnt*sizeof(struct Student));

    printf("\n Enter The detaails For Student %d",cnt);
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\n Enter The Name Of Student %d:",i+1);
        gets(s[i].nm);
        printf("\n Enter The ID And Per Of student %d:",i+1);
        scanf("%d%f",&s[i].id,&s[i].per);
    }

    display(s);

    return 0;
}
*/
//==================================================================================================
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[40];
    float per;
};
int cnt;
void display(struct Student *p)
{
    printf("\nStudent Details:");
    for(int i=0;i<cnt;i++)
    {
        printf("\n Student %d:",i+1);
        printf("\t Id = %d\t Name = %s\t Per= %.2f",(p+i)->id,(p+i)->nm,(p+i)->per);

    }
}
int main()
{
    struct Student *s;

    printf("\n Enter The Cnt of Students:");
    scanf("%d",&cnt);

    s=(struct Student*)malloc(cnt*sizeof(struct Student));

    printf("\n Enter The detaails For Student %d",cnt);
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\n Enter The Name Of Student %d:",i+1);
        gets((s+i)->nm);
        printf("\n Enter The ID And Per Of student %d:",i+1);
        scanf("%d%f",&(s+i)->id,&(s+i)->per);
    }

    display(s);

    return 0;
}

//When we pass the pointer variable to function and at the time of collecting we are
collecting in pointer form in input function  that time we have to use &(s+i)->rno because we are using
pointer in structure variable  so//

in  pointer variable we use (p+I) for input and *(p+I) for output ,but in structure pointer
variable we must have to use &(s+i)->rno.the reason behind that is the (p+i) gives the value of that
variable  but we want address to input the value from keyboard thats why we have to use
&(s+i)->rno for input  and
(s+i)->rno for displaying output .
*/
//======================================================================================================
/// Using Array as a member of structure.
/*
#include<stdio.h>
struct Student
{
    int Rno;
    char Snm[40];
    int marks[3];
};
int main()
{
    struct Student s;

    printf("\n Enter The name Of Student:");
    gets(s.Snm);
    printf("\n Enter The Student RollNumb:");
    scanf("%d",&s.Rno);

    printf("\n Enter The Marks Of Student:");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s.marks[i]);
    }

    printf("\n Display The Info Of Student:");
    printf("\n Name:%s\t RollNo:%d",s.Snm,s.Rno);
    for(int i=0;i<3;i++)
    {
        printf("\t%d",s.marks[i]);
    }


    return 0;
}
*/
//=======================================================================================
/*
#include<stdio.h>
struct Student
{
    int Rno;
    char Snm[40];
    int marks[3];
};
void display(struct Student s)
{
    printf("\n Display The Info Of Student:");
    printf("\n Name:%s\t RollNo:%d",s.Snm,s.Rno);
    printf("\tMarks:");
    for(int i=0;i<3;i++)
    {
        printf("\t%d",s.marks[i]);
    }
}
int main()
{
    struct Student s;

    printf("\n Enter The name Of Student:");
    gets(s.Snm);
    printf("\n Enter The Student RollNumb:");
    scanf("%d",&s.Rno);

    printf("\n Enter The Marks Of Student:");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s.marks[i]);
    }

    display(s);

    return 0;
}
*/
//================================================================================

///Passing array as a structre Variable And array as a structure Data member
/*
#include<stdio.h>
struct Student
{
    int Rno;
    char Snm[40];
    int marks[4];
};
int main()
{
    struct Student s[3];


    printf("\n Enter The Student Details:");
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\n Enter The Student %d Name:",i+1);
        gets(s[i].Snm);
        printf("\n Enter The Student %d RollNo:",i+1);
        scanf("%d",&s[i].Rno);

        printf("\n Enter The Student %d Marks:",i+1);
        for(int j=0;j<4;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }

    printf("\nDisplay the students Details:");
    for(int i=0;i<3;i++)
    {
        printf("\n\nStudent %d",i+1);
        printf("\t Name:%s \t RollNo:%d",s[i].Snm,s[i].Rno);
        printf("\t Marks:");
        for(int j=0;j<4;j++)
        {
            printf("%5d",s[i].marks[j]);
        }
    }

    return 0;
}
*/
//====================================================================================

///Display Method For Above Program
/*
#include<stdio.h>
struct Student
{
    int Rno;
    char Snm[40];
    int marks[4];
};
void display(struct Student s[])
{
    printf("\nDisplay the students Details:");
    for(int i=0;i<3;i++)
    {
        printf("\n\nStudent %d",i+1);
        printf("\t Name:%s \t RollNo:%d",s[i].Snm,s[i].Rno);
        printf("\t Marks:");
        for(int j=0;j<4;j++)
        {
            printf("%5d",s[i].marks[j]);
        }
    }

}
int main()
{
    struct Student s[3];

    printf("\n Enter The Student Details:");
    for(int i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\n Enter The Student %d Name:",i+1);
        gets(s[i].Snm);
        printf("\n Enter The Student %d RollNo:",i+1);
        scanf("%d",&s[i].Rno);

        printf("\n Enter The Student %d Marks:",i+1);
        for(int j=0;j<4;j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }

    display(s);

    return 0;
}
*/
//========================================================================================

/// Pointer as a member structure

/*
#include<stdio.h>

struct Student
{
    int rn;
    char nm[40];
    int *sub;
};
int cnt;
int main()
{
    struct Student s;

    printf("\n Enter Your sub Count");
    scanf("%d",&cnt);
    s.sub=(int*)malloc(cnt*sizeof(int));

    fflush(stdin);

    printf("\nEnter The Student Name:");
    gets(s.nm);
    printf("\nEnter The Student Roll Number:");
    scanf("%d",&s.rn);

    printf("\n Enter The Subject Marks:");
    for(int i=0;i<cnt;i++)
    {
        scanf("%d",&s->(sub+i));
    }

    printf("\n Display The Student Info:");

    printf("\n Name:%s\t RollNum:%d",s.nm,s.rn);
    printf("\t Marks");
    for(int i=0;i<cnt;i++)
    {
        printf("\t%d",s->(sub+i));
    }

    return 0;
}
*/ // It will show an error
//========================
///Updated Code # Above code
/*
#include<stdio.h>

struct Student
{
    int rn;
    char nm[40];
    int *sub;
};
int cnt;
int main()
{
    struct Student s;

    printf("\n Enter Your sub Count");
    scanf("%d",&cnt);
    s.sub=(int*)malloc(cnt*sizeof(int));

    fflush(stdin);

    printf("\nEnter The Student Name:");
    gets(s.nm);
    printf("\nEnter The Student Roll Number:");
    scanf("%d",&s.rn);

    printf("\n Enter The Subject Marks:");
    for(int i=0;i<cnt;i++)
    {
        scanf("%d",&s.sub[i]);
    }

    printf("\n Display The Student Info:");

    printf("\n Name:%s\t RollNum:%d",s.nm,s.rn);
    printf("\t Marks");
    for(int i=0;i<cnt;i++)
    {
        printf("\t%d",s.sub[i]);
    }

    return 0;
}
*/
//========================================================================================
///Pointer as a structure member and structure variable:
/*
#include<stdio.h>
struct Student
{
    int rn;
    char nm[40];
    int *sub;
};

int main()
{
    struct Student **s;
    int stucnt,subcnt;

    printf("\n Enter The Student Count;");
    scanf("%d",&stucnt);

    s=(struct Student**)malloc(stucnt*sizeof(struct Student*));

    s.sub=(int*)malloc(subcnt*sizeof(int));

    for(int i=0;i<stucnt;i++)
    {

        fflush(stdin);
        printf("\n Enter The Student Name:");
        gets(s[i].nm);

        printf("\n Enter The Roll Number:");
        scanf("%d",&s[i].rn);

        printf("\n Enter Your Subject Count");
        scanf("%d",&subcnt);

        s.sub[i]=(int*)malloc(sub[i]*sizeof(int));

        printf("\n Enter your Subject Marks");
        for(int j=0;j<sub[i];j++)
        {
            scanf("%d",s[i].sub[j]);
        }
    }

    printf("\n Display The Student Info");

    for(int i=0;i<stucnt;i++)
    {
        printf("\n Student %d:",i+1);
        printf("\t Name:%s\t RollNum:%d",s[i].nm,s[i].rn);

        printf("\t Marks:");
        for(int j=0;j<subcnt;j++)
        {
            printf("\t%d",s[i].sub[j]);
        }
    }
    return 0;
}
*/
//=========================================================================================

///Variable of another structure as a member of structure
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
    char inm[40];
    float ipr;
    struct Date d;

}Item;


int main()
{
    Item I;

    printf("\n Enter The Name Of Item:");
    gets(I.inm);
    printf("\n Enter The Icode and Ipr:");
    scanf("%d%f",&I.icode,&I.ipr);


    printf("\n Enter The Mf Date of Item:");
    scanf("%d%d%d",&I.d.day,&I.d.month,&I.d.year);


    printf("\n Display Date And Items Details:");
    printf("\n\n Mf Date:\t day/Month/Year :%d/%d/%d ",I.d.day,I.d.month,I.d.year);
    printf("\n\n Items Details:");
    printf("\t Name:%s\t Icode:%d\t Iprice:%.2f\n",I.inm,I.icode,I.ipr);


    return 0;
}

*/
//================================================================================================================
/// Self-referable structure
/*
#include<stdio.h>
struct Student
{
    int Id;
    char nm[40];
    int RollNo;
    struct Student *Next;
};

int main()
{
    struct Student *start,*last,*temp;

    start=NULL;
    int opt;

    while(1)
    {
        printf("\n -----------MENU--------");
        printf("\n 1.Insert Student\t 2.Display Data\t 3.Stop:");
        printf("\n Enter Your Option");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));

                fflush(stdin);
                printf("\n Enter Student Name:");
                gets(temp->nm);
                printf("\n Enter Student Id:");
                scanf("%d",&temp->Id);
                printf("\n Enter Student Roll Number:");
                scanf("%d",&temp->RollNo);

                temp->Next=NULL;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                }
                else
                {
                    last->Next=temp;
                    last=temp;
                }
                break;

            case 2:
                temp=start;
                while(temp)
                {
                    printf("{ %d-%s-%d }",temp->Id,temp->nm,temp->RollNo);
                    temp=temp->Next;
                }
                break;

            case 3:
                exit(0);

        }

    }
    return 0;
}
*/
//====================================================================================================================
/*
#include<stdio.h>
struct Student
{
    char nm[40];
    int id;
    float per;
    struct student *Pre;
    struct student *next;
};
int main()
{
    struct Student *start ,*last,*temp;
    start = NULL;

    int opt;

    while(1)
    {
        printf("\n **********MENU******** ");
        printf("\n 1.Insert Details\t 2.Show Details\t 3.Stop:");
        printf("\n Enter Your Options:");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));
                fflush(stdin);
                printf("\n Enter The Name Of Student:");
                gets(temp->nm);
                printf("\n Enter The Student Id:");
                scanf("%d",&temp->id);
                printf("\n Enter The Student Per:");
                scanf("%f",&temp->per);

                temp->Pre=NULL;
                temp->next=NULL;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                }
                else
                {
                    last->next=temp;
                    temp->Pre=last;
                    last=temp;
                }
                break;

            case 2:

                printf("\nForWord Direction:");
                temp=start;
                while(temp)
                {
                    printf("\n {%s - %d - %.2f } \n",temp->nm,temp->id,temp->per);
                    temp=temp->next;
                }

                printf("\nBackword Direction:");

                temp=last;
                while(temp)
                {
                    printf("\n {%s - %d - %.2f } \n",temp->nm,temp->id,temp->per);
                    temp=temp->Pre;
                }

                break;

            case 3:
                exit(0);
        }
    }
    return 0;
}
*/
//====================================================================================
///Singly Circular List:
/*
#include<stdio.h>
struct Student
{
    int nm[40];
    int id;
    int per;
    struct Student *next;
};

int main()
{
    struct Student *start=NULL,*last,*temp;

    int opt,i,cnt=0;

    while(1)
    {
        printf("\n********MENU********");
        printf("\n 1.Insert\t 2. Display\t 3. Stop");
        printf("\n Enter Any Option:");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));

                fflush(stdin);
                printf("\n Enter Stuent Name:");
                gets(temp->nm);
                printf("\n Enter Student ID:");
                scanf("%d",&temp->id);
                printf("\n Enter Student Percentage:");
                scanf("%d",&temp->per);

                temp->next=start;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                    temp->next=start;
                }
                else
                {
                    last->next=temp;
                    last=temp;
                }
                cnt++;
                break;

            case 2:

                temp=start;
                i=0;
                while(++i<=cnt)
                {
                    printf(" \n{ %s - %d - %d } \n",temp->nm,temp->id,temp->per);
                    temp=temp->next;
                }
                break;

            case 3:
                exit(0);

        }
    }
    return 0;
}
*/
//====================================\==================================================
///Doubly Circular List:

/*
#include<stdio.h>
struct Student
{
    char nm[40];
    int id;
    float per;
    struct Student *next;
    struct Student *pre;
};

int main()
{
    struct Student *start ,*last,*temp;
    start = NULL;
    int cnt=0,opt,i;

    while(1)
    {
        printf("\n ********MENU******* ");
        printf("\n 1.Insert\t 2.Display\t 3.Stop");
        printf("\n Enter Your Option:");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));
                fflush(stdin);
                printf("\n Enter STudent Name:");
                gets(temp->nm);
                printf("\n Enter STudent ID:");
                scanf("%d",&temp->id);
                printf("\n Enter Student Per:");
                scanf("%f",&temp->per);

                temp->next=start;
                temp->pre=last;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                   // temp->next=start;  Optional
                   // temp->pre=last;
                }
                else
                {
                    last->next=temp;
                   // temp->pre=last;   optional
                    last=temp;
                    start->pre=last;
                }
                cnt++;
                break;


            case 2:

                printf("\n Forward Direction:");
                temp=start;
                i=0;
                while(++i<=cnt)
                {
                    printf(" \n { %s %d %.2f } \n ",temp->nm,temp->id,temp->per);
                    temp=temp->next;
                }
                temp=last;

                printf("\n BackwordDirection:");
                temp=last;
                i=0;
                while(++i<=cnt)
                {
                    printf(" \n { %s %d %.2f } \n ",temp->nm,temp->id,temp->per);
                    temp=temp->pre;
                }
                temp=last;

            case 3:
                exit(0);
                break;
        }
    }
    return 0;
}
*/
//===========================================================================================
/// Dynamic implementation of stack

/*
#include<stdio.h>
struct Student
{
    char nm[45];
    int id;
    float per;

    struct Student *next;
};
int main()
{
    printf("\n Size Of Structure = %d",sizeof(struct Student));
    struct Student *start ,*last,*temp;
    start=NULL;
    int opt;
    while(1)
    {
        printf("\n *******MENU*******");
        printf("\n 1.PUSH\t 2.POP\t 3,STOP:");
        printf("\n Enter Your Option:");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));
                fflush(stdin);
                printf("\n Enter The STudent Name:");
                gets(temp->nm);
                printf("\n Enter STudent Id:");
                scanf("%d",&temp->id);
                printf("\n Enter Student Per:");
                scanf("%f",&temp->per);

                temp->next=NULL;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                }
                else
                {
                    last->next=temp;
                    last=temp;
                }
                break;

            case 2:
                temp=start;

                if(start==NULL)
                {
                    printf("\n Stack Is EMPTY:");
                }
                else if(temp->next==NULL)
                {
                    start=NULL;
                    printf("\n Poped Elements = {%s - %d - %.2f}\n",last->nm,last->id,last->per);
                }
                else
                {
                    while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=NULL;
                    printf("\n Poped Elements = {%s - %d - %.2f}\n",last->nm,last->id,last->per);
                    //free(last);
                    last=temp;
                }
                break;
            case 3:
                exit(0);
        }
    }


    return 0;
}
*/
//=====================================================================================
///Union in C

/*

#include<stdio.h>
union Student
{
    int x;
    float y;
    char ch;
    double db;
};

int main()
{
    union Student s;
    printf("\n The Size Of Union is = %d",sizeof(union Student));

    return 0;
}
*/
//=======================================================================================================
/*
#include<stdio.h>
union Student
{
    int x;
    float y;
    char ch;
    double db;
};

int main()
{
    union Student s;
    printf("\n The Size Of Union is = %d",sizeof(union Student));


    printf("\n Enter The Value Of X:");
    scanf("%d",&s.x);
    printf("\n The Value Of X: %d",s.x);

    printf("\n Enter The Value Of y:");
    scanf("%f",&s.y);
    printf("\n The Value Of y: %f",s.y);

    fflush(stdin);
    printf("\n Enter The Value Of ch:");
    scanf("%c",&s.ch);
    printf("\n The Value Of ch: %c",s.ch);

    printf("\n Enter The Value Of db:");
    scanf("%lf",&s.db);
    printf("\n The Value Of db: %lf",s.db);

    return 0;
}
*/
//========================================================
/*
#include<stdio.h>
struct Student
{
    int x;
    float y;
    char ch;

};

int main()
{
    struct Student s;
    printf("\n The Size Of struct is = %d",sizeof(struct Student));

    printf("\n Enter The Value Of X: %d",sizeof(s.x));
    printf("\n Enter The Value Of y: %d",sizeof(s.y));
    printf("\n Enter The Value Of ch:%d",sizeof(s.ch));
    //printf("\n Enter The Value Of db:%d",sizeof(s.db));

    return 0;
}
*/
//======================================================================================================
///enum in C
/*
int main()
{

	enum Color{Red, Green, Blue, Black};

	printf("\n Constant values are: ");
	printf("\t red = %d",Red);
	printf("\t green = %d",Green);
	printf("\t blue = %d",Blue);
	printf("\t black = %d",Black);


	enum Color{Red, Green=100, Blue, Black,white};

	printf("\n Constant values are: ");
	printf("\t red = %d",Red);
	printf("\t green = %d",Green);
	printf("\t blue = %d",Blue);
	printf("\t black = %d",Black);
    printf("\t White = %d",white);

	printf("\n Size Of Enum = %d",sizeof(enum Color));

	return 0;
}
*/

//=====================================================================================================

/*
#include <stdio.h>
void update(int *a,int *b)
{
    *a=*a+*b;
    *b=abs((2*(*b)-*a));
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}*/


//====================================================================================================
//Practice

#include<stdio.h>
struct Person
{
    int id;
    int age;
};

int main()
{
    struct Person p;
    printf("\nEnter The Id Of Person");
    scanf("%d",p.id);
    printf("\nAge is %d",p.id);

}
