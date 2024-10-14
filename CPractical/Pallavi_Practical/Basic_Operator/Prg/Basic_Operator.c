
/*
//WAP to perform Arithmatic operations

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n Enter the values of a and b: ");
    scanf("%d %d",&a,&b);

    c = a + b;
    printf("\n Addition c is : %d  ",c);

    c = a - b;
    printf("\n Substraction is : %d  ",c);

    c = a * b;
    printf("\n Multiplication is : %d ",c);

    c = a / b;
    printf("\n Division is : %d ",c);

    c = a % b;
    printf("\n Modulus i.e Remainder is : %d  ",c);

    return 0;

}

*/

/*
// WAP to enter any 3 digit number and add it all (431=4+3+1=8)

#include<stdio.h>
int main()
{
    int no,rem,sum=0;

    printf("\n Enter the number : ");
    scanf("%d",&no);

    //Process
    //no = 431
    rem = no % 10;  //1
    sum = sum  + rem;   //  0+1=1
    no = no / 10;       //  431/10=43

    rem = no % 10;      //  43%10=3
    sum = sum + rem;    //  1+3=4
    no = no / 10;       //  43/10=4

    rem = no % 10;      //  4%10=4
    sum = sum + rem;    //  4+4=8
    no = no /10;        //  4/10=0

    printf("\n Sum is %d",sum);

    return 0;
}
*/

/*
// Relational and logical operator

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n Enter the value of a and b : ");
    scanf("%d %d",&a,&b);

    c = a < b;
    printf("\n
    
     value of c is : %d",c);

    printf("\n a<b && a>b is %d",(a<b && a>b));

    printf("\n a>=100 || b<=50 is : %d ",(a>=100 || b<=50));

    printf("\n a%%2==0 || b%%2!=0 is : %d",(a%2==0 || b%2!=0));

    printf("\n !(a%%2==0) is : %d",(!(a%2==0)));
    
    return 0;
}
*/

/*
//WAP to calculate simple interest and compound interest

#include<stdio.h>
int main()
{
    float si,ci,p,r,n;
    
    printf("\n Enter the values of p,r and n : ");
    scanf("%f %f %f",&p,&r,&n);

    //Process
    
    si = (p*r*n)/100;
    ci = p*(1+(r/100)^n);

    printf("\n Ans of si is : %f",si);
    printf("\n Ans of ci is : %f",ci);


    return 0;

}
*/

/*
// WAP to convert cel to far
#include<stdio.h>
int main()
{
    float c,f;
    
    printf("\n enter the value of c : ");
    scanf("%f",&c);

    //process
    f = (c*1.8) + 32;

    printf("\n value of f is %f",f);

    return 0;
}
*/

/*
// WAP to convert far to cel
#include<stdio.h>
int main()
{
    float f,c;

    printf("\n enter the value of f : ");
    scanf("%f",&f);

    c = (f-32) / 1.8;

    printf("\n value of c is %f",c);

    return 0;
}

*/

/*
//WAP to find the perimeter and area of rectangle
#include<stdio.h>
int main()
{
    float l , b , p ;
    int a;

    printf("\n Enter the value of length and breadth : ");
    scanf("%f %f",&l,&b);

    p = 2*(l + b);
    a = l * b;

    printf("\n Perimeter of rectangle is : %f",p);
    printf("\n Area of rectangle is : %d",a);

    return 0;
}

*/

/*
// WAP to find Area,diameter and circumference of circle;

#include<stdio.h>
int main()
{
    float r ;
    float a,c,d,pi = 3.14;

    printf("\n Enter the value of r : ");
    scanf("%f",&r);

    a = pi * r * r;
    c = 2 * 3.14 * r;
    d = 2 * r;
    printf("\n Area of circle is : %.2f",a);
    printf("\n Circumference oc circle is : %.2f",c);
    printf("\n Diameter of circle is : %.2f",d);


    return 0;
}
*/

/*
//WAP to convert centimeter length into meter and kilometer

#include<stdio.h>
int main()
{
    float centimeter,meter,kilometer;

    printf("\n Enter the length in  centemeter : ");
    scanf("%f",&centimeter);    
    meter = centimeter * 0.01;

    printf("\n %f centimeter length is equal to %f meter ",centimeter,meter);
    printf("\n Enter the length in meter : ");
    scanf("%f",&meter);
    kilometer = meter * 0.001;

    printf("\n %f meter Length is equal to %f kilometer ",meter,kilometer);
    
    return 0;
}
*/

