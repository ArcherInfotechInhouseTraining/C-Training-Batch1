/////**************************POINTER **********************************
//
//#include<stdio.h>
//    int main()
//    {
//        int *p;
//        int *q;
//        char *ch;
//        double *d;
//
//        printf("\n *p:%u",sizeof(p));
//        printf("\n *q: %u",sizeof(q));
//        printf("\n *ch: %u",sizeof(ch));
//        printf("\n *d: %u",sizeof(d));
//
//        printf("\n int pointer:%u",sizeof(int *));
//        printf("\n double pointer :%u",sizeof(double*));
//        return 0;
//    }
//
///
//#include<stdio.h>
//    int main()
//    {
//        int x=10;
//        int *p;
//        p=&x;
//       // printf("\n Address of x: %u \t value of x:%d",&x,x);
//        printf("\n Address of p:%u \t value of p:%u",&p,p);
//
//        printf("\n Value of x using p:%d",*p);
//        return 0;
//    }
//
///// WAP TO COPY ELEMENTS FROM ONE TO ANOTHER POINTER
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int i,*p,*q,cnt;
//        printf("\n Enter the count");
//        scanf("%d",&cnt);
//        p=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter %d elements",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        q=(int*)malloc(cnt*sizeof(int));
//        for(i=0;i<cnt;i++)
//        {
//            *(q+i)=*(p+i);
//        }
//        printf("\n Pointer p");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        printf("\n Pointer q");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(q+i));
//        }
//        return 0;
//    }
//
///// WAP TO FIND COUNT OF EVEN NUMBERS AND DISPLAY IT BY USING POINTER
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int i,cnt,*p,ec=0;
//        printf("\n Enter the count of array");
//        scanf("%d",&cnt);
//        p=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter %d elements",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        printf("\n Even elements are:");
//        for(i=0;i<cnt;i++)
//        {
//            if(*(p+i)%2==0)
//            {
//                ec++;
//                printf("%5d",*(p+i));
//            }
//        }
//        printf("\n Count of even number is %d",ec);
//        return 0;
//    }
//
///// SEARCHING ELEMENT IN POINTER
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int i,cnt,*p,no;
//        printf("\n Enter the count of array");
//        scanf("%d",&cnt);
//        printf("\n Enter the number to be searched");
//        scanf("%d",&no);
//        p=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter %d elements",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        for(i=0;i<cnt;i++)
//        {
//            if(*(p+i)==no)
//            {
//                printf("\n number %d is present at %d location",no,i);
//            }
//        }
//        return 0;
//    }
//
///// WAP to find the highest score by the player in n Matches
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int i,*p,hs=0,cnt;
//        printf("\n Enter the number of matches");
//        scanf("%d",&cnt);
//        p=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter the score of %d matches",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        //high score
//        for(i=0;i<cnt;i++)
//        {
//            if(*(p+i)>hs)
//            {
//                hs=*(p+i);
//            }
//        }
//        printf("\n Highest score is %d",hs);
//        return 0;
//    }
//
/////WAP to find out total bill, discount and payable amount.
//
//(There are N items and discount 5% till bill less than 500 otherwise 14%)
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//       int i,*p,cnt;
//       float total=0,dis=0,payamt;
//       printf("\n Enter the count of items");
//       scanf("%d",&cnt);
//       p=(int*)malloc(cnt*sizeof(int));
//       printf("\n Enter the price of %d items");
//       for(i=0;i<cnt;i++)
//       {
//           scanf("%d",p+i);
//       }
//       // totalbill
//       for(i=0;i<cnt;i++)
//       {
//           total = total + *(p+i);
//       }
//       //payamt
//       for(i=0;i<cnt;i++)
//       {
//           if(total<500)
//           {
//               dis = total* 0.05;
//           }
//           else
//           {
//               dis = total * 0.07;
//           }
//       }
//       payamt = total - dis;
//       printf("\n Total bill of %d items is %.2f",cnt,total);
//       printf("\n Discount is %.2f",dis);
//       printf("\n Payable amount is %.2f",payamt);
//       return 0;
//    }
//
///// WAP SELECTION SORTING IN POINTER
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int *p,i,j,tmp,cnt;
//        printf("\n Enter the count of elements");
//        scanf("%d",&cnt);
//        p=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter Elements");
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        printf("\n Entered elements are :");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        //sorting in ascending
//        for(i=0;i<cnt;i++)
//        {
//            for(j=i+1;j<cnt;j++)
//            {
//                if(*(p+i)>*(p+j))
//                {
//                    tmp = *(p+i);
//                    *(p+i) = *(p+j);
//                    *(p+j) = tmp;
//                }
//            }
//        }
//        printf("\n Sorted arrray ");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        return 0;
//    }
//
///// WAP TO ENTER N NUMBERS AND DISPLAY ALL PRIME NUMBERS
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int *x,i,d=2,flg=0,cnt;
//        printf("\n Enter The Count:- ");
//        scanf("%d",&cnt);
//
//        x=((int*)malloc(cnt*sizeof(int)));
//
//        printf("\n Enter %d Number's:- ",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",(x+i));
//        }
//
//        printf("\n Prime numbers are :");
//        for(i=0;i<cnt;i++)
//        {
//            flg=0;
//            d=2;
//            while(d<=*(x+i)/2)
//            {
//                if(*(x+i)%d==0)
//                {
//                    flg=1;
//                    break;
//                }
//                d++;
//            }
//            if(flg==0)
//            {
//                printf("\n %d",*(x+i));
//            }
//        }
//
//
//        return 0;
//    }
//
///// WAP TO CALCULATE TOTAlBIL DISCOUNT AND PAYABLE AMOUNT OF 4 BUYERS WHERE ITEMS OF EACH BUYER IS UNKNOWN WHICH IS DEFINED BY THE USER IN RUNTIME
//
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        float *p[4], tot, dis;
//        int i,j,ic[4];
//        for(i=0;i<4;i++)
//        {
//            printf("\n Enter the count of %d buyer",i+1);
//            printf("\n Enter item count");
//            scanf("%d",&ic[i]);
//            p[i]=(float*)malloc(ic[i]*sizeof(float));
//            for(j=0;j<ic[i];j++)
//            {
//                printf("\n Enter the price %d item",j+1);
//                scanf("%f",*(p+i)+j);
//            }
//        }
//        printf("\n Display total-bill discount and payable amount");
//        for(i=0;i<4;i++)
//        {
//            printf("\n for %d buyer",i+1);
//            tot=0;
//            dis=0;
//            for(j=0;j<ic[i];j++)
//            {
//                printf(" %.2f \t",*(*(p+i)+j));
//                tot = tot + *(*(p+i)+j);
//            }
//            if(tot<500)
//            {
//                dis = tot * 0.05;
//            }
//            else
//            {
//                dis = tot * 0.07;
//            }
//            printf("\n Total is %.2f",tot);
//            printf("\n Discount is %.2f",dis);
//            printf("\n Payable amount is %.2f",(tot-dis));
//            printf("\n ");
//        }
//        return 0;
//    }
//
///// WAP TO DISPLAY RUNS SCORED BY 3 DIFFERENT PLAYERS IN N MATCHES (N MAY BE DIFFERENT FOR EACH PLAYER)
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int *p[3],mat[3],i,j;
//        printf("\n Enter the runs scored by 3 players in different matches:");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Player %d",i+1);
//            printf("\n Enter the match cnt");
//            scanf("%d",&mat[i]);
//            p[i]=(int*)malloc(mat[i]*sizeof(int));
//            printf("\n Enter the runs scored in %d matches",mat[i]);
//            for(j=0;j<mat[i];j++)
//            {
//                printf("\n Match %d",j+1);
//                scanf("%d",*(p+i)+j);
//            }
//        }
//        printf("\n Score Card \n");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Player %d=>",i+1);
//            for(j=0;j<mat[i];j++)
//            {
//                printf("\t Match %d=>",j+1);
//                printf("%7d",*(*(p+i)+j));
//            }
//        }
//        return 0;
//    }
//
///// ENTER N STUDENT FOR 3 SUBJECTS
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int (*p)[3];
//        int cnt,i,j,tot;
//        printf("\n Enter the student count");
//        scanf("%d",&cnt);
//        p=(int(*)[])malloc(cnt*(3*sizeof(int)));
//
//        printf("\n Enter the marks of %d student in 3 subjects \n",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            printf("\n for student %d",i+1);
//            for(j=0;j<3;j++)
//            {
//                printf("\n sub %d",j+1);
//                scanf("%d",*(p+i)+j);
//            }
//        }
//        printf("\n Marks of %d student in 3 subjects \n",cnt);
//        for(i=0;i<cnt;i++)
//        {
//
//            printf("\n Student %d",i+1);
//            tot = 0;
//            for(j=0;j<3;j++)
//            {
//                printf("%6d",*(*(p+i)+j));
//                tot = tot + *(*(p+i)+j);
//            }
//            printf("%6d",tot);
//        }
//        return 0;
//    }

