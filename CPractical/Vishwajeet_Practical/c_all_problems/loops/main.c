/////-------------------------------***FOR LOOP*** --------------------------------------------
//    #include<stdio.h>
//        int main()
//
//        {
//            int i;
//            for(i =5; i<=50; i = i+5)
//            {
//                printf("\n%d", i);
//            }
//            return 0;
//        }
//
//////----------------------WAP TO DISPLAY DIV 5 IN BETN 1 TO 25--------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        for(int i =1; i<=25; i++)
//        {
//            if(i%5==0)
//            {
//              printf("\n %d",i);
//            }
//
//        }
//        return 0;
//    }
//
//////-------WAP TO DISPLAY ALL EVEN NUMBERS BETN 1 TO 25
//#include<stdio.h>
//    int main()
//    {
//        for(int i=0;i<=25;i=i+2)
//        printf("\n %d",i);
//        return 0;
//    }
//
//////------------------WAP TO DISPLAY SUM OF DIGITS USING FOR LOOP----------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,sum,rem;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for(sum=0;no!=0;no =no/10)
//        {
//            rem = no%10;
//            sum =sum+rem;
//        }
//        printf("\n Sum is %d",sum);
//        return 0;
//    }
//
/////---------------------------------OR Using Only one loop------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,sum=0,rem;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for( ;no!=0; )
//        {
//            rem = no%10;
//            sum =sum+rem;
//            no =no/10;
//        }
//        printf("\n Sum is %d",sum);
//        return 0;
//    }
//
//
//
/////-------------------------WAP ADD 5 NUMBERS ENTERED THROUGH USER--------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i, no,sum = 0;
//        printf("\n Enter Numbers");
//        for(i = 0; i<5; i++)
//        {
//            scanf("%d",&no);
//            sum = sum + no;
//        }
//        printf("\n Sum is %d",sum);
//        return 0;
//    }
/////------------------WAP TO READ N TERMS AND SUM OF ODD NUMBER------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i,no,sum = 0;
//        printf("Enter number for display sum before that number ");
//        scanf("%d",&no);
//        for(i = 1; i<=no; i =i+2)
//        {
//            sum = sum +i;
//        }
//        printf("\n Sum of odd number is %d",sum);
//        return 0;
//    }
//
/////----------------------WAP ADD 10 NUMBERS FROM ISER AND FIND SUM AND AVG---------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i,no,sum =0;
//        float avg;
//        printf("Enter ten numbers");
//        for(i = 1; i<=10; i++)
//        {
//            scanf("%d",&no);
//            sum = sum + no;
//
//        }
//        printf("\n Sum is %d",sum);
//        avg = sum / 10;
//        printf("\n Average is %f",avg);
//        return 0;
//    }
//
/////-------------------WAP TO ENTER PRICE OF 5 ITEMS CAL TOTAL DIS 5% IF AMT >1000 OTHERWISE 7%---------
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        float total=0, dis, payamt, amt;
//        printf("\n Enter Amount of 5 items");
//        for(i = 1; i<=5; i++)
//        {
//            scanf("%f",&amt);
//            total = total + amt;
//        }
//        (total > 1000)?(dis = total * 0.07):(dis = total * 0.05);
//        payamt = total - dis;
//        printf("\n Total is %f \t dis:%f \t payamt:%f",total,dis,payamt);
//        return 0;
//    }
//
/////----------------WAP TO CNT DIGITS FROM NUMBER-------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no, cnt =0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            cnt++;
//            no = no / 10;
//        }
//        printf("\n Count of digits in %d",cnt);
//        return 0;
//    }
//
//
/////---------------------WAP TO DISPLAY REVERSE NUMBERS-----------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//       int no,rev=0,rem;
//       printf("\n Enter any Number");
//       scanf("%d",&no);
//
//       while(no!=0)
//       {
//           rem = no % 10;
//           rev = rev *10 + rem;
//           no = no /10;
//       }
//       printf("\n Reverse Number is %d",rev);
//       return 0;
//    }
//
/////------------------WAP TO CHECK PALINDROME OR NOT------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,rev=0,tmp;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp = no;
//        while(no!=0)
//        {
//            rem = no% 10;
//            rev = rev * 10 + rem;
//            no =no / 10;
//        }
//        no =tmp;
//        if(no == rev)
//        {
//            printf("\n %d is palindrome",no);
//        }
//        else
//        {
//            printf("\n %d is not palindrome",no);
//        }
//        return 0;
//
//    }
//
/////-----------------------WAP TO ENTER NO AND CAL FACTORIAL-----------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i,no,fact=1;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        i=1;
//        while(i<=no)
//        {
//            fact = fact * i;
//            i++;
//        }
//        printf("\n Factorial of %d is",fact);
//        return 0;
//    }
//
/////---------------------WAP TO FIND SUM OF EVEN NO UPTO 50-----------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i,evensum = 0, oddsum = 0;
//        i = 1;
//        while(i <= 50)
//        {
//            if(i % 2 == 0)
//            {
//                evensum = evensum + i;
//            }
//            else
//            {
//                oddsum = oddsum + i;
//            }
//            i++;
//        }
//        printf("\n Sum of  EVEN  FROM O TO 50 IS %d \n Sum of  ODD  FROM O TO 50 IS %d ",evensum,oddsum);
//        return 0;
//    }
//
/////----------------------WAP TABLE OF NUMBER----------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,i,n;
//        printf("\n Enter any number");
//        scanf("%d",&no,&i);
//        i=1;
//        while(i<=10)
//        {
//            n=no*i;
//            printf("\n %d*%d = %d  ",no,i,n);
//            i++;
//        }
//        return 0;
//
//    }
//
//
/////----------------------WAP TO DISPLAY FIRST AND LAST DIGIT OF ENTERD NUMBER------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,rev = 0,ld,fd,sum = 0;
//        printf("\n Enter any Number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            rev = rev * 10 + rem;
//            if(rem == rev)
//            {
//                ld = rem;
//            }
//            no = no / 10;
//            if(no == 0)
//            {
//                fd = rem;
//            }
//            sum = ld + fd;
//        }
//        printf("\n Last digit is: %d \n first digit is: %d \n sum is: %d",ld,fd,sum);
//        return 0;
//    }
//
/////---------------------------WAP TO DISPLAY MUL OF 1 TO 10 NUMBERS----------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i,mul=1;
//        i = 1;
//        while(i<=10)
//        {
//            mul = mul * i;
//            i++;
//        }
//        printf("\n Multiplication of 1 to 10 numbers %d",mul);
//    }
//
/////-------------------WAP TO DISPLAY PRODUCT OF DIGIT OF NUMBER-----------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,product=1,rem;
//        printf("\n Enter any nunber");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            product = product * rem;
//            no = no / 10;
//        }
//        printf("\n Product of digits of given number is %d",product);
//        return 0;
//    }
//
/////----------------------WAP FACTORS OF GIVEN NUMBER-----------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no, i;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for(i=1;i<=no;i++)
//        {
//            if(no%i == 0)
//            {
//                printf("\n %d",i);
//            }
//        }
//        return 0;
//    }
//
/////----------------WAP DISPLAY POWER OF NUMBER---------------------------------------------------
//  #include<stdio.h>
//        int main()
//        {
//            int x, y, power=1,i;
//            printf("\n Enter base and exponent of number");
//            scanf("%d %d",&x,&y);
//            for(i=0;i<y;i++)
//            {
//                power = power*x;
//
//            }
//            printf("power is %d",power);
//            return 0;
//
//        }
//
/////-------------------------WAP TO CONVERT LOWERCASE TO UPPERCASE---------------------------------
//#include<stdio.h>
//    int main()
//    {
//        char ch;
//        printf("\n Enter any character");
//        scanf(" %c",&ch);
//        ch = ch - 32;
//        printf("\n Uppercase character is %c",ch);
//        return 0;
//    }
//
/////------------------------******DO-WHILE*******--------------------------------------------------------
//
/////-------WAP TO DISPLAY MULTIPLICATION
//#include<stdio.h>
//    int main()
//    {
//        int i,multiplication= 1;
//        i=1;
//        do
//        {
//            multiplication = multiplication * i;
//            i++;
//        }while(i<=10);
//        printf("\n Multiplication of 1 to 10 number is %d",multiplication);
//        return 0;
//    }
//
/////-----------------WAP TO FIND MAX DIGITS FROM NUMBER------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,max=0,rem;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        do
//        {
//            rem = no % 10;
//            if(rem>max)
//            {
//                max = rem;
//            }
//            no = no / 10;
//        }while(no!=0);
//        printf("\n Max is %d",max);
//        return 0;
//    }
//
/////------------WAP TO FIND MIN DIGIT-----------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,min=9,rem;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        do
//        {
//            rem = no % 10;
//            if(rem<min)
//            {
//                min = rem;
//            }
//            no = no / 10;
//        }while(no!=0);
//        printf("\n Min is %d",min);
//        return 0;
//    }
//
/////-----------------------------WAP TO FIND EVEN MAX-----------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,evenmax=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        do
//        {
//            rem = no%10;
//            if(rem>evenmax)
//            {
//                if(rem % 2 == 0)
//                {
//                    evenmax= rem;
//                }
//            }
//            no = no / 10;
//        }while(no!=0);
//        printf("\n Evenmax is %d",evenmax);
//        return 0;
//    }
//
/////------------------WAP TO CHECK NO IS PERFECT OR NOT------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,i,sum = 0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for(i=1;i<=no/2;i++)
//        {
//            if(no % i == 0)
//            {
//                sum = sum + i;
//            }
//        }
//        if(sum == no)
//        {
//            printf("\n %d is perfect",no);
//        }
//        else
//        {
//            printf("\n %d is not perfect",no);
//        }
//        return 0;
//    }
//
/////---------------------WAP TO CHECK NO IS STRONG OR NOT-------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i, no,rem,fact = 1,sum = 0,tmp;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp = no;
//        while(no!=0)
//        {
//            rem = no % 10;
//            fact = 1;
//            for(i=1;i<=rem;i++)
//            {
//                fact = fact * i;
//            }
//            sum = sum + fact;
//            no = no / 10;
//        }
//        no = tmp;
//        if(sum == no)
//        {
//            printf("\n %d is strong",no);
//        }
//        else
//        {
//            printf("\n %d is not strong",no);
//        }
//        return 0;
//    }
//
/////------TO CHECK NO IS ARMSTRONG OR NOT--------------------------------------------------
//
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,tmp,sum = 0,a,i,dc=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp = no;
//        while(no!=0)
//        {
//            dc++;
//            no=no/10;
//        }
//        no = tmp;
//        printf("\n %d dc: ",dc);
//        no=tmp;
//        while(no!=0)
//        {
//            rem = no%10;
//            a=1;
//            for(i=1;i<=dc;i++)
//            {
//                a=a*rem;
//            }
//            sum = sum+a;
//            no = no/10;
//        }
//        no=tmp;
//        if(no==sum)
//        {
//            printf("%d is armstrong number",no);
//        }
//        else
//        {
//            printf("%d is not armstrong number",no);
//        }
//        return 0;
//    }
//
//// ----------------TO FIND PRIME NUMBERS BETN 1 TO 100-------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int i,d=2,flg=0;
//        printf("\n Prime numbers ");
//
//        for(i=1;i<=100;i++)
//        {
//            flg=0;
//            d=2;
//            while(d<=i/2)
//            {
//                if(i%d == 0)
//                {
//                    flg=1;
//                    break;
//                }
//            d++;
//
//            }
//
//            if(flg==0 &&i!=1)
//            {
//                printf("\n %d",i);
//            }
//        }
//        return 0;
//    }
//

