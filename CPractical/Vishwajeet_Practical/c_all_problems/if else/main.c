/////*******SIMPLE HELLO WORLD PROGRAM************************************************
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
/////-----------------WAP To Display persional details---------------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        printf("\n ***persional Information***");
//        printf("\n Name: Vishwajeet Pawar \a\a\a");
//        printf("\n Address: F12,\"Divyadarshan\" Society,  Kothrud, pune");
//        printf("\n Age:23yrs \t Weight:68");
//        return 0;
//    }
/////WAP to swap two numbers---------------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x, y, tmp;
//        printf("\n Enter thew value of x and y");
//        scanf("%d%d",&x,&y);
//        printf("\n Before the execution of x is %d and y is%d",x ,y);
//        tmp=x;
//        x=y;
//        y=tmp;
//        printf("\n After interchange the value of x is %d y is %d",x,y);
//        return 0;
//    }
/////WAP Without using third variable-----------------------------------------------------------------
//    #include<stdio.h>
//    int main()
//    {
//        int x,y;
//        printf("\n Enter the value of x and y");
//        scanf("%d%d",&x,&y);
//        x=x+y;
//        y=x-y;
//        x=x-y;
//        printf("\n After interchange the value of x is %d y is %d",x,y);
//        return 0;
//    }
/////WAP To perform Arithmetic operation---------------------------------------------------------------
//    #include<stdio.h>
//    int main()
//    {
//        int x, y, z;
//        printf("\n Enter the value of x and y");
//        scanf("%d%d",&x,&y);
//        z = x+y;
//        printf("\n Addition    z is %d",z);
//        z= x-y;
//        printf("\n subtraction z is %d",z);
//        z= x*y;
//        printf("\n Mutliple    z is %d",z);
//        z=x/y;
//        printf("\n Division    z is %d",z);
//        z=x%y;
//        printf("\n Modulus     z is %d",z);
//        return 0;
//
//    }
//
/////WAP To calculate simple interest---------------------------------------------------------------
//    #include<stdio.h>
//    int main()
//    {
//        int p, n;
//        float si, r;
//        printf("\n Enter the value of p, r, n");
//        scanf("%d %f %d",&p, &r, &n);
//        si = p*r*n/100;
//        printf("\n Simple Interest is %f",si);
//        return 0;
//    }
//
/////-----WAP TO CONVERT FARHENHEIT TO CELCIUS TEMPERATURE------------------------------------
//    #include<stdio.h>
//    int main()
//{
//
//        float c,f;
//        printf("\n Enter the Temperature of farhenheit");
//        scanf("%f",&f);
//        c = f-32/1.8;
//        printf("\n Temperature in celcius is %f",c);
//        return 0;
//}
/////WAP TO SUM OF DIGITS 4 DIGIT NUMBER-----------------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no, rem, ans=0;
//        printf("\n Enter the number");
//        scanf("%d",&no);
//        rem = no%10;
//        ans = ans+rem;
//        no =no/10;
//
//        rem = no%10;
//        ans = ans+rem;
//        no =no/10;
//
//        rem = no%10;
//        ans = ans+rem;
//        no =no/10;
//
//        rem = no%10;
//        ans = ans+rem;
//        no =no/10;
//
//        printf("\n Answer is %d",ans);
//        return 0;
//
//    }
//
/////WAP TO REVERSE NUMBER------------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int no, rev=0, rem;
//        printf("\n Enter the number");
//        scanf("%d",&no);
//        rem = no%10;
//        rev = (rev*10)+rem;
//        no =no/10;
//
//        rem = no%10;
//        rev = (rev*10)+rem;
//        no =no/10;
//
//        rem = no%10;
//        rev = (rev*10)+rem;
//        no =no/10;
//
//        rem = no%10;
//        rev = (rev*10)+rem;
//        no =no/10;
//
//        printf("\n Answer is %d",rev);
//        return 0;
//
//    }
/////------------WAP  TYPE CASTING--------------------------------
//#include<stdio.h>
//int main()
//{
//    int x, y;
//    float z;
//    printf("\n Enter the value of x and y");
//    scanf("%d%d",&x,&y);
//    z = (float)x /(float)y;
//    printf("\n z is %f",z);
//    return 0;
//
//
//}
/////------------WAP sizeof CHAR---------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//
//        int x =4;
//        float ft =4.6;
//        printf("\n int type:%d",sizeof(int));
//        printf("\n int type var x:%d",sizeof(x));
//        printf("\n flaot type:%d",sizeof(float));
//        printf("\n float type var ft:%d",sizeof(ft));
//        printf("\n char type %d",sizeof(char));
//        printf("\n double type %d",sizeof(double));
//        return 0;
//    }
/////-------------WAP ODD EVEN---------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x;
//        printf("\n enter the value of x");
//        scanf("%d",&x);
//        (x%2==0)?printf("\n %d is even",x):printf("\n %d is odd",x);
//        return 0;
//
//    }
//
/////----WAP FIND MAX BETN 2 NO.----------------------------------------------------------------------
//
//    #include<stdio.h>
//    int main()
//    {
//        int x,y, max;
//        printf("\n enter the value of x and y");
//        scanf("%d%d",&x, &y);
//        max = (x>y)?x:y;
//        printf("max is %d",max);
//        return 0;
//
//    }
/////-------------WAP FIND MAX BETN 3 NO---------------------------------------------------------------
//    #include<stdio.h>
//    int main()
//    {
//        int x,y,z, max;
//        printf("\n enter the value of x,y and z");
//        scanf("%d%d%d",&x, &y, &z);
//        max = (x>y)?(x>z)?x:z:(y>z)?y:z;
//        printf("max is %d",max);
//        return 0;
//    }
/////-------------WAP IF only ODD EVEN-------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x;
//        printf("\n Enter any number");
//        scanf("%d",&x);
//        if(x%2==0)
//        {
//            printf("\n Number is even %d",x);
//        }
//        if(x%2!=0)
//        {
//           printf("\n number is odd %d",x);
//        }
//        return 0;
//    }
/////-------------WAP FIND TWO NUMBER USING IF ONLY------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x, y;
//        printf("\n Enter value of x and y");
//        scanf("%d%d",&x,&y);
//        if(x>y)
//        {
//            printf("\n %d is max",x);
//        }
//        if(x<y)
//        {
//            printf("\n %d is max",y);
//        }
//    }
/////--------------WAP to Calculate price of 3 items and calculate discount-------------------------
//#include<stdio.h>
//    int main()
//    {
//        float p1,p2, p3,dis, totalbill;
//        float total=0;
//        printf("Enter the value of p1, p2, p3");
//        scanf("%f%f%f",&p1,&p2,&p3);
//        total=p1+p2+p3;
//        if(total>1000)
//        {
//            dis=total*0.07;
//            printf("\n discount is %f ",dis);
//        }
//
//        totalbill=total-dis;
//        printf("\n total bill is %f",totalbill);
//        return 0;
//    }
//
/////---------------------WAP TO FIND MAX BETN THREE NUMBERS--------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x, y, z;
//        printf("\n Enter thew value of x, y, z");
//        scanf("%d%d%d",&x,&y,&z);
//        if(x>y)
//        {
//            if(x>z)
//            {
//                printf("\n %d is max",x);
//            }
//        }
//        else
//        {
//            if(y>z)
//            {
//                printf("\n %d is max",y);
//            }
//            else
//            {
//                printf("\n %d is max",z);
//            }
//        }
//        return 0;
//    }
//
//
/////------------------WAP TO CHECK NUMBER IS DIVISIBLE BY 5 OR 3 OR BOTH-----------------
//#include<stdio.h>
//    int main()
//    {
//        int no;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        if(no%3==0)
//        {
//            if(no%5==0)
//            {
//                printf("\n Number is divisible by both");
//            }
//            else
//            {
//                printf("\n Number is divisible by only 3");
//            }
//        }
//        else
//        {
//            if(no%5==0)
//            {
//                printf("\n Number is divisible by 5 only");
//            }
//            else
//            {
//               printf("\n Number is  not divisible by both");
//            }
//        }
//        return 0;
//    }
//
//
/////----------------WAP TO CHECK THE CHARACTER IDS IN LOWERCASE,UPPERCASE,DIGIT OR SPEACIAL SYMBOL----------------
//#include<stdio.h>
//    int main()
//    {
//        char ch;
//        printf("\n Enter any character:  ");
//        scanf("%c",&ch);
//        if(ch>='A'&&ch<='Z')
//        {
//            printf("\n %c is in UpperCase",ch);
//        }
//        else
//        {
//            if(ch>='a'&& ch<='z')
//            {
//                printf("\n %c is in LowerCase",ch);
//            }
//            else
//            {
//                if(ch>=0&&ch<=9)
//                {
//                    printf("\n %c is Digit",ch);
//                }
//                else
//                {
//                    printf("\n %c is special symbol",ch);
//                }
//            }
//        }
//        return 0;
//    }
//
//
/////-----------------WAP Price per unit silver gold and diamond------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int amt,no_unit,cash_inhand;
//        int silver=3000,gold=5000,diamond=7000;
//        printf("\n Enter the amount");
//        scanf("%d",&amt);
//        if(amt>7000)
//        {
//            no_unit = amt/diamond;
//            cash_inhand = amt%diamond;
//            printf("\n no of unit of diamond is%d",no_unit);
//            printf("\n cash in hand of diamond is%d",cash_inhand);
//        }
//        if(cash_inhand>5000)
//        {
//            no_unit = amt/gold;
//            cash_inhand = amt%gold;
//            printf("\n no of unit of gold is%d",no_unit);
//            printf("\n cash in hand of gold is%d",cash_inhand);
//        }
//        if(cash_inhand>3000)
//        {
//            no_unit = amt/silver;
//            cash_inhand = amt%silver;
//            printf("\n no of unit of silver is%d",no_unit);
//            printf("\n cash in hand of silver is%d",cash_inhand);
//        }
//        return 0;
//    }