/// POINTER PROBLEMS
/// 2. WAP TO ADD TWO NUMBERS USING PTR
//#include<stdio.h>
//    int main()
//    {
//        int x,y,z;
//        printf("\n Enter the value of x and y");
//        scanf("%d %d",&x,&y);
//        int *ptr1 = &x;
//        int *ptr2 = &y;
//        z = *ptr1 + *ptr2;
//        printf("\n Sum of %d and %d is %d",x,y,z);
//        return 0;
//    }
/// 3. WAP TO SWAP TWO NUMBERS USING POINTERS
//#include<stdio.h>
//    int main()
//    {
//        int *x,*y,n1,n2,tmp;
//        printf("\n Enter the value of n1 and n2");
//        scanf("%d %d",&n1,&n2);
//        printf("\n value of n1 is %d and n2 is %d",n1,n2);
//        x = &n1;
//        y = &n2;
//        tmp = *x;
//        *x = *y;
//        *y = tmp;
//        printf("\n value of n1 is %d and n2 is %d",*x,*y);
//        return 0;
//    }

///4. Write a C program to input and print array elements using pointer.
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p;
//    int i,cnt;
//    printf("\n Enter count of elements: ");
//    scanf("%d",&cnt);
//    p=(int*)malloc(cnt*sizeof(int));
//    printf("\n Enter %d elements: ",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",p+i);
//    }
//    printf("\n Entered elements are : ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//}
//
///5. WAP TO COPY ONE STRING TO ANOTHER POINTER
//#include<stdio.h>
//    int main()
//    {
//        int *p,*q,i,cnt;
//        printf("\n Enter the cnt");
//        scanf("%d",&cnt);
//        p=(int *)malloc(cnt*sizeof(int));
//        q=(int*)malloc(cnt*sizeof(int));
//        printf("\n array of p");
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        printf("\n array of p");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        for(i=0;i<cnt;i++)
//        {
//            *(q+i) = *(p+i);
//
//        }
//        printf("\n array of q");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(q+i));
//        }
//        return 0;
//    }
//
/// 6.WAP TO SWAP TWO ARRAYS USING PTR
//#include<stdio.h>
//    int main()
//    {
//        int *p,*q;
//        int x[5],y[5],tmp,i;
//        p=&x[0];
//        q=&y[0];
//        printf("\n Enter the elements of x");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",p+i);
//        }
//        printf("\n Enter the elements of y");
//         for(i=0;i<5;i++)
//        {
//            scanf("%d",y+i);
//        }
//        printf("\n Elements before swapping of x");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        printf("\n Elements before swapping of y");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",*(q+i));
//        }
//        //swap
//        for(i=0;i<5;i++)
//        {
//            tmp = *(p+i);
//            *(p+i)=*(q+i);
//            *(q+i)=tmp;
//        }
//        printf("\n Elements After swapping of x");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        printf("\n Elements After swapping of y");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",*(q+i));
//        }
//        return 0;
//    }
//
///7. WAP TO REVERSE ANY ARRAY USING PTR
//#include<stdio.h>
//    int main()
//    {
//        int *p,i;
//        int x[5];
//        p=&x[0];
//        printf("\n Enter the 5 numbers");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",p+i);
//        }
//        printf("\n Numbers are");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        printf("\n Reverse of array of numbers");
//        for(i=4;i>=0;i--)
//        {
//            printf("%5d",*(p+i));
//        }
//        return 0;
//    }
//
/// 8. WAP TO SEARCH AN ELEMENTS IN AN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int *p,x[5],no,i,;
//        p=&x[0];
//        printf("\n Enter the number to be searched");
//        scanf("%d",&no);
//        printf("\n Enter the Numbers");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",p+i);
//        }
//        //process
//        for(i=0;i<5;i++)
//        {
//            if(no==*(p+i))
//            {
//                printf("%d is present at %d position",*(p+i),i);
//            }
//        }
//        return 0;
//    }
//
/// 9.WAP TO ACCESS 2D ARRAY USING PTR
//#include<stdio.h>
//    int main()
//    {
//        int *p,x[3][3],i,j;
//        p=&x[0][0];
//        printf("\n Enter matrix of 3x3");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%5d",(p+i)+j);
//            }
//        }
//        printf("\n matrix of 3x3 \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",(*(p+i)+j));
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/// 10.WAP PRG TO ADD 2 MATRIX USING PTR
//#include<stdio.h>
//    int main()
//    {
//        int *p,*q,*r,x[3][3],y[3][3],z[3][3],i,j;
//        p=&x[0][0];
//        q=&y[0][0];
//        r=&z[0][0];
//        printf("\n Enter the 3x3 matrix of x");
//        for(i=0;i<3;i++)
//        {
//            scanf("%d",(p+i*3+j));
//        }
//        printf("\n Enter the 3x3 matrix of y");
//        for(i=0;i<3;i++)
//        {
//            scanf("%d",(q+i*3+j));
//        }
//        //addition
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//               (*(r+i)+j) = (*(p+i)+j) + (*(q+i)+j);
//            }
//        }
//        printf("\n Matrix x \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",(*(p+i)+j));
//            }
//        }
//        printf("\t\t");
//        printf("\n Matrix y \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",(*(q+i)+j));
//            }
//        }
//        printf("\t\t");
//        printf("\n Addition matrix \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//               printf("%5d",(*(r+i)+j));
//            }
//        }
//        return 0;
//    }
//
///11. Write a C program to multiply two matrix using pointers.