////------------------WAP TO FIND STRONG NUMBER BETN 1 TO 100-----------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no,sum=0,fact =1,rem,tmp,i;
//        printf("\n Strong Numbers from 1 to 100");
//        for(no=1;no<=100;no++)
//    {
//        tmp = no;
//        sum =0;
//        while(no!=0)
//        {
//            rem = no % 10;
//            fact=1;
//            for(i=1;i<=rem;i++)
//            {
//                fact = fact * i;
//            }
//            no = no /10;
//            sum = sum + fact;
//        }
//        no = tmp;
//        if(sum == no)
//        {
//            printf("\n %d",no);
//        }
//    }
//        return 0;
//    }
//
/////-------------------WAP TO FIND HCF OF TWO NUMBERS------------------------------------------------

//#include<stdio.h>
//    int main()
//    {
//        int x,y,i,max=0,hcf;
//        printf("\n Enter the value of x and y");
//        scanf("%d %d",&x,&y);
//        max = x>y?x:y;
//        for(i=2;i<(max/2);i++)
//        {
//            if(x%i==0 && y%i==0)
//            {
//                hcf=i;
//            }
//        }
//        printf("\n HCF is %d",hcf);
//        return 0;
//    }
//

/////*************LIST*********************************************
//01-----------------WAP TO print all natural numbers from 1 to n
//#include<stdio.h>
//    int main()
//    {
//        int i,n;
//        printf("\n Print all natural numbers");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            printf("\n %d",i);
//        }
//        return 0;
//    }
//
/////02 ----------------WAP TO PRINT ALL NATURAL NUMBERS IN REVERSE FORMAT
//#include<stdio.h>
//    int main()
//    {
//        int no,i;
//        printf("Enter Number");
//        scanf("%d",&no);
//        for(i=no;i>=1;i--)
//        {
//            printf("\n %d",i);
//        }
//        return 0;
//    }
//
/////03 --------------WAP TO PRINT ALL ALPHABETS FROM A TO Z
//#include<stdio.h>
//    int main()
//    {
//        char ch;
//        for(ch='a';ch<='z';ch++)
//        {
//            printf("\n %c",ch);
//        }
//        return 0;
//    }
//
/////04 -----------WAP TO PRINT ALL EVEN NUMBERS FROM 1 TO 100
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        for(i=1;i<=100;i++)
//        {
//            if(i%2 == 0)
//            {
//                printf("\n %d",i);
//            }
//        }
//        return 0;
//    }
//
//
/////05 ---------------WAP TO DISPLAY ODD NUMBERS
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        for(i=1;i<=100;i++)
//        {
//            if(i%2 != 0)
//            {
//                printf("\n %d",i);
//            }
//        }
//        return 0;
//    }
//
/////06 -----------------WAP TO FIND SUM OF ALL EVEN NUMBERS FROM 1 TO N
//#include<stdio.h>
//    int main()
//    {
//        int n,i,sum=0;
//        printf("\n Enter n term");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            if(i%2 == 0)
//            {
//                printf("\n %d",i);
//                sum = sum + i;
//            }
//        }
//        printf(" sum of even numbers is %d",sum);
//        return 0;
//    }