///// LIST PROBLEMS-----------------------------------------------------------------------------------

//2.#include<stdio.h>
//    int main()
//    {
//        int x,y,sum;
//        printf("\n Enter Two Numbers");
//        scanf("%d %d",&x,&y);
//        sum = x+y;
//        printf("\n Sum is %d",sum);
//        return 0;
//    }
//
/////3-------------------WAP ENTER TWO NUMBERS AND PERFORM ALL ARITHMETIC OPERATIONS--------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x,y,ans;
//        printf("\n Enter the value of x,y");
//        scanf("%d %d",&x,&y);
//        ans=x+y;
//        printf("\n sum is%d",ans);
//        ans=x-y;
//        printf("\n subtraction is%d",ans);
//        ans=x/y;
//        printf("\n division is%d",ans);
//        ans=x*y;
//        printf("\n multiplication is%d",ans);
//        return 0;
//
//    }
//
/////4.-------------------WAP TO FIND PERIMETER OF RECTANGLE-------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int l,b,per;
//        printf("\n Enter the value of length and bredth");
//        scanf("%d %d",&l,&b);
//        per=2*(l+b);
//        printf("\n Perimeter of rectangle is %d",per);
//        return 0;
//    }
//
/////5.---------------WAP TO FIND AREA OF RECTANGLE------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int l,b,area;
//        printf("\n Enter the value of length and bredth");
//        scanf("%d%d",&l,&b);
//        area=l*b;
//        printf("Area of rectangle is %d",area);
//        return 0;
//    }
//
/////6.------------WAP TO FIND DIAMETER CIRCUMFERENCE AREA OF CIRCLE----------------------------------------------
//#include<stdio.h>
//        int main()
//        {
//            float r, circumference,diameter,area,pi=3.142;
//            printf("\n Enter the value of radius");
//            scanf("%f",&r);
//            diameter=2*r;
//            printf("\n Diameter of circle is %f",diameter);
//            circumference=2*pi*r;
//            printf("\n Circumference of circle is %f",circumference);
//            area=pi*r*r;
//            printf("\n Area of circle is%f",area);
//            return 0;
//        }
//
/////7.-------------------------WAP CONVERSION OF CENTI METER AND KIILOMETER---------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float l,m,km;
//        printf("\n Enter length in centimeter");
//        scanf("%f",&l);
//        m = 0.01*l;
//        printf("\n length in meter is %f",m);
//        km = 0.001*l;
//        printf("\n length in kilometer is %f",km);
//        return 0;
//    }
//
/////8.-----------------------WAP TEMP IN CEL INTO FAHRENHEIT------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float temp,f;
//        printf("\n Enter Temperature in celcius");
//        scanf("%f",&temp);
//        f = (temp*9/5)+32;
//        printf("/n Temperature in fahrenheit is %f",f);
//        return 0;
//    }
//
/////9.------------------WAP TEMP IN FARHENHEIT INTO CEL------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float temp,c;
//        printf("\n Enter Temperature in fahrenheit");
//        scanf("%f",&temp);
//        c = (temp-32)/1.8;
//        printf("/n Temperature in celcius is %f",c);
//        return 0;
//    }
//
/////10.----------------WAP DAYS YEAR AND WEEKS FIND-------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//       int days,yrs,week;
//       printf("\n Enter number of days");
//       scanf("%d",&days);
//       yrs= days/365;
//       printf("\n no. of years is %d",yrs);
//       week = days/7;
//       printf("\n no.of week is %d",week);
//       return 0;
//    }
//
/////11.-----------------WAP TO FIND POWER OF ANY NUMBER--------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float x,y,ans;
//        printf("Enter the value of base and exponent as x and y");
//        scanf("%f %f",&x,&y);
//        ans = pow(x,y);
//        printf("\n Power of base and exponent is %f",ans);
//        return 0;
//
//    }
//
/////12.-------------WAP TO FIND SQUAREROOT OF NUMBER---------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float no,squareroot;
//        printf("\n Enter the number");
//        scanf("%f",&no);
//        squareroot = sqrt(no);
//        printf("\n Squareroot of number is %f",squareroot);
//        return 0;
//
//    }
//
//
/////13.--------------WAP TO FIND 3RD ANGLE OF TRIANGLE---------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x,y,z;
//        printf("\n Enter the value of angle of triangle");
//        scanf("%d %d",&x,&y);
//        z= 180-x-y;
//        printf("\n value of 3rd angle in triangle is %d",z);
//        return 0;
//    }
//
/////14.----------------WAP FIND AREA OF TRIANGLE USING BASE AND HEIGHT----------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float b,h,area;
//        printf("\n Enter base and height");
//        scanf("%f %f",&b,&h);
//        area = b*h/2;
//        printf("\n Area of triangle is %f",area);
//        return 0;
//    }
//
/////15.---------------------WAP TO FIND AREA OF EQUILATERAL TRIANGLE---------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float a,area;
//        printf("\n Enter side of equilateral triangle");
//        scanf("%f",&a);
//        area=sqrt(3)/4*a*a;
//        printf("\n Area of equilateral triangle is %f",area);
//        return 0;
//    }
//
/////16.----------WAP TO FIND TOTAL AVG PERCENTAGE------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float s1,s2,s3,s4,s5,total, totalmarks=500;
//        float avg,percentage;
//        printf("\n Enter marks of 5 subjects");
//        scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
//        total= s1+s2+s3+s4+s5;
//        printf("\n Total of marks is %f",total);
//        avg=(s1+s2+s3+s4+s5)/5;
//        printf("\n Average of Marks is %f",avg);
//        percentage = total/totalmarks*100;
//        printf("\n Percentage is %f %%",percentage);
//        return 0;
//
//    }
//
/////17.-------------WAP TO FIND SI-----------------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float p,r,t,si;
//        printf("\n Enter the value of P,R,N");
//        scanf("%f %f %f",&p,&r,&t);
//        si= p*r*t/100;
//        printf("\n Simple Interest is %f",si);
//        return 0;
//    }
//
/////18---------------------------WAP FIND COMPOUND INTEREST-----------------------------------
#include<stdio.h>
    int main()
    {
        float p,r,n,t,ci;
        printf("\n Enter the value of P,R,N,T");
        scanf("%f %f %f %f",&p,&r,&n,&t);
        ci=p*pow((1+r/n),(n*t));
        printf("\n Compound interest is %f",ci);
        return 0;
    }