//#include<stdio.h>
//    int main()
//    {
//        int *p,*q,*r,x[3][3],y[3][3],z[3][3],i,j;
//        p=&x[0][0];
//        q=&y[0][0];
//        r=&z[0][0];
//        printf("\n Enter the 3x3 matrix of x");
//        for(i=0;i<3;i++)
//        {
//            scanf("%d",(p+i*3+j));
//        }
//        printf("\n Enter the 3x3 matrix of y");
//        for(i=0;i<3;i++)
//        {
//            scanf("%d",(q+i*3+j));
//        }
//        //addition
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//               (*(r+i)+j) = (*(p+i)+j) + (*(q+i)+j);
//            }
//        }
//        printf("\n Matrix x \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",(*(p+i)+j));
//            }
//        }
//        printf("\t\t");
//        printf("\n Matrix y \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",(*(q+i)+j));
//            }
//        }
//        printf("\t\t");
//        printf("\n Addition matrix \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//               printf("%5d",(*(r+i)+j));
//            }
//        }
//        return 0;
//    }
/// 12.WAP TO FIND LENGTH OF STRING USING POINTER
//#include<stdio.h>
//    int main()
//    {
//        int i,cnt=0;
//        char str[50],*p;
//        p=&str[0];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;*(p+i)!='\0';i++)
//        {
//            cnt++;
//        }
//        printf("\n Count is %d",cnt);
//        return 0;
//    }
//
/// 13. WAP TO COPY ONE STRING TO ANOTHER STRING BY USING POINTER
//#include<stdio.h>
//    int main()
//    {
//      char str[50],*p,*q,i;
//      p=&str[0];
//      q=&str[0];
//      printf("\n Enter any string");
//      gets(str);
//      printf("\n String before coping in p location\n");
//      puts(str);
//      for(i=0;*(p+i)!='\0';i++)
//      {
//          *(q+i)=*(p+i);
//      }
//      printf("\n String copied in another q location\n");
//      puts(str);
//      return 0;
//    }
//
/// 14. WAP TO CONCATENATE TWO STRING USING PTR
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        char str1[50],str2[50],*p,*q;
//        p=&str1[0];
//        q=&str2[0];
//        printf("\n Enter first string");
//        gets(str1);
//        printf("\n Enter second string");
//        gets(str2);
//
//        for(i=0;*(p+i)!='\0';i++);
//       // str1[i++]=' ';
//        for(j=0;*(q+j)!='\0';j++)
//        {
//            *(p+i)=*(q+j);
//            i++;
//        }
//
//        *(p+i)='\0';
//        puts(str1);
//        return 0;
//    }
//
/// 15. WAP TO COMPARE TWO STRINGS
//#include<stdio.h>
//    int main()
//    {
//        int i,flg=0,sp1,ep1,sp2,ep2;
//        char str1[50],str2[50],*p,*q,*s1,*s2;
//        p=&str1[0];
//        q=&str2[0];
//        s1=&sp1;
//        s2=&sp2;
//        printf("\n Enter a string 1");
//        gets(str1);
//        printf("\v Enter a string 2");
//        gets(str2);
//        // sp1
//        for(i=0;*(p+i)==32;i++);
//        sp1=i;
//        //length
//        for(i=0;*(p+i)!='\0';i++);
//        //ep1
//        for(i--;*(p+i)==32;i--);
//        ep1=i;
//        //sp2
//        for(i=0;*(q+i)==32;i++);
//        sp2=i;
//        //length
//        for(i=0;*(q+i)!='\0';i++);
//        //ep2
//        for(i--;*(q+i)==32;i--);
//        ep2=i;
//        //process
//        while(sp1<=ep1 && sp2<=ep2)
//        {
//            for(i=0;*(p+i)!='\0' && *(q+i)!='\0';i++)
//            {
//                if((sp1+i)!=(sp2+i))
//                {
//                flg =1 ;
//                break;
//                }
//            }
//            sp1++;
//            sp2++;
//        }
//
//        if(flg==0)
//        {
//            printf("\n Strings are same");
//        }
//        else
//        {
//            printf("\n Strings are not same");
//        }
//        return 0;
//    }
//
/// 16.WAP TO REVERSE STRING AT SAME LOCATION
//#include<stdio.h>
//    int main()
//    {
//        int i,j,tmp;
//        char str[50],*p;
//        p=&str[0];
//        printf("\n Enter the string");
//        gets(str);
//        for(i=0;*(p+i)!='\0';i++);
//        for(j=0,i--;i>=j;j++,i--)
//        {
//            tmp=*(p+i);
//            *(p+i)=*(p+j);
//            *(p+j)=tmp;
//        }
//        puts(str);
//        return 0;
//    }
//
//
/// 17.WAP TO SORT ARRAY USING POINTER BY SELECTION SORT
//#include<stdio.h>
//    int main()
//    {
//        int *p,i,j,cnt,tmp;
//        printf("\n Enter the count",cnt);
//        scanf("%d",&cnt);
//        printf("\n Enter %d elements",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",p+i);
//        }
//        printf("\n Elements are");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        //selection sort
//        for(i=0;i<cnt;i++)
//        {
//            for(j=i+1;j<cnt;j++)
//            {
//                if(*(p+i)>*(p+j))
//                {
//                    tmp = *(p+i);
//                    *(p+i) = *(p+j);
//                    *(p+j) = tmp;
//                }
//            }
//        }
//        printf("\n Sorted array");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        return 0;
//    }

///18.Write a C program to return multiple value from function using
///pointers
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int *x, int *y)
//{
//    int tmp;
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//
//}
//int main()
//{
//    int x,y;
//
//    printf("\n Enter the value of x and y");
//    scanf("%d %d",&x,&y);
//
//    printf("\n value of x and y before swapping is %d %d",x,y);
//
//    swap(&x,&y);
//
//    printf("\n value of x and y After swapping is %d %d",x,y);
//
//}
