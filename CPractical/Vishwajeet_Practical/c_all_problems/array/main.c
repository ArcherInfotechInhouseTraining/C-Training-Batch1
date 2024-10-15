//#include<stdio.h>
//    int main()
//    {
//        int i,arr[10]={1,2,3,4,5,6,7,8,9,10};
//        printf("\n 10 values");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",arr[i]);
//        }
//        return 0;
//    }
///
//#include<stdio.h>
//    int main()
//    {
//        int i,arr[10];
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&arr[i]);
//        }
//        printf("\n 10 Elemets of array");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",arr[i]);
//        }
//        return 0;
//    }
//
///// ENTER ARRAY OF 10 ELEMENTS AND DISPLAY FROM LEFT TO RIGHT AND RIGHT TO LEFT
//#include<stdio.h>
//    int main()
//    {
//        int i,x[10];
//        printf("\n Enter ten values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Array elements are");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n Array elements are in reverse order");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[9-i]);
//        }
//        return 0;
//    }
//
///// ENTER AN ARRAY OF 5 INTEGER AND COPY THE ELEMENTS IN ANOTHER ARRAY AND IN REVERSE ORDER
//#include<stdio.h>
//    int main()
//    {
//        int i,x[5],y[5],z[5],j;
//        printf("\n Enter the 5 values");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        //copy
//        for(i=0;i<5;i++)
//        {
//            y[i] = x[i];
//        }
//        //reverse in another array
//        for(i=0;i<5;i++)
//        {
//            z[i] = x[4-i];
//        }
//
//        printf("\n Array X:");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//
//        printf("\n Array Y:");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",y[i]);
//        }
//
//        printf("\n Array Z:");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",z[i]);
//        }
//    return 0;
//    }
//
///// ENTER PRICE OF 6 ITEMS AND FIND TOTAL DISPLAY PAYABLE AMOUNT AFTER DISCOUNT OF 7% IF TOTALBILL IS GREATER THAN 500
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        float x[6],tot=0,dis=0,payamt;
//        printf("Enter Value of 6 items");
//        for(i=0;i<6;i++)
//        {
//            scanf("%f",&x[i]);
//        }
//        for(i=0;i<6;i++)
//        {
//            tot = tot + x[i];
//        }
//        if(tot>500)
//        {
//            dis = tot * 0.07;
//        }
//        payamt = tot - dis;
//
//        printf("\n Total Bill is %f",tot);
//        printf("\n Discount is %f",dis);
//        printf("\n Payable amount is %f",payamt);
//
//    }
//
///// INPUT THE HEIGHT OF 5 FRIENDS AND CALCULATE TALLEST AND SMALLER HEIGHT
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        float x[5], max , min;
//        printf("\n Enter height of 5 friends in feet");
//        for(i=0;i<5;i++)
//        {
//            scanf("%f",&x[i]);
//        }
//        max = x[0], min=x[0];
//        //max
//        for(i=0;i<5;i++)
//        {
//           if(x[i]>=max)
//           {
//              max = x[i];
//           }
//           if(x[i]<min)
//           {
//              min = x[i];
//           }
//
//        }
//        printf("\n Tallest height is %f",max);
//        printf("\n Smaller height is %f",min);
//        return 0;
//    }
//
///// ENTER ARRAY OF TEN NUMBERS AND COUNT DIVISIBLE BY ONLY 3,ONLY 5,BOTH,ONT BOTH
//#include<stdio.h>
//int main()
//{
//    int i,x[10],cnt,fcnt,bcnt,ncnt;
//    printf("\n Enter ten values");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    cnt=0,fcnt=0,bcnt=0,ncnt=0;
//    //div by only 3
//    for(i=0; i<10; i++)
//    {
//        if(x[i]%3==0)
//        {
//            if(x[i]%5==0)
//            {
//                bcnt++;
//            }
//            else
//            {
//                cnt++;
//            }
//        }
//        else
//        {
//            if(x[i]%5==0)
//            {
//                fcnt++;
//            }
//            else
//            {
//                ncnt++;
//            }
//        }
//    }
//    printf("\n count of divisible by 3 is %d",cnt);
//    printf("\n count of divisible by 5 is %d",fcnt);
//    printf("\n count of divisible by both is %d",bcnt);
//    printf("\n count of not divisible by both is %d",ncnt);
//    return 0;
//}
//
///// ENTER ARRAY OF 10 AND COUNT PRIME NUMBERS
//#include<stdio.h>
//    int main()
//    {
//        int x[10],d=2,flg=0,i,cnt=0;
//        printf("\n Enter 10 numbers");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//
//        for(i=0;i<10;i++)
//        {
//            flg=0;
//            d=2;
//            while(d<=x[i]/2)
//            {
//               if(x[i]%d==0)
//                {
//                    flg=1;
//                    break;
//                }
//                d++;
//            }
//            if(flg==0 && x[i]!=1)
//            {
//                cnt++;
//            }
//        }
//        printf("\n count of prime number is %d",cnt);
//        return 0;
//    }
//
///// ENTER ARRAY OF 10 INTEGERS AND FIND MAX AND SECOND max
//#include<stdio.h>
//    int main()
//    {
//       int x[10],i,fmax,smax;
//       printf("\n Enter 10 numbers");
//       for(i=0;i<10;i++)
//       {
//           scanf("%d",&x[i]);
//       }
//       fmax=x[0],smax=x[0];
//       for(i=0;i<10;i++)
//       {
//           if(x[i]>fmax)
//           {
//              fmax = x[i];
//           }
//       }
//       for(i=0;i<10;i++)
//       {
//          if(x[i]>smax && x[i] != fmax)
//          {
//              smax = x[i];
//          }
//       }
//       printf("\n Max is %d \t Second max is %d",fmax,smax);
//       return 0;
//    }
//
///// WAP TO FIND FIRST MAX AND SECOND MAX IN AN ARRAY OF 10 ELEMENTS
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,fmax,smax;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            if(i==0)
//            {
//               fmax=x[i];
//               smax=x[i];
//            }
//            else if(x[i]>fmax)
//            {
//                smax=fmax;
//                fmax=x[i];
//            }
//            else if(fmax==smax || x[i]>smax)
//            {
//                smax=x[i];
//            }
//        }
//        printf("\n Elements are:");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n First max :%d \t Second max :%d",fmax,smax);
//        return 0;
//    }
//
///// WAP TO FIND FIRST MIN AND SECOND MIN IN AN ARRAY OF 10
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,fmin,smin;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            if(i==0)
//            {
//               fmin=x[i];
//               smin=x[i];
//            }
//            else if(x[i]<fmin)
//            {
//                smin=fmin;
//                fmin=x[i];
//            }
//            else if(fmin==smin || x[i]<smin)
//            {
//                smin=x[i];
//            }
//        }
//        printf("\n Elements are:");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n First min:%d \t Second min :%d",fmin,smin);
//        return 0;
//    }