/// by using loop
//#include<stdio.h>
//int main()
//{
//    float p,r,n,t,ci,i,pow=1;
//    printf("\n Enter the value of p,r,n,t");
//    scanf("%f %f %f %f",&p,&r,&n,&t);
//    for(i=1;i<=(n*t);i++)
//    {
//        pow = pow * (1+r/n);
//    }
//    ci = p*pow;
//    printf("\n Comppppppound interest is %f",ci);
//    return 0;
//}
//
//
/////----------------------***CONDITIONAL OPERATOR***--------------------------------------------------------
/////1. WAP FIND MAX BETN 2 NUMBERS
//#include<stdio.h>
//    int main()
//    {
//        int x,y,max;
//        printf("\n Enter the value of x and y");
//        scanf("%d %d",&x,&y);
//        max=(x>y)?x:y;
//        printf("\n Maximum Number is %d",max);
//        return 0;
//    }
//
/////2.-------------Max betn Three Num-----------------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x,y,z,max;
//        printf("\n Enter the value of x,y and z");
//        scanf("%d %d %d",&x,&y,&z);
//        max=(x>y)?(x>z)?x:z:(y>z)?y:z;
//        printf("\n Maximum Number is %d",max);
//        return 0;
//    }
//
/////3.----------WAP EVEN OR ODD USING CONDITION----------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int num;
//        printf("\n Enter the Number");
//        scanf("%d",&num);
//        (num%2==0)?printf("\n %d is Even",num):printf("\n %d is Odd",num);
//        return 0;
//    }
//
/////4.----------------WAP TO CHECK LEAP OR NOT----------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int year;
//        printf("\n Enter Year");
//        scanf("%d",&year);
//        (year%4==0)?printf("\n %d is a leap year",year):printf("\n %d is not leap year",year);
//        return 0;
//    }
//
/////5.--------------WAP TO CHECK ALPHABET--------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        char ch;
//        printf("\n Enter any character: ");
//        scanf("%c",&ch);
//        ((ch>='A'&& ch<='Z' || ch>='a'&& ch<='z'))? printf("\n%c is alphabet",ch): printf("\n%c is not alphabet",ch);
//        return 0;
//    }
//
/////---------------------IF ELSE*****************---------------------------------------------------------
/////1.----------WAP TO FIN MAX
//#include<stdio.h>
//    int main()
//    {
//        int x,y;
//        printf("Enter the value of x and y");
//        scanf("%d %d",&x,&y);
//        if(x>y)
//        {
//            printf("\n %d is Max",x);
//        }
//        else
//        {
//            printf("\n %d is Max",y);
//        }
//        return 0;
//
//    }
//
/////2.-------------WAP FIND MAX BETN THREE NUM--------------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int x,y,z;
//        printf("\n Enter the value of x,y,z");
//        scanf("%d%d%d",&x,&y,&z);
//        if(x>y && x>z)
//        {
//            printf("\n %d is max",x);
//        }
//        else if(y>z)
//        {
//            printf("\n %d is max",y);
//        }
//        else
//        {
//            printf("\n %d is max",z);
//        }
//        return 0;
//    }
//

