//********************* STRUCTURE ***********************
//#include<stdio.h>
//    int main()
//    {
//        struct student
//        {
//            int id;
//            char nm[20];
//            float sal;
//            int weight;
//        };
//        struct student s = {1,"Vishwajit",70000,75};
//        printf("\n id: %d \t name: %s \t Salary: %.2f rs \t Weight: %d kg",s.id,s.nm,s.sal,s.weight);
//        return 0;
//    }
//
/// Userdefined data of student globally
//#include<stdio.h>
//struct student
//{
//    int id;
//    char nm[20];
//    float sal;
//    int wt;
//};
//
//    int main()
//    {
//        struct student s ={1,"Vishwajit",700000,70};
//        printf("\n id: %d \t Name: %s \t Salary: %.2frs \t Weight: %dkg",s.id,s.nm,s.sal,s.wt);
//        return 0;
//    }
//
/// WAP BY USING GLOBAL STRUCT USING SCANF
//#include<stdio.h>
//struct employee
//{
//    int id;
//    char nm[20];
//    float sal;
//    int wt;
//};
//
//    int main()
//    {
//        struct employee s;
//        printf("\n Enter id,name,salary,weight of employee:");
//        scanf("%d %s %f %d",&s.id,&s.nm,&s.sal,&s.wt);
//        printf("\n id: %d \t Name: %s \t Salary: %.2frs \t Weight: %dkg",s.id,s.nm,s.sal,s.wt);
//        return 0;
//    }
//
/////
//#include<stdio.h>
//char primeNumber(int n);
//    int main()
//    {
//        int no,ans;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        ans=primeNumber(no);
//        if(ans=='y')
//        {
//            printf("\n %d is prime",no);
//        }
//        else
//        {
//            printf("\n %d is non prime",no);
//        }
//    }
//    char primeNumber(int n)
//    {
//        int d=2;
//        while(d<=(n/2))
//        {
//            if(n%d==0)
//            {
//                return 'n';
//            }
//            else
//            {
//                return 'y';
//            }
//            d++;
//        }
//    }
//
//*****STRUCTURE
//#include<stdio.h>
//    int main()
//    {
//        struct book
//        {
//            int bkid;
//            float bkprc;
//            int notp;
//        };
//        struct book b;
//        printf("\n Enter the Book ID,price and number of topics in that book");
//        scanf("%d %f %d",&b.bkid,&b.bkprc,&b.notp);
//        printf("\n Book ID: %d \n Book Price: %.2f \n Book Topics: %d",b.bkid,b.bkprc,b.notp);
//        return 0;
//    }
//
///Write a structure to represent all details of item and perform IO operation.
///Using the typedef: It is used to define the type, in such case no need of using
///type
//#include<stdio.h>
//typedef struct
//        {
//            int icode;
//            char inm[50];
//            float ipr;
//        }item;
//    int main()
//    {
//        item t;
//        printf("\n Enter the name of item");
//        gets(t.inm);
//        printf("\n Enter the code and price of item");
//        scanf("%d %f",&t.icode,&t.ipr);
//        printf("\n Item Code: %d \n Item Name: %s \n Item Price: %.2f",t.icode,t.inm,t.ipr);
//        return 0;
//    }
//
/// WAP PASSING THE STRUCTURE VARIABLE TO FUNCTION
//#include<stdio.h>
//struct item
//{
//    int icode;
//    char inm[20];
//    float ipr;
//};
//    int main()
//    {
//        struct item i;
//        printf("\n Enter the name of item");
//        gets(i.inm);
//        printf("\n Enter the code of item and price of item");
//        scanf("%d %f",&i.icode,&i.ipr);
//        display(i);
//    }
//    void display(struct item a)
//    {
//        printf("\n item code: %d \n item name: %s \n item price: %.2f",a.icode,a.inm,a.ipr);
//    }
//
/// CAL MAXPRICE IN STRUCTURE OF 2 ITEM
//#include<stdio.h>
//
//struct item
//{
//    int icode;
//    char inm[50];
//    float ipr;
//};
//struct item maxprice(struct item a1, struct item a2);
//void display(struct item a);
//    int main()
//    {
//        struct item t1,t2,tmp;
//        printf("\n Enter the name of item 1");
//        gets(t1.inm);
//
//        printf("\n Enter the code and price of item 1");
//        scanf("%d %f",&t1.icode,&t1.ipr);
//
//        printf("\n Enter the name of item 2");
//        fflush(stdin);
//        gets(t2.inm);
//
//        printf("\n Enter the code and price of item 2");
//        scanf("%d %f",&t2.icode,&t2.ipr);
//
//        display(t1);
//        display(t2);
//
//        tmp = maxprice(t1,t2);
//        printf("\n Maximum price of item with details: \n");
//        display(tmp);
//    }
//    struct item maxprice(struct item a1, struct item a2)
//    {
//        if(a1.ipr>a2.ipr)
//        {
//            return a1;
//        }
//        else
//            return a2;
//    }
//    void display(struct item a)
//    {
//        printf("\n Item Code: %d \n Item Name: %s \n Item Price: %f \n ",a.icode,a.inm,a.ipr);
//    }
//
///
//#include<stdio.h>
//struct item
//{
//    int icode;
//    char inm[50];
//    float ipr;
//};
//
//void display(struct item a)
//{
//    printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",a.inm, a.icode, a.ipr);
//}
//struct item maxprice(struct item a1,struct item a2)
//{
//	if(a1.ipr>a2.ipr)
//		return a1;
//	else
//		return a2;
//}
//int main()
//{
//    struct item t1,t2,tmp;  // note here no need of using struct keyword now
//    printf("\n Enter the Name of Item: ");
//    gets(t1.inm);
//    printf("\n Enter the Code and Price of Item: ");
//    scanf("%d %f",&t1.icode,&t1.ipr);
//
//    printf("\n Enter the Name of Item: ");
//    fflush(stdin);
//    gets(t2.inm);
//    printf("\n Enter the Code and Price of Item: ");
//    scanf("%d %f",&t2.icode,&t2.ipr);
//
//    display(t1);
//    display(t2);
//
//    tmp=maxprice(t1,t2);
//    printf("\n Details of Item having max Price \n");
//    display(tmp);
//
//    return 0;
//}
//
///1. Create a structure called "Student" with members name, age, and total
///marks. Write a C program to input data for two students, display their
///information, and find the average of total marks.
//#include<stdio.h>
//struct student
//{
//    char nm[50];
//    int age;
//    float mrk;
//};
//void display(struct student a);
//float average(struct student a1,struct student a2);
//    int main()
//    {
//        struct student a1,a2,tmp;
//        printf("\n Enter the name of student 1");
//        gets(a1.nm);
//
//        printf("\n Enter the age and marks of student 1");
//        scanf("%d %f",&a1.age,&a1.mrk);
//
//        printf("\n Enter the name of student 2");
//        fflush(stdin);
//        gets(a2.nm);
//
//        printf("\n Enter the age and marks of student 2");
//        scanf("%d %f",&a2.age,&a2.mrk);
//
//        display(a1);
//        display(a2);
//        tmp =average(a1,a2);
//        printf("\n Average of marks of student 1 and student 2 is %f",tmp);
//    }
//    void display(struct student a)
//    {
//        printf("\n Student Name: %s \n Student Age: %d \n Student Mark: %.2f \n",a.nm,a.age,a.mrk);
//    }
//    float average(struct student a1,struct student a2)
//    {
//         return (a1.mrk+a2.mrk)/2;
//    }
//
///
//#include <stdio.h>
//
//struct student
//{
//    char nm[50];
//    int age;
//    float mrk;
//};
//
//void display(struct student a);
//float average(struct student a1, struct student a2);
//
//int main()
//{
//    struct student a1, a2;
//    float tmp;
//
//    printf("\nEnter the name of student 1: ");
//    fgets(a1.nm, sizeof(a1.nm), stdin);
//
//    printf("\nEnter the age and marks of student 1: ");
//    scanf("%d %f", &a1.age, &a1.mrk);
//
//    printf("\nEnter the name of student 2: ");
//    fflush(stdin);
//    gets(a1.nm);
//
//    printf("\nEnter the age and marks of student 2: ");
//    scanf("%d %f", &a2.age, &a2.mrk);
//
//    display(a1);
//    display(a2);
//
//    tmp = average(a1, a2);
//    printf("\nAverage of marks of student 1 and student 2 is %.2f", tmp);
//
//    return 0;
//}
//
//void display(struct student a)
//{
//    printf("\n Student Name: %s\n Student Age: %d\n Student Mark: %.2f\n", a.nm, a.age, a.mrk);
//}
//
//float average(struct student a1, struct student a2)
//{
//    return (a1.mrk + a2.mrk) / 2;
//}
//
/// 4.Define a structure named Circle to represent a circle with a radius.
///Write a C program to calculate the area and perimeter of two circles and
///display the results.
//
//#include<stdio.h>
//
//struct circle
//{
//    float r;
//};
//
//float area(struct circle c)
//{
//    return 3.142 * c.r * c.r;
//}
//
//float perimeter(struct circle c)
//{
//    return 2 * 3.142 * c.r;
//}
//
//    int main()
//    {
//        struct circle a1, a2;
//        float a, p;
//
//        printf("\nEnter the radius of circle 1: ");
//        scanf("%f", &a1.r);
//
//        printf("\nEnter the radius of circle 2: ");
//        scanf("%f", &a2.r);
//
//        printf("\n Circle 1\n");
//        a = area(a1);
//        p = perimeter(a1);
//
//        printf("\nArea: %.2f \t Perimeter: %.2f \n", a, p);
//
//        printf("\n Circle 2 \n");
//        a = area(a2);
//        p = perimeter(a2);
//
//        printf("\nArea: %.2f \t Perimeter: %.2f", a, p);
//
//        return 0;
//    }
//
///. 3. Create a structure named Book to store book details like title,
///author, and price. Write a C program to input details for three books,
///find the most expensive and the lowest priced books, and display their
///information.
//#include<stdio.h>
//struct book
//{
//    char nm[50];
//    char author[50];
//    int pr;
//};
//void display(struct book b)
//{
//    printf("\n Name of book: %s \n Name of Author: %s \n price of book %d \n",b.nm,b.author,b.pr);
//}
//struct book maxprice(struct book b1,struct book b2,struct book b3)
//{
//    if(b1.pr>b2.pr)
//    {
//        if(b1.pr>b3.pr)
//        {
//            return b1;
//        }
//    }
//    else
//    {
//        if(b2.pr>b3.pr)
//        {
//            return b2;
//        }
//        else
//        {
//            return b3;
//        }
//    }
//}
//struct book lowprice(struct book b1,struct book b2,struct book b3)
//{
//    if(b1.pr<b2.pr)
//    {
//        if(b1.pr<b3.pr)
//        {
//            return b1;
//        }
//    }
//    else
//    {
//        if(b2.pr<b3.pr)
//        {
//            return b2;
//        }
//        else
//        {
//            return b3;
//        }
//    }
//}
//    int main()
//    {
//        struct book b1,b2,b3,tmp,t;
//        printf("\n Enter the name of book 1");
//        gets(b1.nm);
//        printf("\n Enter the author of book 1");
//        gets(b1.author);
//        printf("\n Enter the price of book 1");
//        scanf("%d",&b1.pr);
//
//        printf("\n Enter the name of book 2");
//        fflush(stdin);
//        gets(b2.nm);
//        printf("\n Enter the author of book 2");
//        gets(b2.author);
//        printf("\n Enter the price of book 2");
//        scanf("%d",&b2.pr);
//
//        printf("\n Enter the name of book 3");
//        fflush(stdin);
//        gets(b3.nm);
//        printf("\n Enter the author of book 3");
//        gets(b3.author);
//        printf("\n Enter the price of book 3");
//        scanf("%d",&b3.pr);
//
//        printf("\n ***Book 1\n");
//        display(b1);
//
//        printf("\n ***Book 2\n");
//        display(b2);
//
//        printf("\n ***Book 3\n");
//        display(b3);
//
//        tmp=maxprice(b1,b2,b3);
//        printf("\n Maximum price of book details \n",tmp);
//        display(tmp);
//
//        t=lowprice(b1,b2,b3);
//        printf("\n lowest price of book details \n",t);
//        display(t);
//    }