///// ************** LIST PROBLEMS OF  1D ARRAY
///// 1.WAP TO PRINT MARKS OBTAINED BY STUDENT IN FIVE TEST
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i;
//        printf("\n Enter marks of student of 5 Test");
//        for(i=0;i<5;i++)
//        {
//            printf("\n Enter test:%d",i+1);
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            printf("\n test %d marks %d out of 100",i+1,x[i]);
//        }
//        return 0;
//    }
//
///// 2. WAP TO PRINT AVG MARKS OBTAINED BY STUDENT IN FIVE TEST
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i;
//        float avg=0,sum=0;
//        printf("\n Enter marks of student of 5 Test");
//        for(i=0;i<5;i++)
//        {
//            printf("\n Enter test:%d",i+1);
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            sum = sum + x[i];
//        }
//        avg = sum / 5;
//        printf("\n Average of 5 test is %f",avg);
//        return 0;
//    }
//
/////3. WAP TO FIND SUM OF NEGATIVE AND POSITIVE INTEGERS
//#include<stdio.h>
//    int main()
//    {
//        int i,x[10],ps=0,ns=0;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            if(x[i]>0)
//            {
//                ps=ps + x[i];
//            }
//            else if(x[i]<0)
//            {
//                ns = ns + x[i];
//            }
//        }
//        printf("\n Positive sum is %d \t negative sum is %d",ps,ns);
//        return 0;
//    }
//
///// 4. WAP TO FIND SUM OF N NUMBERS IN AN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int n,sum=0,i;
//        printf("Enter n th term");
//        scanf("%d",&n);
//        printf("\n Enter Elements");
//        int x[n];
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//       // printf("\n Elements are");
//        for(i=0;i<n;i++)
//        {
//            sum = sum + x[i];
//        }
//        printf("\n sum upto nth term is %d",sum);
//        return 0;
//    }
//
/////5. WAP TO FIND SMALLEST ELEMETNS IN AN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int i,x[10],small;
//        printf("\n Enter array of elements");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        small = x[0];
//        printf("\n Elements are");
//        for(i=0;i<10;i++)
//        {
//            if(x[i]<small)
//            {
//                small = x[i];
//            }
//        }
//        printf("\n Smallest is %d",small);
//        return 0;
//    }
//
///// 6. WAP TO FIND LARGEST ELEMENT IN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int i,x[10],large;
//        printf("\n Enter array of elements");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        large = x[0];
//        printf("\n Elements are");
//        for(i=0;i<10;i++)
//        {
//            if(x[i]>large)
//            {
//                large = x[i];
//            }
//        }
//        printf("\n Largest is %d",large);
//        return 0;
//    }
//
///// 7.WAP TO FIND 2ND SMALLEST ELEMNT IN array
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,fmin,smin;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            if(i==0)
//            {
//               fmin=x[i];
//               smin=x[i];
//            }
//            else if(x[i]<fmin)
//            {
//                smin=fmin;
//                fmin=x[i];
//            }
//            else if(fmin==smin || x[i]<smin)
//            {
//                smin=x[i];
//            }
//        }
//        printf("\n Elements are:");
//        for(i=0;i<10;i++)
//        {
//            printf("%6d",x[i]);
//        }
//        printf("\n Second min :%d",smin);
//        return 0;
//    }
//
/////8. WAP TO FIND 2ND LARGEST ELEMENT IN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,fmax,smax;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            if(i==0)
//            {
//               fmax=x[i];
//               smax=x[i];
//            }
//            else if(x[i]>fmax)
//            {
//                smax=fmax;
//                fmax=x[i];
//            }
//            else if(fmax==smax || x[i]>smax)
//            {
//                smax=x[i];
//            }
//        }
//        printf("\n Elements are:");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n Second max :%d",smax);
//        return 0;
//    }
//
///// 9. WAP TO PRINT AVG OF NUMBERS IN ARRAY OF EVEN POSITION
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,sum=0,cnt=0;
//        float avg=0;
//        printf("\n Enter Elements of array");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            if(i%2==0)
//            {
//                sum = sum + x[i];
//                cnt++;
//            }
//        }
//        avg = sum/cnt;
//        printf("\n Average is %f",avg);
//        return 0;
//    }
//
///// 10. WAP TO FIND AVG OF ODD POSITION IN array
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,cnt=0,sum=0;
//        float avg =0;
//        printf("\n Enter elements of array");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            if(i%2 != 0)
//            {
//                sum = sum + x[i];
//                cnt++;
//            }
//        }
//        avg = (float)sum/(float)cnt;
//        printf("\n Average of odd position is %f",avg);
//        return 0;
//    }
//
///// 11. WAP TO DISPLAY ARRAY OF ELEMENTS IN REVERSE ORDER
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter the elements");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n Array Elements are in reverse order");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[9-i]);
//        }
//        return 0;
//    }
//
///// 13. WAP TO DISPLAY LIST OF EVEN NUMBERS AND ODD NUMBERS FROM ARRAY SEPARATELY
//#include<stdio.h>
//int main()
//{
//    int x[10],i;
//    printf("\n Enter 10 values");
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Even Numbers from array are:");
//    for(i=0; i<10; i++)
//    {
//
//        if(x[i]%2==0)
//        {
//            printf("%5d",x[i]);
//        }
//    }
//    printf("\n Odd Numbers from array are :");
//    for(i=0;i<10;i++)
//    {
//        if(x[i]%2!=0)
//        {
//           printf("%5d",x[i]);
//        }
//    }
//return 0;
//}
//
///// 12.WAP TO REVERSE ARRAY USING SWAPPING METHOD
//#include<stdio.h>
//    int main()
//    {
//        int i,x[5],y[5],tmp;
//        printf("\n Enter 5 elements");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//
//        for(i=0;i<5;i++)
//        {
//           printf("%5d",x[i]);
//        }
//
//       // reverse using swapping
//        for(i=0;i<5;i++)
//        {
//            y[i]=x[i];
//
//            tmp=x[i];
//            x[i]=y[i];
//            y[i]=tmp;
//        }
//        printf("\n reverse array");
//        for(i=4;i>=0;i--)
//        {
//            printf("%5d",y[i]);
//        }
//        return 0;
//    }
//
///// 14. WAP TO FIND FREQUENCY OF ALL NUMBERS IN ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[5],i,cnt=0,j,no;
//    printf("\n Enter 5 elements");
//    for(i=0; i<5; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Elements are");
//    for(i=0; i<5; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    for(i=0; i<5; i++)
//    {
//        if(x[i]!=-1)
//        {
//
//            no=x[i];
//            cnt=0;
//            for(j=0; j<5; j++)
//            {
//                if(x[j]==no)
//                {
//                    x[j]=-1;
//                    cnt++;
//                }
//            }
//
//            printf("\n %d is %d times",no,cnt);
//        }
//    }
//    return 0;
//
//}
//
//
///// 15 WAP To FIND MOST OCCURING NUMBER IN ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[5],i,cnt=0,j,no,mocrno,mocrnt=0;
//    printf("\n Enter 5 elements");
//    for(i=0; i<5; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Elements are");
//    for(i=0; i<5; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    for(i=0; i<5; i++)
//    {
//        if(x[i]!=-1)
//        {
//
//            no=x[i];
//            cnt=0;
//            for(j=0; j<5; j++)
//            {
//                if(x[j]==no)
//                {
//                    x[j]=-1;
//                    cnt++;
//                }
//            }
//
//            printf("\n %d is %d times",no,cnt);
//            if(cnt>mocrnt)
//            {
//                mocrnt=cnt;
//                mocrno=no;
//            }
//        }
//    }
//    printf("\n Most occuring no is %d \t %d times",mocrno,mocrnt);
//    return 0;
//
//}