/////3. CHECK WHETHER NUMBER IS POSITIVE NEGATIVE OR ZERO
//#include<stdio.h>
//int main()
//{
//    int no;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    if(no>0)
//    {
//        printf("%d is positive",no);
//    }
//    else if(no<0)
//    {
//        printf("%d is negative",no);
//    }
//    else
//    {
//        printf("%d is zero",no);
//    }
//    return 0;
//}


/////4.-------------WAP  NO IS DIV BY 5AND 11 OR NOT---------------------------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        int num;
//        printf("\n Enter any Number");
//        scanf("%d",&num);
//        if(num%5==0 && num%11==0)
//        {
//            printf("\n %d is divisible by 5 and 11",num);
//        }
//        else
//        {
//            printf("\n %d is not divisible by 5 and 11",num);
//        }
//    }

/////5 .CHECK NUMBER IS EVEN OR ODD
//#include<stdio.h>
//int main()
//{
//    int no;
//    printf("\n Enter any number");
//    scanf("%d",&no);
//    if(no%2==0)
//    {
//        printf("\n %d is even",no);
//    }
//    else
//    {
//        printf("\n %d is odd",no);
//    }
//    return 0;
//}

///// 6. WAP TO CHECK YEAR IS LEAP OR NOT
//#include<stdio.h>
//int main()
//{
//    int year;
//    printf("\n Enter any year: ");
//    scanf("%d",&year);
//    if(year%4==0 || year%400==0)
//    {
//        printf("\n %d is leap year",year);
//
//    }
//    else
//    {
//        printf("\n %d is not leap year",year);
//
//    }
//    return 0;
//}