/////7.Write a C program to find the sum of all even numbers between 1 to n.


//#include<stdio.h>
//    int main()
//    {
//        int n,i,sum=0;
//        printf("\n Enter n th term ");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            if(i%2==0)
//            {
//                printf("\n %d",i);
//                sum = sum + i;
//            }
//        }
//        printf("\n Sum is %d",sum);
//        return 0;
//    }
//
/////08----------------WAP TO FIND SUM OF ALL ODD UNMUBERS IN FROM 1 TO N
//#include<stdio.h>
//    int main()
//    {
//        int n,i,sum=0;
//        printf("\n Enter n th term ");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            if(i%2!=0)
//            {
//                printf("\n %d",i);
//                sum = sum + i;
//            }
//        }
//        printf("\n Sum is %d",sum);
//        return 0;
//    }
//
/////09 --------------WAP MULTIPLICATION TABLE OF ANY NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,i,mul=1;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for(i=1;i<=10;i++)
//        {
//            mul = no * i;
//            printf("\n %d",mul);
//        }
//        return 0;
//    }
//
/////10 ---------------WAP TO COUNT DIGITS IN NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,cnt=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            cnt++;
//            no = no / 10;
//        }
//        printf("\n count digits of number %d",cnt);
//        return 0;
//    }
//
/////11  ------------WAP FIND FIRST AND LAST DIGITS OF N UMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,fd,ld,rem,rev=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            rev =rev * 10 + rem;
//            if(rem == rev)
//            {
//                ld = rem;
//            }
//            no = no / 10;
//            if(no == 0)
//            {
//                fd = rem;
//            }
//        }
//        printf("\n %d %d",ld,fd);
//        return 0;
//    }