///16. Write a Program to Find missing numbers in an array.
//
//            int x[5]={7,12,2,9,8}
//
//            min         max
//            2, 3,4,5.....12
//        means we have to find the number from above range which are not present in
//        an array
//
//int main()
//{
//    int x[7],i, min,max,flg;
//
//    printf("\n Enter any 7 nos: ");
//    for(i=0;i<7;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Entered nos: ");
//    for(i=0;i<7;i++)
//    {
//        printf("%6d",x[i]);
//    }
//    /// find min and max(first and last number from the range)
//    min=max=x[0];
//    for(i=1;i<7;i++)
//    {
//        if(x[i]>max)
//        {
//            max=x[i];
//        }
//        else if(x[i]<min)
//        {
//            min=x[i];
//        }
//    }
//    /// missing search
//    printf("\n List of missing nos: ");
//    for(;min<=max;min++)
//    {
//        flg=0;
//        for(i=0;i<7;i++)
//        {
//            if(x[i]==min)
//            {
//                flg=1;
//                break;
//            }
//        }
//        if(flg==0)
//        {
//            printf("%6d",min);
//        }
//    }
//    return 0;
//}
//
///// 17 WAP TO SEPARATE EVEN AND ODD POSITION NUMBERS IN AN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter 10 elements");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n  Inserted Array elements are")
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // for even position display array
//        printf("\n Even position array elements");
//        for(i=0;i<10;i++)
//        {
//            if(i%2==0)
//            {
//                printf(" %5d",x[i]);
//            }
//        }
//        // for odd position
//        printf("\n odd position array elements");
//        for(i=0;i<10;i++)
//        {
//            if(i%2!=0)
//            {
//                printf(" %5d",x[i]);
//            }
//        }
//        return 0;
//    }
//
/////18 WAP TO SEPARATE POSITIVE AND NEGATIVE NUMBERS FROM ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter 10 numbers");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted Numbers are");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // postive numbers array
//        printf("\n Positive Numbers are :");
//        for(i=0;i<10;i++)
//        {
//            if(x[i]>0)
//            {
//                printf("%5d",x[i]);
//            }
//        }
//        // negative numbers are
//         printf("\n Negative Numbers are :");
//        for(i=0;i<10;i++)
//        {
//            if(x[i]<0)
//            {
//                printf("%5d",x[i]);
//            }
//        }
//        return 0;
//    }
//
///// 19 WAP PRINT LEAST OCCURING NUMBER IN AN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,cnt=0,lcrno,lcrcnt=5,no,j;
//        printf("\n Enter 5 Numbers");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted Numbers are :");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //
//        for(i=0;i<5;i++)
//        {
//            if(x[i]!=-1)
//            {
//                cnt=0;
//                no=x[i];
//                for(j=0;j<5;j++)
//                {
//                    if(x[j]==no)
//                    {
//                        x[j]=-1;
//                        cnt++;
//                    }
//                }
//                printf("\n %d is repeated %d times",no,cnt);
//                if(cnt<lcrcnt)
//                {
//                    lcrcnt=cnt;
//                    lcrno=no;
//                }
//            }
//        }
//        printf("\n least occuring number is %d is repested %d times",lcrno,lcrcnt);
//        return 0;
//    }