/*
// WAP to convert days into years,weeks and days

#include<stdio.h>
int main()
{
   int day,week,month,year;
//    float week;

   printf("\n Enter the number of days : ");
   scanf("%d",&day) ;

   week = day/7;
   month = day/30;
   year = day/365;

   printf("\n %d days are equal to %d week",day,week);
   printf("\n %d days are equal to %d month",day,month);
   printf("\n %d days are equal to %d year",day,year);


   return 0;
}
*/


/*//
// WAP to calculate the square root of any number

#include<stdio.h>
#include<stdio.h>
int main()
{
    int num,square;
    float num1,num2,ans;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    square = sqrt(num);
    printf("\n Square root of %d is : %d",num,square);

    printf("\n Enter first number : ");
    scanf("%f",&num1);

    printf("\n Enter second number : ");
    scanf("%f",&num2);
    
    ans = num1 ^ num2;

    printf("\n %f resto %f is : %f",num1,num2,ans);

    return 0;
}

*/

/*
// find the third angle of the triangle

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,ans;

    printf("\n Enter a and b : ");
    scanf("%f %f",&a,&b);

    ans = (a*a) + (b*b);
    c = sqrt(ans);

    printf("\n Third side of triangle is : %d",c);
    return 0;

}
*/

/*

// find area of the triangle

#include<stdio.h>
int main()
{
    int base,height,area;

    printf("\n Enter the base and height of triangle : ");
    scanf("%d %d",&base,&height);

    area = 0.5 * base * height;

    printf("\n Area of triangle is %d",area);

    return 0;
}
*/ 

/*
//find area of equilateral traingle
#include<stdio.h>
int main()
{
    int a;
    float area;
    printf("\n Enter the side of traingle : ");
    scanf("%d",&a);

    area = ((1.73/4)*(a*a));

    printf("\n Area of traingle is : %.2f",area);

    return 0;

}
*/

/*
//Enter 5 subject marks and calculate total , average and percentage
#include<stdio.h>
int main()
{
    float a,b,c,d,e,total;
    float per,avg;

    printf("\n Enter the five subject marks : ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    total = a + b + c + d + e ;
    avg = total / 5 ;
    per = (total / 500) * 100 ;

    printf("\n Total of five subject is : %f",total);
    printf("\n Avg of five subject is : %.2f",avg);
    printf("\n Per of five subject is : %f",per);

    return 0 ;
}
*/



// ***************************** SET- A ********************************
/*

//1.
#include<stdio.h>
int main()
{
    int a;
    float b;

    a = 10/45*23%45/(45%4*21);
    b = 10+45.0*23-45+(4*21.0);

    printf("\n ans of a is : %d",a);
    printf("\n ans of b is : %f",b);

    return 0;
}

*/

/*
// 2.
#include<stdio.h>
int main()
{
    int a = 4>5 && 5>4;
    int b = 4>5 || 5>4;
    int c = (232+23*1233) || 0;
    int d = (232+23*1233) && 0;

    printf("\n ans of a is %d b is %d c is %d and  d is %d  ",a,b,c,d);
    return 0;
}
*/

/*
//3.
#include<stdio.h>
int main()
{
    int a = 5;

    printf("%d",++a);
    printf("\n %d",a++);
    printf("\n %d",--a);
    printf("\n %d",a--);

    printf("\n 1==5==5  %d",(1==5==5));

    printf("\n 5==1==1 %d",(5==5==1));

    return 0;
}

*/

// 4.
/*
#include<stdio.h>
int main()
{
    int a ;
    5=a;

    printf("\n %d",a);
}
*/



// *************************** SET - 2 *************************************

/*
//1.

#include<stdio.h>
int main()
{
    int l=5 , b=7 , a , p;

    a = l*b;
    p = 2*(l+b);

    printf("\n Area is : %d",a);
    printf("\n Perimeter is : %d",p);

    return 0;
}
*/