/////12.Write a C program to find the sum of all even numbers between 1 to n.

//#include<stdio.h>
//    int main()
//    {
//        int no,fd,ld,rem,rev=0,sum=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            rev =rev * 10 + rem;
//            if(rem == rev)
//            {
//                ld = rem;
//            }
//            no = no / 10;
//            if(no == 0)
//            {
//                fd = rem;
//            }
//        }
//        sum=fd+ld;
//        printf("\n sum %d",sum);
//        return 0;
//    }
//
/////13-------------WAP TO SWAP FIRST AND LAST DIGITS OF NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,rev=0,fd,ld,tmp;
//        printf("Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            rev =rev * 10 + rem;
//            if(rem == rev)
//            {
//                ld = rem;
//            }
//            no = no / 10;
//            if(no == 0)
//            {
//                fd = rem;
//            }
//        }
//        printf("\n first digit and last digit before swaping is %d %d",fd,ld);
//        tmp = fd;
//        fd = ld;
//        ld = tmp;
//        printf("\n first digit and last digit After  swaping is %d %d",fd,ld);
//
//        return 0;
//    }
//
/////14 ---------------WAP CALCULATE SUM OF DIGITS OF NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,sum =0,rem;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            sum = sum + rem;
//            no = no / 10;
//        }
//        printf("\n Sum of digits of number is %d",sum);
//        return 0;
//    }
//
/////15  ------------------WAP TO CALCULATE PRODUCTS OF DIGITS OF NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,product=1;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            product = product * rem;
//            no = no / 10;
//        }
//        printf("\n Product of digits of number is %d",product);
//        return 0;
//    }
//
/////16 -------------WAP TO ENTER NUMBER AND PRINT IT IN reverse
//#include<stdio.h>
//    int main()
//    {
//        int no,rev=0,rem;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            rev = rev * 10 + rem;
//            no = no / 10;
//        }
//        printf("\n Reverse no is %d",rev);
//        return 0;
//    }
//
/////17 --------------------WAP TO CHECK NO IS PALINDROME OR NOT
//#include<stdio.h>
//    int main()
//    {
//        int no,rev=0,rem,tmp;
//        printf(" Enter any number");
//        scanf("%d",&no);
//        tmp = no;
//        while(no!=0)
//        {
//            rem = no % 10;
//            rev = rev * 10 + rem;
//            no = no / 10;
//        }
//        no = tmp;
//        if(no == rev)
//        {
//            printf("\n %d is palindrome",no);
//        }
//        else
//        {
//            printf("\n %d is not palindrome",no);
//        }
//        return 0;
//    }