/////20. WAP TO INSERT ELEMENT IN A SPECIFIED POSITION
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//    int x[MAX],i,n,no,pos;
//
//    printf("\n Enter element count: ");
//    scanf("%d",&n);
//    if(n>MAX)
//    {
//        printf("\n Insufficient Memory...!!");
//        return 0;
//    }
//    printf("\n Enter the %d nos: ",n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n Enter the number that you want to insert: ");
//    scanf("%d",&no);
//
//    printf("\n Enter the position where you want to insert that number: ");
//    scanf("%d",&pos);
//    if(!(pos>=0&&pos<=n))
//    {
//        printf("\n Improper Position: ");
//        return 0;
//    }
//    // shifting
//    for(i=n;i>pos;i--)
//    {
//        x[i]=x[i-1];
//    }
//    x[i]=no;
//    n++;
//    printf("\n Elements after insert operation: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}

///// 21 WAP TO DELETE ELEMENT FROM SPECIFIC POSITION
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],i,pos,n,cnt;
//        printf("\n Enter the nth term");
//        scanf("%d",&n);
//        printf("\n Enter the elements");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted elements are");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //process for deletion position
//        printf("\n Enter the position you want to delete");
//        scanf("%d",&pos);
//        cnt=n;
//        for(i=pos;i<cnt;i++)
//        {
//            x[i-1]=x[i];
//        }
//        cnt--;
//        printf("\n New Array is ");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }

///// 22 WAP TO PRINT ALL NEGATIVE ELEMENTS IN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted numbers are :");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // displat negative number
//        printf("\n Negative numbers are");
//        for(i=0;i<10;i++)
//        {
//            if(x[i]<0)
//            {
//                printf("%5d",x[i]);
//            }
//        }
//        return 0;
//}
//
//
///// 23 WAP TO FIND LARGEST AND SMALLEST NUMBER AND THEIR POSITION
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,large,small,lp,sp;
//        printf("\n Enter numbers");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted numbers are :");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // process
//        large=small=x[0];
//        lp=sp=0;
//        for(i=0;i<5;i++)
//        {
//           if(x[i]>large)
//           {
//               large=x[i];
//               lp=i;
//           }
//           else if(x[i]<small)
//           {
//               small=x[i];
//               sp=i;
//           }
//
//        }
//        printf("\n large number is %d and their position is %d",large,lp);
//        printf("\n Small Number is %d and their position is %d",small,sp);
//        return 0;
//    }
//
///// 24 WAP TO INPUT AND PRINT N ELEMENTS IN array
//#include<stdio.h>
//    int main()
//    {
//        int n;
//        printf("\n Enter Nth term");
//        scanf("%d",&n);
//        int x[n],i;
//        printf("\n Enter elements");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Elements are upto n term ");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//
///// 25 WAP TO COUNT TOTAL NUMBER OF NEGATIVE NUMBERS
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,cnt=0;
//        printf("\n Enter 10 integers");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted integers are");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        for(i=0;i<10;i++)
//        {
//            if(x[i]<0)
//            {
//                cnt++;
//            }
//        }
//        printf("\n Count of negative integers: %d",cnt);
//        return 0;
//    }
//
//// 26 WAP TO COUNT FREQUENCY OF EACH ELEMENT IN AN array
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,j,no,cnt;
//        printf("\n Enter Elements");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted elements are");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            if(x[i]!=-1)
//            {
//               cnt=0;
//                no=x[i];
//                for(j=0;j<5;j++)
//                {
//                    if(x[j]==no)
//                    {
//                        x[j]=-1;
//                        cnt++;
//                    }
//                }
//                printf("\n  frequency of %d is %d",no,cnt);
//            }
//
//        }
//        return 0;
//    }