/////7. WAP TO CHECK WHETHER CHARACTER IS ALPHABET OR NOT
//#include<stdio.h>
//int main()
//{
//    char c;
//    printf("\n Enter any charactder: ");
//    scanf("%c",&c);
//    if(c>=65&& c<=90 ||c>=97 &&c<=122)
//    {
//        printf("\n %c is alphabet",c);
//    }
//    else
//    {
//        printf("\n %c is not alphabet",c);
//
//    }
//    return 0;
//}

/////8.-------------------------------WAP TO CHECK VOVEL OR CONSONANT----------------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        char ch;
//        printf("\n Enter any character: ");
//        scanf("%c",&ch);
//        if((ch>='A' && ch<='Z' || ch>='a' && ch<='z'))
//        {
//            if(ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u' || ch == 'A' || ch =='E' || ch =='I' || ch == 'O' || ch == 'U')
//            {
//                printf("%c is vowel \n",ch);
//
//            }
//            else
//            {
//                printf("%c is consonant \n",ch);
//            }
//        }
//        else
//        {
//            printf("%c is invalid character \n",ch);
//        }
//
//        return 0;
//    }
//

/////9. WAP TO CHECK WHETHER CHARACTER IS ALPHABET,DIGIT OR SPECIAL CHARACTER
//#include<stdio.h>
//int main()
//{
//    char ch;
//    printf("\n Enter any character: ");
//    scanf("%c",&ch);
//    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
//    {
//        printf("\n %c is alphabet",ch);
//    }
//    else if (ch>='0' && ch<='9')
//    {
//        printf("\n %c is digit",ch);
//    }
//    else
//    {
//        printf("\n %c is special character",ch);
//    }
//    return 0;
//
//}