/////18.Write a C program to find frequency of each digit in a given integer.

//#include<stdio.h>
//    int main()
//    {
//        int no,rem,i,tmp,cnt=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp =no;
//        for(i=0;i<10;i++)
//        {
//            no=tmp;
//            cnt = 0;
//            while(no!=0)
//            {
//                rem = no % 10;
//                if(rem == i)
//                {
//                    cnt++;
//                }
//                no = no /10;
//            }
//            if(cnt>=1)
//            {
//                printf("\n %d is repeated %d times",i,cnt);
//            }
//        }
//        return 0;
//    }

/////19. Write a C program to enter a number and print it in words.

//#include<stdio.h>
//int main()
//{
//    int a,d,rev=0;
//    printf("\n Enter The Any Value:-> ");
//    scanf("%d",&a);
//
//    while(a>0)
//    {
//        d=a%10;
//        rev=(rev*10)+d;
//        a=a/10;
//    }
//    a=rev;
//    while(a>0)
//    {
//        d=a%10;
//      switch(d)
//        {
//            case 0:
//                printf("zero ");
//                break;
//
//            case 1:
//                printf("one ");
//                break;
//
//
//             case 2:
//                printf("two ");
//                break;
//
//             case 3:
//                printf("three ");
//                break;
//
//
//             case 4:
//                printf("four ");
//                break;
//
//             case 5:
//                printf("five ");
//                break;
//
//             case 6:
//                printf("six ");
//                break;
//
//             case 7:
//                printf("seven ");
//                break;
//
//             case 8:
//                printf("eight ");
//                break;
//
//             case 9:
//                printf("nine ");
//                break;
//
//        }
//        a=a/10;
//    }
//        return 0;
//}