/// ****************** ANOTHER PROBLEMS
///// 1.WAP TO FIND PAIR WITH GIVEN SUM IN THE ARRAY
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],i,sum=0,j,n,cnt;
//        printf("\n Enter n th term");
//        scanf("%d",&n);
//        printf("\n Enter Elements");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Entered Elements are ");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // sum
//        printf("\n Enter the sum");
//        scanf("%d",&sum);
//        for(i=0;i<n-1;i++)
//        {
//            for(j=i+1;j<n;j++)
//            {
//                if(x[i]+x[j]==sum)
//                {
//
//                    printf("\n The pair for the given sum from array is %d and %d",x[i],x[j]);
//                    cnt++;
//
//                }
//            }
//
//        }
//        printf("\n %d",cnt);
//        return 0;
//    }

/////2. WAP TO PRINT ALL UNIQUE ELEMENTS IN AN ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,cnt=0,uniqueno,no,j;
//        printf("\n Enter 5 Numbers");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted Numbers are :");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //
//        for(i=0;i<5;i++)
//        {
//            if(x[i]!=-1)
//            {
//                cnt=0;
//                no=x[i];
//                for(j=0;j<5;j++)
//                {
//                    if(x[j]==no)
//                    {
//                        x[j]=-1;
//                        cnt++;
//                    }
//                }
//                if(cnt==1)
//                {
//
//                    uniqueno=no;
//                }
//            }
//        }
//        printf("\n Unique numbers is %d",uniqueno);
//        return 0;
//    }
//
/////3. WAP TO MERGE 2 ARRAYS OF SAME SIZE
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        int x[5],y[5],z[10];
//        printf("\n Enter Elements in x array");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//         printf("\n Enter Elements in y array");
//         for(j=4;j>=0;j--)
//         {
//             scanf("%d",&y[j]);
//         }
//         printf("\n Merged array");
//         for(i=0,j=4;i<=j;i++,j--)
//         {
//             z[i]=x[i],y[j];
//             printf("%5d",z[i]);
//         }
//         return 0;
//
//    }
//
/////4. WAP TO SEPARATE ODD AND EVEN INTEGERS INTO  SEPARATE ARRAYS
//
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],i,y[MAX],z[MAX],n;
//        printf("\n Enter n th term");
//        scanf("%d",&n);
//        printf("\n Enter Elements in x");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Even elements are:");
//        for(i=0;i<n;i++)
//        {
//            if(x[i]%2==0)
//            {
//                y[i]=x[i];
//                printf("%5d",y[i]);
//            }
//        }
//        printf("\n Odd Elements are:");
//        for(i=0;i<n;i++)
//        {
//            if(x[i]%2!=0)
//            {
//                z[i]=x[i];
//                printf("%5d",z[i]);
//            }
//        }
//        return 0;
//    }
//
//// 5. WAP FIND DIFFERENCE PAIR
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],i,difference=0,j,n;
//        printf("\n Enter n th term");
//        scanf("%d",&n);
//        printf("\n Enter Elements");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Entered Elements are ");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // sum
//        printf("\n Enter the difference");
//        scanf("%d",&difference);
//        for(i=0;i<n-1;i++)
//        {
//            for(j=i+1;j<n;j++)
//            {
//                if(x[j]-x[i]==difference)
//                {
//
//                    printf("\n The pair for the given Difference from array is %d and %d",x[i],x[j]);
//
//                }
//            }
//
//        }
//        return 0;
//    }
//
//
///// 6. WAP TO MOVE ALL ZEROS TO THE END OF ARRAY
/////   2 5 7 0 4 0 7 -5 8 0
///// THE OUTPUT IS 2 5 7 8 4 -5 7 0 0 0
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,tmp, nonzero=0;
//        printf("\n Enter the elements ");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Entered Elements are ");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //nonzero = 0;
//        printf("\n After shifting");
//        for(i=0;i<10;i++)
//        {
//            if(x[i]!=0)
//            {
//                tmp = x[i];
//                x[i] = x[nonzero];
//                x[nonzero]=tmp;
//                nonzero++;
//            }
//        }
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//
//        return 0;
//    }
//
///// 7.WAP TO CHECK IT IS SUBSET OF FIRST ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[9],y[5],i,j,flg;
//        printf("\n Enter the first array");
//        for(i=0;i<9;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Enter the second array");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&y[i]);
//        }
//        for(j=0;j<5;j++)
//
//        {
//            flg=0;
//            for(i=0;i<9;i++)
//            {
//                if(y[j]==x[i])
//                {
//                    flg=1;
//                    break;
//                }
//            }
//        }
//        if(flg==1)
//        {
//            printf("\n Second array is subset of first");
//        }
//        else
//        {
//            printf("\n Second array is not subset of first");
//
//        }
//        return 0;
//    }