///// 10. Write a C program to check whether a character is uppercase or lowercase alphabet.
//#include<stdio.h>
//int main()
//{
//    char ch;
//    printf("\n Enter any character: ");
//    scanf("%c",ch);
//    if(ch>=60 && ch<=90)
//    {
//        printf("\n %c is in upper case",ch);
//    }
//    else if (ch>=97 && ch<=122)
//    {
//        printf("\n %c is in lower case",ch);
//    }
//}

/////11. Write a C program to input month number and print number of days in that month.
//#include<stdio.h>
//int main()
//{
//    int mno;
//    printf("\n Enter any month number betn 1 to 12");
//    scanf("%d",&mno);
//    if(mno==1 || mno==3||mno==5 || mno==7 || mno==8 || mon==10 || mno==12)
//    {
//        printf("\n %d month have 31 days");
//    }
//    else if(mon==4 || mno==6 || mno==9 || mno==11)
//    {
//        printf("\n %d month have 30 days");
//    }
//    else if (mno==2)
//    {
//        printf("\n %d month have 28/29 days");
//    }
//    return 0;
//}

/////12.Write a C program to count total number of notes in given amount.
//#include<stdio.h>
//int main()
//{
//    int amt,a,b,c,d,e,f,rm=0;
//
//    printf("\n Enter amount: ");
//    scanf("%d",&amt);
//
//    if(amt>=500)
//    {
//        a=amt/500;
//        rm=amt%500;
//        printf("\n 500 notes: %d",a);
//    }
//     if(rm>=200)
//    {
//        b=rm/200;
//        printf("\n 200 notes: %d",b);
//        rm=rm%200;
//    }
//     if(rm>=100)
//    {
//        c=rm/100;
//        printf("\n 100 notes: %d",c);
//        rm=rm%100;
//    }
//     if(rm>=50)
//    {
//        d=rm/50;
//        printf("\n 50 notes: %d",d);
//        rm=rm%50;
//    }
//     if(rm>=20)
//    {
//        e=rm/20;
//        printf("\n 20 notes: %d",e);
//        rm=rm%20;
//    }
//     if(rm>=10)
//    {
//        f=rm/10;
//        printf("\n 10 notes: %d",f);
//        rm=rm%10;
//    }
//    else
//    {
//        rm=rm;
//        printf("\n remaining amt: %d",rm);
//    }
//    return 0;
//}