/////20. Write a C program to print all ASCII character with their values.
//#include<stdio.h>
//int main()
//{
//    int i=0;
//    while(i<256)
//    {
//        printf("\n %c = %d",i,i);
//        i++;
//    }
//    return 0;
//}

///// 21. ----------WAP TO FIND POWER USING LOOP
//#include<stdio.h>
//    int main()
//    {
//        int base,pow=1,exponent,i;
//        printf("\n Enter base and exponent");
//        scanf("%d %d",&base,&exponent);
//        for(i=1;i<=exponent;i++)
//        {
//            pow = pow * base;
//        }
//        printf("\n Power is %d",pow);
//        return 0;
//    }
//
/////22 --------------WAP TO FIND ALL FACTORS OF NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,i;
//        printf("Enter any no");
//        scanf("%d",&no);
//        for(i=1;i<=no;i++)
//        {
//            if(no % i== 0)
//            {
//                printf("\n %d",i);
//            }
//        }
//        return 0;
//    }
// ///23 ---------------WAP TO FIND FACTORIAL OF NUMBER
// #include<stdio.h>
//        int main()
//        {
//            int no,fact=1,i;
//            printf("\n Enter any Number");
//            scanf("%d",&no);
//            for(i=1;i<=no;i++)
//            {
//                fact = fact * i;
//            }
//            printf("\n Factorial of %d ",fact);
//            return 0;
//        }
//
/////26- ----------WAP TO CHECK NO. IS PRIME OR NOT
//#include<stdio.h>
//    int main()
//    {
//        int no,d=2,flg=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(d<=no/2)
//        {
//            if(no%d == 0)
//            {
//                flg = 1;
//                break;
//            }
//            d++;
//        }
//        if(flg == 0 &no!=1)
//        {
//            printf("\n %d is prime",no);
//        }
//        else
//        {
//            printf("%d is not prime",no);
//        }
//        return 0;
//    }


/////27. Write a C program to print all Prime numbers between 1 to n.
//
//#include<stdio.h>
//    int main()
//    {
//        int d,flg,n,i;
//        printf("\n Enter  nth term: ");
//        scanf("%d",&n);
//
//        for(i=1;i<=n;i++)
//        {
//            d=2;
//            flg=0;
//            while(d<=i/2)
//            {
//                if(i%d == 0)
//                {
//                    flg = 1;
//                    break;
//                }
//                d++;
//            }
//            if(flg == 0 && i!=1)
//            {
//                printf("%5d",i);
//            }
//        }
//
//        return 0;
//    }

/////28.Write a C program to find sum of all prime numbers between 1 to n.
//
//#include<stdio.h>
//    int main()
//    {
//        int d,flg,n,i,sum=0;
//        printf("\n Enter  nth term: ");
//        scanf("%d",&n);
//
//        for(i=1;i<=n;i++)
//        {
//            d=2;
//            flg=0;
//            while(d<=i/2)
//            {
//                if(i%d == 0)
//                {
//                    flg = 1;
//                    break;
//                }
//                d++;
//            }
//            if(flg == 0 && i!=1)
//            {
//                printf("%5d",i);
//                sum=sum+i;
//            }
//        }
//        printf("\n Sum of all prime numbers: %d",sum);
//
//        return 0;
//    }

/////29.Write a C program to find all prime factors of a number.

//#include<stdio.h>
//    int main()
//    {
//        int no,i;
//        printf("Enter any no");
//        scanf("%d",&no);
//        for(i=1;i<=no;i++)
//        {
//
//            if(no % i== 0)
//            {
//                int flg=0;
//                int d=2;
//                while(d<=i/2)
//                {
//                    if(i%d == 0)
//                    {
//                        flg = 1;
//                        break;
//                    }
//                    d++;
//                }
//                if(flg == 0 && i!=1)
//                {
//                    printf("\n %d",i);
//                }
//
//            }
//        }
//        return 0;
//    }