/////8. WAP TO FIND UNION OF TWO ARRAY
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],y[MAX],z[MAX],i,j,k,n1,n2,n3;
//        printf("\n Enter the size of x");
//        scanf("%d",&n1);
//        printf("\n Enter the elements in x array");
//        for(i=0;i<n1;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Enter the size of y");
//        scanf("%d",&n2);
//        printf("\n Enter the elements in y array");
//        for(j=0;j<n2;j++)
//        {
//            scanf("%d",&y[j]);
//        }
//        printf("\n Inserted elements in x array:");
//        for(i=0;i<n1;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n Inserted elements in y array:");
//        for(j=0;j<n2;j++)
//        {
//            printf("%5d",y[j]);
//        }
//        n3=n1+n2;
//        printf("\n Merged array:");
//
//        for(k=i;k<i+;k++)
//        {
//            printf("%5d",z[k]);
//        }
//
//        return 0;
//    }
//
///// 9. WAP TO REMOVE DUPLICATE ELEMENTS FROM ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,j,k,cnt=0;
//        printf("\n Enter elements:");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted Elements are:");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            for(j=i+1;j<5;j++)
//            {
//                if(x[i]==x[j])
//                {
//                    x[j]=x[j+1];
//                }
//            }
//            cnt++;
//        }
//        cnt--;
//        printf("\n Elements after removing duplicates :");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }

/// ************************** 2D ARRAY ***********************************
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        int x[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<4;j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// -----WAP TO ADDITION OF ROWS OF TWO ARRAYS
//#include<stdio.h>
//    int main()
//    {
//        int i,j,x[3][3],sum=0;
//        printf("\n Enter RxW Elements");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        //
//        for(i=0;i<3;i++)
//        {
//            sum=0;
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",x[i][j]);
//                sum=sum +x[i][j];
//            }
//            printf("  =>%5d\n",sum);
//           // printf("\n");
//        }
//        return 0;
//    }
//
//
///// WAP TO STORE THE RUNS SCORED BY 3 PLAYER IN 5 MATCHES AND DISPLAY ALL RUN WITH TOTAL OF EACH PLAYER
//#include<stdio.h>
//    int main()
//    {
//        int i,j,x[3][5],score=0;
//        printf("\n Enter 3 Players score in 5 Matches");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Enter the score of player %d",i+1);
//            for(j=0;j<5;j++)
//            {
//                printf("\n %d match score of player %d",j+1,i+1);
//                scanf("%d",&x[i][j]);
//            }
//        }
//        // process
//        for(i=0;i<3;i++)
//        {
//            printf("\n Score of player %d",i+1);
//            score=0;
//            for(j=0;j<5;j++)
//            {
//                printf("\n %d match score of player %d",j+1,i+1);
//                score=score+x[i][j];
//                printf("%5d",x[i][j]);
//            }
//            printf(" => %5d \n",score);
//        }
//        return 0;
//    }
//
//
///// WAP TO ADD TWO ARRAYS
//#include<stdio.h>
//    int main()
//    {
//        int x[3][3],y[3][3],z[3][3];
//        int i,j;
//        printf("\n Enter first array of 3x3");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Enter Second array of 3x3");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&y[i][j]);
//            }
//        }
//        // addition
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                z[i][j]=x[i][j]+y[i][j];
//            }
//        }
//        //display
//        printf("\n Array 1 \n");
//        for(i=0; i<3; i++)
//        {
//            for(j=0; j<3; j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//        printf("\n");
//        }
//        printf("\n Array 2 \n");
//        for(i=0; i<3; i++)
//        {
//            for(j=0; j<3; j++)
//            {
//                printf("%5d",y[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n Array 3 \n");
//        for(i=0; i<3; i++)
//        {
//            for(j=0; j<3; j++)
//            {
//                printf("%5d",z[i][j]);
//            }
//            printf("\n");
//        }
//    return 0;
//    }
//
///// WAP TO ADD MULTIPLICATION ARRAYS
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k;
//        int x[3][3],y[3][3],z[3][3];
//        printf("\n Enter first array of 3x3");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Enter Second array of 3x3");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&y[i][j]);
//            }
//        }
//        //multiplication
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                 z[i][j]=0;
//                for(k=0;k<3;k++)
//                {
//                    z[i][j]= z[i][j]+(x[i][k]*y[k][j]);
//                }
//            }
//        }
//        //display
//        for(i=0;i<3;i++)
//        {
//         for(j=0;j<3;j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//                printf("\t\t");
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",y[i][j]);
//            }
//            printf("\t\t");
//            for(j=0;j<3;j++)
//            {
//            printf("%5d",z[i][j]);
//            }
//            printf("\n");
//         }
//         return 0;
//
//    }
//
///// WAP TO TRANSPOSE OF TWO ARRAYS
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        int x[3][3],y[3][3];
//        printf("\n Enter 3x3 elements");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        // transpose
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                y[i][j] = x[j][i];
//            }
//        }
//        //display
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",y[i][j]);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
//// 1.WAP TO ENTER ROWS AND COLS BY USER
//#include<stdio.h>
//    int main()
//    {
//        int i,j,r,c;
//        int x[i][j];
//        printf("\n Enter the rows");
//        scanf("%d",&r);
//        printf("\n Enter the cols");
//        scanf("%d",&c);
//        printf("\n Enter the elements");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//   //     printf("\n Matrix is:");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 2.C Program to Read a Matrix and find Sum and Product of all elements
//This program will read a matrix and prints sum and product of all
//elements of the two dimensional array.
//Input : Enter number of Rows :3
// Enter number of Cols :3
//Output:Matrix is :
//1 1 1
//2 2 2
//3 3 3
//Sum :18
//Product: 216
//#include<stdio.h>
//    int main()
//    {
//        int i,j,sum=0,product=1,r,c;
//        int x[i][j];
//        printf("\n Enter the number of rows");
//        scanf("%d",&r);
//        printf("\n Enter the number of cols");
//        scanf("%d",&c);
//        printf("\n Enter matrix");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        //sum of total
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                sum = sum + x[i][j];
//            }
//        }
//        // product of total elements in matrix
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                product = product * x[i][j];
//            }
//        }
//        printf("\n Sum is %d",sum);
//        printf("\n Product is %d",product);
//        return 0;
//    }
//
///// 3.C Program to find Sum of all elements of each row of a matrix
///This C program will read a Matrix (two dimensional arrays) and print the
///sum of all elements of each row.
//#include<stdio.h>
//    int main()
//    {
//        int i,j,r,c,sum;
//        int x[i][j];
//        printf("\n Enter the number of rows");
//        scanf("%d",&r);
//        printf("\n Enter the number of cols");
//        scanf("%d",&c);
//        printf("\n Enter a elements of matrix");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        //sum of each row
//        for(i=0;i<r;i++)
//        {
//            sum=0;
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",x[i][j]);
//                sum = sum + x[i][j];
//            }
//            printf("  ==> %5d\n",sum);
//        }
//        return 0;
//    }
//
//
///
//#include<stdio.h>
//#define MAXROW 100
//#define MAXCOL 100
//    int main()
//    {
//        int i,j,r,c;
//        int x[MAXROW][MAXCOL],y[MAXROW][MAXCOL];
//        printf("\n Enter the number of rows");
//        scanf("%d",&r);
//        printf("\n Enter the number of cols");
//        scanf("%d",&c);
//        printf("\n Enter elements of matrix");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Entered elements of matrix \n");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//            printf("\n");
//        }
//        // transpose
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                y[i][j] = x[j][i];
//            }
//        }
//        printf("\n");
//        //display
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",y[i][j]);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 5. WAP TO PRINT DIAGONALS OF MATRIX
//#include<stdio.h>
//#define MAXROW 100
//#define MAXCOL 100
//    int main()
//    {
//        int i,j,r,c;
//        int x[MAXROW][MAXCOL],Y[MAXROW][MAXCOL];
//        printf("\n Enter number of rows");
//        scanf("%d",&r);
//        printf("\n Enter number of cols");
//        scanf("%d",&c);
//        printf("\n Enter the elements of matrix");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        //process
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                if(i==j)
//                {
//                    printf("%5d",x[i][j]);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 6.C Program to find sum and subtraction of two matrices
///This C program will read two matrices and find their sum (addition) and
///subtraction, in addition matrix addition of both matrixes’ elements will ///be assigned and in the subtraction matrix, subtraction of both matrixes’
///elements will be assigned.
//#include<stdio.h>
//#define MAXROW 100
//#define MAXCOL 100
//    int main()
//    {
//        int i,j,r,c;
//        int x[MAXROW][MAXCOL],y[MAXROW][MAXCOL],z[MAXROW][MAXCOL];
//        printf("\n Enter number of rows");
//        scanf("%d",&r);
//        printf("\n Enter the number of cols");
//        scanf("%d",&c);
//        printf("\n Enter  elements of  1 matrix");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Enter  elements of  2 matrix ");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&y[i][j]);
//            }
//        }
//        //sum
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                z[i][j]=x[i][j]+y[i][j];
//            }
//        }
//        printf("\n Sum is \n");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",z[i][j]);
//            }
//            printf("\n");
//        }
//        // SUBTRACTION
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                z[i][j]=x[i][j]-y[i][j];
//            }
//        }
//        printf("\n Subtraction is \n ");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",z[i][j]);
//            }
//            printf("\n");
//        }
//
//    }
//
//
///// C Program to print lower diagonal of a matrix
///This C program will read a square matrix and print its lower diagonal.
///Output:
///Lower Triangular Matrix
///2 0 0
///4 5 0
///6 7 8
//
//#include<stdio.h>
//#define MAXROW 100
//#define MAXCOL 100
//    int main()
//    {
//        int i,j,r,c;
//        int x[MAXROW][MAXCOL];
//        printf("\n Enter number of rows");
//        scanf("%d",&r);
//        printf("\n Enter number of cols");
//        scanf("%d",&c);
//        printf("\n Enter the elements of matrix");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n");
//        //process
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                if(i>=j)
//                {
//                    printf("%d",x[i][j]);
//                }
//                else
//                {
//                    printf("0");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// WAP TO CHECK WHETHER TWO MATRIX ARE IDENTICAL OR NOT
//#include<stdio.h>
//#define MAXROW 100
//#define MAXCOL 100
//    int main()
//    {
//        int i,j,r,c,flg=0;
//        int x[MAXROW][MAXCOL],y[MAXROW][MAXCOL];
//        printf("\n Enter number of rows");
//        scanf("%d",&r);
//        printf("\n Enter number of cols");
//        scanf("%d",&c);
//        printf("\n Enter the elements of matrix 1");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Enter the elements of matrix 2");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                scanf("%d",&y[i][j]);
//            }
//        }
//        printf("\n Entered matrix\n");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n Entered matrix\n");
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                printf("%5d",y[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//
//        //process
//        for(i=0;i<r;i++)
//        {
//            for(j=0;j<c;j++)
//            {
//                if(x[i][j]!=y[i][j])
//                {
//                    flg=1;
//                    break;
//                }
//            }
//
//        }
//        if(flg==0)
//        {
//            printf("\n Two metrices are identical");
//        }
//        else
//        {
//            printf("\n Two metrices are  not identical");
//        }
//        return 0;
//    }
//

///// WAP TO CHECK SPARSE MATRIX
//#include<stdio.h>
//    int main()
//    {
//        int i,j,flg;
//        int x[3][3];
//        printf("\n Enter elements of matrix");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Entered elements of matrix \n");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%d",x[i][j]);
//            }
//            printf("\n");
//        }
//        flg=0;
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                if(x[i][j]!=0)
//                {
//                    flg=1;
//                    break;
//                }
//            }
//        }
//        if(flg==0)
//        {
//            printf("\n Matrix is sparse matrix");
//        }
//        else
//        {
//            printf("\n Matrix is  not sparse matrix");
//        }
//        return 0;
//    }
//

///// WAP TO FIND FREQUENCY IN  MATRIX
//#include<stdio.h>
//    int main()
//    {
//        int x[3][3],i,j,no,cnt,k;
//        printf("\n Enter Elements");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                scanf("%d",&x[i][j]);
//            }
//        }
//        printf("\n Inserted elements are");
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                printf("%5d",x[i][j]);
//            }
//        }
//        for(i=0;i<3;i++)
//        {
//            for(j=0;j<3;j++)
//            {
//                cnt=0;
//            no=x[i][j];
//            for(k=0;k<3;k++)
//            {
//                if(x[k]==no)
//                {
//                    cnt++;
//                }
//            }
//            printf("\n  frequency of %d is %d",no,cnt);
//            }
//
//
//        }
//        return 0;
//    }

///********************* CHARACTER 2D ARRAY
/////**************2D CHARACTER ARRAY **************
//#include<stdio.h>
//    int main()
//    {
//        char str[4][50]={"Vishwajeet","Swapnil","om","Bablu"};
//        int i;
//        printf("\n List of elements are :\n");
//        for(i=0;i<4;i++)
//        {
//            puts(str[i]);
//        }
//        return 0;
//    }
//
/// INIT AND DISPLAY 2D ARRY
//#include<stdio.h>
//    int main()
//    {
//        char str[4][50];
//        int i;
//        printf("\n Enter the name of 4 friends");
//        for(i=0;i<4;i++)
//        {
//            gets(str[i]);
//        }
//        printf("\n Name of 4 friends are below:\n");
//        for(i=0;i<4;i++)
//        {
//            puts(str[i]);
//        }
//        return 0;
//    }
//
//
/// WAP TO SEARCH NAME IN A LIST
//#include<stdio.h>
//    int main()
//    {
//        int i,j,flg,len1,len2;
//        char names[7][50], nm[50];
//        printf("\n Enter names of 7 friends");
//        for(i=0;i<7;i++)
//        {
//            gets(names[i]);
//        }
//        printf("\n Enter the name to be searched");
//        gets(nm);
//
//        printf("\n Name of list:\n");
//        for(i=0;i<7;i++)
//        {
//            puts(names[i]);
//        }
//        printf("\n Name to be searched %s",nm);
//
//        // searchnig
//        for(j=0;nm[j]!='\0';j++);
//        len1=j;
//
//        for(i=0;i<7;i++)
//        {
//            for(j=0;names[i][j]!='\0';j++);
//            len2=j;
//
//            flg=0;
//            if(len1==len2)
//            {
//                for(j=0;j<len2;j++)
//                {
//                    if(names[i][j]!=nm[j])
//                    {
//                        flg=1;
//                        break;
//                    }
//                }
//            }
//            else
//            {
//                flg=1;
//            }
//
//            if(flg==0)
//            {
//                printf("\n %s is present at %d position",nm,i);
//            }
//            else
//            {
//                printf("\n %s is not present",nm);
//            }
//
//        return 0;
//    }

///////WAP to arrange the strings in alphabetical order (sort strings lexicographically)
////
////     Entered strings
////    rina
////    aurn
////    amit
////    rushikesh
////    mukesh
////    ritesh
////
////     lexicographically sorted
////    amit
////    arun
////    mukesh
////    rina
////    ritesh
////    rushikesh

#include<stdio.h>
int main()
{
    int x[5],i,j,rem,a,sum,cnt,tmp;

    printf("\n Enter 5 no");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }



    for(i=0;i<5;i++)
    {

        tmp=x[i];
        cnt=0;
        while(x[i]!=0)
        {
            cnt++;
            x[i]=x[i]/10;
        }

        x[i]=tmp;
        sum=0;
        while(x[i]!=0)
        {
            rem=x[i]%10;
            a=1;
            for(j=1;j<=cnt;j++)
            {
                a=a*rem;
            }
            sum=sum+a;
            x[i]=x[i]/10;
        }
        x[i]=tmp;
        if(sum==x[i])
        {
            printf("\n %d is armstrong",x[i]);
        }
    }
    return 0;
}