//2.
/*
// 3.,4.

#include<stdio.h>
int main()
{
    int num,add,div,mod,mul;
    int result;

    printf("\n Enter the 4 digit number : ");
    scanf("%f",&num);

    add = num + 8;
    div = add / 3;
    mod = div % 5;
    mul = mod * 5;
    printf("\n Ans is : %d",mul);

    result = ((num+8) / 3 % 5 *5);
    printf("\n result is : %d",result);

    // Using Assignment operators(+= , -= , *=)

    int a , b , c ,d ;

    a = num += 8;
    b = a /= 3;
    c = b %= 5;
    d = c *= 5;

    printf("\n Ans is : %d",d);
 
    return 0;

}
*/


/*
//5.,6.,7.
#include<stdio.h>
int main()
{
    int a , b;

    printf("\n Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("a==b : %d",(a==b));
    printf("\n a<50 && a<b : %d",(a<50 && a<b)); //to check both the conditions are true
    printf("\n a<50 || a<b : %d",(a<50 || a<b));  //to check atleast one condition is true

    return 0;
}

*/

/*
// 8.
#include<stdio.h>
int main()
{
    int a = 78 , b = 45 , c = 62;
    float total , per;

    total = a + b +c;
    per = (total / 300) * 100;

    printf("\n Total marks of Robert is : %.2f",total);
    printf("\n per of Robert is : %.2f",per);

    return 0;
    
}
*/

/*
// 9.number exchange

#include<stdio.h>
int main()
{
    int x ,y , temp;

    printf("\n Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    printf("\n Before exchange value of x amnd y are : %d %d",x,y);

    temp = x;
    x = y;
    y = temp;

    printf("\n After exchange value of x amnd y are : %d %d",x,y);

    // Without using 3 veriable

    int a ,b ;

    printf("\n Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("\n Before exchange value of a and b are : %d %d",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n After exchange value of a and b are : %d %d",a,b);

    return 0;
}
*/

/*
// 10. convert meter length into foot and inches
#include<stdio.h>
int main()
{
    float m , i , f;

    printf("\n Enter the length in meter : ");
    scanf("%f",&m);

    i = 39.37 * m;
    f = 3.28 * m;

    printf("\n %f meter length = %f inch",m,i);
    printf("\n %f meter length = %f foot",m,f);

    return 0;
}
*/

// 11.


// 12.

/*
#include<stdio.h>
int main()
{
    int student = 45 , boys = 25 , BA = 15 , GA  ;
    // int A=36 ;
    // int A = (80*45)/100;
    float A =((float)80/100)*45;
    GA = A - BA;

    printf("\n %.2f number of students secured grade \'A\'",A);
    printf("\n %d number of girls secured grade \'A\'",GA);

    return 0;
}
*/

// ****************************** SET-3***********************************
/*
// 1. add of first and second last number

#include<stdio.h>
int main()
{
    int num , n , sum = 0;

    printf("\n Enter five digit number : ");
    scanf("%d",&num);

    n = num % 10 ;
    num = num / 10;
    n = num % 10;
    sum = sum + n;

    num = num / 10;
    num = num / 10;
    num = num / 10;

    sum = sum + num;

    printf("\n sum is : %d",sum);

    return 0;
}
*/

/*
// 2.

#include<stdio.h>
int main()
{
    int num ,i, n , n1 , n2 ,n3,n4;

    printf("\n Enter four digit number : ");
    scanf("%d",&num);

    n = num % 10;
    n1 = n + 2;
    num = num / 10;

    n = num % 10;
    n2 = n + 2;
    num = num / 10;

    n = num % 10;
    n3 = n + 2;
    num = num / 10 ;

    n = num % 10;
    n4 = n + 2;

    printf("\n num is : %d %d %d %d",n4,n3,n2,n1);

    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    int num,n,temp;

    printf("\n Enter 4 digit number: ");
    scanf("%d",&num);

    while(num>0)
    {
        temp = num % 10;

        if(temp == 8){
            temp = 0;
            printf("%d",temp);
        }

        else if(temp == 9)
        {
            temp =1;
            printf("%d",temp);
        }

        else{
            temp = temp+2;
            printf("%d",temp);

        }
        num = num/10;
        
    }


    return 0;    
}

*/