/////30. ------------WAP TO CHECK NO IS ARMSTRONG OR not
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,dc=0,tmp,a,sum=0,i;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp=no;
//        while(no!=0)
//        {
//            dc++;
//            no =no/10;
//        }
//        printf("\n %d",dc);
//        no = tmp;
//        while(no!=0)
//        {
//            rem = no % 10;
//            a=1;
//            for(i=1;i<=dc;i++)
//            {
//                a = a * rem;
//            }
//            sum = sum + a;
//            no = no / 10;
//        }
//        no=tmp;
//        if(no== sum)
//        {
//            printf("\n %d is armstrong",no);
//        }
//        else
//        {
//            printf("\n %d is not armstrong",no);
//        }
//        return 0;
//    }

/////31.Write a C program to print all Armstrong numbers between 1 to n.

//#include<stdio.h>
//    int main()
//    {
//        int rem,dc,tmp,a,sum,i,j,n;
//        printf("\n Enter nth term");
//        scanf("%d",&n);
//
//        for(i=1;i<=n;i++)
//        {
//            tmp=i;
//            sum=0;
//            dc=0;
//            while(i!=0)
//            {
//                dc++;
//                i =i/10;
//            }
//            i = tmp;
//            while(i!=0)
//            {
//                rem = i % 10;
//                a=1;
//                for(j=1;j<=dc;j++)
//                {
//                    a = a * rem;
//                }
//                sum = sum + a;
//                i = i / 10;
//            }
//            i=tmp;
//            if(i== sum)
//            {
//                printf("%5d",i);
//            }
//
//        }
//
//        return 0;
//    }
//

// ///32. ---------------WAP TO CHECK NUMBER IS PERFECT OR NOT
// #include<stdio.h>
//    int main()
//    {
//        int no,i,sum =0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for(i=1;i<no;i++)
//        {
//            if(no%i == 0)
//            {
//                printf("\n %d",i);
//                sum=sum + i;
//            }
//        }
//        if(sum == no)
//        {
//            printf("\n %d is perfect",no);
//        }
//        else
//        {
//            printf("\n %d is not perfect",no);
//
//        }
//        return 0;
//    }


/////33. Write a C program to print all Perfect numbers between 1 to n.
// #include<stdio.h>
//    int main()
//    {
//        int n,i,sum,j;
//        printf("\n Enter nth term: ");
//        scanf("%d",&n);
//        for(j=1;j<=n;j++)
//        {
//            sum =0;
//            for(i=1;i<j;i++)
//            {
//                if(j%i == 0)
//                {
//                    //printf("\n %d",i);
//                    sum=sum + i;
//                }
//            }
//            if(sum == j)
//            {
//                printf("\n %d",j);
//            }
//        }
//
//        return 0;
//    }


///// 34 --------WAP TO CHECK NO IS STRONG OR NOT
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,fact=1,sum=0,tmp,i;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp = no;
//        while(no!=0)
//        {
//            rem = no % 10;
//            fact = 1;
//            for(i=1;i<=rem;i++)
//            {
//                fact = fact * i;
//            }
//            sum = sum + fact;
//            no = no / 10;
//        }
//        no = tmp;
//        if(no == sum)
//        {
//            printf("\n %d is strong",no);
//        }
//        else
//        {
//            printf("\n %d is not strong",no);
//        }
//        return 0;
//
//    }

/////35. Write a C program to print all Strong numbers between 1 to n.

//#include<stdio.h>
//    int main()
//    {
//        int no,rem,fact,sum,tmp,i,j,n;
//        printf("\n Enter nth term: ");
//        scanf("%d",&n);
//
//        for(j=1;j<=n;j++)
//        {
//            tmp = j;
//            fact=1;
//            sum=0;
//            while(j!=0)
//            {
//                rem = j % 10;
//                fact = 1;
//                for(i=1;i<=rem;i++)
//                {
//                    fact = fact * i;
//                }
//                sum = sum + fact;
//                j = j / 10;
//            }
//            j = tmp;
//            if(j == sum)
//            {
//                printf("\n %d",j);
//            }
//
//        }
//
//        return 0;
//
//    }