/// POINTER TO STRUCTURE VARIABLE
//#include<stdio.h>
//struct student
//{
//    char nm[40];
//    int rno;
//    float per;
//};
//int cnt;
//void display(struct student s[])
//{
//    int i;
//    printf("\n **Student Information ** \n");
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n Student name: %s \t Roll No: %d \t Percentage: %f \n",s[i].nm,s[i].rno,s[i].per);
//    }
//}
//    int main()
//    {
//        struct student *s;
//        int i;
//        printf("\n Enter the cnt of student");
//        scanf("%d",&cnt);
//
//        s=(struct student*)malloc(cnt*sizeof(struct student));
//
//        printf("\n Enter the student Information of %d student",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            printf("\n Enter the student %d name",i+1);
//            fflush(stdin);
//            gets(s[i].nm);
//
//            printf("\n Enter the roll number and percentage");
//            scanf("%d %f",&s[i].rno,&s[i].per);
//        }
//        display(s);
//        return 0;
//    }
//
/// POINTER AS MEMBER FUNCTION
//#include<stdio.h>
//#include<stdlib.h>
//struct student
//{
//    int rno;
//    int *sub;
//};
//    int main()
//    {
//        struct student s;
//        int i,subcnt;
//        printf("\n Enter the subcnt");
//        scanf("%d",&subcnt);
//
//        s.sub = (int*)malloc(subcnt*sizeof(int));
//
//        printf("\n Enter the roll no");
//        scanf("%d",&s.rno);
//
//        printf("\n Enter the marks in %d student",subcnt);
//        for(i=0;i<subcnt;i++)
//        {
//            scanf("%d",&s.sub+i);
//        }
//        printf("\n Roll No: %d",s.rno);
//        printf("\n Marks in %d subject",subcnt);
//        for(i=0;i<subcnt;i++)
//        {
//            printf("%5d",s.sub+i);
//        }
//        return 0;
//    }
//
/// Self referenciable variable
#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float per;
	struct student *next;
};
int main()
{
	struct student *start=NULL, *last, *tmp;
	int opt;

	while(1)
	{
		printf("\n ---------- Menu ----------\n");
		printf("\n 1.add student to list \n 2.Display student from list \n 3.stop");
		printf("\n Select the option: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				tmp=(struct student*)malloc(sizeof(struct student));
				printf("\n Enter the name of student: ");
				fflush(stdin);
				gets(tmp->name);

				printf("\n Enter the id and percentage: ");
				scanf("%d %f",&tmp->id, &tmp->per);
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
					printf("{%d-%s-%.2f}   ",tmp->id,tmp->name,tmp->per);
					tmp=tmp->next;
				}
				break;
			case 3:
				exit(0);
		}
	}
}
/// ********Structure List
/// 1.Write a program to store and print the roll no., name , age and marks
///of a student using structures.
//#include<stdio.h>
//struct student
//{
//    int rno;
//    char nm[50];
//    int age;
//    float mrk;
//};
//void input(struct student *s)
//{
//    printf("\n Enter  the student name");
//    gets(s->nm);
//    printf("\n Enter the roll number, age and marks");
//    scanf("%d %d %f",&s->rno,&s->age,&s->mrk);
//}
//void display(struct student s)
//{
//    printf("\n Student name: %s \t Student Roll No:%d \t Age: %d \t Marks:%.2f",s.nm,s.rno,s.age,s.mrk);
//}
//int main()
//{
//    struct student s;
//    input(&s);
//    display(s);
//    return  0;
//}
//
///.2.Write a program to store the roll no. (starting from 1), name and age
/////of 5 students and then print the details of the student with roll no. 2.
//#include<stdio.h>
//struct student
//{
//    int rno;
//    char nm[50];
//    int age;
//};
//int i;
//void display(struct student s[])
//{
//    printf("\n Student Information \n");
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rno==2)
//        {
//            printf("\n Student Name: %s \t Student Roll no: %d \t Student age: %d",s[i].nm,s[i].rno,s[i].age);
//        }
//    }
//}
//int main()
//{
//    struct student s[5];
//    printf("\n Enter the details of 5 students");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the name of %d student",i+1);
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the roll number and age");
//        scanf("%d %d",&s[i].rno,&s[i].age);
//    }
//    display(s);
//    return 0;
//}
//
/// 3.Write a program to store and print the roll no., name, age, address and
///marks of 15 students using structure.
//#include<stdio.h>
//#include<string.h>
//struct student
//{
//    int rno;
//    char nm[50];
//    int age;
//    char addr[50];
//    float mrk;
//};
//int i;
//
//void display(struct student s[])
//{
//    printf("\n **Student Information**");
//    for(i=0;i<15;i++)
//    {
//        printf("\n Student name: %s \t Roll no: %d \t age: %d \t address: %s \t marks: %.2f",s[i].nm,s[i].rno,s[i].age,s[i].addr,s[i].mrk);
//    }
//}
//    int main()
//    {
//        struct student s[15];
//        for(i=0;i<15;i++)
//        {
//            printf("\n Enter  the student name %d",i+1);
//            fflush(stdin);
//            gets(s[i].nm);
//
//            printf("\n Enter the roll number, age,and marks");
//            scanf("%d %d %f ",&s[i].rno,&s[i].age,&s[i].mrk);
//
//            printf("\n Enter the address");
//            fflush(stdin);
//            gets(s[i].addr);
//        }
//
//        display(s);
//    }
//
///.4.Write a program to add two distances in inch-feet using structure. The
///values of the distances is to be taken from the user.
//#include <stdio.h>
//
//struct distance
//{
//    int feet;
//    int inch;
//};
//
//struct distance add(struct distance d1, struct distance d2)
//{
//    struct distance result;
//    result.feet = d1.feet + d2.feet;
//    result.inch = d1.inch + d2.inch;
//
//    if (result.inch >= 12)
//    {
//        result.inch = result.inch -12;
//        result.feet++;
//    }
//
//    return result;
//}
//
//int main()
//{
//    struct distance d1, d2, sum;
//
//    printf("\n Enter the value of d1 (feet inch): ");
//    scanf("%d %d", &d1.feet, &d1.inch);
//
//    printf("\n Enter the value of d2 (feet inch): ");
//    scanf("%d %d", &d2.feet, &d2.inch);
//
//    sum = add(d1, d2);
//
//    printf("\n Sum of distances: %d feet %d inches", sum.feet, sum.inch);
//
//    return 0;
//}
//
///.5.Enter the marks of 5 students in Chemistry, Mathematics and Physics
///(each out of 100) using a structure named Marks having elements roll no.,
///name, chem_marks, maths_marks and phy_marks and then display the
///percentage of each student.
//#include<stdio.h>
//struct marks
//{
//    int rno;
//    char nm[50];
//    int chem_mrk;
//    int maths_mrk;
//    int phy_mrk;
//};
//int i;
//void display(struct marks m[])
//{
//    for(i=0;i<5;i++)
//    {
//        printf("\n %d student \n",i+1);
//        printf("\n Student name: %s \t Roll no: %d \t Chemistry: %d \t Maths: %d \t Physics: %d",m[i].nm,m[i].rno,m[i].chem_mrk,m[i].maths_mrk,m[i].phy_mrk);
//    }
//
//}
//void calculatePercentage(struct marks m[])
//{
//    printf("\n *** Percentage of each student ***");
//    for(i=0;i<5;i++)
//    {
//        float percentage = ((float)(m[i].chem_mrk+m[i].maths_mrk+m[i].phy_mrk)/300)*100;
//        printf("\n %d student \t percentage: %.2f",i+1,percentage);
//    }
//}
//int main()
//{
//    struct marks m[5];
//    printf("\n Enter the marks and details of 5 students");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the marks and details of %d student",i+1);
//        printf("\n Enter the name");
//        fflush(stdin);
//        gets(m[i].nm);
//
//        printf("\n Enter the roll number and marks of chemistry, maths and physics");
//        scanf("%d %d %d %d",&m[i].rno,&m[i].chem_mrk,&m[i].maths_mrk,&m[i].phy_mrk);
//    }
//    display(m);
//    calculatePercentage(m);
//}
//
///. 7.Write a structure to store the roll no., name, age (between 11 to 14)
///and address of students (more than 10). Store the information of the
///students.
///1 - Write a function to print the names of all the students having age
///14.
///2 - Write another function to print the names of all the students having
///even roll no.
///3 - Write another function to display the details of the student whose
///roll no is given (i.e. roll no. entered by the user).
//#include<stdio.h>
//#include<string.h>
//struct student
//{
//    int rno;
//    char nm[50];
//    int age;
//    char addr[50];
//};
//int i;
//void display(struct student s[])
//{
//    printf("\n ***Student Information***\n ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Name: %s \t Roll No: %d \t Age: %d \t Address: %s \n",s[i].nm,s[i].rno,s[i].age,s[i].addr);
//    }
//}
//void ageDisplay(struct student s[])
//{
//    printf("\n ***Name of students having age 14 ***\n");
//    for(i=0;i<5;i++)
//    {
//        if(s[i].age==14)
//        {
//            printf("\n Student Name: %s \t Roll No: %d \n",s[i].nm,s[i].rno);
//        }
//
//    }
//}
//void evenRoll(struct student s[])
//{
//    printf("\n ***Name of student having even roll number *** \n");
//    int found=0;
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rno %2==0)
//        {
//            printf("\n Student Name: %s \n", s[i].nm);
//            found=1;
//        }
//
//    }
//    if(found==0)
//    {
//         printf("\n There are no even roll numbers");
//    }
//
//}
//void rollDisplay(struct student s[])
//{
//    int rn;
//    printf("\n Enter the roll number: \n ");
//    scanf("%d",&rn);
//    int found=0;
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rno==rn)
//        {
//            printf("\n Student Name: %s \t Roll No: %d \t Age: %d \t Address: %s",s[i].nm,s[i].rno,s[i].age,s[i].addr);
//            found=1;
//            break;
//        }
//
//    }
//    if(!found)
//    {
//        printf("\n There is no match for entered Roll Number");
//    }
//}
//    int main()
//    {
//       struct student s[5];
//       printf("\n Enter the information");
//       for(i=0;i<5;i++)
//       {
//           printf("\n Enter the name of %d student",i+1);
//           fflush(stdin);
//           gets(s[i].nm);
//
//           printf("\n Enter the roll no and age");
//           scanf("%d %d",&s[i].rno,&s[i].age);
//
//           printf("\n Enter address");
//           fflush(stdin);
//           gets(s[i].addr);
//       }
//       display(s);
//       ageDisplay(s);
//       evenRoll(s);
//       rollDisplay(s);
//    }
//
/// 8.Write a structure to store the name, account number and balance of
///customers (more than 10) and store their information.
///1 - Write a function to print the names of all the customers having
///balance less than $200.
///2 - Write a function to add $100 in the balance of all the customers
///having more than $1000 in their balance and then print the incremented
///value of their balance.
//#include<stdio.h>
//struct bankperson
//{
//    char nm[50];
//    int acno;
//    float bal;
//};
//int i;
//void display(struct bankperson p[])
//{
//    printf("\n ***Account Details:----\n");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Account %d",i+1);
//        printf("\n Account Name: %s \t Account Number: %d \t Account Balance: %.2f$\n",p[i].nm,p[i].acno,p[i].bal);
//    }
//}
//void balless200(struct bankperson p[])
//{
//    printf("\n ***Account Details having balance less than 200$");
//    int found=0;
//    for(i=0;i<3;i++)
//    {
//        if(p[i].bal<200)
//        {
//            printf("\n Account Name: %s",p[i].nm);
//            found=1;
//        }
//    }
//    if(!found)
//    {
//        printf("\n Not Found Account");
//    }
//}
//void add1000(struct bankperson p[])
//{
//    printf("\n ***Account Details having more than 1000$\n");
//    int found=0;
//    for(i=0;i<3;i++)
//    {
//        if(p[i].bal>1000)
//        {
//            p[i].bal+=100;
//            printf("\n Account Name: %s \t Account Number: %d \t Account Balance: %.2f$\n",p[i].nm,p[i].acno,p[i].bal);
//            found=1;
//        }
//    }
//    if(!found)
//    {
//        printf("\n Not found account more than 1000$ balance");
//    }
//}
//int main()
//{
//    struct bankperson p[3];
//    printf("\n Enter the details of account of person \n");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the name of %d person account",i+1);
//        fflush(stdin);
//        gets(p[i].nm);
//
//        printf("\n Enter the Account Number and balance");
//        scanf("%d %f",&p[i].acno,&p[i].bal);
//    }
//    display(p);
//    balless200(p);
//    add1000(p);
//}
//
///9.Write a program to compare two dates entered by user. Make a structure
///named Date to store the elements day, month and year to store the dates.
///If the dates are equal, display "Dates are equal" otherwise display
///"Dates are not equal".
//#include<stdio.h>
//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//struct date display(struct date d1,struct date d2)
//{
//    if(d1.day!=d2.day || d1.month!=d2.month || d1.year!=d2.year)
//    {
//        printf("\n Two Dates are not equal");
//    }
//    else
//        {
//           printf("\n Dates are equal");
//        }
//
//}
//int main()
//{
//    struct date d1,d2;
//    printf("\n Enter the dates d1");
//    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
//    printf("\n Enter the dates d2");
//    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
//    display(d1,d2);
//}
//
///10.Write a structure to store the names, salary and hours of work per day
///of 10 employees in a company. Write a program to increase the salary
///depending on the number of hours of work per day as follows and then
///print the name of all the employees along with their final salaries.
///Hours of work per day 8 10 >=12
///Increase in salary $50 $100 $150
//#include<stdio.h>
//struct employee
//{
//    char nm[50];
//    int sal;
//    int hrs;
//};
//int i;
//void display(struct employee e[])
//{
//    printf("\n **Salary Details");
//    for(i=0;i<5;i++)
//    {
//        if((e[i].hrs>=12))
//        {
//            e[i].sal+=150;
//        }
//        else if(e[i].hrs>=10)
//        {
//            e[i].sal+=100;
//        }
//        else if(e[i].hrs>=8)
//        {
//            e[i].sal+=50;
//        }
//        printf("\n Employee Name: %s \t Salary: %d$ \t Working Hours: %d",e[i].nm,e[i].sal,e[i].hrs);
//    }
//}
//int main()
//{
//    struct employee e[5];
//    printf("\n Enter employee Details");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter name of employee %d",i+1);
//        fflush(stdin);
//        gets(e[i].nm);
//
//        printf("\n Enter the salary and Working hours");
//        scanf("%d %d",&e[i].sal,&e[i].hrs);
//    }
//    display(e);
//}
//
///11.Let us work on the menu of a library. Create a structure containing
///book information like accession number, name of author, book title and
///flag to know whether book is issued or not.
///Create a menu in which the following can be done.
///1 - Display book information
///2 - Add a new book
///3 - Display all the books in the library of a particular author
///4 - Display the number of books of a particular title
///5 - Display the total number of books in the library
///6 - Issue a book
///(If we issue a book, then its number gets decreased by 1 and if we add a
///book, its number gets increased by 1)
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct book
//{
//    int acno;
//    char author[50];
//    char title[50];
//    //int isIssued;
//    struct book *next;
//};
//int main()
//{
//    struct book *start=NULL, *last, *tmp;
//    int opt;
//    while(1)
//    {
//        printf("\n------------Menu--------");
//        printf("\n 1.add new book \n 2.Display book Information \n 3.stop");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//        case 1:
//            tmp=(struct book*)malloc(sizeof(struct book));
//            printf("\n Enter the author of book");
//            fflush(stdin);
//            gets(tmp->author);
//
//            printf("\n Enter the title of book");
//            fflush(stdin);
//            gets(tmp->title);
//
//
//            printf("\n Enter the access number");
//            scanf("%d",&tmp->acno);
//
//            if(start==NULL)
//            {
//                start=tmp;
//                tmp=last;
//            }
//            else
//            {
//               last->next=tmp;
//               last=tmp;
//            }
//            break;
//        case 2:
//            tmp=start;
//            while(tmp)
//            {
//                printf("{%s-%s-%d} ",tmp->author,tmp->title,tmp->acno);
//                tmp=tmp->next;
//            }
//            break;
//        case 3:
//            exit(0);
//        }
//    }
//}
//
///6.Write a program to add, subtract and multiply two complex numbers using
///structures to function.
//
//#include <stdio.h>
//
//struct complex
//{
//    int real;
//    int img;
//};
//
//void sum(struct complex c1, struct complex c2)
//{
//    int real = c1.real + c2.real;
//    int img = c1.img + c2.img;
//
//    printf("\n Sum of two complex numbers is :%d+%di",real,img);
//}
//void subtract(struct complex c1, struct complex c2)
//{
//    int real = c1.real - c2.real;
//    int img = c1.img - c2.img;
//
//    printf("\n Subtraction of two complex numbers is :%d+%di",real,img);
//}
//void multiplication(struct complex c1, struct complex c2)
//{
//    int real = (c1.real*c2.real)-(c1.img*c2.img);
//    int img = (c1.real*c2.img)+(c1.img*c2.real);
//
//    printf("\n Multiplication of two complex numbers is :%d+%di",real,img);
//}
//
//int main()
//{
//    struct complex c1, c2;
//
//    printf("\n Enter the value of c1 (real img): ");
//    scanf("%d %d", &c1.real, &c1.img);
//
//    printf("\n Enter the value of c2 (real img): ");
//    scanf("%d %d", &c2.real, &c2.img);
//
//    sum(c1,c2);
//    subtract(c1,c2);
//    multiplication(c1,c2);
//    return 0;
//}
//
///12.Create a structure named Date having day, month and year as its
///elements. Store the current date in the structure. Now add 45 days to the
///current date and display the final date
//#include<stdio.h>
//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//struct date display(struct date d)
//{
//    if(d.year %4==0 && d.year %100==0)
//    {
//        d.day=(d.day+45)-29;
//        d.month++;
//        return d;
//    }
//    else
//    {
//        d.day=(d.day+45)-28;
//        d.month++;
//        return d;
//    }
//
//    if(d.month==1 || d.month==3 || d.month==5 || d.month==7 || d.month==8 || d.month==10 || d.month==12)
//    {
//        d.day=(d.day+45)-31;
//        d.month++;
//        return d;
//    }
//    else if((d.month==4 || d.month==6 || d.month==9 || d.month==11))
//    {
//        d.day=(d.day+45)-30;
//        d.month++;
//        return d;
//    }
//
//};
//    int main()
//    {
//        struct date d,result;
//        printf("\n Enter the day,month and year");
//        scanf("%d %d %d",&d.day,&d.month,&d.year);
//        result = display(d);
//        printf("\n Date After adding 45 days");
//        printf("\n Date is %d-%d-%d",result.day,result.month,result.year);
//        return 0;
//    }

///Unsolved
//11.Let us work on the menu of a library. Create a structure containing
//book information like accession number, name of author, book title and
//flag to know whether book is issued or not.
//Create a menu in which the following can be done.
//1 - Display book information
//2 - Add a new book
//3 - Display all the books in the library of a particular author
//4 - Display the number of books of a particular title
//5 - Display the total number of books in the library
//6 - Issue a book
//(If we issue a book, then its number gets decreased by 1 and if we add a
//book, its number gets increased by 1)