/*

// 3. Add of 3 num

#include<stdio.h>
int main()
{
    int num , n , rev = 0 , sum = 0 ;

    printf("\n Enter the 3 digit number : ");
    scanf("%d",&num);

    n = num % 10;
    sum = sum + n;
    num = num / 10;

    n = num % 10;
    sum = sum + n;
    num = num / 10;

    n = num % 10;
    sum = sum + n;
    num = num / 10;

    printf("\n Addition of 3 digit number  is : %d",sum);

    return 0 ;
}
*/

// 4.

/*
#include<stdio.h>
int main()
{
    int num,r,rev=0;

    printf("\n Enter a number: ");
    scanf("%d",&num);

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    r = num % 10;
    rev = (rev * 10) + r;
    num = num / 10;

    r = num % 10;
    rev = (rev* 10) + r;
    num = num / 10;

    printf("\n reverse of %d is : %d ",num,rev);

    return 0;

}
*/

/*
******************** Conditional operator***********************

// 1.MAx  number  between two numbers

#include<stdio.h>
int main()
{
    int x , y , max=0;

    printf("\n Enter any two numbers : ");
    scanf("%d %d",&x,&y);

    // (x>y)?printf("\n %d is greater than %d ",x,y):printf("\n %d is greater than %d",y,x);
   
    max = (x>y)?x:y;
    printf("\n max value is %d",max);

    return 0;
}

*/

/*
// 2.max between 3 numbers
#include<stdio.h>
int main()
{
    int x,y,z,max;

    printf("\n Enter any three numbers : ");
    scanf("%d %d %d",&x,&y,&z);

    (x>y)?(x>z)?printf("\n max value is %d",x):printf("\n %d is  max value:",z):(y>z)?printf("\n %d is max value",y):printf("\n %d is max value",z);


    return 0;
}
*/

/*
// Even odd number 

#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    (num % 2 == 0)?printf("\n Entered number %d is even",&num):printf("\n Entered number %d is odd",num);

    return 0;
}
*/

/*
// Leap year

#include<stdio.h>
int main()
{
    int year;

    printf("\n Enter any year : ");
    scanf("%d",&year);

    ((year % 4 == 0) || (year % 100 == 0) || (year % 400 == 0))?
    printf("\n Enterd year %d is leap year ",year):
    printf("\n Enterd year %d is not a leap year",year);

    return 0;

}
*/

/*
// to check alphabet

#include<stdio.h>
int main()
{
    char c;

    printf("\n Enter any value : ");
    scanf("%c",&c);


    (((c >= 'A' )&& (c <= 'Z')) || ((c >= 'a') && (c <= 'z') ))?printf("\n Enterd value %c is character  ",c):
    printf("\n Enterd value %c is not character ",c);


    return 0;
}

*/


// *********************************** Bitwise operator ***********************************
/*
#include<stdio.h>
int main()
{
    int x , y;

    printf("\n Enter any two numbers : ");
    scanf("%d %d",&x,&y);

    printf("\n x&y is : %d",(x&y) );
    printf("\n x|y is : %d", (x|y) );
    printf("\n x^y is : %d", (x^y) );
    printf("\n x<<2 is : %d", (x<<2) );
    printf("\n x>>2 is : %d", (x>>2) );
    printf("\n y<<3 is : %d", (y<<3) );
    printf("\n y>>3 is : %d", (y>>3) );

    return 0;
}

*/

/*
  #include <stdio.h>
    int main()
    {
        int a = 1, b = 1, d = 1;
       printf("%d",  ++d + d++ + a++);
       // printf("%d, %d, %d", ++a + ++a+a++, a++ + ++b, ++d + d++ + a++);
       return 0;
    }
    */

    //  #include <stdio.h>
    // int main()
    // {
    //     int a = 10, b = 10;
    //     if (a = 5)

    //     b--;
    //     printf("%d, %d", a, b--);
    // }

    #include <stdio.h>
    int main()
    {
        /*
        int a = 5, b = -7, c = 0, d;
        d = ++a && ++b || ++c;
        printf("\n%d%d%d%d", a,  b, c, d);
        */

        int a=5,b= -7 ,d, c=0;
        d = ++a && ++b || ++c;
        printf("\n %d %d %d %d",a,b,c,d);
        return 0;
    }