///// 13. Write a C program to input angles of a triangle and check whether triangle is valid
/////or not.
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    printf("\n Enter values of a,b and c: ");
//    scanf("%d %d %d",&a,&b,&c);
//
//    if(a+b+c==180)
//    {
//        printf("\n Triangle is valid!");
//    }
//    else
//    {
//         printf("\n Triangle is Not valid!");
//
//    }
//    return 0;
//}

///// 14. Write a C program to check whether the triangle is equilateral, isosceles or scalene
/////triangle
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    printf("\n Enter the sides of triangle");
//    scanf("%d %d %d",&a,&b,&c);
//
//    if( a== b && b == c)
//    {
//        printf("\n Triangle is equilateral");
//    }
//    else if(a == b || b == c || c == a)
//    {
//        printf("\n Triangle is isosceles");
//    }
//    else
//    {
//        printf("\n Triagnle is scalene");
//    }
//
//    return 0;
//}


///// 15. WAP TO FIND ALL ROOTS OF QUADRATIC EQUATION-------------------------------------
//#include<stdio.h>
//    int main()
//    {
//        float a, b, c, discriminant, root1, root2;
//        printf("\n Enter coefficient of quadratic equation(ax^2+bx+c)");
//        scanf("%f %f %f",&a,&b,&c);
//        discriminant = b*b-4*a*c;
//        if(discriminant > 0)
//        {
//            root1 = (-b + sqrt(discriminant))/(2 * a);
//            root2 = (-b - sqrt(discriminant))/(2 * a);
//            printf("\n Roots are real and different");
//            printf("\n Root1 is %f",root1);
//            printf("\n Roots2 is %f",root2);
//        }
//        else if(discriminant == 0)
//        {
//            root1 = -b / (2 * a);
//            printf("\n Roots are real and same");
//            printf("\n Root1 = Root2 = %f",root1);
//        }
//        else
//        {
//            float realPart = -b / (2 * a);
//            float imgPart = sqrt(-discriminant) / (2 * a);
//            printf("\n Roots are complex and different");
//            printf("\n Root1 = %f + %f",realPart,imgPart);
//            printf("\n Root2 = %f + %f",realPart,imgPart);
//        }
//        return 0;
//    }

///// 16. WAP TO CALCULATE PROFIT OR LOSS
//#include<stdio.h>
//int main()
//{
//    int sp,cp,profit,loss;
//    printf("\n Enter sp: ");
//    scanf("%d",&sp);
//    printf("\n Enter cp: ");
//    scanf("%d",&cp);
//
//    if(sp>cp)
//    {
//        profit=sp-cp;
//        printf("\n %d is profit",profit);
//    }
//    else
//    {
//        loss=cp-sp;
//        printf("\n %d is loss",loss);
//    }
//    return 0;
//}