/////36. Write a C program to print Fibonacci series up to n terms.
//#include <stdio.h>
//int main()
//{
//    int n1 = 0,n2 = 1,nt,no,i;
//    printf("\n Enter Any Number:- ");
//    scanf("%d",&no);
//
//    printf("%d %d",n1,n2);
//    ///--Loop to generate and print next terms
//    for (i = 2; i <= no; ++i)
//        {
//        nt = n1 + n2;
//        printf(" %d ", nt);
//        n1 = n2;
//        n2 = nt;
//        }
//
//    printf("\n");
//    return 0;
//}

/////37 ----------------WAP TO CHECK NO IS PRIME OR not1
//#include<stdio.h>
//    int main()
//    {
//        int no,d=2,flg=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(d<=no/2)
//        {
//            if(no%2==0)
//            {
//                flg=1;
//                break;
//            }
//            d++;
//        }
//        if(flg == 0)
//        {
//            printf("\n %d is prime",no);
//        }
//        else
//        {
//            printf("\n %d is not prime",no);
//        }
//        return 0;
//    }
//
/////38 ------------WAP TO FIND SUM OF ALTERNATE NUMBERS
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,s1=0,s2=0,i;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        for(i=0;no!=0;i++)
//        {
//            rem = no % 10;
//            if(i%2==0)
//            {
//                s1= s1 + rem;
//            }
//            else
//            {
//                s2= s2+rem;
//            }
//            no = no / 10;
//        }
//        printf("\n s1 %d \t s2 %d",s1,s2);
//        return 0;
//    }
//
/////39 --------------------WAP TO FIND SUM OF ALTERNATE NUMBER USING FLAG
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,s1=0,s2=0,flg=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            if(flg==0)
//            {
//                s1= s1 + rem;
//                flg=1;
//            }
//            else
//            {
//                s2= s2+rem;
//                flg=0;
//            }
//            no = no / 10;
//        }
//        printf("\n s1 %d \t s2 %d",s1,s2);
//        return 0;
//    }
//
/////40 -------------WAP TO FIND OCCURANCE OF 4 AND 7 IN NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no, rem, i, fc= 0, sc =0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        while(no!=0)
//        {
//            rem = no % 10;
//            if(rem == 4)
//            {
//                fc++;
//            }
//            if(rem == 7)
//            {
//                sc++;
//            }
//            no = no / 10;
//        }
//        printf("\n %d times 4 \t %d times 7",fc,sc);
//        return 0;
//    }
//
/////41 ----------WAP TO FIND OCCURANCE OF EVERY DIGITS IN NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,i,tmp,cnt=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp =no;
//        for(i=0;i<10;i++)
//        {
//            no=tmp;
//            cnt = 0;
//            while(no!=0)
//            {
//                rem = no % 10;
//                if(rem == i)
//                {
//                    cnt++;
//                }
//                no = no /10;
//            }
//            if(cnt>=1)
//            {
//                printf("\n %d is repeated %d times",i,cnt);
//            }
//        }
//        return 0;
//    }
//
/////42  ---------------------WAP TO FIND MISSING CHARACTER
//#include<stdio.h>
//    int main()
//    {
//        int no,rem,i,tmp,flg=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp =no;
//        for(i=0;i<10;i++)
//        {
//            no=tmp;
//            while(no!=0)
//            {
//                rem = no % 10;
//                if(rem == i)
//                {
//                    flg=1;
//                    break;
//                }
//                no = no /10;
//                flg=0;
//            }
//
//            if(flg==0)
//            {
//                printf("\n %d missing",i);
//            }
//        }
//        return 0;
//    }

///// 43 WAP TO GENERATE MAX NUMBER FROM DIGITS OF ENTERED NUMBER
//#include<stdio.h>
//    int main()
//    {
//        int i,no,rem,tmp,nm=0;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp=no;
//        for(i=9;i>=0;i--)
//        {
//            no =tmp;
//            while(no!=0)
//            {
//                rem = no % 10;
//                if(rem==i)
//                {
//                    nm = (nm * 10)+ rem;
//                }
//                no = no / 10;
//            }
//        }
//        printf("Maximum number is %d",nm);
//        return 0;
//    }
