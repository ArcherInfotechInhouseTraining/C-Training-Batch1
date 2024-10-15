/////        WRITE A MENU DRIVEN PRG TO PERFORM FOLLOWING OPERATIONS ON A NUMBER
///        1. +VE, -VE, OR ZERO
///        2. FACTORIAL
///        3. REVERSE
///        4. GENERATE MAX
///        5. iSPRIME
//#include<stdio.h>
//    int main()
//    {
//        int no, rev, rem, opt,i,fact=1,d=2, flg =0,tmp,nm=0;
//        printf("\n Enter any Number");
//        scanf("%d",&no);
//        printf("\n Select Your Option \n 1: Check Positive Negative or Zero \n 2: Find Factorial \n 3: Generate Reverse \n 4: Generate Max \n 5:check Prime or Not");
//        scanf("%d",&opt);
//        switch(opt)
//        {
//        case 1:
//            if(no>0)
//            {
//                printf("\n %d is positive",no);
//            }
//            else if(no<0)
//            {
//                printf("\n %d is negative",no);
//            }
//            else
//            {
//                printf("\n %d is zero",no);
//            }
//            break;
//        case 2:
//            for(i=1;i<=no;i++)
//            {
//                fact = fact * i;
//            }
//            printf("factorial of Number is %d",fact);
//            break;
//        case 3:
//            while(no!=0)
//            {
//                rem = no % 10;
//                rev = rev * 10 + rem;
//                no = no / 10;
//            }
//            printf("Reverse Number is %d",rev);
//            break;
//        case 4:
//            tmp = no;
//            for(i=9;i>=0;i--)
//            {
//                no = tmp;
//                while(no!=0)
//                {
//                    rem = no % 10;
//                    if(rem == i)
//                    {
//                        nm = (nm * 10)+rem;
//                    }
//                    no = no / 10;
//                }
//            }
//            printf("\n Maximum Number is %d",nm);
//            break;
//        case 5:
//             while(d<=no/2)
//             {
//                 if(no%d==0)
//                 {
//                     flg=1;
//                     break;
//                 }
//                 d++;
//             }
//             if(flg==0)
//             {
//                 printf("\n %d is Prime Number",no);
//             }
//             else
//             {
//                 printf("\n %d is not Prime Number",no);
//             }
//             break;
//        }
//        return 0;
//    }
//
/////  SWITCH BY USING IF ELSE
//#include<stdio.h>
//    int main()
//    {
//        int opt;
//        float no1,no2,ans=0.0;
//        printf("\n************ MENU ********");
//        printf("\n Select Option \n 1:Addition \n 2:Subtraction \n 3:Multiplication \n 4:Division");
//        scanf("%d",&opt);
//
//        if(opt>=1 && opt<=4)
//    {
//        printf("\n Enter the value of num1 and num2");
//        scanf("%f %f",&no1,&no2);
//        switch(opt)
//        {
//        case 1:
//                ans = no1 + no2;
//                break;
//        case 2:
//                ans = no1 - no2;
//                break;
//        case 3:
//                ans = no1 * no2;
//                break;
//        case 4:
//                ans = no1 / no2;
//                break;
//        }
//        printf("\n Answer is %f",ans);
//        return 0;
//    }
//    else
//    {
//        printf("\ Option is Invalid!!");
//    }
//    return 0;
//    }
//
///// SWITCH CASE BY USING WHILE INFINITE LOOP
//#include<stdio.h>
//    int main()
//    {
//        int opt;
//        float no1,no2,ans=0.0;
//        while(1)
//        {
//            printf("\n************ MENU ********");
//            printf("\n Select Option \n 1:Addition \n 2:Subtraction \n 3:Multiplication \n 4:Division");
//            scanf("%d",&opt);
//            if(opt==5)
//            {
//                break;
//            }
//            if(opt>=1 && opt<=4)
//            {
//                printf("\n Enter the value of num1 and num2");
//                scanf("%f %f",&no1,&no2);
//                switch(opt)
//                {
//                case 1:
//                        ans = no1 + no2;
//                        break;
//                case 2:
//                        ans = no1 - no2;
//                        break;
//                case 3:
//                        ans = no1 * no2;
//                        break;
//                case 4:
//                        ans = no1 / no2;
//                        break;
//                }
//                printf("\n Answer is %f",ans);
//            }
//            else
//            {
//                printf("\ Option is Invalid!!");
//            }
//        }
//            printf("\n End of program");
//            return 0;
//    }
//
//
/////    SWITCH USING EXIT FUNCTION
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int opt;
//        float no1,no2,ans=0.0;
//        while(1)
//        {
//            printf("\n************ MENU ********");
//            printf("\n Select Option \n 1:Addition \n 2:Subtraction \n 3:Multiplication \n 4:Division \n 5:Stop");
//            scanf("%d",&opt);
//            if(opt==5)
//            {
//                exit(0);
//            }
//            if(opt>=1 && opt<=4)
//            {
//                printf("\n Enter the value of num1 and num2");
//                scanf("%f %f",&no1,&no2);
//                switch(opt)
//                {
//                case 1:
//                        ans = no1 + no2;
//                        break;
//                case 2:
//                        ans = no1 - no2;
//                        break;
//                case 3:
//                        ans = no1 * no2;
//                        break;
//                case 4:
//                        ans = no1 / no2;
//                        break;
//                }
//                printf("\n Answer is %f",ans);
//            }
//            else
//            {
//                printf("\ Option is Invalid!!");
//            }
//        }
//            printf("\n End of program");
//            return 0;
//    }
//
/////    SWITCH USING CHARACTER CONSTANT
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        char opt;
//        float no1,no2,ans=0.0;
//        while(1)
//        {
//            printf("\n************ MENU ********");
//            printf("\n Select Option \n a:Addition \n b:Subtraction \n c:Multiplication \n d:Division \n e:Stop");
//            scanf(" %c",&opt);
//            if(opt=='e'||opt=='E')
//            {
//                break;
//            }
//            if((opt>='a' && opt<='d')||(opt>='A' && opt<='D'))
//            {
//                printf("\n Enter the value of num1 and num2");
//                scanf("%f %f",&no1,&no2);
//                switch(opt)
//                {
//                case 'a':
//                case 'A':
//                        ans = no1 + no2;
//                        break;
//                case 'b':
//                case 'B':
//                        ans = no1 - no2;
//                        break;
//                case 'c':
//                case 'C':
//                        ans = no1 * no2;
//                        break;
//                case 'd':
//                case 'D':
//                        ans = no1 / no2;
//                        break;
//                }
//                printf("\n Answer is %f",ans);
//            }
//            else
//            {
//                printf("\n Option is Invalid!!");
//            }
//        }
//            printf("\n End of program");
//            return 0;
//    }
///// WRITE A MENU DRIVEN PRG TO PERFORM FOLLOEING OPERATIONS
///  -INSERT
///  -UPDATE
///  -DELETE
///  -TRAVERSAL
//#include<stdio.h>
//#define MAX 50
//#include<stdlib.h>
//int main()
//{
//    int ar[MAX];
//    int opt,cnt,i,j,pos,no;
//    while(1)
//    {
//        printf("\n ************* MENU ***********");
//        printf("\n 1.INSERT \n 2.UPDATE \n 3.DELETE \n 4.TRAVERSAL \n 5.STOP");
//        printf("\n Choose the Option");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//        case 1:
//            if(cnt==MAX)
//            {
//                printf("\n Array is full");
//                break;
//            }
//            printf("\n ** Sub-Menu **");
//            printf("\n 1.Insert at first \n 2.Insert at position \n 3.Insert at last");
//            printf("\n choose your option");
//            scanf("%d",&opt);
//            if(opt==1)
//            {
//                if(cnt==0) //does not need to shift
//                {
//                    printf("\n Enter number");
//                    scanf("%d",&ar[0]);
//                    cnt++;
//                }
//                else
//                {
//                    j=cnt;
//                    while(j>0)
//                    {
//                        ar[j]=ar[j-1];
//                        j--;
//                    }
//                    printf("\n Enter the number");
//                    scanf("%d",&ar[0]);
//                    cnt++;
//                }
//            }
//            else if(opt==2)
//            {
//                printf("\n Enter the position where you want to insert an element");
//                scanf("%d",&pos);
//                printf("\n Enter the number you want to insert");
//                scanf("%d",&no);
//                if(pos<0 || pos>cnt)
//                {
//                    printf("\n Invalid Position");
//                }
//                else
//                {
//                    if((cnt==0 && pos==0) ||(cnt==pos))
//                    {
//                        ar[pos]=no;
//                    }
//                    else
//                    {
//                        j=cnt;
//                        while(j>pos)
//                        {
//                            ar[j]=ar[j-1];
//                            j--;
//                        }
//                        ar[pos]=no;
//                    }
//                    cnt++;
//                }
//            }
//            else if(opt==3)
//            {
//                printf("\n Enter the number where you want to insert");
//                scanf("%d",&no);
//                ar[cnt]=no;
//                cnt++;
//            }
//            else
//            {
//                printf("\n Incorrect option");
//            }
//            break;
//
//        case 2:
//            printf("\n Enter the position where you want to update the element");
//            scanf("%d",&pos);
//            printf("\n Enter the number");
//            scanf("%d",&no);
//            if(pos<0 || pos>cnt)
//            {
//                printf("\n Invalid position");
//            }
//            else
//            {
//                ar[pos]=ar[no];
//            }
//            break;
//
//        case 3:
//            printf("\n ** Sub-Menu **");
//            printf("\n 1.Delete at first \n 2.Delete at position \n 3.Delete at last");
//            printf("\n Select your option");
//            scanf("%d",&opt);
//            switch(opt)
//            {
//            case 1:
//
//                if(cnt==0)
//                {
//                    printf("Array is empty");
//                }
//
//                // delete first element
//                for(i=0; i<cnt; i++)
//                {
//                    ar[i]=ar[i+1];
//
//                }
//                cnt--;
//                break;
//            //delete position element
//            case 2:
//                printf("\n Enter the position you want to delete the element");
//                scanf("%d",&pos);
//                if(pos<0 || pos>cnt)
//                {
//                    printf("\n Invalid Position");
//                }
//                else
//                {
//                    for(i=pos; i<cnt-1; i++)
//                    {
//                        ar[i]=ar[i+1];
//                    }
//                    cnt--;
//                }
//                break;
//            case 3:
//                cnt--;
//                break;
//            default :
//                printf("\n Incorrect Option");
//            }
//            break;
//        case 4:
//            printf("\n Array elements are ");
//            for(i=0; i<cnt; i++)
//            {
//                printf("%5d",ar[i]);
//            }
//            break;
//
//        case 5:
//            printf("\n Thanks for using our Application... Visit again!!!");
//            exit(0);
//            break;
//        default:
//            printf("\n Incorrect Option");
//        }
//
//    }
//    return 0;
//}
//******** LINKED LIST************
//#include<stdio.h>
//#include<stdlib.h>
//struct studData
//{
//    int id;
//    int regno;
//    struct studData *next;
//};
//int main()
//{
//    struct studData *start,*last,*tmp;
//
//    int opt;
//
//    start=NULL;
//    while(1)
//    {
//        printf("\n **********MENU ****\n");
//        printf("\n 1.input \n 2. display \n 3.stop");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//        case 1:
//            tmp = (struct studData*)malloc(sizeof(struct studData));
//
//            printf("\n Enter the id of student");
//            scanf("%d",&tmp->id);
//
//            printf("\n Enter the registration number of student");
//            scanf("%d",&tmp->regno);
//            tmp->next=NULL;
//
//            if(start==NULL)
//            {
//                start = tmp;
//                last = tmp;
//            }
//            else
//            {
//                last->next = tmp;
//                last = tmp;
//            }
//            break;
//        case 2:
//            if(start==NULL)
//            {
//                printf("\n There is no Records!!!");
//
//            }
//            else
//            {
//                tmp = start;
//                while(tmp)
//                {
//                    printf("\n Student ID: %d \t Student Roll No: %d",tmp->id,tmp->regno);
//                    tmp = tmp->next;
//                }
//            }
//            break;
//        case 3:
//            exit(0);
//        }
//    }
//}
//
/// ***** LINKEDLIST FOR STUDENT INFORMATION MENU DRIVEN PROGRAM
//#include<stdio.h>
//#include<stdlib.h>
//struct studData
//{
//    int id;
//    int rollno;
//    struct studData *next;
//};
//    int main()
//    {
//        struct studData *start,*last,*tmp;
//
//        int opt;
//        start = NULL;
//        while(1)
//        {
//            printf("\n***** MENU*****");
//            printf("\n 1.input \n 2.display \n 3.stop");
//            printf("\n Select Option");
//            scanf("%d",&opt);
//
//            switch(opt)
//            {
//                case 1:
//                    tmp = (struct studData*)malloc(sizeof(struct studData));
//
//                    printf("\n Enter the id of student");
//                    scanf("%d",&tmp->id);
//
//                    printf("\n Enter the roll number of student");
//                    scanf("%d",&tmp->rollno);
//
//                    tmp->next=NULL;
//
//                    if(start==NULL)
//                    {
//                        start=tmp;
//                        last=tmp;
//                    }
//                    else
//                    {
//                        last->next=tmp;
//                        last=tmp;
//                    }
//                    break;
//
//                case 2:
//                    if(start==NULL)
//                    {
//                        printf("\n There is no record found!");
//                    }
//                    else
//                    {
//                        tmp=start;
//                        while(tmp)
//                        {
//                           printf("\n Student ID: %d \t Student Roll NO: %d",tmp->id,tmp->rollno);
//                            tmp=tmp->next;
//                        }
//                    }
//                    break;
//
//                case 3:
//                    exit(0);
//            }
//        }
//    }
//
/// WAP MENU DRIVEN PRG IN WHICH DISPLAY STUDENT INFORMATION AND DISPLAY TOPPER STUDENT OF 12 TH PERCENTAGE
//#include<stdio.h>
//#include<stdlib.h>
//struct studData
//{
//    int id;
//    int rolllno;
//    float per;
//    struct studData *next;
//};
//    int main()
//    {
//        struct studData *start, *last, *tmp,*tp;
//        int opt;
//        start=NULL;
//        while(1)
//        {
//            printf("\n ********** MENU *********\n");
//            printf("\n 1. Input \n 2. Display \n 3. Display Topper Information \n 4. Stop");
//            printf("\n Enter the choice");
//            scanf("%d",&opt);
//            switch(opt)
//            {
//            case 1:
//                tmp = (struct studData*)malloc(sizeof(struct studData));
//                printf("\n Enter the id of student");
//                scanf("%d",&tmp->id);
//
//                printf("\n Enter the roll no of student");
//                scanf("%d",&tmp->rolllno);
//
//                printf("\n Enter the percentage of student");
//                scanf("%f",&tmp->per);
//
//                tmp->next=NULL;
//                if(start==NULL)
//                {
//                    start=tmp;
//                    last=tmp;
//                }
//                else
//                {
//                    last->next=tmp;
//                    last=tmp;
//                }
//                break;
//
//            case 2:
//                if(start==NULL)
//                {
//                    printf("\n There is no records!");
//                }
//                else
//                {
//                    tmp=start;
//                    while(tmp)
//                    {
//                        printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f",tmp->id,tmp->rolllno,tmp->per);
//                        tmp=tmp->next;
//                    }
//                }
//                break;
//
//            case 3:
//                tp = start;
//                tmp = start->next;
//                while(tmp)
//                {
//                    if(tmp->per > tp->per)
//                    {
//                        tp=tmp;
//                    }
//                    tmp = tmp->next;
//                }
//                printf("\n Topper Id: %d \t Topper Roll No: %d \t Topper Percentage: %.2f",tp->id,tp->rolllno,tp->per);
//                break;
//
//            case 4:
//                exit(0);
//            }
//        }
//        return 0;
//    }
//
///In Above program add one another case which will sort the student list in decreasing order of their percentage.
///In above program remove all students from list having percentage less than 60%
//#include<stdio.h>
//#include<stdlib.h>
//
//struct studData
//{
//   int id;
//   int rollno;
//   float per;
//   struct studData *next;
//};
//
//int main()
//{
//    struct studData *start, *last, *tmp, *tp,*ptr1, *ptr2;
//    int opt;
//
//    start = NULL;
//
//    while(1)
//    {
//        printf("\n ********** MENU *********\n");
//        printf("\n 1. Input \n 2. Display \n 3. Display Topper Information \n 4.Display in decreasing order of percentage \n 5.Remove student information having percentage less than 60  \n 6.Stop");
//        printf("\n Enter the choice");
//        scanf("%d", &opt);
//
//        switch(opt)
//        {
//            case 1:
//                tmp = (struct studData*)malloc(sizeof(struct studData));
//                printf("\n Enter the id of student");
//                scanf("%d", &tmp->id);
//
//                printf("\n Enter the roll no of student");
//                scanf("%d", &tmp->rollno);
//
//                printf("\n Enter the percentage of student");
//                scanf("%f", &tmp->per);
//
//                tmp->next = NULL;
//
//                if(start == NULL)
//                {
//                    start = tmp;
//                    last = tmp;
//                }
//                else
//                {
//                    last->next = tmp;
//                    last = tmp;
//                }
//                break;
//
//            case 2:
//                if(start == NULL)
//                {
//                    printf("\n There are no records!");
//                }
//                else
//                {
//                    tmp = start;
//                    while(tmp)
//                    {
//                        printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f", tmp->id, tmp->rollno, tmp->per);
//                        tmp = tmp->next;
//                    }
//                }
//                break;
//
//            case 3:
//                if(start == NULL)
//                {
//                    printf("\n There are no records!");
//                }
//                else
//                {
//                    tp = start;
//                    tmp = start->next;
//
//                    while(tmp)
//                    {
//                        if(tmp->per > tp->per)
//                        {
//                            tp = tmp;
//                        }
//                        tmp = tmp->next;
//                    }
//
//                    printf("\n Topper Id: %d \t Topper Roll No: %d \t Topper Percentage: %.2f", tp->id, tp->rollno, tp->per);
//                }
//                break;
//
//            case 4:
//                {
//                    //struct studData *ptr1, *ptr2;
//                    ptr1 = start;
//
//                    while(ptr1)
//                    {
//                        ptr2 = ptr1->next;
//
//                        while(ptr2)
//                        {
//                            if(ptr1->per > ptr2->per)
//                            {
//                                int  temp = ptr1->id;
//                                ptr1->id = ptr2->id;
//                                ptr2->id = temp;
//
//                                int tmp = ptr1->rollno;
//                                ptr1->rollno = ptr2->rollno;
//                                ptr2->rollno = tmp;
//
//                                float tem = ptr1->per;
//                                ptr1->per = ptr2->per;
//                                ptr2->per = tem;
//                            }
//                            ptr2 = ptr2->next;
//                        }
//
//                        printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f", ptr1->id, ptr1->rollno, ptr1->per);
//                        ptr1 = ptr1->next;
//                    }
//
//                }
//                break;
//
//            case 5:
//
//                if(start == NULL)
//                {
//                    printf("\n There are no records!");
//                }
//                else
//                {
//                    tmp = start;
//                    while(tmp)
//                    {
//                        if(tmp->per < 60)
//                        {
//                              start = tmp->next;
////                            printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f", tmp->id, tmp->rollno, tmp->per);
//                              free(tmp);
//                              tmp=start;
//                        }
//
//                        printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f", tmp->id, tmp->rollno, tmp->per);
//
//                        tmp = tmp->next;
//                    }
//                }
//                break;
//
//            case 6:
//                exit(0);
//        }
//    }
//
//    return 0;
//}
//
///In Above program add one field "Gender" and make two different lists, one for boys and another for girls.
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct studData
//{
//    int id;
//    int rollno;
//    float per;
//    char gender;
//    struct studData *next;
//};
//
//int main()
//{
//    struct studData *start, *last, *tmp, *tp, *ptr1, *ptr2, *m,*mt,*ml, *f,*ft, *fl;
//    int opt, sid;
//
//    start = NULL;
//    m=f=NULL;
//
//    while (1)
//    {
//        printf("\n ********** MENU *********\n");
//        printf("\n 1. Input \n 2. Display \n 3. Display Topper Information \n 4. Display in decreasing order of percentage \n 5. Remove student information having percentage less than 60  \n 6. Display according to gender \n 7. Search by id \n 8. Stop");
//        printf("\n Enter the choice");
//        fflush(stdin);
//        scanf("%d", &opt);
//
//        switch (opt)
//        {
//        case 1:
//            tmp = (struct studData *)malloc(sizeof(struct studData));
//            printf("\n Enter the id of student: ");
//            fflush(stdin);
//            scanf("%d", &tmp->id);
//
//            printf("\n Enter the roll no of student: ");
//            fflush(stdin);
//            scanf("%d", &tmp->rollno);
//
//            printf("\n Enter the percentage of student: ");
//            fflush(stdin);
//            scanf("%f", &tmp->per);
//
//            printf("\n Enter the gender: ");
//            fflush(stdin);
//            scanf(" %c", &tmp->gender);
//
//            tmp->next = NULL;
//
//            if (start == NULL)
//            {
//                start = tmp;
//                last = tmp;
//            }
//            else
//            {
//                last->next = tmp;
//                last = tmp;
//            }
//            break;
//
//        case 2:
//            if (start == NULL)
//            {
//                printf("\n There are no records!");
//            }
//            else
//            {
//                tmp = start;
//                while (tmp)
//                {
//                    printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f \t gender: %c", tmp->id, tmp->rollno, tmp->per, tmp->gender);
//                    tmp = tmp->next;
//                }
//            }
//            break;
//
//        case 3:
//            if (start == NULL)
//            {
//                printf("\n There are no records!");
//            }
//            else
//            {
//                tp = start;
//                tmp = start->next;
//
//                while (tmp)
//                {
//                    if (tmp->per > tp->per)
//                    {
//                        tp = tmp;
//                    }
//                    tmp = tmp->next;
//                }
//
//                printf("\n Topper Id: %d \t Topper Roll No: %d \t Topper Percentage: %.2f \t gender: %c", tp->id, tp->rollno, tp->per, tp->gender);
//            }
//            break;
//
//        case 4:
//        {
//            ptr1 = start;
//
//            while (ptr1)
//            {
//                ptr2 = ptr1->next;
//
//                while (ptr2)
//                {
//                    if (ptr1->per > ptr2->per)
//                    {
//                        // Swap only the percentage, not the other fields
//                        float temp = ptr1->per;
//                        ptr1->per = ptr2->per;
//                        ptr2->per = temp;
//                    }
//                    ptr2 = ptr2->next;
//                }
//
//                printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f \t gender: %c", ptr1->id, ptr1->rollno, ptr1->per, ptr1->gender);
//                ptr1 = ptr1->next;
//            }
//        }
//        break;
//
//        case 5:
//
//            if (start == NULL)
//            {
//                printf("\n There are no records!");
//            }
//            else
//            {
//                tmp = start;
//                while (tmp)
//                {
//                    if (tmp->per < 60)
//                    {
//                        start = tmp->next;
//                        free(tmp);
//                        tmp = start;
//                    }
//                    else
//                    {
//                        printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f \t gender: %c", tmp->id, tmp->rollno, tmp->per, tmp->gender);
//                        tmp = tmp->next;
//                    }
//                }
//            }
//            break;
//
//        case 6:
//
//            tmp=start;
//            while(tmp)
//            {
//                if(tmp->gender=='m')
//                {
//                    mt=(struct studData*)malloc(sizeof(struct studData));
//                    mt->gender = tmp->gender;
//                    mt->id = tmp->id;
//                    mt->per = tmp->per;
//                    mt->rollno = tmp->rollno;
//
//                    mt->next=NULL;
//
//                    if(m==NULL)
//                    {
//                        m=mt;
//                        ml=mt;
//                    }
//                    else
//                    {
//                        ml->next=mt;
//                        ml=mt;
//                    }
//                }
//                else if(tmp->gender=='f')
//                {
//                    ft=(struct studData*)malloc(sizeof(struct studData));
//                    ft->gender=tmp->gender;
//                    ft->id=tmp->id;
//                    ft->per=tmp->per;
//                    ft->rollno=tmp->rollno;
//                    ft->next=NULL;
//
//                    if(f==NULL)
//                    {
//                        f=ft;
//                        fl=ft;
//                    }
//                    else
//                    {
//                        fl->next=ft;
//                        fl=ft;
//                    }
//                }
//                tmp=tmp->next;
//            }
//            if (m == NULL && f == NULL)
//            {
//                printf("\n There are no records!");
//            }
//            else
//            {
//                printf("\n Boys List:");
//                tmp = m;
//                while (tmp)
//                {
//                    printf("\n Student ID: %d \t Student Roll No: %d \t Student Percentage: %.2f \t Gender: %c", tmp->id, tmp->rollno, tmp->per, tmp->gender);
//                    tmp = tmp->next;
//                }
//
//                printf("\n Girls List:");
//                tmp = f;
//                while (tmp)
//                {
//                    printf("\n Student ID: %d \t Student Roll No: %d \t Student Percentage: %.2f \t Gender: %c", tmp->id, tmp->rollno, tmp->per, tmp->gender);
//                    tmp = tmp->next;
//                }
//            }
//            break;
//
//        case 7:
//
//            printf("\n Enter the id");
//            scanf("%d", &sid);
//            if (start == NULL)
//            {
//                printf("\n There are no records!");
//            }
//            else
//            {
//                tmp = start;
//                while (tmp)
//                {
//                    if (tmp->id == sid)
//                    {
//
//                        printf("\n Student ID: %d \t Student Roll No: %d \t Student percentage: %.2f \t gender: %c", tmp->id, tmp->rollno, tmp->per, tmp->gender);
//                        break; // Break out of the loop after finding the matching student
//                    }
//
//                    tmp = tmp->next;
//                }
//            }
//            break;
//        case 8:
//            exit(0);
//        }
//    }
//
//    return 0;