////17. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
////Mathematics and Computer. Calculate percentage and grade according to
////following:
////Percentage >= 90% : Grade A
////Percentage >= 80% : Grade B
////Percentage >= 70% : Grade C
////Percentage >= 60% : Grade D
////Percentage >= 40% : Grade E
////Percentage < 40% : Grade F
//#include<stdio.h>
//int main()
//{
//    int x[5],i;
//    float per,tot=0;
//    printf("\n Enter the marks of 5 subjects: ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//        tot=tot+x[i];
//    }
//    per=(float)tot/5.0;
//    printf("\n Percentage: %.2f",per);
//    if(per<=100 && per>=90)
//    {
//        printf("\n Grade A");
//    }
//    if(per<90 && per>=80)
//    {
//        printf("\n Grade B");
//    }
//    if(per<=80 && per>=70)
//    {
//        printf("\n Grade C");
//    }
//    if(per<70 && per>=60)
//    {
//        printf("\n Grade D");
//    }
//    if(per<60 && per>=40)
//    {
//        printf("\n Grade E");
//    }
//    if(per<40)
//    {
//        printf("\n Grade F");
//    }
//    return 0;
//
//}

////18. Write a C program to input basic salary of an employee and calculate its Gross
////salary according to the following:
////Basic Salary <= 10000 : HRA = 20%, DA = 80%
////Basic Salary <= 20000 : HRA = 25%, DA = 90%
////Basic Salary > 20000 : HRA = 30%, DA = 95%

//#include<stdio.h>
//int main()
//{
//    float basic_sal,hra,da,gross_sal=0;
//
//    printf("\n Enter basic salary: ");
//    scanf("%f",&basic_sal);
//
//    if(basic_sal<=10000)
//    {
//        gross_sal= basic_sal+ ( basic_sal* 0.2 )+(basic_sal * 0.8);
//        printf("\n Gross Salary: %.2f",gross_sal);
//    }
//    if(basic_sal>10000 && basic_sal<=20000)
//    {
//        gross_sal= basic_sal+ ( basic_sal* 0.25 )+(basic_sal * 0.9);
//        printf("\n Gross Salary: %.2f",gross_sal);
//    }
//    if(basic_sal>20000)
//    {
//        gross_sal= basic_sal+ ( basic_sal* 0.3 )+(basic_sal * 0.95);
//        printf("\n Gross Salary: %.2f",gross_sal);
//    }
//    return 0;
//
//}

////19. Write a C program to input electricity unit charges and calculate total electricity bill
////according to the given condition: For the first 50 units Rs. 0.50/unit
////For next 100 units Rs. 0.75/unit
////For next 100 units Rs. 1.20/unit
////For unit above 250 Rs. 1.50/unit
////An additional surcharge of 20% is added to the bill
//#include<stdio.h>
//int main()
//{
//    float unit,tot=0;
//    printf("\n Enter units: ");
//    scanf("%f",&unit);
//
//    if(unit<=50)
//    {
//        tot= unit * 0.50;
//        printf("\n Total Electricity bill: %.2f",tot);
//    }
//    if(unit>50 && unit<=150)
//    {
//        tot= unit * 0.75;
//        printf("\n Total Electricity bill: %.2f",tot);
//    }
//    if(unit>150 && unit<=250)
//    {
//        tot= unit * 1.20;
//        printf("\n Total Electricity bill: %.2f RS",tot);
//    }
//    if(unit>250)
//    {
//        tot= unit * 1.50;
//        printf("\n Total Electricity bill: %.2f RS",tot);
//    }
//    return 0;
//}

/////20. WAP TO ENTER AMOUNT AND PURCHASE FIRST MAX AMT OF PLATINUM AND THEN GOLD AND THEN SILVER AND LAST DISPLAY REMAINING AMT THAT IS CASH IN HAND

//#include<stdio.h>
//    int main()
//    {
//        int amt, p=6000, g=2000, s=800,rm=0 , no_gram;
//        printf("\n Enter amount");
//        scanf("%d",&amt);
//
//        if(amt>=6000)
//        {
//            no_gram = amt / p;
//            rm = amt%p;
//            printf("\n platinum is %d gram",no_gram);
//        }
//
//       if(rm>=2000)
//
//        {
//            no_gram = rm / g;
//            rm = rm%g;
//            printf("\n Gold is %d gram",no_gram);
//        }
//       if(rm>=800)
//        {
//            no_gram = rm / s;
//            rm = rm%s;
//            printf("\n Silver in grams is %d",no_gram);
//        }
//
//        else
//        {
//            printf("\n Amount is not enough");
//        }
//
//        printf("\n cash in hand is %d",rm);
//        return 0;
//    }


