#include<stdio.h>
/**
#include<stdio.h>
int main()
{
   printf("\n1.Nitin R. Vhankhande");
   printf("\n2.Addres:\"Archae Home\",G/6\'flat no-12,pone\'");
   printf("\n3.Ssc marks:76%%\a\a\a\a\a\a\a\a\tDiploma Marks:90%%");
   printf("\n4.Height:5.8ft\tWeight:63Kg");
   printf("\n5.Gender:Male");
   printf("\n6.I am student of Archer Infotech \r6.am i");
   printf("\n7.My Favourite player in cricket is rohit sharma\f as well as virat kohli");
   return 0;
*/
/*
//-------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main ()
{
   int i;

   for(i=1;i<=10;i++)
   {
       if(i%2!=0)
       {
           printf("\n%d",i);
       }

   }
   printf("\n End the progarm");
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------
//wap to initialize and display the program
/*
#include<stdio.h>
int main()
{
    int x=360;
    char ch='a';
    float ft=34.33625;
    double db=68.369878;
    printf("\n The value of integer is : %d",x);
    printf("\n int. valu is : %d\tchar. value is : %c\tfloting value is : %0.3f\tdouble value is : %lf",x,ch,ft,db);

return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------
//wap to initialize multiple decleration program
/*
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    char ch='A',ch1='B',ch2='C';
    float ft=34.136,ft1=33.678,ft2=64.3331;
    double db=13.11134,db1=63.11441,db2=43.617321;
    printf("\n value of intiger 'a' is : %d\tvalue of intiger 'b' is : %d\t value of intiger 'c' is : %d\n\n\nvalue of first char is : %c\tvalue of second char is : %c\tvalue of third char is : %c\n\n\nvalue of firt floting number is : %f\tvalue of second floting number is :  %f\t value of third floting number is : %f\n\n\nvalue of fitst double is : %lf\tvalue of second double is : %lf\tvalue of third double is : %lf",a,b,c,ch,ch1,ch2,ft,ft1,ft2,db,db1,db2);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------
//wap to input and display the value
/*
#include<stdio.h>
int main()
{
    int x;
    char ch;
    float ft;
    double db;
    printf("\n Enter the value of charater,intiger,,floating,double\n");
    scanf("%c %d %f %lf",&ch,&x,&ft,&db);
    printf("\n intiger value is : %d",x);
    printf("\nch=%c\tft=%.2f\tdb=%0.3lf",ch,ft,db);
   return 0;
}
/*
//-------------------------------------------------------------------------------------------------
/*
//wap to interchange/exchange/swap the enterd two value thrugh keboard

#include<stdio.h>
int main()
{
    int x,y,tmp;
    printf("\n Enter the Number :- ");
    scanf("%d %d",&x,&y);
    printf("\n value before exchange is x= %d\ty=%d",x,y);
    tmp=x;
    x=y;
    y=tmp;
    printf("\n Value after the exchange is x=%d\ty=%d",x,y);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
/**
//wap to excahnge charchter eter two value through keyboard
#include<stdio.h>
int main()
{
    char A,B,C,D;

    printf("\n enter the three different char : ");
    scanf("%c %c %C",&A,&B,&C);

    printf("\n before exchange   %c \t  %c \t %c",A,B,C);

//    D=A;
//    A=B;
//    B=C;
//    C=D;
//    D=C;
//    C=B;
//    B=A;
//    A=D;
      C=A;
      A=B;
      B=C;

    printf("\n after  exchange %c \t  %c \t %c",A,B,C);
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------
//wap to exchange three character valu
/**
#include<stdio.h>
int main()
{
    char A,B,C,TMP;

    printf("\n enter the three different char : ");
    scanf("%c %c %c",&A,&B,&C);

    printf("\n before exchange ch : %c \t ch1 : %c, ch2 : \tch3 : %c",A,B,C);

    TMP=A;
    A=B;
    B=C;
    C=TMP;

    printf("\n after  exchange ch : %c \t ch1 : %c, ch2 : \tch3 : %c",A,B,C);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
/**

//wap to display the values of x and y using type cast operator

#include<stdio.h>
int main()
{
    int x=15,y=6;
    float z;
    // first type

    z=-x; //-15
    printf("\n z : %f",z);

    //second type

    z=x/y; // 2 (to get perfect value of z we have to convert /change at lest one type of variable
    printf("\n z : %f",z);

    //third type

    z=(float)x/y;// 2.5
    printf("\n z : %.1f",z);

   // fourth type

    z= x/(float)y;// 2.50
    printf("\n z : %.2f",z);

    //fifth type

    z=(float)x/(float)y;// 2.500
    printf("\n z : %.3f",z);
    return 0;


}
*/
//---------------------------------------------------------------------------------------------------

//wap to display the values using (- ,-- ,++) operator
/**
#include<stdio.h>
int main()
{
    int x=15,y=37,z;

    z=-x;
    printf("\n z : %d",z); //z=-15

    z=x++ + --y;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    z=--x + ++y;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    z=x++ + y++;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    z=x-- + y++;
    printf("\n x = %d and y = %d or z %d",x,y,z);

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------------------
/**
//wap to check size of int,char,float,double
#include<stdio.h>
int main()
{


    printf("\n size of intiger is : %d",sizeof(int));
    printf("\n size of character is : %d",sizeof(char));
    printf("\n size of float is : %d",sizeof(float));
    printf("\n size of double is : %d",sizeof(double));
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
//Wap to perform i/o of all basic data types.
/**
#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("\n enter character operent : ");
    scanf("%c",&b);

    printf("\n enter the intiger value : ");
    scanf("%d",&a);

    printf("\n enter floating value : ");
    scanf("%f",&c);

    printf("\n enter double value : ");
    scanf("%lf",&d);

    printf("\n1) Intiger value : %d\n2) character value : %c\n3) floating value : %f\n4) double value : %lf ",a,b,c,d);

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------
/**
//wap Enter two number and find there sum
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("\n enter any two number : ");
    scanf("%d%d",&a,&b);

    sum=a+b;

    printf("The sum is %d",sum);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//wap to enter two number and perform all arithmatic operation
/**
#include<stdio.h>
int main()
{
    int a,b,add,min,mul,div,mod;


    printf("\n Enter two Nmber :");
    scanf("%d%d",&a,&b);

    add=a+b;
    min=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("1) add= %d\n2) min= %d\n3) mul= %d\n4) div= %d\n5) mod= %d",add,min,mul,div,mod);
    return 0;


}
*/
//-----------------------------------------------------------------------------------------------
//Write a C program to enter length and breadth of a rectangle and find its perimeter.
/**
#include<stdio.h>
int main()
{
    int l,b,per;

    printf("\n Enter the value for Length and breadth of rectangle : ");
    scanf("%d %d",&l,&b);

    per=(l+b)*2;

    printf("\n Perimiter Of Rectangle : %d",per);
    return 0;
}
*/
//--------------------------------------------------------------------------------------
//Write a C program to enter length and breadth of a rectangle and find its area
/**
#include<stdio.h>
int main()
{
    int l,b,area;

    printf("\n Enter the value of length and breadth of rectangle : ");
    scanf("%d %d",&l,&b);

    area = l*b;

    printf("\n Area of rectangle : %d",area);

    return 0;

}
*/
//-----------------------------------------------------------------------------------------
//.Write a C program to enter radius of a circle and find its diameter, circumference
/**
#include<stdio.h>

int main()

{
    float r,dia,cir,area;

    printf("\n Enter the value of Radius : ");
    scanf("%f",&r);

    dia=r*r;
    cir=2*3.1415*r;
    area=3.1415*r*r;

    printf("Diameter = %f\nCircumferenc = %f\nArea = %f",dia,cir,area);

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
//Write a C program to enter length in centimeter and convert it into meter and kilomete.
/**
#include<stdio.h>
int main()

{
 float l,m,km;

    printf("\n Enter the Value of Length");
    scanf("%f",&l);

    m=l/100;
    km=l/10000;

    printf("\n meter : %fm\tkilometer : %fkm",m,km);

    return 0;
}
*/
//----------------------------------------------------------------------------------------------
//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
/**
#include<stdio.h>
int main()

{
    float cel,far;

    printf("Enter the value of celcius :");
    scanf("%f",&cel);

    far=cel*9/5+32;
    printf("\n %0.1f celcius into fahrenheit is %0.2f",cel,far);
    return 0;
}
*/
//-------------------------------------------------------------------------------
//Write a C program to enter temperature in Fahrenheit and convert to Celsius
/**
#include<stdio.h>
int main()

{
    float cel,far;

    printf("Enter the value of fahrenheit :");
    scanf("%f",&far);

   cel=(far-32)*5/9;

    printf("\n %0.1f fahrenheit into celcius  is %0.2f",far,cel);
    return 0;

}
*/
//-----------------------------------------------------------------------------------
//Write a C program to convert days into years, weeks and days.
/**
#include<stdio.h>
int main()
{
    int days,week,year;

    printf("\n Enter the days :");
    scanf("%d",&days);

    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;

    printf("%dyear%dweek%ddays",year,week,days);

    return 0;

}
*/
//---------------------------------------------------------------------------------
//Write a C program to find power of any number x ^ y
/**
#include<stdio.h>
int main()
{
    int x,ans;

    printf("enter any number : ");
    scanf("%d",&x);

    ans=x*x;

    printf("\n power of %d is : %d",x,ans);
    return 0;
}
*/
//----------------------------------------------------------------------------------
//Write a C program to enter two angles of a triangle and find the third angle.
/**
#include<stdio.h>
int main()
{
    int ang1,ang2,ans;

    printf("Enter the two angle of trangle : ");
    scanf("%d%d",&ang1,&ang2);

    ans=180-(ang1+ang2);
    printf("\n Third angle : %d degree",ans);

    return 0;
}
*/
//-------------------------------------------------------------------------
//Write a C program to enter base and height of a triangle and find its area.
/**
#include<stdio.h>
int main()
{
    int b,h,a;

    printf("\n enter the base and height of the trangle : ");
    scanf("%d%d",&b,&h);

    a=0.5*b*h;

    printf("Area = %d",a);
    return 0;

}
*/
//-------------------------------------------------------------------------------
//Write a C program to calculate area of an equilateral triangle.
/**
#include<stdio.h>
int main()
{
    float area,side;

    printf("\n Enter the value of side : ");
    scanf("%f",&side);

    area=0.4330125*side*side; //(root 3/4)==0.4330125

    printf("\n Area of equilateral Trangle : %f",area);

    return 0;

}
*/
//-------------------------------------------------------------------------------------
//Write a C program to enter marks of five subjects and calculate total, average andpercentage
/**
#include<stdio.h>
int main()
{
    float marathi,sanskrit,english,maths,science,total,avr,per;

    printf("enter the mark of marathi,sanskrit,english,maths,science : ");
    scanf("%f%f%f%f%f",&marathi,&sanskrit,&english,&maths,&science);

    total=marathi+sanskrit+english+maths+science;

    avr=total/5;
    per=(total/500)*100;

    printf("\n Total = %0.2f\n Avarage = %0.2f\nPercentage = %0.2f%%",total,avr,per);

    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()
{
    float p,t,r,si;

    printf("\n Enter the value for p,t,r");
    scanf("%f%f%f",&p,&t,&r);

    si=p*r*t/100;

    printf("simple Interest :%f",si);

    return 0;


}
*/
//-------------------------------------------------------------------------
// wap to input the year consider wheter is leap year or not
/**
#include<stdio.h>
int main()
{
    int a,b;

    printf("enter any year : ");
    scanf("%d",&a);


    (a%4==0)?printf("\n%d is Leap Year",a):printf("\n%d is NOT Leap year",a);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------
// wap to enter second to keyboard and conver ionto hourse,minute,and second.
/**
#include<stdio.h>
int main()
{
    int sec,min,hrs;

    printf("\n enter the seconds : ");
    scanf("%d",&sec);

    hrs=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;

    printf("\n %dhours%dminute%dsecond",hrs,min,sec);

    return 0;

}
*/
//----------------------------------------------------------------------------------
/**
///wap to add all digits from enterd no through keyboard

#include<stdio.h>
int main()
{
    int no,ans,rem;

    printf("enterd any three digit no : ");
    scanf("%d",no);



    return 0;
}
*/
/**--------------------------------------PAPER QUTION AND ANSWER(20-6-24)-----------------------------------------------------------------------------*/
//if the mark robet in three subjects are 78,45,62 Respectively (each out of 100),write a program to calculate his total marks and persentage marks
/**
#include<stdio.h>
int main()
{
    float sub1=78,sub2=45,sub3=62,total=0,per;

    total=sub1+sub2+sub3;
    per=(total/300)*100;//for int use formula per=(total/3);

    printf("\n Total Marks : %0.2f \t percentage : %0.2f%%",total,per);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
/**Enter any amount (int value) through keyboard and purchase platinum gold and silver sequentially and possible
max in grams (int value) and finally the quentityu of each in grams and cash in hand. (rates/gram-8k,4kand700Rs)*/
/**
#include<stdio.h>
int main()
{
   int no,p,g,s;
   printf("Enter any Number : ");
   scanf("%d",&no);

   p=no/8000;
   no=no%8000;

   g=no/4000;
   no=no%4000;

   s=no/700;
   no=no%700;

   printf("%dgram Platinum%d gram Gold%dgram silver%drs in hand",p,g,s,no);
   return 0;

}
*/
//=-------------------------------------------------=-0----------=----0=-----=0=-0=-0-0=-0=-0-=0=-=--=0-=0=-=--==-0
//wap to enter number through the keyboard,display the reverse number and also disply the addition of all digit of
//the reversed number input :486 Output : Reverse no : 684 Addition of reverse no is : 18.
/**
#include<stdio.h>
int main()
{

    int no,ans=0,add=0,rem=0,rem1=0,rev;

    printf(" Enter any three number");
    scanf("%d",&no);

    rem=no%10;
    ans=(ans*10)+rem;
    no=no/10;

    rem=no%10;
    ans=(ans*10)+rem;
    no=no/10;

    rem=no%10;
    ans=(ans*10)+rem;
    no=no/10;

    rev=ans;   //store ans. in rev.

    rem1=ans%10;
    add=add+rem1;
    ans=ans/10;

    rem1=ans%10;
    add=add+rem1;
    ans=ans/10;

    rem1=ans%10;
    add=add+rem1;
    ans=ans/10;

    printf("reverse no : %d\naddition : %d",rev,add);

    return 0;

}
*/
//--------------------------------------------------------------------------------------
/**
//WAp to find max from 3 number (nesting condition operator)
#include<stdio.h>
int main()

{

    int a,b,c;

    printf("\n enter any three number : ");
    scanf("%d %d %d",&a,&b,&c);

    (a>=b)?(a>=c)?printf("%d is max",a):printf("%d is max",c):(b>=c)?printf("%d is max",b):printf("%d is max",c);

    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------------------------------
//wap to display entered number is divisible by 5 or not if yes then add 100 in it otherwise multiply by 10
/**
#include<stdio.h>
int main()
{
    int no;
    printf("enter any number : ");
    scanf("%d",&no);

    (no%5==0)?printf("answer : %d",(no+100)):printf("answer : %d",(no*10));
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
/**
//wap om bitwse operater
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n enter number for a and b : ");
    scanf("%d%d",&a,&b);

    c=a*b;

    printf("\n%d",a&b);
    printf("\n%d",a|b);
    printf("\n%d",a^b);
    printf("\n%d",a>>b);
    printf("\n%d",a<<b);


    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------------
//wap to find even or odd by using only if()
/**
#include<stdio.h>
int main()
{

    int x;

    printf(" enter any number : ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is even number",x);

    }
    if(x%2!=0)
    {
        printf("%d is odd number",x);

    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------
//wap to find max between two number
/**
#include<stdio.h>
int main()
{

    int a,b;

    printf(" enter any 2 number : ");
    scanf("%d%d",&a,&b);

    if(a>b)

    {
        printf("%d is max number",a);
    }
    if(a<b)
    {
        printf("%d is max number",b);
    }
    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------
//wap to find max number between three number nesting if
/**
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter any 3 number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {

        if(a>c)
        {
            printf("A=%d is max number",a);
        }


    }
    if(b>a)
    {
        if(b>c)
        {
            printf("B=%d is max number",b);
        }
    }

    if(c>a)
    {
        if(c>b)
        {
            printf("C=%d is max number",c);
        }
    }


    return 0;


}
*/
//-------------------------------------------------------------------------------------------------------------------
//wap enter price of three itoms and find total bill discount and payable amount (if total> 500 dicount 7% otherwise 3%)
/**
#include<stdio.h>
int main()
{

    float a,b,c,total=0,dis=0,pay=0;

    printf("Enter the price of three itom : ");
    scanf("%f %f %f",&a,&b,&c);

    total=a+b+c;

    if(total>500)
    {
        dis=total*0.07;
        pay=total-dis;

        printf("payble amount = %0.2f\nTotal bill = %0.2f\nDiscount(7%%) = %0.2f",pay,total,dis);

    }
    if(total<500)
    {
        dis=total*0.03;
        pay=total-dis;

        printf("payble amount = %0.2f\nTotal bill = %0.2f\nDiscount(3%%) = %0.2f",pay,total,dis);

    }
    return 0;
                                     /**OR*/
/**
     #include<stdio.h>
int main()
{

    float am1,am2,am3,tot=0,dis=0;

    printf("Enter the price of three itom : ");
    scanf("%f %f %f",&am1,&am2,&am3);

    tot=am1+am2+am3;

    if(tot>=500)
        dis=tot*0.07;
    if(tot<500)
        dis=tot*0.07;
    printf("\n Total amount = %0.2f",tot);
    printf("\n Discount = %0.2f",dis);
    printf("\n payble amount = %0.2f",(tot-dis));

   return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------------
//WAP to enter price of 4 items and calculate total ,discount and payble amount using if() else
//( discount is 14% if amount exceeds more than 500 otherwise 3% )
/**
#include<stdio.h>
 int main()
 {
     float a,b,c,d,tot,dis,pay;

     printf("enter price of 4 itoms : ");
     scanf("%f%f%f%f",&a,&b,&c,&d);

     tot=a+b+c+d;
     printf("\n total price = %0.3f",tot);
     if(tot>500)
     {
         dis=tot*0.17;
     }
     else
     {
         dis=tot*0.3;
     }


     printf("\n Discount = %0.2f",dis);
     printf("\n Payble amount is %0.2f",(tot-dis));

     return 0;

 }
*/
//-----------------------------------------------------------------------------------------------------------------------------------
// WAP to find max between 3 nos using only if().
/**
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n Enter any value of a b c : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("\n A is max ");
    }
    if(b>c && b>a)
    {
        printf("\n B is max ");
    }
    if(c>b && c>a)
    {
        printf("\n C is max ");
    }

    return 0;

}
*/
//-----------------------------------***************************************************---------------------------------------
//Wap to find max between 3 nos using if() else
/**
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n Enter any three value : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is MAX Number",a);
    }
    if(b>c && b>a)
    {
        printf("%d is MAX Number",b);
    }
    else
    {
        printf("%d is MAX Number",c);
    }
    return 0;// eg a=30,b=20,c=10 ==>output 30 is max10 is max (so we use nested if()else.
}
*/
//-----------------------------------------------------------------------------------------------
//WAP to Enter any no and display the entered  no is even or odd ( using if() else)
/**
int main()
{
    int no;

    printf("\n Enter any no : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("\n %d is Even ",no);
    }
    else
    {
        printf("\n %d is Odd",no);
    }

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------
//WAp to enter any no check if it even or odd .if no is even then add 100 in it otherwise multiplyd by 10
/**
#include<stdio.h>
int main()
{
    int no,ans;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    if(no%2==0)
    {
        ans=no+100;
        printf("%d is even Number ",no);
    }
    else
    {
        ans=no*10;
        printf("%d is odd Number ",no);
    }
    printf("\nAnswer = %d",ans);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------
// WAP to enter any no check no is divisible  by 3 or 5 or divisible by both or not by both
/**
#include<stdio.h>
int main()
{
    int no;

    printf(" Enter any number : ");
    scanf("%d",&no);

    if(no%3==0)
    {
        if(no%5==0)
        {
            printf("\n %d is divisible by both 3 and 5",no);
        }
        else
        {
            printf("\n %d is divisible by only 3",no);

        }
    }
    else
    {
        if(no%5==0)
        {
           printf("\n %d is divisible by only 5",no);
        }
        else
        {
            printf("\n %d is not divisible by 3 and 5",no);
        }
    }
    return 0;

}
*/
//-------------------------------------------------------*****************************************************************
// WAp to find max between 3 nos
/**
#include<stdio.h>
int main()

{
    int a,b,c;

    printf("\n Enter any number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\n %d is max Number",a);
        }

    }
    else
    {
        if(b>c)
        {
            printf("\n %d is max Number",b);
        }
        else
        {
            printf("\n %d is max number",c);
        }
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------
//WAp to enter any character through keyboard check whether it is uppercase,lowcase ,digit or special symbol
/**
#include<stdio.h>
int main()
{
    char ch;

    printf("\n Enter any character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is Uppercase character ",ch);
    }
    else
    {
        if(ch>='a' && ch<='z')
        {
            printf("\n %c is lower case character",ch);
        }
        else
        {
            if(ch>='0' && ch<='9')
            {
                printf("\n %c is Digit",ch);
            }
            else
            {
                printf("\n %c is speical chararcter ",ch);
            }

        }
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
// Write a menu driven program to check
/**
#include<stdio.h>
int main()
{
    int no,opt;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    printf("\n********SELECT YOUR OPITION*********");
    printf("\n 1) -,+,zero;\t2) even or odd");
    printf("\n Enter your opition : ");
    scanf("%d",&opt);

    if(opt==1)
    {
        if(no==0)
        {
            printf("\n %d is zero number",no);
        }
        else
        {
            if(no>0)
            {
                printf("\n %d is positive number",no);
            }
            else
            {
                printf("\n %d is Negative Number",no);
            }
        }
    }
    else
    {
        if(opt==2)
        {
           if(no%2==0)
           {
               printf("\n %d is Even Number",no);
           }
           else
           {
               printf("\n %d is Odd Number",no);
           }
        }
        else
        {
            printf("\n Incorrect option !!!!");
        }

    }
    printf("\n\n\nThank You.......visit again\n\n");
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------
//enter any number  and find it is +ve, -ve or zero by using else if ladder
/**
#include<stdio.h>
int main ()

{
    int no;

    printf("\n enter any number : ");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n number is +ve");
    }
    else if(no<0)
    {
        printf("\n number is +ve");
    }
    else
    {
        printf("\n number is zero");
    }
    return 0;

 */
//---------------------------------------------------------------------------------------------
//Enter the salry of person and display his poisition in company
/**salaary range
           | 1)  <2000 = worker           |
           | 2)  2000-5000 = trainee      |
           | 3)  5000-9000 = junior       |
           | 4)  9000-11000 = SENIOR      |
           | 5)  11000-15000 = director   |
           | 6)  >15000    =  CEO         |
           |_____________________________*/
/**
#include<stdio.h>
int main()
{
    int salary;

    printf("\n enter the salary of a person : ");
    scanf("%d",&salary);

    if(salary<2000)
    {
        printf("\n position : worker");
    }
    else if(salary<5000)
    {
      printf("\n position : trainee");
    }
    else if(salary<9000)
    {
      printf("\n position : junior");
    }
    else if(salary<11000)
    {
      printf("\n position : senior");
    }
    else if(salary<15000)
    {
      printf("\n position : Director");
    }
    else
    {
      printf("\n position : CEO");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------
// Enter the co-ordinates of point in the 2D system, and find its exact location
 /**




                                 y axis

               II qd                ^               I qd
               (-,+)                |
                                    |           (+,+)
                                    |
                                    |
                                    |
-x axis                             |
     <------------------------------|---------------------------------> x axis
                                    |(0,0)
                                    |
                                    |
                                    |
                                    |
                                    |
            (-,-)                   |               (+,-)
            III qd                  |               IV qd
                                    |
                                    V
                                -y axis
------------                                                      */
 /**
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter the x and y co- ordinates : ");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
         printf("\n first qudrant");
    }
    else if(x<0 && y>0)
    {
         printf("\n second qudrant");
    }
    else if(x<0 && y<0)
    {
         printf("\n third qudrant ");
    }
    else if(x>0 && y<0)

    {
         printf("\n fourth qudrant");
    }
    else if(x>0 || ((x<0 && y==0))
    {
         printf("\n on X axis");
    }
    else if(( x==0 && y>0) || y<0)
    {
         printf("\n on Y axis");
    }
    else
    {
         printf("\n on origin ");
    }

    return 0;

}
*/
/********************************************************************************************************************************************/
                                                   /****LOOPS******/
/********************************************************************************************************************************************/
/**
#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}
*/
//---------------------------------
/**
#include<stdio.h>
int main()
{
    printf("\nHello World");
    printf("\nHello World");
    printf("\nHello World");
    printf("\nHello World");
    printf("\nHello World");

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
 /**                                            //FOR LOOP
#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<5;i++)
    {
         printf("\nHello World");
    }

    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<10;i+=2)//i=i+2
    {
         printf("\nHello World");
    }

    return 0;
}
*/
//------------------------------------------
/**
#include<stdio.h>
int main()
{
    int i;

    for(i=50;i<75;i+=5)//i=i+2
    {
         printf("\n Hello World");
    }

    return 0;
}
*/
//---------------------------------
/**
#include<stdio.h>
int main()
{
    int i;

    for(i=70;i>=50;i-=5)
    {
        printf("\nHello World");
    }

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------------------
////WAP to display even nos from 1 to 100
/**
#include<stdio.h>
int main()
{
    int i;
    printf("\n even no from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("\t %d",i);
        }
    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------------
//WAP to display even  and odd nos from 1 to 100
/**
#include<stdio.h>
int main()
{
    int i;
    printf("\n even no from 1 to 100 are : ");

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
           {
               printf("\t %d",i);
           }
    }

    printf("\n odd no from 1 to 100 are : ");
    for(i=1;i<=100;i++)
    {
        if(i%2==1)//i%2!=0
            printf("\t%d",i);
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//Another way to display even and odd nos
/**
#include<stdio.h>
int main()
{
    int i;
    printf("\n even no from 1 to 100 are : ");
    for(i=2;i<=100;i+=2)
    {
        printf("\t%d",i);
    }

    printf("\n odd no from 1 to 100 are : ");
    for(i=1;i<=100;i+=2)
    {
        printf("\t%d",i);
    }


    return 0;


}
*/
//---------------------------------------------------------------------------------------------------------------------------------------
/// WAP to display All natural nos from 1 to n ..
/**
#include<stdio.h>
int main()
{
    int i,n;

    printf("\n Enter last number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\t%d",i);
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------
/// WAP to display All natural nos from N to N...
/**
#include<stdio.h>
int main()
{
    int i,start,end;
    printf("\n enter first no : ");
    scanf("%d",&start);
    printf("\n enter last no : ");
    scanf("%d",&end);

    for(i=start;i<=end;i++)
    {
        printf("\t%d",i);
    }
    return 0;
}
*/
///----------------------------------------------------------------------------------------------------------
///WAP to display addition of 1 to 10 nos
/**
#include<stdio.h>
int main()
{
    int i,add=0;


    for(i=1;i<=10;i++)
    {
        add=add+i;
        printf("\n Add = %d",add);
    }
     printf("\n The addition of 1 to 10 no is : %d",add);

     return 0;
}
*/
///-----------------------------------------------------------------------------------------------------------------------------
///wap to add 10 no enter through keyboard
/**
#include<stdio.h>
int main()
{
    int i,no,add=0;

    printf("\n enter 10 number through keboard : ");


    for(i=0;i<10;i++)
    {
        scanf("%d",&no);
        add=add+no;
        printf("%d next number =>  ",no);

    }
    printf("\n Addition of 10Number is %d ",add);
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------------------------------------
// wap enter any number and add all digit in it (using loop)
/**
#include<stdio.h>
int main()
{
    int no,add,rem;
    printf("Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        add=add+rem;
       // printf("\n  Add is %d ",add);//
        no=no/10;
    }
    printf("\n addition of all digit : %d",add);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------------
/*************************************anthor way******************/
/**
#include<stdio.h>
int main()
{
    int no,add,rem;
    printf("Enter any number : ");
    scanf("%d",&no);

    for(add=0;no!=0;no=no/10)
    {
        rem=no%10;
        add=add+rem;
    }
     printf("\n addition of all digit : %d",add);
    return 0;

}
*/
//---------------------------------------------------------------------------------------
//wap to enter any number and disply the reverse number
/**
#include<stdio.h>
int main()
{
    int no,rev,rem;
    printf("Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
     printf("\n reverse number : %d",rev);
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
//WAP to enter any no and add even and odd digits  separately
/**
#include<stdio.h>
int main()
{
    int no,even,odd,rem;
    printf("even=%d ",even);
    printf("odd=%d ",odd);
    printf("rem=%d ",rem);


    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(odd=0;no!=0;)//odd=0(because=odd number garbage value is 16 so to clean that we us this odd=0.
    {
        rem=no%10;
        if(rem%2==0)
        {
            even=even+rem;
        }
        else
        {
            odd=odd+rem;
        }
        no=no/10;
    }
    printf("\n Even NO Addition : %d\n Odd Number Addition :  %d",even,odd);

    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------
//WAP to enter any no and count the digits in it.
/**
#include<stdio.h>
int main()
{
    int no,rem,count;
    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(count=0;no!=0;)
    {
        rem=no%10;
        count++;
        no=no/10;
    }

    printf("\n Digit Count : %d",count);

    return 0;


}

*/
//---------------------------------------------------------anthor way-----------------------------------------------------
/**
#include<stdio.h>
int main()
{
    int no,rem,count;
    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(count=0;no!=0;count++,no=no/10);


    printf("\n Digit Count : %d",count);

    return 0;


}
*/
//--------------------------------------------------------------------------------------------------------------
//WAP to enter any no and count even digit and odd digit from it .
/**
#include<stdio.h>
int main()
{
    int no,rem,evencount=0,oddcount=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        if(rem%2==0)
        {
            evencount++;
            printf("\n even %d",evencount);
        }
        else
        {
            oddcount++;
           printf("\nodd : %d",oddcount);

        }
        no=no/10;
    }
    printf("\n Even NO count : %d\n Odd NO count :  %d",evencount,oddcount);

    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------------
//Wa.p enter any any number an find max digit from it eg 38579=>max digit =9
/**
#include<stdio.h>
int main()
{
    int no,rem,max=0;
     printf("\n Enter any number : ");
     scanf("%d",&no);

     for(;no!=0;)
     {
         rem=no%10;
         if(rem>max)
         {
            max=rem;

         }
         no=no/10;
     }
     printf("\n max number : %d",max);
     return 0;
}

*/
//-------------------------------------------------------------------------------------------------
//wap to find min number in enterd number
/**
#include<stdio.h>
int main()
{
    int no,rem,min=9;
    printf("\n Enter any number : ");
     scanf("%d",&no);

     for(;no!=0;)
     {
         rem=no%10;
         if(rem<min)
         {
             min=rem;
         }
         no=no/10;
     }
     printf("\n Minimum Number is : %d",min);
     return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------
//wap to display evenmax ,oddmax, evenmin, oddmin from enterd number.
/**
#include<stdio.h>
int main()
{
    int no,rem,com,evenmax=0,oddmax=0,evenmin=8,oddmin=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {

        rem=no%10;
        if(rem%2==0)
        {
           if(rem>=evenmax)
           {
              evenmax=rem;

              if(rem<evenmin)
               {
                 evenmin=rem;
               }
           }
           else  if(rem<evenmin)
               {
                 evenmin=rem;
               }
        }
        else
        {
            if(rem>=oddmax)
            {
                oddmax=rem;
                if(rem<oddmin )
                {
                    oddmin=rem;
                }
            }
            else if(rem<oddmin)
                {
                    oddmin=rem;
                }
        }

    }
    printf("\n Even maximum number : %d\n Odd maximum Number : %d\nEven Minimum Number : %d\nOdd Minimum Number : %d",evenmax,oddmax,evenmin,oddmin);

    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------
//wap enter any no and add alternate digit from it
/**
#include<stdio.h>
int main()
{
    int no=0,rem,add=0,s1=0,s2=0,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=0;no!=0;i++)
    {
        rem=no%10;
        if(i%2==0)
        {
            s1=s1+rem;
        }
        else
        {
            s2=s2+rem;
        }
        no=no/10;
    }
    printf("\n s1= %d\n s2=%d",s1,s2);

    return 0;
}
--------------------------------------------Another Way------------------------------------------------------*/
//by using flg
/**
#include<stdio.h>
int main()
{
    int no,rem,s1=0,s2=0,flg=0;
     printf("\n Enter any number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;

        if(flg==0)
        {
            s1=s1+rem;
            flg=1;
        }
        else
        {
            s2=s2+rem;
            flg=0;
        }
        no=no/10;

    }
    printf("\n s1= %d\n s2=%d",s1,s2);

    return 0;



}
*/
//------------------------------------------------------------------------------------------------------------------
//WAP to find the max no from entered no  ex- 182943     max no - 984321
/**
#include<stdio.h>
int main()
{
    int no,rem,d=9,max=0,tmp;
    printf("\n Enter any number : ");
    scanf("%d",&no);

    tmp=no;
    for(d=9;d>=0;d--)
    {
        no=tmp;
        for(;no!=0;)
        {

            rem=no%10;
            if(rem==d)
            {
               max=(max*10)+rem;
            }
            no=no/10;
        }

    }
    printf("\n max no = %d",max);
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------------------
////WAP to find evenmax and oddmax from entered no
/**
#include<stdio.h>
int main()
{
    int no,d,evenmax=0,oddmax=0,rem,tem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;


    for(d=9;d>=0;d--)
    {
        no=tem;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                if(rem%2==0)
                {
                    evenmax=(evenmax*10)+rem;
                }
                else
                {
                    oddmax=(oddmax*10)+rem;
                }
            }

            no=no/10;
        }
    }
    printf("\n Maximum even no = %d\n Maximum Odd no = %d",evenmax,oddmax);
    return 0;


}
*/
















//-------------------------------------------------------------------------------------------------------
//wap count the digits in entered number and add every digit^count.//eg 123= 1^3+2^3+3^3=36
/**
#include<stdio.h>
int main()
{
    int no,d,rem,ans=1,i,tmp,sum=0;

    printf("\n ENter any no : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;no!=0;d++,no=no/10);
    no=tmp;

    for(;no!=0;no=no/10)
    {
        rem=no%10;

        i=0;
        ans=1;
        while(i<d)
        {
            ans=ans*rem;
            i++;

        }

        sum=sum+ans;

    }

    printf("Addition : %d",sum);
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------
// wap to enter any number and chech whether it is armstrong number or not
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,sum=0,ans,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;no!=0;d++,no=no/10);

    no=tmp;

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        i=0;
        ans=1;
        while(i<d)
        {
            ans=ans*rem;
            i++;
        }
        sum=sum+ans;
    }
    no=tmp;
    if(sum==no)
    {
        printf("\n %d is armstrong Number ",no);

    }
    else
    {
        printf("\n %d is not armstrong number",no);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
//wap to enter any number and check wheter it is palendrom or not eg 121 no==reverce no
/**
#include<stdio.h>
int main()
{

    int no,rem,rev=0,tmp;

    printf("\n enter any number : ");
    scanf("%d",&no);
    tmp=no;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;

    }
    no=tmp;
    if(no==rev)
    {
        printf("\n %d number is palindrome number",no);

    }
    else
    {
        printf("\n %d number is NOT palindrome number",no);
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------
//wap enter no and find find the repitation onof digit 7
/**
#include<stdio.h>
int main()
{

    int no,rem,count=0;

    printf("\n Enter  number : ");
    scanf("%d",&no);


    for(;no!=0;no=no/10)
    {
        rem=no%10;
        if(rem==7)
        {
            count++;
        }

    }
    printf("\n in number 2712777 %d times 7 repeting",count);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------
//wap to find repetation of each digit from enterd number for eg 188311 (1repeted 3 times)
/**
#include<stdio.h>
int main()
{
    int no,rem,d,count,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;d<10;d++)
    {
        no=tmp;

        count=0;
      while(no!=0)
      {
          rem=no%10;
          if(rem==d)
          {
             count++;//printf("\n count = %d",count);
          }
            no=no/10;
      }
      if(count>1)
          {
             printf("\n %d is %d time repeting",d,count);
          }

    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------
//wap to find missing digit of enterd number eg 3951=> 0,2,4,6,7,8
/**
#include<stdio.h>
int main()
{
    int no,rem,d,tem,flg;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tem=no;
    printf("\n Missing Digit : ");

    for(d=0;d<10;d++)
    {
        flg=0;
        no=tem;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                flg=1;
                break;
            }

            no=no/10;

        }
        if(flg==0)
        {
            printf(" %d",d);
        }


    }
    return 0;

}
*/
//------------------------------------------------------------------------------------------------------
////WAP to display entered no is prime or not
/**
#include<stdio.h>
int main()
{
    int no,d=2,flg=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    while(d<=(no/2))
    {
        if(no%d==0)
        {
            flg=1;
            break;
        }
        d++;
    }
    if(flg==0 && no!=1)
    {
        printf("\n %d is prime number",no);
    }
    else
    {
        printf("\n %d is Not prime Number",no);
    }

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()

{
    int no,rem,tem,d,i,ans=1,nno;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;

    for(d=0;no!=0;d++,no=no/10);



    for(i=1;i<d;i++)
    {
        ans=(ans*10);
    }

    no=tem;
    rem=no%10;
    nno=rem*ans; // printf("Number=%d",nno);

    no=no%ans;
    no=no/10;
    no=no*10;
    tem=tem/ans;

    nno=(nno+no)+tem;

    printf("\New Number : %d",nno);


    return 0;

}

*/
/**--------------------------------------------------------------------------------------------------------------------------------
                                              PATERN
---------------------------------------------------------------------------------------------------------------------------------*/

                       /**   wap to display patern
                   *****
                   *****
                   *****
                   *****
                   *****
                   */
/**
 #include<stdio.h>
 int main()
 {
     int i;
     for(i=0;i<5;i++)
     {
         printf("*****");
         printf("\n");
     }
     return 0;
 }
 */
 //-------------anthoer way----------
/**
 #include<stdio.h>
 int main()
 {
     int i,j;

     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }
*/
//---------------------------------------------------------------------------------------------------------------------------
/**
*****
*   *
*   *
*   *
*****         */

/*

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
/**
*
**
***
****
*****
                                           */

/**)
#include<stdio.h>
int main()

{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------
/**

*****
****
***
**
*                */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(5-i))
            {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------

/**

*****
 ****
  ***
   **
    *
                           */

 /**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j>=i)//only using else program is run.
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------

/**

    *
   **
  ***
 ****
*****                    */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))//0<=5
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------------
/**

    *
   * *
  * * *
 * * * *
* * * * *

                          */


 /**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------
/**

* * * * *
 * * * *
  * * *
   * *
    *
                  */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------
/** odd number

    *
   ***
  *****
 *******
*********

                    */

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<(5+i);j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------anthoer way--------------------------
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for(j=0;j<4;j++)
        {
            if(j<i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------
/**

***********
 *********
  *******
   *****
    ***
     *
                           */

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<(11-i);j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------
/**

     *
    ***
   *****
  *******
 *********
***********

*/
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<(6+i);j++)
        {
            if(j<(5-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
/**

     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<5-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<=i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------anthoer way--------------
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<11;i++)
    {

        for(j=0;j<6;j++)
        {

            if(i<6)
            {
                if(j<(5-i))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {

                if(6+j<=i)
                {

                    printf(" ");
                }
                else
                {

                    printf("*");
                }
            }

        }
        printf("\n");


    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
/**

*
**
***
****
*****
******
*****
****
***
**
*

*/

/**
 #include<stdio.h>
 int main()
 {
     int i,j;

     for(i=0;i<11;i++)
     {
         for(j=0;j<6;j++)
         {
             if(i<6)
             {
                 if(j<=i)
                 {
                     printf("*");
                 }

             }
             else
             {
                 if(j<(6+5)-i)
                 {
                     printf("*");
                 }
             }
         }
         printf("\n");
     }
     return 0;
 }

 */
 ///======================================================================================================================================================
 ///-----------------------------------------SWITCH---CASE----------------------------------------------------------------------------
///======================================================================================================================================================
/// WAP to perform the add,sub, multi, div according to  the users choice by usibg switch case.
//
//#include<stdio.h>
//int main()
//{
//    int opt;
//    float  n1,n2,ans;
//
//    printf("\n***********Welcome to calculator***********");
//    printf("\n=========OPTION===========");
//    printf("\n 1.addition \t2. sub \t 3.mul \t 4.div");
//    printf("\n Select Your Option ");
//    scanf("%d",&opt);
//    printf("\n Enter first Number : ");
//    scanf("%f",&n1);
//    printf("\n Enter second Number : ");
//    scanf("%f",&n2);
//
//    switch(opt)
//    {
//        case 1:
//            ans=n1+n2;
//            break;
//
//        case 2:
//            ans=n1-n2;
//            break;
//
//        case 3:
//            ans=n1*n2;
//            break;
//
//        case 4:
//            ans=n1/n2;
//            break;
//
//        default:
//            printf("\n !!! Incorrect option ");
//
//    }
//
//    printf("\n Answer : %0.2f",ans);
//
//    return 0;
//}
///===========================================================================================================
/// using the switch case within decision statements
/**
#include<stdio.h>
int main()
{
    int opt;
    float n1,n2,ans;

    printf("\n=============menu=============\n");
    printf("\n1.add\n2.sub\n3.multi\n4.div\n");
    printf("\n Select your option : ");
    scanf("%d",&opt);



    if(opt>=1 && opt<=4)
     {

        printf("\n Enter Any two number : ");
        scanf("%f%f",&n1,&n2);
        switch(opt)
        {
            case 1:
                ans=n1+n2;
                break;
            case 2:
                ans=n1-n2;
                break;
            case 3:
                ans=n1*n2;
                break;
            case 4:
                ans=n1/n2;
                break;
        }
        printf("\n The Answer is : %.2f",ans);
    }
    else
        printf("\n Incoreect option !!!");

    return 0;
}
*/
    ///===========================================================================================================
    ///using the switch case within loop
/**
#include<stdio.h>
int main()
{
    int opt;
    float n1,n2,ans;

    while(1)
    {
        ans=0;
        printf("\n=============menu=============\n");
        printf("\n1.add\n2.sub\n3.multi\n4.div\n");
        printf("\n Select your option : ");
        scanf("%d",&opt);
        printf("\n Enter Any two number : ");
        scanf("%f%f",&n1,&n2);

        switch(opt)
        {
            case 1:
                ans=n1+n2;
                break;
            case 2:
                ans=n1-n2;
                break;
            case 3:
                ans=n1*n2;
                break;
            case 4:
                ans=n1/n2;
                break;
            default:
                printf("\n Incorrect Option !!!");
        }
        printf("\n The answer Is :- %f",ans);
    }
    return 0;

}

*/
///===========================================================================================================
///using the switch case within infinite loop (using break to stop)
/**
#include<stdio.h>
int main()
{
    int opt;
    float n1,n2,ans;

    while(1)
    {
        ans=0;
        printf("\n=============menu=============\n");
        printf("\n1.add\n2.sub\n3.multi\n4.div\n5.stop\n");
        printf("\n Select your option : ");
        scanf("%d",&opt);
        printf("\n Enter Any two number : ");
        scanf("%f%f",&n1,&n2);

        if(opt==5)
        {
            break;
        }
        else
        {
            switch(opt)
            {
                case 1:
                    ans=n1+n2;
                    break;
                case 2:
                    ans=n1-n2;
                    break;
                case 3:
                    ans=n1*n2;
                    break;
                case 4:
                    ans=n1/n2;
                    break;
                default:
                    printf("\n Incoreect Option !!!");

            }
            printf("\n The Answer is :- %f",ans);

        }
    }
    return 0;
}

*/

///===========================================================================================================
/// using the switch case within infinite loop (using exit() to stop)

/**
#include<stdio.h>
int main()
{
    int opt;
    float n1,n2,ans;

    while(1)
    {
        printf("\n=============menu=============\n");
        printf("\n1.add\n2.sub\n3.multi\n4.div\n5.stop\n");
        printf("\n Select your option : ");
        scanf("%d",&opt);
        printf("\n Enter Any two number : ");
        scanf("%f%f",&n1,&n2);

        switch(opt)
        {
            case 1:
                    ans=n1+n2;
                    break;
                case 2:
                    ans=n1-n2;
                    break;
                case 3:
                    ans=n1*n2;
                    break;
                case 4:
                    ans=n1/n2;
                    break;
                case 5:
                    exit(0);//return;
                default:
                    printf("\n Incoreect Option !!!");

        }
        if(opt>=1 && opt<=4)
            printf("\n The Answer is : %f",ans);
    }
    return 0;

}

*/
///===========================================================================================================
///using char as a option in the switch case
/**
#include<stdio.h>
int main()
{
    char opt;
    float n1,n2,ans;


        printf("\n=============menu=============\n");
        printf("\na.add\nb.sub\nc.multi\nd.div\n");
        printf("\n Select your option : ");
        scanf("%c",&opt);
        printf("\n Enter Any two number : ");
        scanf("%f%f",&n1,&n2);

        switch(opt)
        {



            case 'a':
            case 'A':
            ans=n1+n2;
            break;

            case 'b':
            case 'B':
            ans=n1-n2;
            break;

            case 'c':
            case 'C':
            ans=n1*n2;
            case 'd':
            break;

            case 'D':
            ans=n1/n2;
            break;
            default:

            printf("\n incorrect opition !!!");

        }
        printf("\n The Anaswe is : %.2f",ans);

    return 0;
}

*/
///===========================================================================================================
/// using char as a option in the switch case (default case if a different way)\

/**
int main()
{
    char opt;
    float n1,n2,ans;

    printf("\n ========Menu=========\n");
    printf("\na.Add\nb.sub\nc.multi\nd.div");
    printf("\nselcet your option: ");
    scanf("%c",&opt);

    printf("\nEnter any two number: ");
    scanf("%f%f",&n1,&n2);

    switch(opt)
    {
        default:
            printf("\n incorrect Option..!!!");
            return;
        case 'a':
        case 'A':
            ans=n1+n2;
            break;
        case 'b':
        case 'B':
            ans=n1-n2;
            break;
        case 'c':
        case 'C':
            ans=n1*n2;
            break;
        case 'd':
        case 'D':
            ans=n1/n2;
            break;
    }
    printf("\n The Answer is: %f",ans);
    return 0;
}

*/
///===========================================================================================================
///C program to read weekday number and print weekday name using switch.
///This program will read weekday number and print its corresponding week name switch case statement in C language.

/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter number between 1 to 7 : ");
    scanf("%d",&no);

    switch(no)
    {
        case 1:
            printf("\tMonday");
            break;
        case 2:
            printf("\tTuesday");
            break;
        case 3:
            printf("\tWednesday");
            break;
        case 4:
            printf("\tThursday");
            break;
        case 5:
            printf("\tFriday");
            break;
        case 6:
            printf("\tSaturday");
            break;
        case 7:
            printf("\tsunday");
            break;
        default:
            printf("\t incorrect opition !!!");

    }
    return 0;
}
*/
///===========================================================================================================
///C program to read gender (M/F) and print corresponding gender using switch.This program will read gender in single character
///like 'M' or 'F' and print its corresponding complete word "Male" or "Female" using switch case statement in C language.
//
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    printf("\n******Select your Gender******** \n 'M'\t 'F' : ");
//    scanf("%c",&ch);
//
//    switch (ch)
//        {
//            case 'M':
//            case 'm':
//                printf("M = male");
//                break;
//
//            case 'F':
//            case 'f':
//                printf("F = female");
//                break;
//
//
//            default:
//                printf("Incorrect opition !!!");
//        }
//
//        return 0;
//}
///===========================================================================================================
///C program to check whether a character is VOWEL or CONSONANT using switch.
///This program will read a character and check whether it is VOWEL or CONSONANT using switch case statement in C language.

//
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    printf("\n please enter any character : ");
//    scanf("%c",&ch);
//
//    switch(ch)
//    {
//        case 'a':
//        case 'A':
//        case 'e':
//        case 'E':
//        case 'i':
//        case 'I':
//        case 'o':
//        case 'O':
//        case 'u':
//        case 'U':
//            printf("\n chatacter is VOWEL");
//            break;
//
//        default:
//        if((ch>'a' && ch<'z')|| (ch<'A' && ch>'Z'))
//            printf("\n character is CONSONEAT");
//        else
//            printf("\n Incoreect opition !!!");
//
//    }
//    return 0;
//}
///===============================================================================================================================
///C program to find number of days in a month using switch case.
///This program will read month value and print total number of days in input month in C language.
 /**
#include<stdio.h>
int main()
{
    int month;

    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input!");

    }

    return 0;
}

///===========================================================================================================
///                                  Unconditional conterl statment
///===========================================================================================================

/**
#include<stdio.h>
int main()
{
    int no,tot=0;

    no=1;
    back:tot=tot+no;
    no++;
    if(no<=10)
    {
        goto back;
    }
    printf("\n Total = %d",tot);

    return 0;
}

*/
///==============================================================================================================================
///                                               Array
///==============================================================================================================================
///wap to collect persentage of 5 student by using array
//#include<stdio.h>
//int main()
//{
//    int per[5];
//
//    printf("\n Enter The persentage of 5 student : ");
//    scanf("%d",&per[0]);
//    scanf("%d",&per[1]);
//    scanf("%d",&per[2]);
//    scanf("%d",&per[3]);
//    scanf("%d",&per[4]);
//
//    printf("\n Persentege of 5 student : ");
//    printf("\n %d",per[0]);
//    printf("\n %d",per[1]);
//    printf("\n %d",per[2]);
//    printf("\n %d",per[3]);
//    printf("\n %d",per[4]);
//    return 0;
//
//}
///===============================================================================================================================
/// wap to collect persentage of 5 student by using array by loop.
//
//#include<stdio.h>
//int main()
//{
//    int i;
//    float per[5];
//
//    printf("\n Enter Persentage of 5 student :");
//    for(i=0;i<5;i++)
//    {
//        scanf("%f",&per[i]);
//    }
//    for(i=0;i<5;i++)
//    {
//        printf("\n%.2f",per[i]);
//    }
//    return 0;
//}

///=======================================================================================================================
/// initialtion of array and display.
//
//#include<stdio.h>
//int main()
//{
//    int i,x[5]={12,56,84,96,35};
//
//    printf("\n Element are : ");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\n%d",x[i]);
//    }
//    return 0;
//}
///=======================================================================================================================
///wap Enter any number and add by using array.
/**
#include<stdio.h>
int main()
{
    int i,x[5],add=0;

    printf("\n Enter 5 no : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        add=add+x[i];
    }
    printf("\n Addition = %d",add);

    return 0;
}
*/
///---------Anthoer way----------------

//#include<stdio.h>
//int main()
//{
//    int i,x[5],add=0;
//
//    printf("\n Enter 5 no : ");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//        add=add+x[i];
//    }
//
//    printf("\n Addition = %d",add);
//    return 0;
//
//}
///==========================================================================================================================
///Wap to enter 5 no and find even no and add;
//
//#include<stdio.h>
//int main()
//{
//    int i,x[5],add=0;
//
//    printf("\n Enter any 5 no : ");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n even No are :-");
//    for(i=0;i<5;i++)
//    {
//        if(x[i]%2==0)
//        {
//            printf("%5d",x[i]);
//            add=add+x[i];
//        }
//    }
//    printf("\n Addition of Even number = %d",add);
//    return 0;
//}
///===========================================================================================================================
///Wap to enter 5 no and find max no by using array.
//
//#include<stdio.h>
//int main()
//{
//    int i,x[5],max=0;
//
//    printf("\n enter any 5 no : \n");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//
//        if(max<x[i])
//        {
//            max=x[i];
//        }
//    }
//    printf("\n Max no = %d",max);
//
//    return 0;
//}
///========================================================================================================================
///Wap to take array of 5 elements and search the enterd no through keyboard in an array and display the no with position.
//
//#include<stdio.h>
//int main()
//{
//    int i,no,x[5],pos=-1;
//
//    printf("\n Enter any 5 no :");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter position we want : ");
//    scanf("%d",&no);
//
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//
//        if(no==x[i])
//        {
//            pos=i;
//        }
//    }
//    if(pos!=-1)
//    printf("\n%d no present at %d^rd position",no,pos+1);
//    else
//    printf("\n%d no is not present in array",no);
//
//    return 0;
//}
///========================================================================================================================
/// wap to enterd the array of 6 element and copy this array into anthoer location.
//
//#include<stdio.h>
//int main()
//{
//    int i,x[6],y[6];
//
//    printf("\n Enter any 6 number : ");
//
//    for(i=0;i<6;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\noriginal array : ");
//    for(i=0;i<6;i++)
//    {
//        printf("%5d",x[i]);
//        y[i]=x[i];
//    }
//    printf("\ncopid array    : ");
//
//    for(i=0;i<6;i++)
//    {
//        printf("%5d",y[i]);
//    }
//    return 0;
//}
///=========================================================================================================================
///wap to enter the array of 5 elements and copy thia array in reverse mnner.


//#include<stdio.h>
//int main()
//{
//    int i,j,x[5],y[5];
//
//    printf("\n Enter any 5 numbers : ");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Original Array -->: ");
//    for(i=0,j=4;i<5;i++,j--)
//    {
//        printf("%5d",x[i]);
//        y[j]=x[i];
//    }
//    printf("\n Copid array <--   : ");
//    for(j=0;j<5;j++)
//    {
//         printf("%5d",y[j]);
//    }
//    return 0;
//}
//

///---------Anthoer----------way----------------------------

//
//#include<stdio.h>
//int main()
//{
//    int i,j,x[5],y[5];
//
//    printf("\n Enter any 5 numbers : ");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Original Array -->: ");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\n Copid array <--   : ");
//    for(i=4;i>=0;i--)
//    {
//         printf("%5d",x[i]);
//    }
//    return 0;
//}
///=================================================================================================================================
/// Enter any 10 nos and replace all odd number with -3.
//
//#include<stdio.h>
//int main()
//{
//    int i,x[10];
//
//    printf("\n Enter any 10 number : ");
//
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//
//    }
//    printf("\n output : ");
//    for(i=0;i<10;i++)
//    {
//        if(x[i]%2==0)
//        {
//            printf("\t%d",x[i]);
//        }
//        else
//        {
//            printf("\t-3");
//        }
//    }
//    return 0;
//}

///============================================================================================================================
/// Enter the 10 No nos and add even and odd nos separately
//
//#include<stdio.h>
//int main()
//{
//    int i,x[10],eadd=0,oadd=0;
//
//    printf("\n Enter any 10 Number : ");
//
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//        if(x[i]%2==0)
//        {
//            eadd=eadd+x[i];
//        }
//        else
//        {
//            oadd=oadd+x[i];
//        }
//    }
//
//    printf("\n Addition of Even Number is %d",eadd);
//    printf("\n Addition of odd Number is  %d",oadd);
//
//    return 0;
//}
///============================================================================================================================
///Enter the price of 7 items and find the total bill. the discount is 6% when bill is upto 1000 otherwise 14%
//
//#include<stdio.h>
//int main()
//{
//    int i,x[7];
//    float tot=0,dis=0;
//
//    printf("\n Enter the price of 7 items");
//
//    for(i=0;i<7;i++)
//    {
//        scanf("%d",&x[i]);
//
//        tot=tot+x[i];
//        if(tot<1000)
//        {
//            dis=tot*0.06;
//        }
//        else
//        {
//            dis=tot*0.14;
//        }
//    }
//    printf("\n Total bill : %.2f",tot);
//    printf("\n Discount : %.2f",dis);
//    printf("\n Payble Amount : %.2f",tot-dis);
//
//    return 0;
//}
///============================================================================================================================
/// Enter the N nos and add even and odd nos separately
/**
#include<Stdio.h>
#define SIZE 100
int main()
{
    int x[SIZE],no,i,eadd=0,oadd=0;

    printf("\n Enter nth number in less than 100: ");
    scanf("%d",&no);

   if(SIZE<no)
   {
       printf("\n Insufficient memory ");
   }
   else
   {
        for(i=0;i<=no;i++)
        {
            x[i]=i;
            if(x[i]%2==0)
            {
                eadd=eadd+x[i];
            }
            else
            {
                oadd=oadd+x[i];
            }
        }
        printf("\n Even Addition = %d \t Odd Addition = %d",eadd,oadd);

   }
   return 0;
}

*/

///============================================================================================================================
///  WAP to count the Armstrong numbers in an array
///  nos 0    1     2     3     4     5     6     7      8       9
///  [23]  [45]  [90]  [81]  [72]  [153]  [34]  [67]  [1634]  [57]

/**
#include<stdio.h>
int main()
{
    int x[10],i,j,rem,sum,add,d,tmp;

    printf("\n enter any 10 Number : ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Armstrong Number list : ");
    for(i=0;i<10;i++)
    {
        tmp=x[i];
        sum=0;
        for(d=0;x[i]!=0;d++,x[i]=x[i]/10);
        x[i]=tmp;
        while(x[i]!=0)
        {
            rem=x[i]%10;

            j=0;
            add=1;
            while(j<d)
            {
                add=add*rem;
                j++;
            }
            sum=sum+add;
            x[i]=x[i]/10;
        }
        if(sum==tmp)
        {
            printf("%5d",sum);
        }
    }
    return 0;
}

*/
///============================================================================================================================
/// Enter the array of 10 nos and find the presence of entered no in an array.
/// x 0     1     2    3     4     5     6     7      8    9        no		cnt
/// [23]  [45]  [90]  [81]  [72]  [45]  [34]  [67]  [45]  [57]      [45]	 3
/// output: 45 is present 3 times in an array
//
//#include<stdio.h>
//int main()
//{
//    int i,x[10],no,cunt=0;
//
//    printf("Enter any 10 Number : ");
//
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter any no through keyboard to find the cnt  of entered no : ");
//    scanf("%d",&no);
//
//    for(i=0;i<10;i++)
//    {
//        if(x[i]==no)
//        {
//            cunt++;
//        }
//    }
//    printf("\n %d no is present in array %d time ",no,cunt);
//
//}

///================================================================================================================================
///WAP to find the prime nos from array (display the list)
///nos 0    1     2     3     4     5     6     7      8    9
///[23]  [45]  [90]  [81]  [72]  [45]  [34]  [67]  [45]  [57]
//
//#include<stdio.h>
//int main()
//{
//    int i,j,x[10],flg;
//
//    printf("\n Enter Any 10 No : ");
//
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Prime No list : ");
//    for(i=0;i<10;i++)
//    {
//        flg=0;
//        j=2;
//        while(j<(x[i]/2))
//        {
//            if(x[i]%j==0)
//            {
//                flg=1;
//                break;
//            }
//            j++;
//        }
//        if(flg==0)
//        {
//            printf("%5d",x[i]);o
//        }
//    }
//    return 0;
//}
///============================================================================================================================
///Wap to insert element at starting of array.
/**
#include<stdio.h>
#define SIZE 10
int main()
{

    int x[SIZE],i,cunt,opt;

    printf("\n Enter any Element cunt undder 1 to 10 : ");
    scanf("%d",&cunt);

    if(cunt<SIZE)
    {
        printf("\n Enter any %d element : ",cunt);
        for(i=0;i<cunt;i++)
        {
            scanf("%d",&x[i]);
        }

        while(1)
        {
            printf("\n*********************menu*********************\n 1.Display\t2.insert\t3.stop\n Please Select Your Opition : ");
            scanf("%d",&opt);

            switch(opt)
            {
                case 1:
                    printf("\n Your Array List : ");
                    for(i=0;i<cunt;i++)
                    {
                        printf("[%d] ",x[i]);
                    }
                    break;

                case 2:
                    if(cunt<SIZE)
                    {

                        for(i=cunt;i>0;i--)
                        {
                            x[i]=x[i-1];
                        }
                        printf("\n please insert your element at first of array : ");
                        scanf("%d",&x[0]);
                        cunt++;
                    }
                    else
                    {
                        printf("\n Array is full !!!!!!!!!!");
                    }
                    break;

                case 3:
                    printf("\n*******Thank You Visit Again***********");
                    exit(0);
            }
        }
    }
    else
    {
        printf("\n Insufficient Memory !!!!!!!!");
    }
    return 0;
}
*/
///======================================================================================================================================
///Wap to insert element to user choice in array.(enter position and add in array).
/**
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,opt,cunt,pos;

    printf("\n Enter any element count : ");
    scanf("%d",&cunt);

    if(cunt<SIZE)
    {
        printf("\n Enter any %d Element : ",cunt);
        for(i=0;i<cunt;i++)
        {
            scanf("%d",&x[i]);
        }
        while(1)
        {
            printf("\n*********************menu*********************\n 1.Display\t2.insert\t3.stop\n Please Select Your Opition : ");
            scanf("%d",&opt);

            switch(opt)
            {
                case 1:
                    printf("\n Your Array List : ");
                    for(i=0;i<cunt;i++)
                    {
                        printf("[%d] ",x[i]);
                    }
                    break;

                case 2:
                    if(cunt<SIZE)
                    {
                        printf("\n Enter The Position In between 0 to %d",cunt);
                        scanf("%d",&pos);
                        if(pos<=cunt && pos>=0)
                        {
                            for(i=cunt;i>pos;i--)
                            {
                                x[i]=x[i-1];
                            }
                            printf("\n Enter New Element : ");
                            scanf("%d",&x[pos]);
                            cunt++;
                        }
                        else
                        {
                            printf("\n Position are not valid in array plese try again ");
                        }

                    }
                    else
                    {
                        printf("\n!!!!!!!!Array is Full!!!!!!!!!!");
                        exit(0);
                    }
                    break;

                case 3:
                    printf("\n**************Thank You Visit Again***************");
                    exit(0);
                default:
                    printf("\n******Incorrect Option Plese Try again**********");

            }
        }
    }
    else
    {
        printf("\n Insufficient Memory!!!!!!!");
    }
    return 0;
}
*/
///====================================================================================================================================
///wap enter array and sorrting by incressing manner.by using selecting sort
//
//#include<stdio.h>
//int main()
//{
//    int x[5],i,j,tmp;
//
//    printf("\n Enter any 5 element of a array : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n original Array List : ");
//    for(i=0;i<5;i++)
//    {
//        printf("[%d] ",x[i]);
//    }
//
//    for(i=0;i<5-1;i++)
//    {                      ///when select poisition by using i then the itration come by 1.
//        for(j=i+1;j<5;j++)
//        {
//            if(x[i]>x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//
//    }
//    printf("\n Sorted array list : ");
//    for(i=0;i<5;i++)
//    {
//        printf("[%d] ",x[i]);
//    }
//
//    return 0;
//}
//
///=======================================================================================================================================
///wap enter array and sorrting by incressing manner.by using bubble sort
/**

#include<stdio.h>
int main()
{
    int i,j,x[5],tmp;

    printf("\n Enter any 5 element : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Orignl array : ");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",x[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(x[j]>x[j+1])
            {
                tmp=x[j];
                x[j]=x[j+1];
                x[j+1]=tmp;
            }
        }
    }
    printf("\n sorrted array : ");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",x[i]);
    }
    return 0;
}
*/
///================================================================================================================================
///inserction sort:-

/**
#include<stdio.h>
int main()
{

    int i,j,x[5],tmp;

    printf("\n Enter any 5 element : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Orignl array : ");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",x[i]);
    }
     for(i=1;i<5;i++)
    {
        tmp=x[i];
        for(j=i-1;(tmp<x[j] && j>=0);j--)
        {
           x[j+1]=x[j];
        }
        x[j+1]=tmp;
    }
    printf("\n sorrted array : ");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",x[i]);
    }
    return 0;

}
*/
///------anthoer one-----by using inner while loop----------
//
//#include<stdio.h>
//int main()
//{
//
//    int i,j,x[5],tmp;
//
//    printf("\n Enter any 5 element : ");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Orignl array : ");
//    for(i=0;i<5;i++)
//    {
//        printf("[%d] ",x[i]);
//    }
//     for(i=1;i<5;i++)
//    {
//        tmp=x[i];
//        j=i-1;
//        while(tmp<x[j] && j>=0)
//        {
//            x[j+1]=x[j];
//            j--;
//        }
//        x[j+1]=tmp;
//    }
//    printf("\n sorrted array : ");
//    for(i=0;i<5;i++)
//    {
//        printf("[%d] ",x[i]);
//    }
//    return 0;
//
//}
//
///=================================================================================================================================
///wap enter any 5 element of two arrays from keyboard and merge them in a such way that all element are in the incressing manner.
/**
#include<stdio.h>
int main()
{

    int i,j,x[5],y[5],z[10],tmp;

    printf("\n Enter any 5 element of first array: ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Enter any 5 element of second array: ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            z[i]=x[i];
        }
        else
        {
            z[i]=y[i-5];
        }
    }
    printf("\n merge array : ");
    for(i=0;i<10;i++)
    {
        printf("[%d] ",z[i]);
    }
     for(i=1;i<10;i++)
    {
        tmp=z[i];
        for(j=i-1;(tmp<z[j] && j>=0);j--)
        {
           z[j+1]=z[j];
        }
        z[j+1]=tmp;
    }
    printf("\n sorrted array : ");
    for(i=0;i<10;i++)
    {
        printf("[%d] ",z[i]);
    }
    return 0;

}
*/
///=================================================================================================================================
///wap to input array of 5 element and display or search that element position.(by using sequential serching).
/**
#include<stdio.h>
int main()
{
    int i,x[5],pos=-1,no;

    printf("\n Enter any 5 element of x array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n x array list : ");
    for(i=0;i<5;i++)
    {
        printf("[%d]",x[i]);
    }
    printf("\n Enter no to find ther poistion : ");
    scanf("%d",&no);

    for(i=0;i<5;i++)
    {
        if(no==x[i])
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        printf("\n %d no present at %d position ",no,pos+1                                                                                                                                                                                                                                                                   );
    }
    else
        printf("\n %d no is not present in array");
    return 0;
}
*/
///=================================================================================================================================
///wap to input array of 10 element and display the freq... of each element.
/**
#include<stdio.h>
int main()
{
    int i,j,x[10],count,no;

    printf("\n Enter any 10 element of x array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n x array list : ");
    for(i=0;i<10;i++)
    {
        printf("[%d]",x[i]);
    }
    for(i=0;i<10;i++)
    {
        count=0;
       for(j=0;j<10;j++)
       {
           if(x[i]==x[j])
            count++;
       }
       if(count>1)
       {
           printf("\n %d no present at %d times",x[i],count);
       }
    }
    return 0;
}

*/
///=================================================================================================================================
///wap to input array of 10 element and display the position by using binary searching.
/**
#include<stdio.h>
int main()
{
    int i,start,end,mid,x[10],pos=-1,no;

    printf("\n Enter any 10 element of x array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n x array list : ");
    for(i=0;i<10;i++)
    {
        printf("[%d]",x[i]);
    }
    printf("\n Enter no to find ther poistion : ");
    scanf("%d",&no);
    for(i=0;i<10;i++)
    {
        if(no==x[i])
        {
            no=i;
        }
    }
   start=0;
   end=9;
   while(start<=end)
   {
       mid=(start+end)/2;
       if(no==mid)
       {
           pos=mid;
           break;
       }
       else if(no>mid)
       {
           start=1+mid;
       }
       else
       {
           end=mid-1;
       }
   }
    if(pos!=-1)
   {
       printf("\n %d no present at %d position",x[no],pos+1);
   }
   else
   {
       printf("\n %d no is not  present in array",x[no]);
   }
    return 0;
}
*/

///=================================================================================================================================
///

/**
#include<stdio.h>
int main()
{
    int i,j,tmp,start,end,mid,x[10],pos=-1,no;

    printf("\n Enter any 10 element of x array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n x array list : ");
    for(i=0;i<10;i++)
    {
        printf("[%d]",x[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(x[i]>x[j])
            {
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }
        }
    }
    printf("\n Sorrted array : ");
    for(i=0;i<10;i++)
    {
        printf("[%d] ",x[i]);
    }

    printf("\n Enter no to find ther poistion : ");
    scanf("%d",&no);
   start=0;
   end=9;
   while(start<=end)
   {
       mid=(start+end)/2;
       if(no==x[mid])
       {
           pos=mid;
           break;
       }
       else if(no>x[mid])
       {
           start=1+mid;
       }
       else
       {
           end=mid-1;
       }
   }
    if(pos!=-1)
   {
       printf("\n %d no present at %d position",no,pos+1);
   }
   else
   {
       printf("\n %d no is not  present in array",no);
   }
    return 0;
}

*/

///==============================================================================================================================
///wap to input array of 10 element and display the freq... of each element.

/**
#include<stdio.h>
int main()
{
    int i,j,x[10],y[10],count,no,tmp;

    printf("\n Enter any 10 element of x array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n x array list : ");
    for(i=0;i<10;i++)
    {
        printf("[%d]\t",x[i]);
    }
    ///copid array
    for(i=0;i<10;i++)
    {
       y[i]=x[i];
    }
    ///processe
    for(i=0;i<10;i++)
    {

        count=0;
       for(j=0;j<10;j++)
       {
           if(x[i]==y[j])
           {
                count++;
                y[j]=0;

           }
       }
       if(count>1)
       {
           printf("\n %d no present at %d times",x[i],count);
       }
    }
    return 0;
}
*/

///====================================================================================================================================
/** WAP to collect all negative elements at left and all positive at rh+ side of array

            e.g.
                Input Array:
                    34   -4    23    9    -2    201     -11    85     -34     -1

                Processed array:
                    -4     -2     -11     -34    -1    34     23     9    201    85

*/
/**

#include<stdio.h>
int main()
{
    int i,j,x[10],y[10];

    printf("\n Enter any 10 element of x array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n x array list : ");
    for(i=0;i<10;i++)
    {
        printf("[%d] ",x[i]);
    }

    for(i=0,j=0;i<10;i++)
    {
        if(x[i]<0)
        {
            y[j]=x[i];
            j++;
        }
    }
    for(i=0;i<=10;i++)
    {
        if(x[i]>0)
        {
            y[j++]=x[i];
        }
    }
    printf("\n collectd array : ");
    for(i=0;i<10;i++)
    {
        printf("[%d] ",y[i]);
    }
    return 0;
}
*/

///=========================================================================================================================================
/**
WAP to find the intersection of two arrays.

        x
         { 23,-5,89,12,9 }

        y
         { 9,-34,12,100,-5 }

        Intersection:
            { -5, 12, 9 }

*/

/**
#include<stdio.h>
int main()
{
    int i,j=0,x[5],y[5],z[5];

    printf("\n Enter any 5 element of x array : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n x array list : ");

    for(i=0;i<5;i++)
    {
        printf("[%d] ",x[i]);
    }

     printf("\n Enter any 5 element of y array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }

    printf("\n y array list : ");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",y[i]);
    }

    for(i=0;i<5;i++)
    {
        for(i=0;i<5;i++)
        {
            if(x[i]==y[i])
            {
                z[j]=x[i];
                j++;
            }
        }
    }

    printf("\n Intersection Array : ");
    for(i=0;i<j;i++)
    {
        printf("[%d] ",z[i]);
    }
    return 0;
}

*/
///==================================================================================================================================
/**
// WAP to merge the two different arrays in a such way that there should not be
    // any duplicate element.

        e.g.
                x
                {12, 45, 78, 38, 45}

                y
                {78, 90, 123, 12, 100}

                z
                {12,45,78,38,90,123,100}
*/

/**
#include<stdio.h>
int main()
{
    int x[5],y[5],z[10];
    int i,j,tmp,cnt;

     printf("\n Enter any 5 element of x array : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n x array list : ");

    for(i=0;i<5;i++)
    {
        printf("[%d] ",x[i]);
    }

     printf("\n Enter any 5 element of y array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }

    printf("\n y array list : ");
    for(i=0;i<5;i++)
    {
        printf("[%d] ",y[i]);
    }
    //merge
    for(i=0;i<10;i++)
    {
        if(i<5)
            z[i]=x[i];
        else
            z[i]=y[i-5];
    }
    cnt=i;


    return 0;
}
ddddddddd
*/
///=================================================================================================================================
///----------------------------------MATARIX-------------------------------------------------------------------
///=================================================================================================================================



//#include<stdio.h>
//int main()
//{
//    int i,j,x[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//
//    printf("\n X array element \n");
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<4;j++)
//        {
//            printf("%3d",x[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

///=================================================================================================================================
///3x4 by user choice

/**
#include<stdio.h>
int main()
{
    int i,j,x[3][4];

    for(i=0;i<3;i++)
    {
         printf("\n X array element for %d row : ",i+1);
        for(j=0;j<4;j++)
        {
           scanf("%d",&x[i][j]);
        }
    }

    printf("\n X array element \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================================================================
/**    1   2   3   4 = 10
       5   6   7   8 = ?
       9  10  11  12 = ?
*/
/**
#include<stdio.h>
int main()
{
    int i,j,x[3][4],sum;

    printf("\n Enter the x array element :");
    for(i=0;i<3;i++)
    {
        printf("\n enter element of %d row",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n X arry is : \n");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            printf("%3d",x[i][j]);
            sum=x[i][j]+sum;
        }
        printf(" = %d\n",sum);
    }
    return 0;
}
*/

///=================================================================================================================================

/**    x[i][j]                       y[i][j]       z[i][j]
       1   2   3   4            1   2   3   4   =  2  4  6 8
       5   6   7   8    +       5   6   7   8   =  10 12....
       9  10  11  12            9  10  11  12   =
*/

/**
#include<stdio.h>
int main()
{
    int i,j,x[3][4],y[3][4],z[3][4];

    printf("\n Enter element of X array : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter element of Y array : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }

    printf("\n     X array \t\t  Y array \t\t  Z array \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("%4d",x[i][j]);
        }
        printf("\t");
        for(j=0;j<4;j++)
        {
           printf("%4d",y[i][j]);
        }
        printf("\t");
        for(j=0;j<4;j++)
        {
           printf("%4d",z[i][j]);
        }
        printf("\n");
    }

    return 0;
}

*/
///=================================================================================================================================
///-------matarix Multipication------------------
/**

    x array     *   Y array      Answer(z array)

   1   2   3       1   2   3    =   30   36   42
   4   5   6       4   5   6    =   66   81   96
   7   8   9       7   8   9    =  102  126  150

*/

/**
#include<stdio.h>
int main()
{
    int i,j,k,x[3][3],y[3][3],z[3][3];

    printf("\n Enter element of X array : \n");
    for(i=0;i<3;i++)
    {
        printf("\n enter value of %d row : ",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter element of Y array : \n");
    for(i=0;i<3;i++)
    {
        printf("\n enter value of %d row : ",i+1);
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=0;
            for(k=0;k<3;k++)
            {
                z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
            }
        }
    }
    printf("\n    x array\t*   Y array\t Answer(z array)\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",x[i][j]);
        }
        printf("\t");

        for(j=0;j<3;j++)
        {
            printf("%4d",y[i][j]);
        }
        printf("\t=");

        for(j=0;j<3;j++)
        {
            printf(" %4d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}

*/
///=====================================================================================================================================
///-----------------------------------------------Array----------------------------------------------------------------
///=====================================================================================================================================

///char arr[50]={'a','b','c','d','e','f','\0'};
///char ar[50]=" Hello ";
///int array = collection of int values /nos
///char array  =collection of char values

/**
#include<stdio.h>
int main()
{
    char str[50]={'a','b','c','d','e','f','g','\0'};
    char st[50]="hellow";
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    for(i=0;st[i]!='\0';i++)
    {
        printf("%c",st[i]);
    }
    return 0;
}

*/
///=====================================================================================================================================

///By using string
//
//#include<stdio.h>
//int main()
//{
//    char ch[40]={'a','b','c','d','e','f','g','\0'};
//    char chh[40]="hellow";
//
//    printf("strin is %s",ch);
//    printf("\n string is %s",chh);
//
//    return 0;
//}
///=====================================================================================================================================

///by using puts()

//#include<stdio.h>
//int main()
//{
//    char ch[40]={'a','b','c','d','e','f','g','\0'};
//    char chh[40]="hellow";
//
//    printf("\n string is ");
//    puts(ch);
//     printf("\n string is ");
//    puts(chh);
//
//    return 0;
//}
///=====================================================================================================================================
///input and display :
//
////1st way
//#include<stdio.h>
//int main()
//{
//    char ch[40];
//     printf("\n Input the string : ");/*
//    for(i=0;??????;i++)
//    {
//        scanf("%c",&str[i]);
//    }*/
//
//    scanf("%s",&ch);
//    printf(" string is %s ",ch);
//
//    return 0;
//}
///==================================================================================================================================

///2nd way

/**
#include<stdio.h>
int main()
{
    char ch[40];

    printf("\n Intput string : ");
    gets(ch);
    printf("\n string is : ");
    puts(ch);

    printf("\n 2. Intput string : ");
    scanf("%[^\n]",&ch);
    printf("\n string is : ");
    puts(ch);



}
*/
///===========================================================================================================================================
//
//#include<stdio.h>
//int main()
//{
//    char ch[40];
//
//    printf("\nIntput string and terminat with charater r and w ");// if first coming r then terminate whit r else w.
//
//    scanf("%[^\nwr]",&ch);
//    printf("\n string is : ");
//    puts(ch);
//
//
//}
///===================================================================================================================================

/**
/ String processing

     // WAP to find the length of string (number of characters in it)

     str
        {'h','e','l','l','o',' ','a','l','l','\0'}

*/

//#include<stdio.h>
//int main()
//{
//
//    char ch[50];
//    int i;
//
//    printf("\n Enter the String : ");
//    gets(ch);
//
//    i=0;
//    while(ch[i]!='\0')
//    {
//        i++;
//    }
//    printf("\n length of string is %d",i);
//
//    return 0;
//}

///=================================================================================================================================
///same progrm by using count variable
// WAP to find the length of string (number of characters in it)
/**

#include<stdio.h>
int main()
{
    char str[45];
    int i,cnt=0;

    printf("\n Enter any string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        cnt++;
    }
    printf("\n String is: %s",str);
    printf("\n Length Of String: %d",cnt);
    return 0;
}
*/
///=================================================================================================================================
/// WAP to convert the string into uppercase
/**
#include<stdio.h>
int main()
{
    int i;
    char ch[40];

    printf("\n Enter the String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
        }
    }

    printf("\n Upper case is %s",ch);
    return 0;
}
*/
//-------anthoer one-------------------
/**
#include<stdio.h>
int main()
{
    int i;
    char ch[40];

    printf("\n Enter the String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
    }

    printf("\n Upper case is %s",ch);
    return 0;
}
*/
///=================================================================================================================================
/// Reverce at different location

/**
#include<stdio.h>
int main()
{
    char str[40],ch[40];
    int i,j;

    printf("\n Enter the string : ");
    gets(str);

    for(j=0;str[j]!='\0';j++);

    for(i=0,j--;j>=0;i++,j--)
    {
        ch[i]=str[j];
    }

    printf("\n Original String : %s",str);
    printf("\n reverse Copied String : %s",ch);

    return 0;
}
*/
///=================================================================================================================================
/// WAP To reverse the string at same location

/**
#include<stdio.h>
int main()
{
    int i,j;
    char str[40],tmp;

    printf("\n Enter the string : ");
    gets(str);

    for(j=0;str[j]!='\0';j++);

    for(i=0,j--;j>=i;i++,j--)
    {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
    }
     printf("\n String after processing: %s",str);
    return 0;
}
*/
///=================================================================================================================================
/// WAP To reverse the string at same location by using the stack (Application of stack)

/**
#include<stdio.h>
int main()
{
    char str[50],stack[50] ;
    int i,j,top=-1;

    printf("\n Enter the string: ");
    gets(str);
    printf("\n String before processing: %s",str);

    i=0;
    while(str[i]!='\0')
    {
        stack[++top]=str[i];
        i++;
    }
    i=0;
    while(top>=0)
    {
        str[i]=stack[top--];
        i++;
    }

    printf("\n String after processing: %s",str);
    return 0;
}
*/
///=================================================================================================================================
///count woard without unwanted spaces.
/**
#include<stdio.h>
int main()
{
    char str[40];
    int i,cnt=0;

    printf("\n Enter any String : ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            cnt++;
        }
    }
    printf("\n Word is %d",cnt+1);

    return 0;
}
*/
///=======================================================================================================================================
///wap to enter any string and count thier words in that string  unwanted space are present.
/**

#include<stdio.h>
int main()
{
    char str[50];
    int i,sp,ep,cnt=0;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    printf("\n total count os string  : %d",i);
    for(i--;str[i]==32;i--);
    ep=i+1;
    printf("\n ending point : %d",ep);
    for(i=0;str[i]==32;i++);
    sp=i;
    printf("\n starting point : %d",sp);

//    for(i=sp;i<=ep;i++)
//    {
//        if(str[i]==32 && str[i+1]!=32)
//        {
//            cnt++;
//        }
//    }
//    printf("\n Word count is %d",cnt+1);
    //---anthoer loop----

    while(sp<ep)
    {
        if(str[sp-1]==32 && str[sp]!=32)
        {
            cnt++;
        }
        sp++;
    }

    printf("\n Word count is %d",cnt);


    return 0;
}
*/
///--------------------------------------------------------------------------------

/**
#include<stdio.h>
int main()
{
    char str[50];
    int i,sp=0,ep=0;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]==32;i++)
        sp=i;
    for(;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;
    printf("\n %d %d ",sp,ep);

    if(str[0]!=32 && (str[0]>=97 && str[0]<=122))
    {
        printf("%c",str[0]-32);
    }
    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp-1]==32)
        {
            if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;

            }
            printf("%c",str[sp]);
        }
        sp++;
    }


    return 0;
}
*/
//----------anthoer one--------------FISRT  CHAR  AND TITLE CASE STRING------------------------

/**
#include<stdio.h>
int main()
{
    char str[50];
    int i,sp=0,ep=0;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]==32;i++)
        sp=i;
    for(;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp-1]==32)
        {
            if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;
            }
        }
        sp++;
    }
    if(str[0]!=32 && (str[0]>=97 && str[0]<=122))
    {
        str[0]=str[0]-32;
    }

    printf("%s",str);
    return 0;
}
*/

///====================================================================================================================================================
///-----------FISRT and LAST TITLE upper case else lower case -------------------

/**
#include<stdio.h>
int main()
{
    char str[50];
    int i,sp=0,ep=0;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;
    for(;str[i]!='0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if((str[sp]!=32 && str[sp-1]==32)||(str[sp]!=32 &&(str[sp+1]==32 || str[sp+1]==0)))
        {
            if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;
            }
        }
        else if(str[sp]>=65 && str[sp]<=90)
        {
            str[sp]=str[sp]+32;
        }
        sp++;
    }
    if(str[0]!=32 &&(str[0]>=97 && str[0]<=122))
    {
        str[0]=str[0]-32;
    }
    printf("string is %s",str);

    return 0;
}
*/

///===================================================================================================================================
///-------------First Last Reverse-----------

/**
#include<stdio.h>
int main()
{
    char str[50],tmp;
    int i,j;

    printf("\n Enter any string : %s",str);
   gets(str);

    i=0;
    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);
        for(j=i;(str[j]!=32 && str[j]!=0);j++);


         tmp=str[i];
         str[i]=str[j-1];
         str[j-1]=tmp;

        i=j;
    }
    printf("\n String is %s",str);
    return 0;
}

*/
///================================================================================================================================

/// Reverce the word
/**
#include<stdio.h>
int main()
{
    char str[50],tmp;
    int i,j,t;

    printf("\n Enter in string ");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);
        for(j=i;str[j]!=32 && str[j]!=0;j++);
        t=j;

        do
        {
            tmp=str[j-1];
            str[j-1]=str[i];
            str[i]=tmp;
            i++;
            j--;
        }while(i<=j);
        i=t;
    }
    puts(str);
    return 0;
}
*/
//----------------anthoer-one-----(solve by mam)---------

//#include<stdio.h>
//int main()
// {
//     char str[50],tmp;
//     int i,j,t;

//     printf("\n Enter the string: ");
//     gets(str);

//     i=0;
//     while(str[i]!='\0')
//     {
//         for( ;str[i]==32;i++); // ignore all spaces at the end  i refers to 1st character in word.
//         for(j=i; str[j+1]!=32 && str[j+1]!=0;j++); // now j refers to last character pos

//         t=j+1;
//         do
//         {
//             tmp=str[i];
//             str[i]=str[j];
//             str[j]=tmp;

//             i++;
//             j--;
//         }while(i<=j);

//         i=t;
//     }
//     printf("\n String is: %s",str);
//     return 0;
// }



///==============================================================================================================================
/// highest digit count and print that word
/**
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,t,cnt,hw=0;

    printf("\n enter any string : ");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        cnt=0;
        for(;str[i]==32;i++);
        for(j=i;str[j]!=32&&str[j]!=0;j++,cnt++);
        t=j;

        if(hw<cnt)
        {
            hw=cnt;
            for(j=0;str[i]!=32 && str[i]!='\0';i++,j++)
            {
                ch[j]=str[i];
            }
        }
        i=t;
    }
    puts(str);
    printf("\n Highest count is %d\n",hw);
    puts(ch);
    return 0;
}

*/
///================================================================================================================================================
// Enter the string contains digits and random symbols in between,
	// remove all symbols and digits and display the actual string
	// (perform the operation @ same locations)
//	e.g.
//
//		input --> %%6h4el29?lo go@o5d d78ay3!
//			  h%6%4el29?lo go@o5d d78ay3!
//			  he6%4%l29?lo go@o5d d78ay3!
//			  ...
//		output --> hello good day\0

/**
#include<stdio.h>
int main()
{
    char str[50],tmp;
    int i,j,cnt;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i+1]!='\0';i++)
    {
        if(!(str[i]>='a' && str[i]<='z')|| (str[i]>='A' && str[i]<='Z')|| str[i]==32)
        {
            for(j=i+1;str[j]!='\0';j++)
            {
                if((str[j]>='a' && str[j]<='z')|| (str[j]>='A' && str[j]<='Z')|| str[j]==32)
                {
                    tmp=str[i];
                    str[i]=str[j];
                    str[j]=tmp;

                    cnt++;
                    break;
                }
            }
        }
        else
        {
            cnt++;
        }
    }
    str[cnt]='\0';
    printf("\n string is %s",str);
    printf("\n count is %d",cnt);
    return 0;
}
*/
///=================================================================================================================================
/// WAP to find two strings are matching or not.

/**
#include<stdio.h>
int main()
{
    char str[40],ch[40];
    int i,j,flg=0;

    printf("\n Enter first string : ");
    gets(str);
    printf("\n Enter second string : ");
    gets(ch);

     for(i=0;str[i]!='\0';i++);
     for(j=0;ch[j]!='\0';j++);

     if(i==j)
     {
         for(i=0;i<=j;i++)
         {
             if(str[i]!=ch[i])
             {
                 flg=1;
                 break;
             }
         }
     }
     else
     {
         flg=1;
     }

     if(flg==0)
        printf("\n strings are matching");
     else
        printf("\n strings are not matching");

     return 0;
}
*/
///===================================================================================================================================
/**2d string
#include<stdio.h>
int main()
{
    char str[7][50],ch[50];
    int i,j,flg,len1=0,len2;

    printf("\n Enter seven Number of friends : ");


    for(i=0;i<7;i++)
    {
         gets(str);
    }
    printf("\n Enter Search Word ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++);
    len1=ch;

    for(i=0;i<7;i++)
    {
        for(j=0;str[i][j]!='\0';j++);
        len2=j;
        flg=0;
        printf("\n len1=%d \t len2=%d",len1,len2);
        if(len1==len2)
        {
            for(j=0;j<len2;j++)
            {
                if(str[i][j]!=ch[j])
                {
                    flg=1;
                    break;
                }
            }
        }
        else
        {
            flg=1;
        }
        if(flg==0)
        {
            printf("\n %s word present at 5d position",ch,i+1);
            break;
        }
    }
    if(flg==1)
    {
        printf("\n no any word is matching");
    }
    return 0;
}

*/
///=============================================================================================================================
///                                          POINTER demo
///============================================================================================================================
/**

#include<stdio.h>
int main()
{
    int *p;
    char *ch;
    float *ft;
    double *db;

    printf("\n *p= %u",sizeof(p));
    printf("\n *ch %u",sizeof(ch));
    printf("\n *ft %u",sizeof(ft));
    printf("\n *db %u",sizeof(db));

    printf("\n int pointer %u",sizeof(int*));
    printf("\n float pointer %u",sizeof(float*));

    printf("\n value of *p= %u",sizeof(*p));
    printf("\n value of *ch %u",sizeof(*ch));
    printf("\n value of *ft %u",sizeof(*ft));
    printf("\n value of *db %u",sizeof(*db));

    return 0;
}
*/
///======================================================================================================================================
///wap to input count and allocate dynamic memory by using pointer
/**
#include<stdio.h>
int main()
{
    int *p;
    int i,count;

    printf("\n Enter the element count ");
    scanf("%d",&count);

    p=(int*)malloc(count*sizeof(int));
    printf("\n random Base value of p =%d",*p);
    printf("\n enter the %d element : ",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n address of p =%u",&p);
    printf("\n Base address of p =%u",p);
    printf("\nBase value of p =%d",*p);
    for(i=0;i<count;i++)
    {
        printf("\nvalue = %d\tadress=%u",*(p+i),(p+i));
    }
    return 0;
}

*/
///===============================================================================================================================
///  Enter the N numbers and copy the elements into another location

/**
#include<stdio.h>
int main()
{
    int *p,*q;
    int i,cnt;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    q=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d element : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n address of p %u",&p);
    printf("\nbase  address of ith location %u",p);
    printf("\n value of ith location %d",*p);

    for(i=0;i<cnt;i++)
    {
       *(q+i) = *(p+i)
    }
    printf("\n adress of q %u",&q);
    printf("\nbase adress of ith location %u",q);
    printf("\n value of ith location %d",*q);
     printf("\n original pointer ===>");
    for(i=0;i<cnt;i++)
    {
        printf("%3d",*(p+i));
    }
     printf("\n copied pointer ===>  ");
     for(i=0;i<cnt;i++)
     {
         printf("%3d",*(p+i));
     }
     return 0;
}
*/
///=================================================================================================================================
///Enter the N numbers and count even and print that list
/**
#include<stdio.h>
int main()
{
    int *p,cnt,i,ev=0;

    printf("\n Enter element count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    printf("\n Enter %d element : ",cnt);

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n elements are : ");
    for(i=0;i<cnt;i++)
    {
        printf("%3d",*(p+i));
    }
    ///process
    printf("\n Even list are : ");
    for(i=0;i<cnt;i++)
    {
        if(*(p+i)%2==0)
        {
            ev++;
            printf("%3d",*(p+i));
        }
    }
    printf("\n Even count is : %d",ev);
    return 0;
}
*/
///==================================================================================================================================
///Enter the N nos and display all primes
/**

#include<stdio.h>
int main()
{
    int *p,i,j,flg,cnt;

    printf("\n enter any count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter %d element : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n prime Number List is ");
    for(i=0;i<cnt;i++)
    {
        flg=0;
        j=2;
        while(j<=*(p+i)/2)
        {
            if(*(p+i)%j==0)
            {
                flg=1;
                break;
            }
            j++;
        }
        if(flg==0 && *(p+i)!=0 && *(p+i)!=1)
        {
            printf("%3d",*(p+i));
        }
    }
    return 0;
}
*/
///=======================================================================================================================================
/// search the number
/**
#include<stdio.h>
int main()
{
    int *p,no,cnt,i;

    printf("\n Enter any count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    printf("\n enter %d element",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Enter search Number : ");
    scanf("%d",&no);

    for(i=0;i<cnt;i++)
    {
        if(*(p+i)==no)
        {
            break;
        }
    }
    if(i<cnt)
    {
         printf("\n %d Number is present at %d position ",no,i+1);
    }
    else
    {
        printf("\n %d number is not present",no);
    }
    return 0;
}
*/
///===========================================================================================================================================
/// WAP to find the highest score by the player in n Matches
/**
#include<stdio.h>
int main()
{
    int *p,mcnt,i,pos,cnt,hr=0;

    printf("\n Enter Match count : ");
    scanf("%d",&mcnt);

    p=(int*)malloc(mcnt*sizeof(int));

    printf("\n enter score of %d matches ",mcnt);
    for(i=0;i<mcnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n score of %d matches are : ",mcnt);
    for(i=0;i<mcnt;i++)
    {
        printf("%5d",*(p+i));
        if(hr<*(p+i))
        {
            hr=*(p+i);
            pos=i;
        }
    }
    printf("\n Highest scroe runs %d in %d match",hr,pos);
    return 0;
}

*/
///==================================================================================================================================
/// WAP to find out total bill, discount and payable amount.

/**
#include<stdio.h>
int main()
{
    int *p,i,cnt;
    float tot=0.0,dis=0.0;

    printf("\n Enter itom count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    printf("\n Enter %d Price Itom : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\nItom List : ");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
        tot=tot+*(p+i);
    }
     if(tot<=500)
    {
        dis=tot*0.05;
    }
    else
    {
        dis=tot*0.14;
    }
    printf("\n Total Bill = %.2f",tot);
    printf("\n Discount = %.2f",dis);
    printf("\n Payble Amount : %.2f",tot-dis);

    return 0;
}

*/
///======================================================================================================================================
///                                            2D Pointer
///======================================================================================================================================
/// wap for array of pointer by represtation by using pointer rotation.total bill 500>dis=14% unless 7%.

/**
#include<stdio.h>
int main()
{
    int p[3][4],i,j;
    float tot=0.0,dis=0.0;

    printf("\n Enter the price of itom : ");
    for(i=0;i<3;i++)
    {
        printf("\n%d customer",i+1);
        for(j=0;j<4;j++)
        {
            printf("\n Enter the price of %d itom ",j+1);
            scanf("%d",*(p+i)+j);
        }
    }
    for(i=0;i<3;i++)
    {
        tot=0;
        printf("\n%d customer : ",i+1);
        for(j=0;j<4;j++)
        {
            tot=tot+p[i][j];
          // printf("\t %d",p[i][j]);
            printf("\t %d",*(*(p+i)+j));
        }
        if(tot>=500)
        {
            dis=tot*0.14;
        }
        else
        {
            dis=tot*0.07;
        }
         printf("\t Total : %0.2f",tot);
         printf("\t Dis : %0.2f",dis);
         printf("\t Payable AMount : %0.2f",(tot-dis));

         printf("\n\n");
    }
    return 0;
}
*/
///===========================================================================================================================
///                       array of Pointer
///============================================================================================================================
/// array of pointer. if total bill> 500 then dis=14% unless 7%.
/**
#include<stdio.h>
int main()
{
        int *p[3];
        int i,j,cnt[3];
        float tot=0.0,dis=0.0;

        printf("\n Enter the price of iteom : ");
        for(i=0;i<3;i++)
        {
            printf("\n enter the itom count of %d customer ",i+1);
            scanf("%d",&cnt[i]);

            p[i]=(int*)malloc(cnt[i]*sizeof(int));

            printf("\n Adress of p of ith(0) locatin is %u",p[i]);
            printf("\n own adress of p%d location : %u",i+1,&p[i]);
            printf("\n  Enter %d itom pricr ",cnt[i]);
            for(j=0;j<cnt[i];j++)
            {
                printf("\n enter the %d itom price : ",j+1);
                scanf("%d",*(p+i)+j);
                printf("\n Adress of %d itom is %u",j+1,*(p+i)+j);
            }
        }
        for(i=0;i<3;i++)
        {
            tot=0;
            printf("\n%d customer : ",i+1);
            for(j=0;j<cnt[i];j++)
            {
                tot=tot+*(*(p+i)+j);
                printf("\t %d",*(*(p+i)+j));
            }
            if(tot>=500)
            {
                dis=tot*0.14;
            }
            else
            {
                dis=tot*0.07;
            }
             printf("\t Total : %0.2f",tot);
             printf("\t Dis : %0.2f",dis);
             printf("\t Payable AMount : %0.2f",(tot-dis));

             printf("\n\n");
        }
    return 0;
}
*/
///===================================================================================================================================
///                              Block of Pointer
///===================================================================================================================================
///Block of Pointer.if total bill> 500 then dis=14% unless 7%.
/**

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int (*p)[4];
    int i,j,custcnt;
    float tot,dis=0;

    printf("\n Enter the customer count : ");
    scanf("%d",&custcnt);

    p=(int(*)[])malloc(custcnt*4*sizeof(int));
    printf("\n Address of p main pointer is : %u ",&p);
    printf("\n Adress of *P is %u ",*p);
    printf("\n Enter the Item price for %d customer ",custcnt);

    for(i=0;i<custcnt;i++)
    {
        printf("\n Adress of %d customer is %u",i+1,*(p+i));
        printf("\n %d customer ",i+1);
        for(j=0;j<4;j++)
        {
            printf("\n Enter Price of %d Itom : ",j+1);
            scanf("%d",*(p+i)+j);
            printf("\n Address of %d Itom is %u",j+1,*(p+i)+j);
        }
    }
    printf("\n Customer Detail With Price ");
    for(i=0;i<custcnt;i++)
    {
        tot=0;
        printf("\n %d customer ",i+1);
        for(j=0;j<4;j++)
        {
            printf("\t %d",*(*(p+i)+j));
            tot=tot+*(*(p+i)+j);
        }
        if(tot>500)
        {
            dis=tot*0.14;
        }
        else
        {
            dis=tot*0.7;
        }
        printf("\t Total : %0.2f",tot);
        printf("\t Dis : %0.2f",dis);
        printf("\t Payable AMount : %0.2f",(tot-dis));
        printf("\n\n");

    }

    return 0;
}
*/
///=====================================================================================================================================
/// WAP to display runs scored by 3 different players in N matches ( N may be different for each player )
/**
#include<stdio.h>
int main()
{
    int *p[3];
    int i,j,matchcnt[3];

    printf("\n Enter the Score of player : ");
    for(i=0;i<3;i++)
    {
        printf("\n Enter the Matches Played by %d Playaer",i+1);
        scanf("%d",&matchcnt[i]);
        p[i]=(int*)malloc(matchcnt[i]*sizeof(int));
        printf("\n Address of *p%d is %u",i+1,&p);
        printf("\n *p adreess of ith(0) loaction is %u",p);
        printf("\n Enter the scroe %d player : ",i+1);
        for(j=0;j<matchcnt[i];j++)
        {
            printf("\n Enter the scroe of %d match : ",j+1);
            scanf("%d",*(p+i)+j);
            printf("\n adress of %d match scroe is %u",j+1,*(p+i)+j);
        }
    }
    printf("\n Runs scored by 3 different players List");
    for(i=0;i<3;i++)
    {
        printf("\n %d player = ",i+1);
        for(j=0;j<matchcnt[i];j++)
        {
            printf("\t %d",*(*(p+i)+j));
        }
        printf("\n\n");
    }
    return 0;
}
*/
///======================================================================================================================================
///                                             Pointer to Pointer
///======================================================================================================================================
/**
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **stud,*sub;
    int i,j,studcnt=0;

    printf("\n Enter student count : ");
    scanf("%d",&studcnt);

    stud=(int**)malloc(studcnt*sizeof(int));
    sub=(int*)malloc(studcnt*sizeof(int));


    printf("\n Enter the %d student sub Marks : ",studcnt);
    for(i=0;i<studcnt;i++)
    {
        printf("\n Enter the %d student subject count : ",i+1);
        scanf("%d",(sub+i));
        *(stud+i)=(int*)malloc(*(sub+i)*sizeof(int));

        printf("\n Enter the %d Subject Marks : ",*(sub+i));
        for(j=0;j<*(sub+i);j++)
        {
            printf("\n Enter the %d Subject Marks : ",j+1);
            scanf("%d",*(stud+i)+j);
        }
    }
    printf("\n Student mark List : \n");
    for(i=0;i<studcnt;i++)
    {
        printf("\n %d Student : ",i+1);
        //printf("\n Subject count : %d",*(sub+i));
        for(j=0;j<*(sub+i);j++)
        {
            printf("  Subject %d :",j+1);
            printf(" %d",*(*(stud+i)+j));
        }
    }
    return 0;
}
*/

///======================================================================================================================================
///                                 Direct and Indirect pointer
///======================================================================================================================================
/**
In C, there are two equivalent ways to access and manipulate a variable content

Direct access: we use directly the variable name
Indirect access: we use a pointer to the variable



// 3 students and 4 subjects

        Option is: 2D Array

        [][][][]  for 0th student
        [][][][]  for 1st student
        [][][][]  for 2nd student
*/

///Direct access :-
/**
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p[3][4],i,j;

    printf("\n enter the marks of 3 students in 4 subjects");
    for(i=0;i<3;i++)
    {
        printf("\n enter %d Student marks :",i+1);
        for(j=0;j<4;j++)
        {
            printf("\n Enter %d subject marks : ",j+1);
            scanf("%d",&p[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n Student %d: ",i+1);
        for(j=0;j<4;j++)
        {
            printf("%6d",p[i][j]);
        }
    }
    return 0;

}
*/
///----indirect access
/**

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p[3][4],i,j;

    printf("\n enter the marks of 3 students in 4 subjects");
    for(i=0;i<3;i++)
    {
        printf("\n enter %d Student marks :",i+1);
        for(j=0;j<4;j++)
        {
            printf("\n Enter %d subject marks : ",j+1);
            scanf("%d",*(p+i)+j);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n Student %d: ",i+1);
        for(j=0;j<4;j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
    }
    return 0;

}
*/
///=========================================================================================================================================

/**
 *p               x
      [ 700 ] ----->  [11] [22] [33] [44] [55]
                    700
*/

/**
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[]={11,22,33,44,55};
    int i,*p;

    printf("\n 1st way by using array: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }
    printf("\n\n");
    printf("\n 2nd way by using pointer rotation : ");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(x+i));
    }
    printf("\n\n");
    printf("\n 3rd way by using pointer: ");
    p=&x[0];
    for(i=0;i<5;i++)
    {
        printf("%5d",*(p+i));
    }
    printf("\n\n");
    return 0;
}

*/
///==============================================================================================================================
/**
                                                    Pointer Arithmetic:
==============================================================================================================================
		*p			   0      1     2      3       4
		[ 300 ] --------------> [ 23 ] [ 45 ] [ 77 ] [ 92 ] [ 453 ]
				       300

*/
/**
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,i,cnt;

    printf("\n Enter any count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    q=p;
    printf("\n Enter %d Number : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",p++);
    }
    p=q;
    printf("\n Number List : ");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*p++);
    }
    return 0;
}
*/
///======================================================================================================================================
/**
                                              calloc
=========================================================================================================================
// Using the calloc(): It is same as the malloc(), only difference that
				     - init. the all blocks to 0 by-default
			         - Take two parameters i.e. element count and element size

		syntax:

			ptr=(cast*)calloc(cnt,element_size);
*/
/**
#include<stdio.h>
int main()
{
	int *p,cnt,i;

	printf("\n Enter the count: ");
	scanf("%d",&cnt);

	p=(int*)calloc(cnt,sizeof(int));
    printf("\n nos: ");
	for(i=0;i<cnt;i++)
	{
		printf("%6d",*(p+i));// p[i] allocate memory and defalult vale gent 0.by using calloc
	}
	printf("\n Enter the %d nos: ",cnt);
	for(i=0;i<cnt;i++)
	{
		scanf("%d",(p+i));//&p[i]
	}

	printf("\n nos: ");
	for(i=0;i<cnt;i++)
	{
		printf("%6d",*(p+i));//p[i]
	}
	free(p);
	return 0;

}
*/
///=====================================================================================================================================
/**                                             Realloc
=====================================================================================================================================
Using realloc(): It refers reallocation, It is used to change the size of currently allocated block, for which
			 malloc() or calloc() is used. In the reallocation current memory block extended or if it is not possible
			 then it will allocate the new block and maintain the previous values. default values are the
			 garbage values.

				p=realloc(p,new_size);

*/
///-----------------
/**
#include<stdio.h>
int main()
{
    int *p,cnt,i,j;

    printf("\n Enter any count : ");
    scanf("%d",&cnt);
    p=(int*)calloc(cnt,sizeof(int));

    printf("\n Enter %d number : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Number list : ");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }
    i=cnt;
    printf("\n Enter extra count : ");
    scanf("%d",&cnt);

    p=realloc(p,cnt*sizeof(int));
    printf("\n Enter %d number",cnt-i);
    for(;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Number list : ");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }
    return 0;
}
*/
///--------anthoer------

/**
#include<stdio.h>
int main()
{
    int *p,cnt,i,j;

    printf("\n Enter any count : ");
    scanf("%d",&cnt);
    p=(int*)calloc(cnt,sizeof(int));

    printf("\n Enter %d number : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Number list : ");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }
    j=cnt;
    printf("\n Enter extra count : ");
    scanf("%d",&cnt);

    p=realloc(p,cnt*sizeof(int));
    printf("\n Enter %d number",cnt);
    for(i=j;i<cnt+j;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n Number list : ");
    for(i=0;i<cnt+j;i++)
    {
        printf("%5d",*(p+i));
    }
    return 0;
}
*/
///=======================================================================================================================================
///                                        Function
///=======================================================================================================================================
/// WAP to display the message multiple times using the function.

/**
#include<stdio.h>
void msg();
int main()
{
    printf("\n 1st massage : ");
    msg();
    printf("\n 2nd massage : ");
    msg();
    printf("\n 3rd massage : ");
    msg();
    return 0;
}

void msg()
{
    printf("\n my first function program ");
}

*/
///==========================================================================================================================================
///How Function Works?
/**
#include<stdio.h>
void pune();
void thane();
void sangli();
int main()
{
    printf("\n********Happy Journy ***********");
    pune();
    printf("\n\n Next destination is ");
    thane();
    printf("\n\n Next destination is ");
    sangli();
    printf("\n**********Journy end**********\n");
    return 0;
}
void pune()
{
    printf("\n Welcom to Pune ");
}
void thane()
{
    printf(" Thane");
}
void sangli()
{
    printf(" Sangli");
}
*/
///===============================================================================================================================================
/**
#include<stdio.h>
void pune();
void sangli();
void mumbai();
int main()
{

    printf("\n**********start journy**********");
    pune();
    printf("\nNext Location ");
    mumbai();
    printf("\nlast Location ");
    sangli();
    printf("\n Journy End ");
    return 0;
}
void sangli()
{
    printf("\n Welcome to sangli ");

}
void mumbai()
{
    printf("\n Welcome to mumbai ");
}
void pune()
{
    printf("\n Welcome to pune ");
}
*/
///===============================================================================================================================================
/**
#include<stdio.h>
int main()
{
    void pune();
    void sangli();
    void mumbai();
    printf("\n**********start journy**********");
    pune();
    printf("\nNext Location ");
    mumbai();
    printf("\nlast Location ");
    sangli();
    printf("\n Journy End ");
    return 0;
}
void sangli()
{
    printf("\n Welcome to sangli ");
    //mumbai();//________________(function decleare inside the main body then we dose not call nested function.)
}
void mumbai()
{
    printf("\n Welcome to mumbai ");
}
void pune()
{
    printf("\n Welcome to pune ");
}
*/
///===========================================================================================================================================
/**
// Different Types Of Functions

			Function
			   |
		---------------------------------------
		|				      |
	    User-Defined			   Built-in
	       |				       |
  -----------------------------	 	        -----------------------------------------------------------------
  |	|	|	|      |		|		|		|		|		|
  I    II      III     IV      V             Math related     Graphics        IO related      String related  .....
					       math.h	     graphics.h     stdio.h/conio.h	String.h


 - Built-in: These fuctions are provided with the compiler. Any language consists of Editor, Compiler, Library,
	     documentation and more..., All built-in functions are the part of library. and the are grouped together
	     into header files.

 - User-Defined Functions: These functions are defined by the user of language.(programmer)
			    There are following types of UDF

			I] simple function (function without argument without return type)
			II] function with argument without return type
			III] function without argument with return type
			IV] function with argument with return type
			V] Recursion
*/
///-------------------------

///I] simple function (function without argument without return type)
/**
#include<stdio.h>
void add();
int main()
{
    printf("\n 1st adiition ");
    add();
    printf("\n 2nd adiition ");
    add();
    printf("\n 3rd adiition ");
    add();
    printf("\n****END********");
}
void add()
{
    int a,b;
    printf("\n Enter any two Number : ");
    scanf("%d%d",&a,&b);
    printf("\n Addition is : %d",a+b);
}

*/
///-----------or------
/**
#include<stdio.h>
void add();
int main()
{
    printf("\n Start of main");
    add();
    //...
    add();
    //...
    add();
    printf("\n End of main");
}
void add()
{
    int a,b,c;
    printf("\n Enter two nos: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("\n Addition is: %d",c);
}
*/

///===============================================================================================================================================
/// II] function with argument without return type
/**
#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("\n*****start******");
    printf("\n Enter any two Number : ");
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("\n*****end****");
    return 0;
}
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("\n Addition of Two Number is %d",z);
}
*/
///============================================================================================================================================
///III] function without argument with return type
//
//#include<stdio.h>
//int add();
//int main()
//{
//    int t;
//    printf("\n********start*******");
//    t=add();
//    printf("\n Adiition of two number is : %d",t);
//    printf("\n**********************************");
//    printf("\n Adiition of two number is : %d",add());
//    return 0;
//}
//int add()
//{
//    int x,y,z;
//    printf("\n Enter any two Number : ");
//    scanf("%d%d",&x,&y);
//    z=x+y;
//    return z;
//}
///============================================================================================================================================
///IV] function with argument with return type

//#include<stdio.h>
//int add(int,int);
//int main()
//{
//    int a,b,c;
//    printf("\n**********start*********");
//    printf("\n Enter any two number : ");
//    scanf("%d%d",&a,&b);
//    c=add(a,b);
//    printf("\n Addition of two number is %d",c);
//    printf("\n**********end*********");
//    return 0;
//}
//int add(int x,int y)
//{
//    int z;
//    z=x+y;
//    return z;
//}

///==============================================================================================================================================
///WAp to Calculate Factorial of  any no by using (using Recursion)

//int fact(int no);
//int main()
//{
//
//    int no,ans;
//    printf("\n Enter any Number : ");
//    scanf("%d",&no);
//    ans=fact(no);
//    printf("\n %d Factorial is %d",no,ans);
//    return 0;
//}
////using with arg with return
////int fact(int n)
////{
////    int i,t=1;
////    for(i=2;i<=n;i++)
////    {
////        t=t*i;
////    }
////    return t;
////}
///// using Recursion
//
//int fact(int n)
//{
//    printf("\n n value is %d",n);
//    if(n==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n*fact(n-1);
//    }
//}
///=================================================================================================================================
///WAP to reverse the entered no

//int rev(int);
//int main()
//{
//    int no,ans;
//    printf("\n Enter any No : ");
//    scanf("%d",&no);
//    ans=rev(no);
//    printf("\n Reverse Number : %d",ans);
//    return 0;
//}
//
//int rev(int no)
//{
//    int rem,rev=0;
//    for(;no!=0;no=no/10)
//    {
//        rem=no%10;
//        rev=(rev*10)+rem;
//    }
//    return rev;
//}
///=================================================================================================================================
///WAP to display palindrome no


//int rev(int no);
//char ispalindrome(int no);
//int main()
//{
//    int no,ans;
//    char ch;
//
//    printf("\n Enter any Number : ");
//    scanf("%d",&no);
//
//    ch=ispalindrome(no);
//    if(ch=='y')
//    {
//        printf("\n %d Number is palindrome",no);
//    }
//    else
//    {
//         printf("\n %d Number is NOT palindrome",no);
//    }
//}
//char ispalindrome(int no)
//{
//    int a;
//    a=rev(no);
//    if(a==no)
//    {
//        return 'y';
//    }
//    else
//    {
//        return 'n';
//    }
//}
//int rev(int no)
//{
//    int rem,rev=0;
//    for(;no!=0;no=no/10)
//    {
//        rem=no%10;
//        rev=(rev*10)+rem;
//    }
//    return rev;
//}
//
//
///=================================================================================================================================
/** WAP to implement following functions to perform the arithmetic operations and operation expected

		int add(int,int);
		float div(int,int);
		void findmax();
		char isprime(int);

*/
//
//int add(int,int);
//float div(int,int);
//void findmax();
//char isprime(int);
//int main()
//{
//    int n1,n2,addd;
//    float dive;
//    char ch;
//
//    printf("\n Enter any two number : ");
//    scanf("%d%d",&n1,&n2);
//    addd=add(n1,n2);
//    dive=div(n1,n2);
//    printf("\n Addition : %d\nDivision : %0.2f",addd,dive);
//
//    ch=isprime(n1);
//    if(ch=='y')
//    {
//        printf("\n %d Number is prime Number ",n1);
//    }
//    else
//    {
//         printf("\n %d Number is NOT prime Number ",n1);
//    }
//
//    findmax();
//    return 0;
//}
//
//int add(int x,int y)
//{
//    int t;
//    t=x+y;
//    return t;
//}
//float div(int a ,int b)
//{
//    float z;
//    z=(float)a/b;
//    return z;
//}
//void findmax()
//{
//    int n1,n2,max;
//
//    printf("\n To Find MAx No. Enter any two Number : ");
//    scanf("%d%d",&n1,&n2);
//    max=(n1>n2)?n1:n2;
//    printf("\n Max Number : %d",max);
//}
//
//char isprime(int n1)
//{
//    int i,flg=0;
//
//    for(i=2;i<=n1/2;i++)
//    {
//        if(n1%i==0)
//        {
//            flg=1;
//            break;
//        }
//    }
//    if(flg==0)
//    {
//        return 'y';
//    }
//    else
//    {
//        return 'n';
//    }
//}
///=================================================================================================================================
/**

//using function


	       a	       b
		[ 10  ]		[20   ]
	 400  |		      |500
		  |		      |
		x V	        y V
		[ 10  ]		[  20 ]


// call by value
*/
//
//void swap(int x, int y)
//{
//    int tmp;
//
//    tmp=x;
//    x=y;
//    y=tmp;
//}
//int main()
//{
//    int a,b;
//    printf("\n Enter any Two Number : ");
//    scanf("%d%d",&a,&b);
//    printf("\n Before Exchange \t A=%d \t B=%d",a,b);
//    swap(a,b);
//    printf("\n After  Exchange \t A=%d \t B=%d",a,b);
//    return 0;
//}
///=================================================================================================================================
/**
//.  call by Reference
   a	       b
		[ 10  ]		[20   ]
	 400  |		      |500
		  |		      |
		x V	        y V
		[ 20  ]		[  10 ]
        400         500
*/

//void swap(int *x,int *y)
//{
//    int tmp;
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//}
//int main()
//{
//    int a,b;
//    printf("\n Enter any Two Number : ");
//    scanf("%d%d",&a,&b);
//
//    printf("\n Before Exchange \t A=%d \t B=%d",a,b);
//
//    swap(&a,&b);
//
//    printf("\n After  Exchange \t A=%d \t B=%d",a,b);
//    return 0;
//}

///=================================================================================================================================
///Pass Array as argument
//
//void evenno(int s[])
//{
//    int i;
//    printf("\n Even No. list : ");
//    for(i=0;i<10;i++)
//    {
//        if(s[i]%2==0)
//        {
//            printf("%5d",s[i]);
//        }
//    }
//}
//
//int main()
//{
//    int x[10],i;
//
//    printf("\n Enter any 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    evenno(x);
//    return 0;
//}

///=================================================================================================================================
///check Array is passed by value or by Reference to check no is even list if even then add 100.
//
//void evenno(int x[])
//{
//    int i;
//    for(i=0;i<10;i++)
//    {
//        if(x[i]%2==0)
//        {
//            x[i]=x[i]+100;
//        }
//    }
//}
//
//void display(int x[])
//{
//    for(int i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//}
//
//int main()
//{
//    int i,x[5];
//
//    printf("\n Enter any 5 element : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n before Exchange : ");
//    display(x);
//    evenno(x);
//    printf("\n After  Exchange : ");
//    display(x);
//    return 0;
//}
///=================================================================================================================================
/// Using I/O Method.
//
//void intput(int x[])
//{
//    int i;
//    printf("\n Enter any 5 element : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//}
//void display(int x[])
//{
//    int i;
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//}
//void incr100(int x[])
//{
//    int i;
//    for(i=0;i<5;i++)
//    {
//        if(x[i]%2==0)
//        {
//            x[i]=x[i]+100;
//        }
//    }
//}
//int  main()
//{
//    int x[5];
//
//    intput(x);
//    printf("\n Before Exchange : ");
//    display(x);
//    incr100(x);
//    printf("\n After  Exchange : ");
//    display(x);
//    return 0;
//}
///=================================================================================================================================
/** We know the array is always passed by reference ,means it can be collected in the pointer variable also.

		Then above program can be written as .................

*/

//void input(int *p)
//{
//    int i;
//    printf("\n Enter any 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",(p+i));
//    }
//}
//void display(int *q)
//{
//    int i;
//    printf("\n array 0f 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",*(q+i));
//    }
//}
//int main()
//{
//    int x[10],cnt=0;
//    input(x);
//    display(x);
//    return 0;
//}

///=================================================================================================================================
/** WAP to get the array of even values from function when an array is passed as a argument.

// copy and Displaying all even elements from array using function
*/
//
//void process(int y[10])
//{
//    int i,ev[10],cnt=0;
//    printf("\n Even Array List : ");
//    for(i=0;i<10;i++)
//    {
//        if(y[i]%2==0)
//        {
//            ev[cnt++]=y[i];
//        }
//    }
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",ev[i]);
//    }
//}
//int main()
//{
//    int i,x[10];
//    printf("\n enter any 10 Number : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Original array : ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//     process(x);
//    return 0;
//
//}

///=================================================================================================================================
/** Now i want to display the array of even numbers in main().

        There are different ways


    // 1a - passing the all arguments by reference

        In such case the array pass is by-default byref but we need to pass the
        variable byref as shown..

        passing the elements byref. will going to access the original locations(from
        main) in the function. so original locations are modified

*/
//
//void process(int y[10],int ev[10],int *p)
//{
//    int i;
//    for(i=0;i<10;i++)
//    {
//        if(y[i]%2==0)
//        {
//            ev[(*p)++]=y[i];
//        }
//    }
//}
//
//int main()
//{
//    int i,x[10],ev[10],cnt=0;
//    printf("\n Enter any 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    process(x,ev,&cnt);
//
//    printf("\n Even List : ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",ev[i]);
//    }
//    return 0;
//}
//

///=================================================================================================================================
///1b - passing the array (by default by reference) as argument and returning the count
//
//int process(int y[10],int ev[10])
//{
//    int i,cnt=0;
//    for(i=0;i<10;i++)
//    {
//        if(y[i]%2==0)
//        {
//            ev[cnt++]=y[i];
//        }
//    }
//    return cnt;
//}
//
//int main()
//{
//    int i,x[10],ev[10],cnt=0;
//    printf("\n Enter any 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    cnt=process(x,ev);
//    printf("\n Original array: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\n List of even elements: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",ev[i]);
//    }
//     return 0;
//}
///=================================================================================================================================
/** 2. Using the static: Normally the life and scope of function is limited
                         within the function but when the member decl as static
                         then it remains in the memory till program ends.
                         (i.e. life changed till the end of program)

    // returning the array from function
*/
//
//int* process(int y[10],int *cn)
//{
//    static int ev[10];
//    int i;
//
//    for(i=0;i<10;i++)
//    {
//        if(y[i]%2==0)
//        {
//            ev[*cn]=y[i];
//            (*cn)++;
//        }
//    }
//    return ev;
//
//}
//
//int main()
//{
//    int i,x[10],cnt=0;
//    int *p;
//      printf("\n Enter the 10 nos: ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    p=process(x,&cnt);
//
//    printf("\n Original array: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\n List of even elements: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//}

///=================================================================================================================================
/// 3. Using Global variables

//
//int ev[10],cnt=0,i;
//void getevens(int y[])
//{
//
//    for(i=0;i<10;i++)
//    {
//        if(y[i]%2==0)
//        {
//            ev[cnt]=y[i];
//            cnt++;
//        }
//    }
//}
//int main()
//{
//    int x[10];
//
//    printf("\n Enter the 10 nos: ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    getevens(x);
//
//    printf("\n List of even elements: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",ev[i]);
//    }
//
//    printf("\n Original array: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
///=================================================================================================================================
/// Passing the pointer to function and return the pointer

/// Enter the N numbers and display the list of even number using function.

//
//int ec=0;
//int* findevens(int *q, int t)
//{
//	int i,j;
//	int *r;
//	for(i=0;i<t;i++)
//	{
//		if(*(q+i)%2==0)
//		{
//			ec++;
//		}
//	}
//	r = (int*)malloc(ec*sizeof(int));
//	for( i=0,j=0 ; i<t ; i++ )
//	{
//		if(*(q+i)%2==0)
//		{
//			*(r+j)=*(q+i);
//			j++;
//		}
//	}
//	return r;
//}
//int main()
//{
//	int *p,*s,cnt,i;
//
//	printf("\n Enter the element count: ");
//	scanf("%d",&cnt);
//
//	p=(int*)malloc(cnt*sizeof(int));
//
//	printf("\n Enter the numbers: ");
//	for(i=0;i<cnt;i++)
//	{
//		scanf("%d",(p+i));
//	}
//
//	printf("\n Elements are: ");
//	for(i=0;i<cnt;i++)
//	{
//		printf("%6d",*(p+i));
//	}
//
//	s=findevens(p,cnt);
//
//	printf("\n Even Elements are: ");
//	for(i=0;i<ec;i++)
//	{
//		printf("%6d",*(s+i));
//	}
//	return 0;
//}

///=================================================================================================================================
/// funtion to pointer
//
//int main()
//{
//    void (*fptr)(int,int);
//
//    printf("\n Enter the Value of X and y : ");
//    scanf("%d%d",&x,&y);
//
//    fptr=&add;
//    fptr(x,y);
//}


///=================================================================================================================================


///=========================================================================================================================================================
///------------------------------------------------------------------STRUCTURE------------------------------------------------------------------------------
///=========================================================================================================================================================

///simple program
//
//int main()
//{
//    struct Book
//   {
//       int bokid;
//       double bokprice;
//       int notopic;
//   };
//   struct Book b;
//
//   printf("\n Enter the book Id, book price , Number of topics : ");
//   scanf("%d %lf %d",&b.bokid,&b.bokprice,&b.notopic);
//
//   printf("\n Book Id : %d \t Book Price : %0.2lf\t Number Topics : %d",b.bokid,b.bokprice,b.notopic);
//   return 0;
//}

///=========================================================================================================================================================
/// Initilization of structure variable
//
//struct book{
//  int bokid;
//  double bokprice;
//  int no_topic;
//};
//
//int main()
//{
//    struct book b={123,23.56,8};
//    printf("\n Book id : %d\t Book Price : %f \t number of topic : %d",b.bokid,b.bokprice,b.no_topic);
//    return 0;
//}

///=========================================================================================================================================================
/// // Input and display the structure data
//
//struct student{
//    int stdid;
//    char stdnm[50];
//    float per10;
//    double per12;
//};
//
//int main()
//{
//    struct student s;
//
//    printf("\n enter student name : ");
//    gets(s.stdnm);
//    printf("\n Enter student id , 10th mark and 12 mark");
//    scanf("%d %f %lf",&s.stdid,&s.per10,&s.per12);
//
//    printf("\n Student name : %s \t student name : %d \t 10th mark : %0.2f\t 12th mark : %0.2lf ",s.stdnm,s.stdid,s.per10,s.per12);
//    return 0;
//}
///=========================================================================================================================================================
/// Write a structure to represent all details of item and perform IO operation.

//
//struct item
//{
//    int icode;
//    char inm[50];
//    float ipr;
//};
//
//int main()
//{
//    struct item t;
//
//    printf("\n Enter the Name of Item: ");
//    gets(t.inm);
//
//    printf("\n Enter the Code and Price of Item: ");
//    scanf("%d %f",&t.icode,&t.ipr);
//
//    printf("\n Item Name: %s \t Code: %d \t Price: %0.2f",t.inm, t.icode, t.ipr);
//
//    return 0;
//}
///=========================================================================================================================================================
/// Using the typedef: It is used to define the type, in such case no need of using struct keyword.
//
//#include<stdio.h>
//
//typedef struct
//{
//    int icode;
//    char inm[50];
//    float ipr;
//}item;
//
//int main()
//{
//    item i;
//    printf("\n Enter item name ; ");
//    gets(i.inm);
//
//    printf("\n enter itom code, itom price : ");
//    scanf("%d %f",&i.icode,&i.ipr);
//
//    printf("\n Itom Name : %s\t Iton Code : %d\t Itom Price : %.2fRs",i.inm,i.icode,i.ipr);
//    return 0;
//}
///=========================================================================================================================================================
///- //Structure with multiple variable
//
//typedef struct{
//
//    char stdnm[50];
//    int stdno;
//    int stdage;
//    float stdssc;
//    double stdhsc;
//
//}student;
//
//int main()
//{
//    student s1,s2,s3;
//
//    printf("\n Enter 1st student name : ");
//    gets(s1.stdnm);
//    printf("\n Enter student roll no,age,ssc marks,hsc marks : ");
//    scanf("%d %d %f %lf",&s1.stdno,&s1.stdage,&s1.stdssc,&s1.stdhsc);
//
//
//    printf("\n Enter 2nd student name : ");
//    scanf("%s",s2.stdnm);
//    printf("\n Enter student roll no,age,ssc marks,hsc marks : ");
//    scanf("%d %d %f %lf",&s2.stdno,&s2.stdage,&s2.stdssc,&s2.stdhsc);
//
//
//    printf("\n Enter 3rd student name : ");
//    scanf("%s",s3.stdnm);
//    printf("\n Enter student roll no,age,ssc marks,hsc marks : ");
//    scanf("%d %d %f %lf",&s3.stdno,&s3.stdage,&s3.stdssc,&s3.stdhsc);
//
//
//    printf("\n 1st Student Name : %s\tRoll no : %d\tAge : %d\t ssc marks : %.2f\t hsc marks : %.2f",s1.stdnm,s1.stdno,s1.stdage,s1.stdssc,s1.stdhsc);
//    printf("\n 2nd Student Name : %s\tRoll no : %d\tAge : %d\t ssc marks : %.2f\t hsc marks : %.2f",s2.stdnm,s2.stdno,s2.stdage,s2.stdssc,s2.stdhsc);
//    printf("\n 3rd Student Name : %s\tRoll no : %d\tAge : %d\t ssc marks : %.2f\t hsc marks : %.2f",s3.stdnm,s3.stdno,s3.stdage,s3.stdssc,s3.stdhsc);
//
//    return 0;
//}
///=========================================================================================================================================================
///-  Array as structure variable
//
//struct employ{
//    char nm[40];
//    int id;
//    float sal;
//};
//int main()
//{
//    struct employ s[3];
//    int i;
//
//   for(i=0;i<3;i++)
//   {
//       printf("\n Enter %d employ name : ",i+1);
//       scanf("%s",s[i].nm);             ///scanf("%s",&s[i].nm);
//
//       printf("\n Enter the employ ID : ");
//       scanf("%d",&s[i].id);
//
//       printf("\n Enter the employ Salary : ");
//       scanf("%f",&s[i].sal);
//   }
//   for(i=0;i<3;i++)
//   {
//       printf("\n %d. Employ Name : %s",i+1,s[i].nm);
//       printf("\n Employ Id : %d \t Employ Salary : %.2f",s[i].id,s[i].sal);
//   }
//   return 0;
//}
///=========================================================================================================================================================
///- Passing the structure variable to function

//
//struct student {
//    char nm[40];
//    int id;
//    int age;
//    float hsc;
//    float ssc;
//
//};
//void display( struct student s)
//{
//    printf("\n Details of student : ");
//    printf("\n Student Name : %s \t Id : %d \t Age : %d \t Hsc mark : %f \t ssc mark: %f",s.nm,s.id,s.age,s.hsc,s.ssc);
//}
//int main()
//{
//    struct student s;
//
//    printf("\n Enter the student name : ");
//    scanf("%s",&s.nm);
//    printf("\n Enter the student id age hsc mark and ssc mark : ");
//    scanf("%d %d %f %f",&s.id,&s.age,&s.hsc,&s.ssc);
//
//    display(s);
//    return 0;
//}
///=========================================================================================================================================================
///-// How the structure variable is passed (By Value or By Reference )
///  NOTE THAT : structure variable is passedBy Value
//
//struct student {
//    char nm[40];
//    int id;
//    int age;
//    float hsc;
//    float ssc;
//};
//
//void input(struct student s)
//{
//    printf("\n Enter the student name : ");
//    scanf("%s",&s.nm);
//    printf("\n Enter the student id age hsc mark and ssc mark : ");
//    scanf("%d %d %f %f",&s.id,&s.age,&s.hsc,&s.ssc);
//}
// void display(struct student s)
// {
//    printf("\n Details of student : ");
//    printf("\n Student Name : %s \t Id : %d \t Age : %d \t Hsc mark : %f \t ssc mark: %f",s.nm,s.id,s.age,s.hsc,s.ssc);
//
// }
//int main()
//{
//    struct student s;
//
//    input(s);
//    display(s);
//    return 0;
//}
///-----------
/// output :-  Student Name :          Id : 51         Age : 0         Hsc mark : 0.000000     ssc mark: 0.000000
///structure variable is passedBy Value correct this use by refrence.
///-----------

///=========================================================================================================================================================
/// Passing the structure variable by reference
//
//typedef struct{
//    char nm[40];
//    int id;
//    int age;
//    float hsc;
//    float ssc;
//}student;
//
//void input(student *s)
//{
//    printf("\n Enter student details : ");
//    printf("\n Enter the student name id age hsc mark  ssc mark : ");
//    scanf("%s %d %d %f %f",&s->nm,&s->id,&s->age,&s->hsc,&s->ssc);
//}
// void display(student s)
// {
//    printf("\n Details of student : ");
//    printf("\n Student Name : %s \t Id : %d \t Age : %d \t Hsc mark : %.2f \t ssc mark: %.2f",s.nm,s.id,s.age,s.hsc,s.ssc);
//
// }
//int main()
//{
//    student s;
//
//    input(&s);
//    display(s);
//    return 0;
//}

///=========================================================================================================================================================
///-Display the  details of Student whose hsc marks are high
//
//typedef struct{
//    char nm[40];
//    int id;
//    int age;
//    float hsc;
//    float ssc;
//}student;
//
//void input(student *s)
//{
//    printf("\n Enter student details : ");
//    printf("\n Enter student name ID age hsc mark & scc mark : ");
//    scanf("%s %d %d %f %f",&s->nm,&s->id,&s->age,&s->hsc,&s->ssc);
//}
//void display(student s)
//{
//
//    printf("\n Name : %s\t ID : %d \t Age : %d \t Hsc : %.2f \t SSC : %.2f",s.nm,s.id,s.age,s.hsc,s.ssc);
//}
// student maxhsc(student s1,student s2)
//{
//    if(s1.hsc>s2.hsc)
//    {
//        return s1;
//    }
//    else
//    {
//        return s2;
//    }
//}
//int main()
//{
//    student s1,s2,max;
//
//    input(&s1);
//    printf("\n student details : ");
//    display(s1);
//    input(&s2);
//    printf("\n student details : ");
//    display(s2);
//    printf("\n\nstudent details whos hsc mark is high : ");
//    max=maxhsc(s1,s2);
//    display(max);
//    return 0;
//}
///-----------anthoer way-----
//
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
//     max(s1,s2);
//     return 0;
//}

///=========================================================================================================================================================
///-Passing Array To Function: Array can be passed to function as a argument.(by value=? or by refrence=?)

//
//struct book
//{
//    int id;
//    char nm[40];
//    int topic;
//    float price;
//};
//void display(struct book s[3])
//{
//    int i;
//    for(i=0;i<3;i++)
//    {
//        printf("\n  %d Book Details ",i+1);
//        printf("\n  Book Name : %s, BookId : %d, Number of topic : %d, Book price : %.2f",s[i].nm,s[i].id,s[i].topic,s[i].price);
//
//    }
//}
//
//int main()
//{
//    int i;
//    struct book b[3];
//
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter %d book details : ",i+1);
//        printf("\n enetr Book name, id, Number of topics and price of Book : ");
//        scanf("%s %d %d %f",&b[i].nm,&b[i].id,&b[i].topic,&b[i].price);
//    }
//    display(b);
//    return 0;
//}

///=========================================================================================================================================================
///-Passing Array To Function: Array can be passed to function as a argument.(by value=? or by refrence=?)
///---->ans= Array Pass by automaticaly by refrence

//int i;
//typedef struct
//{
//    int id;
//    char nm[40];
//    int boktop;
//    float price;
//
//}book;
//
//void input(book s[])
//{
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter %d book details : ",i+1);
//        printf("\n Enter Boook Name , Id, Number Of Topic and Price of book : ");
//        scanf("%s %d %d %f",&s[i].nm,&s[i].id,&s[i].boktop,&s[i].price);
//    }
//}
//void display(book s[])
//{
//    for(i=0;i<3;i++)
//    {
//        printf("\n %d book details : ",i+1);
//        printf("\n  Boook Name : %s, Id : %d , Number Of Topic : %d and Price of book :%.2f ",s[i].nm,s[i].id,s[i].boktop,s[i].price);
//
//    }
//}
//
//int main()
//{
//    book b[3];
//
//    input(b);
//    display(b);
//
//}
///--------same program
//int i;
// typedef struct
//{
//    int id;
//    char nm[40];
//    int bnot;
//    float price;
//
//}Book;
//
//void input( Book b[])
//{
//
//    printf("\n Enter the details of book : ");
//    for(i=0;i<4;i++)
//    {
//        printf("\n %d Book Details : ",i+1);
//        printf("\n Enter the Book Name : ");
//        scanf("%s",b[i].nm);
//
//        printf("\n ENter the Book Id : ");
//        scanf("%d",&b[i].id);
//
//        printf("\n Enter the Number  Of Topics In the Book : ");
//        scanf("%d",&b[i].bnot);
//
//        printf("\n Enter the Book Price : ");
//        scanf("%f",&b[i].price);
//
//    }
//}
//
//void display( Book t[])
//{
//
//    printf("\n Display the details of book : ");
//    for(i=0;i<4;i++)
//    {
//        printf("\n %d Book Details : ",i+1);
//        printf("\n Name : %s \t Id : %d \t Nutop: %d \t price : %0.2f ",t[i].nm,t[i].id,t[i].bnot,t[i].price);
//    }
//
//}
//
//int main()
//{
//    Book b[4];
//
//    input(b);
//    display(b);
//
//}
///=========================================================================================================================================================
///-Pointer to structure variables.(collect or display by array element)
//
//int i,cnt;
//typedef struct{
//    int ram,rom;
//    char mbon[40],mbnm[40];
//    double price;
//}mobile;
//
//void display(mobile m[])
//{
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner : ",i+1);
//        printf("\n Owner Name : %s \n Mobile Name : %s \n Ram : %d \n Memory : %d \n Price : %0.3f",m[i].mbon,m[i].mbnm,m[i].ram,m[i].rom,m[i].price);
//
//    }
//}
//
//int main()
//{
//    mobile *p;
//
//    printf("\n Enter mobile count : ");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner : ",i+1);
//        printf("\n  Enter the Owner name :");
//        scanf("%s",p[i].mbon);
//
//        printf("\n Enter the Mobile Name : ");
//        scanf("%s",p[i].mbnm);
//
//        printf("\n Enter the Ram : ");
//        scanf("%d",&p[i].ram);
//
//        printf("\n Enter the mobile memory : ");
//        scanf("%d",&p[i].rom);
//        printf("\n Enter the Mobile price : ");
//        scanf("%lf",&p[i].price);
//
//    }
//
//    display(p);
//    return 0;
//}
///=========================================================================================================================================================
///-  //To access the dynamically allocated location using the pointer notations, we have to use
///   the  -> as member access operator in place of the .(dot).

/**cnt = 4

	*s                         0             1           2            3
	 [  ] --------------> [          ] [          ] [          ] [          ]


				Every block is having size 48 bytes coz of the members of structure student

				each block has nm, rno and per fields

	We know that the array and pointer having same represention in the memory, so array can be accessed using the pointer
	notations and the pointer (Dynamically allocated location) can be accessed using the Array notations.
*/
///---------------------------------(enter valu by pointer rotation in main ,collect by pointer in function and print by array rotaion)

//
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
//        printf("\n Owner Name : %s \n Mobile Name : %s \n Ram : %d \n Memory : %d \n Price : %0.3f",m[i].onm,m[i].mnm,m[i].ram,m[i].memory,m[i].price);
//    }
//
//}
//int main()
//{
//    struct Mobile *p;
//    int cnt,i;
//
//    printf("\n ENter the cnt : ");
//    scanf("%d",&cnt);//5
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n ENter the details of Mobile :");
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
//
//        printf("\n Enter the Mobile price : ");
//        scanf("%lf",&(p+i)->price);
//    }
//
//    display(p,cnt);
//}
///----anathor--
//
///---------------------------------(enter value by array rotaion in main ,collect by array in function and print by array rotaion)
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
//void display(struct Mobile m[],int cnt)
//{
//    int  i;
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner ",i+1);
//        printf("\n Owner Name : %s \n Mobile Name : %s \n Ram : %d \n Memory : %d \n Price : %0.3f",m[i].onm,m[i].mnm,m[i].ram,m[i].memory,m[i].price);
//    }
//
//}
//int main()
//{
//    struct Mobile *p;
//    int cnt,i;
//
//    printf("\n ENter the cnt : ");
//    scanf("%d",&cnt);//5
//
//    p=(struct Mobile*)malloc(cnt*sizeof(struct Mobile));
//
//    printf("\n ENter the details of Mobile :");
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner : ",i+1);
//        printf("\n  Enter the Owner name :");
//        scanf("%s",p[i].onm);
//
//        printf("\n Enter the Mobile Name : ");
//        scanf("%s",p[i].mnm);
//
//        printf("\n Enter the Ram : ");
//        scanf("%d",&p[i].ram);
//
//        printf("\n Enter the mobile memory : ");
//        scanf("%d",&p[i].memory);
//        printf("\n Enter the Mobile price : ");
//        scanf("%lf",&p[i].price);
//    }
//
//    display(p,cnt);
//
//
//}
///=========================================================================================================================================================
///-#include<stdio.h>
///---------------------------------(enter value by pointer rotation in main ,collect by array in function and print by pointer rotaion)
//
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
//void display(struct Mobile m[],int cnt)
//{
//    int  i;
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %d Owner ",i+1);
//        printf("\n Owner Name : %s \n Mobile Name : %s \n Ram : %d \n Memory : %d \n Price : %0.3f",(m+i)->onm,(m+i)->mnm,(m+i)->ram,(m+i)->memory,(m+i)->price);
//    }
//
//}
//int main()
//{
//    struct Mobile *p;
//    int cnt,i;
//
//    printf("\n ENter the cnt : ");
//    scanf("%d",&cnt);//5
//
//    p=(struct Mobile*)malloc(cnt*sizeof(struct Mobile));
//
//    printf("\n ENter the details of Mobile :");
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
//
//}

///=========================================================================================================================================================
///-  //To access the dynamically allocated location using the pointer notations, we have to use
///   the  -> as member access operator in place of the .(dot).
///---------------------------------(enter valu by pointer rotation in main ,collect by pointer in function and print by pointer rotaion)
//
//typedef struct{
//    int ram;
//    char mbnm[40];
//    double price;
//}mobile;
//
//void input(mobile *m,int cnt)
//{
//
//    for(int i=0;i<cnt;i++)
//    {
//        printf("\n Enter %d mobile details ",i+1);
//        printf("\n Enter mobile name : ");
//        scanf("%s",(m+i)->mbnm);
//        printf("\n Enter mobile ram and price : ");
//        scanf("%d %lf",&(m+i)->ram,&(m+i)->price);
//    }
//}
//void display(mobile *m,int cnt)
//{
//   for(int i=0;i<cnt;i++)
//   {
//        printf("\n %d mobile details ",i+1);
//        printf("\n Mobile name : %s\tRam : %d\tPrice : %.2lf",(m+i)->mbnm,(m+i)->ram,(m+i)->price);
//   }
//}
//int main()
//{
//    mobile *m;
//    int cnt;
//
//    printf("\n Enter the count of mobile : ");
//    scanf("%d",&cnt);
//    m=(mobile*)malloc(cnt*sizeof(mobile));
//
//    input(m,cnt);
//    display(m,cnt);
//    return 0;
//}
///=========================================================================================================================================================
///Array of structure variable when array as member of structure

//
//struct student{
//    int rno;
//    char nm[40];
//    int hmrk[5];
//};
//
//void display(struct student s[])
//{
//    printf("\n 3 student details : ");
//    for(int i=0;i<3;i++)
//    {
//        printf("\n student name : %s , roll no : %d ",s[i].nm,s[i].rno);
//        printf("\n 5 subject marks are : ");
//        for(int j=0;j<5;j++)
//        {
//            printf("%5d",s[i].hmrk[j]);
//        }
//    }
//}
//int main()
//{
//    struct student s[3];
//    int i,j;
//
//    printf("\n Enter the 3 Student details : ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n %d student details : ",i+1);
//        printf("\n Enter the name of student : ");
//        scanf("%s",s[i].nm);
//        printf("\n Enter the roll number : ");
//        scanf("%d",&s[i].rno);
//        printf("\n Enter the 5 subject mark; ");
//        for(j=0;j<5;j++)
//        {
//            scanf("%d",&s[i].hmrk[j]);
//        }
//    }
//    display(s);
//    return 0;
//}
//
///=========================================================================================================================================================
///pointer of structure variable when pointer as member of structure
//
//int i,j;
//struct student{
//    int rno;
//    char nm[40];
//    int *mark;
//};
//
//void input(struct student *s,int cnt,int cn)
//{
//    printf("\n Enter the %d student details : ",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n enter the %d student details : ",i+1);
//        printf("\n enter the student name : ");
//        fflush(stdin);
//        gets((s+i)->nm);
//        printf("\n Enter the roll number : ");
//        scanf("%d",&(s+i)->rno);
//        printf("\n Enter the %d subject mark : ",cn);
//
//        (s+i)->mark=(int*)malloc(cn*sizeof(int));
//        for(j=0;j<cn;j++)
//        {
//            scanf("%d",(s+i)->mark+j);
//        }
//    }
//}
//void display(struct student *s,int cnt,int cn)
//{
//    printf("\n %d student details : ",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n student name : %s , roll no : %d ",(s+i)->nm,(s+i)->rno);
//        printf("\n subject marks are : ",);
//        for(int j=0;j<cn;j++)
//        {
//            printf("%5d",*(s+i)->mark+j);
//        }
//    }
//}
//
//int main()
//{
//    struct student *s;
//    int cnt,cn;
//
//    printf("\n enter the student count : ");
//    scanf("%d",&cnt);
//
//    printf("\n enter the subject count : ");
//    scanf("%d",&cn);
//
//
//    s=(struct student*)malloc(cnt*sizeof(struct student));
//
//
//    input(s,cnt,cn);
//    display(s,cnt,cn);
//}

///=========================================================================================================================================================
///structure variable as member of another structure
//
//struct Date{
//    int mdate,mmonth,myear;
//};
//
//struct Item{
//    char nm[40];
//    int qnt;
//    float price;
//    struct Date d;
//};
//
//void display(struct Item i)
//{
//    printf("\n Itom name : %s \t quntity : %d\t Price : %.2f\t Manufacturing Date= %d\\%d\\%d",i.nm,i.qnt,i.price,i.d.mdate,i.d.mmonth,i.d.myear);
//}
//int main()
//{
//    struct Item i;
//
//    printf("\n Enter the item name : ");
//    scanf("%s",i.nm);
//
//    printf("\n Enter the item price and quntity : ");
//    scanf("%f %d",&i.price,&i.qnt);
//
//    printf("\n enter the manufaturing date month and year : ");
//    scanf("%d %d %d",&i.d.mdate,&i.d.mmonth,&i.d.myear);
//
//    display(i);
//}
///=========================================================================================================================================================
///Self referable structure

//struct Student {
//    int rno;
//    char nm[40];
//    struct Student *next;
//};
//
//int main()
//{
//    struct Student *tmp,*start=NULL,*last;
//    int opt;
//    while(1)
//    {
//        printf("\n 1. Input\t2.display\t3.exit(or stop)");
//        printf("\n Enter Valid Choice : ");
//        scanf("%d",&opt);
//        if(opt==1)
//        {
//            tmp=(struct Student*)malloc(sizeof(struct Student));
//            printf("\n Enter the Name and roll no : ");
//            scanf("%s%d",tmp->nm,&tmp->rno);
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
//        else if(opt==2)
//        {
//            tmp=start;
//            while(tmp)
//            {
//                printf("\n [name : %s \t Rno : %d]",tmp->nm,tmp->rno);
//                tmp=tmp->next;
//            }
//        }
//        else if(opt==3)
//        {
//            printf("\n Thank You ");
//            break;
//        }
//        else
//        {
//             printf("\n incoreect opition !!!! ");
//        }
//    }
//    return 0;
//}
///=========================================================================================================================================================
///Dynamic implementation of stack
//
//struct Node{
//    int data;
//    struct Node *next;
//};
//struct Node *tmp,*start,*last;
//#include<stdio.h>
//int main()
//{
//     int opt;
//     start=NULL;
//     while(1)
//     {
//         printf("---------Menu-------------");
//         printf("\n1.push\t2.pop\t3.stop");
//         printf("\n Enter Your Opition : ");
//         scanf("%d",&opt);
//         switch(opt)
//         {
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                printf("\n Enter the Data : ");
//                scanf("%d",&tmp->data);
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
//            case 2:
//                tmp=start;
//                if(start==NULL)
//                {
//                    printf("\n Stack is Empty!!!!");
//                }
//                else if(tmp->next==NULL)
//                {
//                    start=NULL;
//                    printf("\n %d is Poped",tmp->data);
//                }
//               else
//               {
//                    while(tmp->next!=last)
//                    {
//                        tmp=tmp->next;
//                    }
//                    tmp->next=NULL;
//                    printf("\n %d is Poped ",tmp->data);
//                    free(last);
//                    last=tmp;
//               }
//               break;
//            case 3:
//                exit(0);
//
//         }
//     }
//}
///=================================================================================================================================
//
//struct Node{
//    int data;
//    struct Node *next;
//};
//
//int main()
//{
//    int i,opt,cnt=0;
//    struct Node *tmp,*start=NULL,*last;
//
//    while(1)
//    {
//        printf("\n 1.PUSH \t 2.POP\t 3.DISPLAY \t 4.STOP ");
//        printf("\n ENter your option");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                printf("\n Enter the data : ");
//                scanf("%d",&tmp->data);
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
//                cnt++;
//                break;
//            case 2:
//                tmp=start;
//                if(tmp==NULL)//start==NULL
//                {
//                    printf("\n Stack is Empty : ");
//                }
//                else if(tmp->next==NULL)//start->next==NULL
//                {
//                    start=NULL;
//                    printf("\n %d is poped ",tmp->data);
//                }
//                else
//                {
//                    while(tmp->next!=last)
//                    {
//                        tmp=tmp->next;
//                    }
//                    tmp->next=NULL;
//                    printf("\n %d is Poped",last->data);
//                    free(last);
//                    last=tmp;
//                }
//                cnt--;
//                break;
//            case 3:
//                i=0;
//                tmp=start;
//                do
//                {
//                    printf("\n %d ",tmp->data);
//                    tmp=tmp->next;
//                }while(i++<cnt);
//                break;
//
//            case 4:
//                printf("\n Thank You !!!!");
//                exit(0);
//        }
//    }
//    return 0;
//}


///=================================================================================================================================
///singly Circular link list
//
//struct Node {
//    int data;
//    struct Node *next;
//};
//struct Node *tmp,*strat,*last;
//int main()
//{
//    strat=NULL;
//    int i,cnt=0,opt;
//    while(1)
//    {
//        printf("\n ----------- Menu singly linked List ------------\n");
//		printf("\n 1. input \n 2.display \n 3.stop");
//		printf("\n select your option: ");
//		scanf("%d",&opt);
//		switch(opt)
//		{
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                tmp->next=strat;
//                printf("\n Enter the data: ");
//				scanf("%d",&tmp->data);
//                if(strat==NULL)
//                {
//                    strat=tmp;
//                    last=tmp;
//                   // tmp->next=strat;
//                }
//                else
//                {
//                    last->next=tmp;
//                    last=tmp;
//                   // last->next=strat;
//
//                }
//                cnt++;
//                break;
// 			case 2:
//				tmp=strat;
//				i=0;
//				printf("\n Element count %d and Elements are :",cnt);
//				do
//				{
//					printf("%5d",tmp->data);
//					tmp=tmp->next;
//				}while(++i<cnt);
//                break;
//			case 3:
//				exit(0);
//		}
//    }
//}
//
///=================================================================================================================================
///-doubluy linlk list
//
//struct Node{
//    int data;
//    struct Node *next;
//    struct Node *prv
//};
//
//
//int main()
//{
//    struct Node *start=NULL,*last,*tmp;
//    int cnt=0,i,opt;
//
//
//    while(1)
//    {
//        printf("\n 1.Insert \t 2.Display \t 3.Stop ");
//        printf("\n Enter Your Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                printf("\n Enter the data ");
//                scanf("%d",&tmp->data);
//
//                tmp->next=NULL;
//                //tmp->prv=NULL;
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
//            case 2:
//                tmp=start;
//                i=0;
//                printf("\n Forward Direction by using count : ");
//                while(i++<cnt)
//                {
//                    printf("[%d]",tmp->data);
//                    tmp=tmp->next;
//                }
//                printf("\n Reverse Direction by using count : ");
//                tmp=last;
//                i=cnt;
//                while(i-->0)
//                {
//                    printf("[%d]",tmp->data);
//                    tmp=tmp->prv;
//                }
//                //--------------
//                 printf("\n Forward Direction by using tmp : ");
//                tmp=start;
//                while(tmp)
//                {
//                    printf("[%d]",tmp->data);
//                    tmp=tmp->next;
//                }
//                printf("\n Reverse Direction by using tmp : ");
//
//                tmp=last;
//
//                while(tmp)
//                {
//                    printf("[%d]",tmp->data);
//                    tmp=tmp->prv;
//                }
//                break;
//            case 3:
//                exit(0);
//
//            default:
//                printf("\n Incorrect Option !!");
//
//        }
//    }
//    return 0;
//}
//
///=================================================================================================================================
///-doubly circuler linker list
//
//struct Node{
//    struct Node *prv;
//    int data;
//    struct Node *next;
//};
//
//int cnt;
//struct Node *start,*last,*tmp;
//
//int main()
//{
//    start=NULL;
//    last=NULL;
//    int i,opt;
//
//    while(1)
//    {
//        printf("\n -------- Menu ---------\n");
//		printf("\n 1.insert \n 2. display \n 3. stop");
//
//		printf("\n Enter your option: ");
//		scanf("%d",&opt);
//
//		switch(opt)
//		{
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                printf("\n Enter the data : ");
//                scanf("%d",&tmp->data);
//                tmp->next=start;
//                tmp->prv=last;
//
//                if(start==NULL)
//                {
//                    start=tmp;
//                    last=tmp;
//                    tmp->next=start;
//                    tmp->prv=last;
//                }
//                else
//                {
//                    last->next=tmp;
//                    tmp->prv=last;
//                    last=tmp;
//                    start->prv=last;//start->prv=tmp;
//                }
//                cnt++;
//                break;
//            case 2:
//                tmp=start;
//                i=0;
//                printf("\n Forword Direction : ");
//                while(i++<cnt)
//                {
//                    printf("[%d]",tmp->data);
//                    tmp=tmp->next;
//                }
//                 printf("\n Reverse Direction : ");
//                 i=cnt;
//                 tmp=last;
//                while(i-->0)
//                {
//                    printf("[%d]",tmp->data);
//                    tmp=tmp->prv;
//                }
//                break;
//            case 3:
//                exit(0);
//            default:
//                printf("\n Incorect opition!!!!");
//		}
//    }
//    return 0;
//}
//
///=================================================================================================================================
///-doubly circuler linker list(dynamic implemantaion of stack)
//
//typedef struct{
//   struct Node *prv;
//    int data;
//   struct Node *next;
//}Node;
//
//Node *start,*last,*tmp;
//int cnt,i,flg;
//
//int main()
//{
//    int opt;
//    start=NULL;
//    last=NULL;
//    while(1)
//    {
//        printf("\n -------- Menu ---------\n");
//		printf("\n 1.push \n 2. poped by last->first  \n 3. poped by first->last \n 4.display\n 5.stop");
//
//		printf("\n Enter your option: ");
//		scanf("%d",&opt);
//		switch(opt)
//		{
//			case 1:
//				tmp=(Node*)malloc(sizeof(Node));
//				printf("\n Enter the data: ");
//				scanf("%d",&tmp->data);
//				tmp->next=start;
//				tmp->prv=last;
//				if(start==NULL)
//                {
//                    start=tmp;
//                    last=tmp;
//                    tmp->next=start;
//                    tmp->prv=last;
//                }
//                else
//                {
//                    last->next=tmp;
//                    tmp->prv=last;
//                    last=tmp;
//                    start->prv=last;
//                }
//                cnt++;
//                break;
//            case 2:
//                tmp=start;
//                if(start==NULL)
//                {
//                    printf("\n Stack is empty!!!");
//                }
//                else if(start->next==NULL)
//                {
//                    start=NULL;
//                    printf("\n %d is poped ",last->data);
//                    flg=1;
//                }
//                else
//                {
//                    while(tmp->next!=last)
//                    {
//                        tmp=tmp->next;
//                    }
//                    tmp->next=NULL;
//                    printf("\n %d is Poped",last->data);
//                    free(last);
//                    last=tmp;
//                }
//                cnt--;
//                break;
//            case 3:
//                if(start==NULL)
//                {
//                    printf("\n Stack is empty!!!");
//                }
//                else if(start==last)
//                {
//                    printf("\n %d is poped",start->data);
//                    start=NULL;
//                    flg=1;
//                }
//                else
//                {
//                    tmp=start;
//                    printf("\n %d is poped",start->data);
//                    free(start);
//                    start=tmp->next;
//                }
//                cnt--;
//                break;
//            case 4:
//                i=0;
//                tmp=start;
//                printf("\n Stack :");
//                while(i++<cnt)
//                {
//                    printf("\t[%d]",tmp->data);
//                    tmp=tmp->next;
//                }
//                if(flg==1)
//                {
//                    printf(" is empty!!!");
//                }
//               break;
//            case 5:
//                printf("\n thank You");
//                exit(0);
//            default:
//                printf("\n Invalid option!!!!!try again");
//		}
//
//    }
//    return 0;
//}

//correct this code
//           case 3:
//                start->prv=NULL;
//                tmp=last;
//                if(last==NULL)
//                {
//                    printf("\n Stack is empty!!!");
//                }
//                else if(last->prv==NULL)
//                {
//                    printf("\n %d is poped",last->data);
//                    last=NULL;
//                }
//                else
//                {
//                    while(tmp->prv!=start)
//                    {
//                       tmp=tmp->prv;
//                    }
//                    tmp->prv=NULL;
//                    printf("\n %d is poped ",start->data);
//                    free(start);
//                    start=tmp;
///=================================================================================================================================
///- deleat by value
//
//struct Node {
//    int data;
//    struct Node *next;
//};
//
//
//struct Node *start,*last,*tmp,*del;
//int i,flg,cnt;
//int main()
//{
//
//    int opt,no;
//    while(1)
//    {
//        printf("\n ----------- Menu singly linked List ------------\n");
//		printf("\n 1. input \n 2.display \n 3.pop by choice Number \n 4.stop");
//		printf("\n select your option: ");
//		scanf("%d",&opt);
//
//		switch(opt)
//		{
//            case 1:
//                flg=0;
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                printf("\n Enter the data: ");
//				scanf("%d",&tmp->data);
//				tmp->next=NULL;
//				if(start==NULL)
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
//            case 2:
//                tmp=start;
//                printf("\n Stack is ");
//                if(flg==1)
//                {
//                    printf("empty");
//                }
//                else
//                {
//                    while(tmp)
//                    {
//                        printf("\t%d",tmp->data);
//                        tmp=tmp->next;
//                    }
//                }
//                break;
//            case 3:
//                tmp=start;
//                if(start==NULL)
//                {
//                    printf("\n Stack is empty");
//                }
//                else
//                {
//                    printf("\n Enter the value to poped : ");
//                    scanf("%d",&no);
//
//                    while(tmp)
//                    {
//                        if(start->data==no)
//                        {
//                              printf("\n %d is poped",start->data);
//                              tmp=tmp->next;
//                              free(start);
//                              start=tmp;
//                              flg=1;
//                              break;
//                        }
//                        else if(tmp->next->data==no)
//                        {
//                            printf("\n %d is poped ",tmp->next->data);
//                            del=tmp->next;
//                            tmp->next=tmp->next->next;
//                            free(del);
//                            break;
//                        }
//                        tmp=tmp->next;
//                    }
//                }
//                break;
//            case 4:
//                printf("\n Thank you ");
//                exit(0);
//            default:
//                printf("\n Invalid choice try again");
//
//		}
//
//    }
//    return 0;
//}
//
///=================================================================================================================================
///-singly link list deleat at start.
//
//struct Node {
//    int data;
//    struct Node *next;
//};
//struct Node *start,*last,*tmp;
//int main()
//{
//
//    int opt,no;
//    while(1)
//    {
//        printf("\n ----------- Menu singly linked List ------------\n");
//		printf("\n 1. input \n 2.display \n 3.delet at start \n 4.stop");
//		printf("\n select your option: ");
//		scanf("%d",&opt);
//
//		switch(opt)
//		{
//            case 1:
//                tmp=(struct Node*)malloc(sizeof(struct Node));
//                printf("\n Enter the data: ");
//				scanf("%d",&tmp->data);
//				tmp->next=NULL;
//				if(start==NULL)
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
//            case 2:
//                tmp=start;
//                printf("\n Stack : ");
//                while(tmp)
//                {
//                    printf("\t%d",tmp->data);
//                    tmp=tmp->next;
//                }
//                break;
//            case 3:
//                tmp=start;
//                tmp=tmp->next;
//                printf("\n %d is poped",start->data);
//                free(start);
//                start=tmp;
//
//                break;
//            case 4:
//                printf("\n Thank you ");
//                exit(0);
//            default:
//                printf("\n Invalid choice try again");
//
//		}
//
//    }
//    return 0;
//}

///=================================================================================================================================
///------------------------------------------UNION------------------------------------
///=================================================================================================================================
/**
It is also user-defined data type like a structure. it may hold elements of any
	type and any count. It is just a templet,used to allocate the memory for its variables.

		The memory allocated for the variable of union is equals to the highest memory
	holder element enclosed within the union templet.

	let's see,

	struct Test				union Test
	{					{
		int x;					int x;
		float y;				float y;
		char ch;				char ch;
		double db;				double db;
	};					};

	In both cases, Only templets are created, the memory allocation is remaining.

	struct Test t;				union Test t;

	t    (17 bytes location)		t   (8 bytes location)
        _____________________________		__________________
	|____|_____|_______|________|		|________________|

		  The locations able to store at a time

	x and						x or
	y and						y or
	ch and						ch or
	db						db
*/
///size of union.
//
//union Test
//{
//	int x;
//	float y;
//	char ch;
//	double db;
//};
//
//int main()
//{
//	union Test t;
//
//	printf("\n Size of Test is: %d",sizeof( union Test));
//    printf("\n Size of T is: %d",sizeof(t));
//	return 0;
//}
///=================================================================================================================================

//union test{
//    int a;
//    char ch;
//    float b;
//    double c;
//};
//
//
//int main()
//{
//
//    union test t;
//    printf("\n Enter any character : ");
//    scanf("%c",&t.ch);
//
//    printf("\n Enter any integer value : ");
//    scanf("%d",&t.a);
//
//    printf("\n Enter any float value : ");
//    scanf("%f",&t.b);
//
//    printf("\n Enter any double value : ");
//    scanf("%lf",&t.c);
//
//    printf("\n int is %d",t.a);
//    printf("\n char is %c",t.ch);
//    printf("\n float is %.2f",t.b);
//    printf("\n double is %lf",t.c);
//    return 0;
//}

///--------problem in this code is over right value and print only last value i.e double other value show zero ya somting garbage value.
///so avoid this the prefer next code.

//union test{
//    int a;
//    char ch;
//    float b;
//    double c;
//};
//
//
//int main()
//{
//
//    union test t;
//    printf("\n Enter any character : ");
//    scanf("%c",&t.ch);
//    printf("\n char is %c",t.ch);
//
//    printf("\n Enter any integer value : ");
//    scanf("%d",&t.a);
//    printf("\n int is %d",t.a);
//
//    printf("\n Enter any float value : ");
//    scanf("%f",&t.b);
//    printf("\n float is %.2f",t.b);
//
//    printf("\n Enter any double value : ");
//    scanf("%lf",&t.c);
//    printf("\n double is %lf",t.c);
//    return 0;
//}
///=================================================================================================================================
//
//#include <stdio.h>
//
//union test {
//    int a;
//    char ch;
//    float b;
//};
//
//int main() {
//    // Correct initialization: You can initialize only the first member 'a'
//    union test t = {10}; // This initializes 'a' to 10
//
//    // Print the values after initialization
//    printf("After initializing 'a':\n");
//    printf("t.a = %d\n", t.a);  // prints 10
//    printf("t.ch = %c\n", t.ch); // may print garbage, because t.a is initialized
//    printf("t.b = %f\n", t.b);   // may print garbage, because t.a is initialized
//
//    // If you want to assign values to other members, you must do it separately:
//    t.ch = 'A';  // Assign 'A' to 'ch'
//    printf("\nAfter assigning 'ch':\n");
//    printf("t.ch = %c\n", t.ch); // prints 'A'
//    printf("t.a = %d\n", t.a);   // may print garbage, as 'ch' overwrites the same memory
//
//    t.b = 3.14; // Assign 3.14 to 'b'
//    printf("\nAfter assigning 'b':\n");
//    printf("t.b = %f\n", t.b);   // prints 3.14
//    printf("t.ch = %c\n", t.ch); // may print garbage, as 'b' overwrites the same memory
//
//    return 0;
//}
//
///=================================================================================================================================
//
//#include <stdio.h>
//#include <string.h>
//
//union Data {
//    int i;
//    float f;
//    char str[20];
//};
//
//int main() {
//    union Data data;
//
//    // Storing an integer
//    data.i = 10;
//    printf("data.i = %d\n", data.i);
//
//    // Storing a float (overwrites the previous int)
//    data.f = 220.5;
//    printf("data.f = %f\n", data.f);
//
//    // Storing a string (overwrites the previous float)
//    strcpy(data.str, "Hello");
//    printf("data.str = %s\n", data.str);
//
//    return 0;
//}
///=================================================================================================================================
///------------------------------------------ENUM------------------------------------
///=================================================================================================================================
//
//int main()
//{
//	enum colour{red, green, blue, black};
//
//	printf("\n Constant values are: ");
//	printf("\t red is %d",red);
//	printf("\t green is %d",green);
//	printf("\t blue is %d",blue);
//	printf("\t black is %d",black);
///*
//	enum colour{red, green=100, blue, black};
//
//	printf("\n Constant values are: ");
//	printf("\t red is %d",red);
//	printf("\t green is %d",green);
//	printf("\t blue is %d",blue);
//	printf("\t black is %d",black);
//*/
//	return 0;
//}
//enum color
//{
//    RED = 0,
//    GREEN = 1,
//    BLUE = 2,
//};
//int main()
//{
//    enum color my_color = RED;
//    enum color my_color1 = 2;
//
//    if (my_color1 == RED)
//    {
//        printf("The color is red.\n");
//    }
//    else if (my_color1 == GREEN)
//    {
//        printf("The color is green.\n");
//    }
//    else if (my_color1 == BLUE)
//    {
//        printf("The color is blue.\n");
//    }
//    else
//    {
//        printf("Invalid color!\n");
//    }
//    return 0;
//}
///=================================================================================================================================
///------------------------------------------FILE---HANDLING------------------------------------
///=================================================================================================================================
//
//#include<stdio.h>
//int main()
//{
//  FILE *fp;
//
//  fp=fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallow.txt","r");
//
//  if(fp==NULL)
//  {
//    printf("\n Error while opening the file");
//  }
//  else
//  {
//    printf("\n file opened sucessfully...!!!");
//  }
//
//}
///=================================================================================================================================
///Using fgetc() and fputc()
//
//#include<stdio.h>
//#include<dos.h>
//int main()
//{
//  FILE *fp;
//  char ch;
//
//  fp=fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallow.txt","r");
//  if(fp==NULL)
//  {
//    printf("\n Error while opening the file");
//    return;
//  }
//  else
//  {
//    printf("\n file opened sucessfully...!!!");
//  }
//
//  printf("\n the file data: ");
//  while(1)
//  {
//    ch=fgetc(fp);
//    if(ch==EOF)
//      break;
//    printf("%c",ch);
//  }
//  fclose(fp);
//  getch();
//}

///=================================================================================================================================
/// WAP TO COUNT NO OF LINES IN FILE

//
//#include<stdio.h>
//#include<dos.h>
//void main()
//{
//    FILE *fp;
//    int cnt=0;
//    char ch;
//
//    fp=fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallow.txt","r");
//    printf("\n The File Data : \n");
//    while(1)
//    {
//        ch=fgetc(fp);
//        if(ch=='\n')
//        {
//            cnt++;
//        }
//        if(ch==EOF)
//        {
//            break;
//        }
//        printf("%c",ch);
//    }
//    printf("\n Line count : %d",cnt);
//    fclose(fp);
//    getch();
//}
///=================================================================================================================================
/// WAP TO COPY THE DATA FROM ONE FILE TO ANOTHER
//
//int main()
//{
//    FILE *fp,*dp;
//    char ch;
//
//    fp=fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallow.txt","r");
//    dp=fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallowcopy.txt","w");
//
//   while((ch=fgetc(fp))!=EOF)
//  {
//    fputc(ch,dp);
//  }
//
//    fclose(fp);
//    fclose(dp);
//}



///=================================================================================================================================
///Using getw() and putw(): Used to read/write the integer from io to stream.
//
//#include<stdio.h>
//#include<conio.h> // Include this if you are using getch()
//
//int main()
//{
//    int a, b;
//    FILE *fp;
//
//    // Prompt the user for an integer
//    printf("\n Enter any integer: ");
//    scanf("%d", &a);
//
//    // Open the file in write mode and write the integer
//    fp = fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallowcopy.txt", "w");
//    if (fp == NULL) {
//        printf("Error opening file for writing.\n");
//        return 1;
//    }
//    putw(a, fp);
//    fclose(fp);
//
//    // Open the file in read mode and read the integer
//    fp = fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallowcopy.txt", "r");
//    if (fp == NULL) {
//        printf("Error opening file for reading.\n");
//        return 1;
//    }
//    b = getw(fp);
//    fclose(fp);
//
//    // Display the value of b
//    printf("\n b = %d", b);
//
//    getch(); // Wait for key press (only works if <conio.h> is included)
//    return 0;
//}
//

///------use this code for updated compiler---------
///Using fprintf) and fscanf: Used to read/write the integer from io to stream.
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    FILE *fp;
//
//    // Prompt the user for an integer
//    printf("\nEnter any integer: ");
//    scanf("%d", &a);
//
//    // Open the file in write mode and write the integer
//    fp = fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallowcopy.txt", "w");
//    if (fp == NULL) {
//        printf("Error opening file for writing.\n");
//        return 1;
//    }
//    fprintf(fp, "%d", a);  // Use fprintf to write the integer
//    fclose(fp);
//
//    // Open the file in read mode and read the integer
//    fp = fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallowcopy.txt", "r");
//    if (fp == NULL) {
//        printf("Error opening file for reading.\n");
//        return 1;
//    }
//    fscanf(fp, "%d", &b);  // Use fscanf to read the integer
//    fclose(fp);
//
//    // Display the value of b
//    printf("\nThe value read from the file is: %d\n", b);
//
//    return 0;
//}
//


///=================================================================================================================================
/// Using fread() and fwrite()
//
//#include<stdio.h>
//struct student
//{
//  int rno;
//  char nm[40];
//};
//void main()
//{
//  struct student s;
//  int opt,i;
//  FILE *fp;
//  fp=fopen("D:\\fullstack\\backup\\clang\\cpractice\\hallowcopy.txt","a+");
//
//  do
//  {
//    printf("\n ******* Menu ********\n");
//    printf("\n 1.Input \n 2.Display \n 3.stop");
//
//    printf("\n Select your option: ");
//    scanf("%d",&opt);
//
//
//    if(opt==1)
//    {
//      printf("\n Enter the name of student: ");
//
//      gets(s.nm);
//
//      printf("\n Enter the rno: ");
//      scanf("%d",&s.rno);
//
//      fwrite(&s,sizeof(s),1,fp);
//    }
//    else if(opt==2)
//    {
//      rewind(fp);
//      i=0;
//      do
//      {
//        fread(&s,sizeof(s),1,fp);
//        printf("\n name: %s \t RNO: %d",s.nm,s.rno);
//        i++;
//      }while(!feof(fp));
//
//    }
//    else
//    {
//      exit(0);
//    }
//
//  }while(1);
//}





























///=================================================================================================================================
///=================================================================================================================================
///================================================================================================================================
///----------------------------------------------EXERCISE--------PRACTICE----------------------------------------------------------
///----------------------------------------------EXERCISE--------PRACTICE----------------------------------------------------------
///----------------------------------------------EXERCISE--------PRACTICE----------------------------------------------------------
///=================================================================================================================================
///=================================================================================================================================
///=============================================START=======START===========START========================================================
///=================================================================================================================================
///==========================================================Demo=======================================================================





//
//Escape sequence character
//#include<stdio.h>
//int main()
//{
//    printf("\n> Student Name :- Nitin R. Vhankhande");
//    printf("\n> Diploma Marks :- 90.28%%\tB.tech Marks :- 60%%");
//    printf("\n> Favourit Subject :- \"Installation\"");
//    printf("\n> Which subject get High marks :- \'Control System\'");
//    printf("\n> dete is facts proprtise mesurments or charachters\r> data");
//    return 0;
//}
//
//-----------------------------------------------------------------------------------------------------------------------------
//
// wap to input and display the values
//#include<stdio.h>
//int main()
//{
//    int a,b;
//    char c,d;
//    float e,f;
//    double g,h;
//    printf("\n Enter the Two Character :- ");
//    scanf("%c %c",&c,&d);
//    printf("\n Enter the Two integer Number :- ");
//    scanf("%d %d",&a,&b);
//    printf("\n Enter the Two floating Value :- ");
//    scanf("%f %f",&e,&f);
//    printf("\n Enter the Two double Value :- ");
//    scanf("%lf %lf",&g,&h);
//    printf("\n> Two integer value is \'%d\'\t\'%d\'\n> Two character value is \'%c\'\t\'%c\'\n>Two Floating value is \'%f\'\t\'%f\'\n> Two Double value is \'%lf\'\t\'%lf\'",a,b,c,d,e,f,g,h);
//    return 0;
//}
//
//-----------------------------------------------------------------------------------------------------------------
//
//14-6-2024 wap to exchage enterd two value from keboard
//#include<stdio.h>
//int main()
//{
//    int a,b,tmp;
//    printf("\n Enter the value of A & B :- ");
//    scanf(" %d %d",&a,&b);
//    printf("\n Value before Exchange a is :- %d\t b is %d",a,b);
//    tmp=a;
//    a=b;
//    b=tmp;
//    printf("\n Value after Exchange a is :- %d\t b is %d",a,b);
//    return 0;
//}
//
//---------------------------------------------------------------------------------------------------------------------------
//15-6-2024 wap to display the values using (- ,-- ,++) operator

//#include<stdio.h>
//int main()
//{
//    int x=10,y=5,z;
//
//    z=--x + y++;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=x++ + y++;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + --y;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z= x++ + --y;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + y++;
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    return 0;
//
//}
//---------------------------------------------------------------------------------------------------------------
//
////wap to display the values using (- ,-- ,++) operator
//
//#include<stdio.h>
//int main()
//{
//    int x=20,y=7,z;
//
//    z=--x + y++;//x=19 y=8 z=26
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=x++ + y++;//x=20 y=9 z=27
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + --y;//x=19 y=8 z=27
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z= x++ + --y;//x=20 y=7 z=26
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    z=--x + y++;//x=19 y=8 z=26
//    printf("\n x : %d\ty : %d\tz: %d",x,y,z);
//
//    return 0;
//
//}
//----------------------------------------------------------------------------------------------------
//disply the value using (++ -- -) operrator
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//
//    printf("\n enter two number : ");
//    scanf("%d %d",&a,&b);
//
//    //condition
//    c= --a + b++;
//    printf("\n1)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c= --a + b--;
//    printf("\n2)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=--a + --b;
//    printf("\n3)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=--a + ++b;
//    printf("\n4)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c= a++ + b++;
//    printf("\n5)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a++ + b--;
//    printf("\n6)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a++ + --b;
//    printf("\n7)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a++ + ++b;
//    printf("\n8)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + b++;
//    printf("\n9)  a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + b--;
//    printf("\n10) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + --b;
//    printf("\n11) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=a-- + ++b;
//    printf("\n12) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + b++;
//    printf("\n13) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + b--;
//    printf("\n14) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + --b;
//    printf("\n15) a = %d\tb = %d\tc = %d",a,b,c);
//
//    c=++a + ++b;
//    printf("\n16) a = %d\tb = %d\tc = %d",a,b,c);
//
//
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------
//wap for type castting

//#include<stdio.h>
//int main()
//{
//    int a,b;
//    double z;
//
//    printf("\n enter two number : ");
//    scanf("%d %d",&a,&b);
//
//    z=a/b;
//    printf("\n z= %0.3lf",z);
//
//    z=(float)a/b;
//    printf("\n z= %0.2lf",z);
//
//    z=a/(float)b;
//    printf("\n z= %0.4lf",z);
//
//    z=(float)a/(float)b;
//    printf("\n z= %.6lf",z);
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------------
//wap by using sizeof check the size of int char double float
//
//#include<stdio.h>
//int main()
//{
//
//
//    printf("\n %d",sizeof(int));
//    printf("\n %d",sizeof(char));
//    printf("\n %d",sizeof(float));
//    printf("\n %d",sizeof(double));
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------------------
//wap check the size



// days

//#include<stdio.h>
//int main()
//{
//    int days=0,week,years;
//    printf("\n enter the days : ");
//    scanf("%d",&days);
//
//    week=days/7;
//    years = days/(365);
//
//    printf("\n weeks : %d\nyears : %d",week,days);
//    return 0;
//
//}

//---------------------------------------------------------------------
////power of any number
//
//#include<stdio.h>
//int main()
//{
//    int x,z;
//
//    printf("enter the any number : ");
//    scanf("%d",&x);
//
//    z=x*x;
//
//    printf("z : %d",z);
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int days,week,years,months;
//
//    printf("\n enter the days : ");
//    scanf("%d",&days);
//
//    years=days/365;
//    days=days%365;
//    months=days/30;
//    days=days%30;
//    week=days/7;
//    days=days%7;
//
//    printf("\n %dyears%dmonths%dweeks%ddays",years,months,week,days);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//
//    int hrs,min,sec;
//
//    printf("\n Enter the Second : ");
//    scanf("%d",&sec);
//
//    hrs=sec/3600;
//    sec=sec%3600;
//    min=sec/60;
//    sec=sec%60;
//
//    printf("\n%dhourse%dminute%dsecond",hrs,min,sec);
//    return 0;
//
//}

//---------------------------------------22-6-24------------------------------------------------------------------------------------
//Write a C program to find maximum between two numbers using conditional operator
/**
#include<stdio.h>
int main()
{
   int a,b;

   printf("\n Enter any two number : ");
   scanf("%d%d",&a,&b);

   (a>b)?printf("\n%d is Max",a):printf("\n%d is max",b);

   return 0;


}
*/
//------------------------------------------------------------------------------------------------
//Write a C program to find maximum between three numbers using conditional operator
/**
#include<stdio.h>
int main()
{
    int a,b,c;

   printf("\n Enter any Three Number : ");
    scanf("%d %d %d",&a,&b,&c);

    (a>b)?(a>c)?printf("\n %d is max",a):printf("\n %d is max",c):(b>c)?printf("\n %d is max",b):printf("\n %d is max",c);

    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is even or odd using conditional operator.
/**
#include<stdio.h>
int main()
{

    int no;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    (no%2==0)?printf("\n %d is Even number",no):printf("\n %d is odd number",no);

    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------
//Write a C program to check whether year is leap year or not using conditional operator
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any year : ");
    scanf("%d",&no);

    (no%4==0)?printf("\n %d is leap Year",no):printf("\n %d is Not Leap year",no);

    return 0;

}
*/
//--------------------------------------------------------------------------------------------
//Write a C program to check whether character is an alphabet or not using a conditional operator
/**
#include<stdio.h>
int main()
{

    char ch;

    printf("\n Enter the character : ");
    scanf("%c",&ch);

    (ch>='A' && ch<='Z' || ch>='a' && ch<='z')?printf("\n %c is character",ch):printf("\n %c is not character",ch);

    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
//Write a C program to find the maximum between two numbers by using if() else.
/**
#include<stdio.h>
int main()
{

    int a,b;

    printf("\n Enter any two number : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("\n %d is max Number",a);
    else
        printf("\n %d is max Number",b);

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to find the maximum between three numbers by using if() else.
/**
#include<stdio.h>
int main()
{

    int a,b,c;

    printf("\n Enter any Three number : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\n %d is max Number",a);
        }

    }
    else
    {
        if(b>c)
      {
        printf("\n %d is max Number",b);
      }
      else
        printf("\n %d is max Number",c);
    }
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is divisible by 5 and 11 or not using if() else
/**
#include<stdio.h>
int main()
{

    int no;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    if(no%5==0)
    {
        printf("\n %d is divisible by 5",no);
    }
    else
    {
        if(no%11==0)
        {
            printf("\n %d is divisible by 11",no);
        }
        else
        {
            printf("\n %d is NOT divisible by 5 and 11",no);
        }
    }

    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is even or odd. using if()else.
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    if(no%2==0)

        printf("\n %d is even Number",no);

    else

        printf("\n %d is odd Number",no);

    return 0;

}

*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to check whether a year is a leap year or not using if()else
/**
#include<stdio.h>
int main()

{

    int no;

    printf("\n Enter any Year : ");
    scanf("%d",&no);

    if(no%4==0)

        printf("\n %d is a leap year",no);

    else

        printf("\n %d is a not leap year,no");

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------
//Write a C program to check whether a character is an alphabet or not.using if()else
/**
#include<stdio.h>
int main()

{
    char ch;

    printf("\n enter any character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        printf("%c is character",ch);
    else
        printf("%c is not character",ch);

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//Write a C program to input any alphabet and check whether it is a vowel or consonant using if else.
/**
#include<stdio.h>
int main()
{
    char ch;

    printf("\n Enter any alphabet : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' ||  ch=='u' || ch=='U')  //if(ch== 'a','A','e','E','i','I','o','O','u','U')
        {
             printf("\n %c is vowel",ch);

        }
        else
        printf("\n %c is consonant",ch);
    }
    else
        printf("\n %c is not alphabet",ch);


    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------
//menu driven program
/**
#include<stdio.h>
int main()
{
    int no,opt;
    printf("\n Enter any numbrer : ");
    scanf("%d",&no);
    printf("\n**********SELECT YOUR OPTION*********");
    printf("\n 1) zero positive negative\t2)even/odd\t3) divisible by 5 and 11 or notor both");
    printf("\nselect==> ");
    scanf("%d",&opt);

    if(opt==1)
    {
        if(no==0)
        {
            printf("\n number is zero");
        }
        else
        {
            if(no>0)
            {
                printf("\n %d is positive",no);
            }
            else
            {
                printf("\n %d is negative",no);
            }
        }
    }
    else
    {
        if(opt==2)
        {
           if(no%2==0)
           {
               printf("\n %d is even number",no);
           }
           else
            printf("\n %d is odd number",no);
        }
        else
            {
                if(opt==3)
                {
                    if(no%5==0)
                    {
                        if(no%11==0)
                        {
                            printf("\n %d is divisible by both 5 and 11",no);
                        }
                        else
                        {
                            printf("\n %d is divisible by 5",no);
                        }


                    }
                    else
                    {
                        if(no%11==0)
                        {
                            printf("\n %d is divisible by 11",no);
                        }
                        else
                            printf("\n %d is not divisible by both 5 and 11");
                    }
                }
                else
                printf("option is Incorect!!!!");
            }


    }
    printf("\n Thank you....Visit again");

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------

/**
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n enter the x and y co- ordinates : ");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0)
    {
         printf("\n first qudrant");
    }
    else if(x<0 && y>0)
    {
         printf("\n second qudrant");
    }
    else if(x<0 && y<0)
    {
         printf("\n third qudrant ");
    }
    else if(x>0 && y<0)

    {
         printf("\n fourth qudrant");
    }
    else if((x>0 || x<0) && y==0)
    {
         printf("\n on X axis");
    }
    else if( x==0 && ((y>0 || y<0))
    {
         printf("\n on Y axis");
    }
    else
    {
         printf("\n on origin ");
    }



    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------
/**Determine the grade of a student based on their score. If the score is above 90, it's an 'A'. If the score is between 80 and 90,
 check if it's above 85 for an 'A-' or else 'B+'. Below 80, if it's above 70, it's a 'C', otherwise, it's a 'D'.*/
//
// #include<stdio.h>
// int main()
// {
//     float mark;
//
//     printf("\nEnenter the score : ");
//     scanf("%f",&mark);
//
//     if(mark>=90)
//     {
//         printf("\n Grade = A");
//     }
//     else if (mark>=80)
//     {
//         if(mark>=85)
//         {
//             printf("\n Grade = A-");
//         }
//         else
//            printf("\n Grade = B");
//     }
//     else
//     {
//         if(mark>=70)
//            printf("\n Grade = C");
//         else
//            printf("\n Grade = D");
//     }
//
//
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------
/** A store gives discounts based on membership status and the amount spent. Members spending over Rs.100 get a 10% discount,
 non-members spending over Rs.150 get a 5% discount, and all others get no discount.*/
/**
 #include<stdio.h>
 int main()
 {
     float amt

     return 0;
 }
 */
//--------------------------------------------------------------------------------------------------------------------------
//Write a C program to input any character and check whether it is alphabet, digit or special character.
//
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    printf("\n Enter any Character : ");
//    scanf("%c",&ch);
//
//    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
//    {
//        printf("\n character is alphabet");
//    }
//    else if(ch>='0' && ch<='9')
//    {
//        printf("\n character is digit");
//    }
//    else
//    {
//        printf("\n character is special character");
//    }
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------
//Write a C program to check whether a character is uppercase or lowercase alphabet.
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    printf("\n Enter any character : ");
//    scanf("%c",&ch);
//
//    if(ch>='a' && ch<='z')
//    {
//        printf("\n character is lower case");
//
//    }
//    else
//    {
//        if(ch>='A' && ch<='Z')
//
//      {
//          printf("\n character is upper case");
//      }
//      else
//        printf("\n incoreect option");
//
//    }
//
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------
//Write a C program to input week number and print week day.
//
//#include<stdio.h>
//int main()
//{
//    int no;
//    printf("\n enter the number between 1 to 7 : ");
//    scanf("%d",&no);
//
//         if(no==1)
//        printf("\n Monday");
//         else if(no==2)
//        printf("\n tuesday");
//         else if(no==3)
//        printf("\n wednesday");
//         else if(no==4)
//        printf("\n thursday");
//         else if(no==5)
//        printf("\n friday");
//         else if(no==6)
//        printf("\n saturday");
//         else if(no==7)
//        printf("\n sunday");
//        else
//        printf("\n incoreect option ");
//
//        return 0;
//}
//---------------------------------------------------------------------------------------------------------
//Write a C program to input month number and print number of days in that month.
//#include<stdio.h>
//int main()
//{
//    int no;
//
//    printf("\n Enter the month number : ");
//    scanf("%d",&no);
//
//    if(no==1 || no==3 || no==5 || no==7 || no==8 || no==10 || no==12)
//    {
//        printf("\n 31 Days");
//
//    }
//    else if(no==4 || no==6 || no==9 || no==11)
//    {
//        printf("\n 30 Days");
//    }
//    else if(no==2)
//    {
//        printf("\n 28 Days but in leap yaer 29 Days");
//    }
//    else
//    {
//        printf("\n incorrect optoin !!!");
//    }
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------------
//Write a C program to count total number of notes in given amount.
//#include<stdio.h>
//int main()
//{
//    int amt=0,a=0,b=0,c=0;
//
//    printf("\n Enter amount : ");
//    scanf("%d",&amt);
//
//    if(amt>=2000)
//    {
//        a=amt/2000;
//        amt=amt%2000;
//    }
//    if(amt>=500)
//    {
//        b=amt/500;
//        amt=amt%500;
//    }
//    if(amt>=100)
//    {
//        c=amt/100;
//        amt=amt%100;
//    }
//
//    printf("\n(2000 notes)=%d\t(500 notes)=%d\t(100 notes)=%d \t%dRs",a,b,c,amt);
//
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------

//#include<stdio.h>
//int main()
//{
//    int amt,a,b,c;
//
//     printf("\n A is : %d",a);
//      printf("\n B is : %d",b);
//       printf("\n C is : %d",c);
//    printf("\n Enter amount : ");
//    scanf("%d",&amt);
//
//    if(amt>=2000)
//    {
//        a=amt/2000;
//        amt=amt%2000;
//        printf("\n Amount is %d",amt);
//    }
//     if(amt>=500)
//     {
//        printf("\n B is : %d",b);
//        b=amt/500;
//        amt=amt%500;
//         printf("\n Amount is %d",amt);
//     }
//     if(amt>=100)
//     {
//         c=amt/100;
//         amt=amt%100;
//        printf("\n Amount is %d",amt);
//     }
//
//
//
//     printf("\n(2000 notes)=%d\t(500 notes)=%d\t(100 notes)=%d \t%dRs",a,b,c,amt);
//
//    return 0;
//
//
//
//}
//---------------------------------------------------------------------------------------------------------------
//Write a C program to input angles of a triangle and check whether triangle is valid or not.
//
//#include<stdio.h>
//int main()
//{
//
//    int ang1,ang2,ang3;
//
//    printf("\n enter three angle of triangle : ");
//    scanf("%d%d%d",&ang1,&ang2,&ang2);
//
//    if(180==ang1+ang2+ang3)
//        printf("\n Triangle is valid");
//    else
//        printf("\n trangle is not valid");
//
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------
//Write a C program to input all sides of a triangle and check whether triangle is valid or not.
//
//#include<stdio.h>
//int main()
//{
//    int s1,s2,s3;
//
//    printf("\n Enter three side of triangle : ");
//    scanf("%d%d%d",&s1,&s2,&s3);
//
//    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
//         printf("\n Triangle is valid");
//    else
//        printf("\n trangle is not valid");
//
//    return 0;
//
//}
//------------------------------------------------------------------------------------------------------------
//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

/**In a scalene triangle, all the sides of a triangle are of different length. In an isosceles triangle,
two sides of a triangle are of the same measure. In an equilateral triangle, all the sides of a triangle are of equal length.*/
//
//#include<stdio.h>
//int main()
//{
//  int s1,s2,s3;
//
//  printf("\n enter three side of triangle : ");
//  scanf("%d%d%d",&s1,&s2,&s3);
//
//  if((s1==s2 && s1==s3))
//
//        printf("\n quilateral triangle");//all side are equal
//
//  else if(s1!=s2 && s1!=s3 && s2!=s3)
//
//        printf("\n scalene triangle");//all side are not equal
//
//  else             //else if((s1==s2 || s1==s3 || s2==s3))
//
//        printf("\n isosceles triangle");//two side are equal
//
//  return 0;
//
//}
//---------------------------------------------------------------------------------------------------------------------
//Write a C program to calculate profit or loss.
//
//#include<stdio.h>
//int main()
//{
//
//    float sel,cost;
//
//    printf("\n enter selling price : ");
//    scanf("%f",&sel);
//    printf("\n enter cost price : ");
//    scanf("%f",&cost);
//
//    if(sel==cost)
//
//        printf("\n no profit no loss ");
//
//    else if(sel>cost)
//
//        printf("\n profit");
//
//    else
//
//        printf("\n loss");
//
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------
/**Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F  */
//
//#include<stdio.h>
//int main()
//{
//    float ph,ch,bi,math,com,per;
//
//    printf("\n Enter mark of Five Subject");
//
//    printf("\n Physics : ");
//    scanf("%f",&ph);
//    printf("\n Chemistry : ");
//    scanf("%f",&ch);
//    printf("\n Biology : ");
//    scanf("%f",&bi);
//    printf("\n Mathematics : ");
//    scanf("%f",&math);
//    printf("\n Computer : ");
//    scanf("%f",&com);
//
//
//    per=((ph+ch+bi+math+com)/500)*100;
//    printf("\nPercentage : %0.2f%%",per);
//    if(per>=90)
//    {
//        printf("\n Grade = A");
//    }
//    else if(per>=80)
//    {
//        printf("\n Grade = B");
//    }
//    else if(per>=70)
//    {
//        printf("\n Grade = C");
//    }
//    else if(per>=60)
//    {
//        printf("\n Grade = D");
//    }
//    else if(per>=40)
//    {
//        printf("\n Grade = E");
//    }
//    else
//    {
//        printf("\n Grade = f");
//    }
//
//
//
//
//    return 0;
//
//}
//------------------------------------------------------------------------------------------------------------------------
/**Write a C program to input basic salary of an employee and calculate its Gross
salary according to the following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%      */

//#include<stdio.h>
//int main()
//{
//    float sal,hra,da;
//
//    printf("\n Enter Your Salary : ");
//    scanf("%f",&sal);
//
//    if(sal<=10000)
//    {
//        hra=sal*0.2;
//        da=sal*0.8;                         //Gross Salary=Basic Salary+Allowances
//        printf("\n1) Gross Salary = %0.2f",(sal+hra+da));
//    }
//    else if(sal<=20000)
//    {
//        hra=sal*0.25;
//        da=sal*0.9;
//        printf("\n2) Gross Salary = %0.2f",(sal+hra+da));
//    }
//    else
//    {
//        hra=sal*0.3;
//        da=sal*0.95;
//        printf("\n3) Gross Salary = %0.2f",(sal+hra+da));
//    }
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------
/**Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition: For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill  */
//
//#include<stdio.h>
//int main()
//{
//
//    float un,tot;
//
//    printf("\n Enter electricity units to be used : ");
//    scanf("%f",&un);
//
//    if(un<50)
//    {
//        tot=(un*0.5)+(un*0.2);    // 0.2=surcharges or 0.5= unit charge
//        printf("\n1) Electricity Bill = %0.2f",tot);
//    }
//    else if(un<150)
//    {
//        tot=(un*0.75)+(un*0.2);
//        printf("\n2) Electricity Bill = %0.2f",tot);
//    }
//
//    else if(un<250)
//    {
//        tot=(un*1.20)+(un*0.2);
//        printf("\n3) Electricity Bill = %0.2f",tot);
//    }
//
//    else if(un>250)
//    {
//        tot=(un*1.50)+(un*0.2);
//        printf("\n4) Electricity Bill = %0.2f",tot);
//    }
//
//
//
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------------
/**Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
 For the first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill  */

//
//#include<stdio.h>
//int main()
//{
//    float un,tot,ext;
//    printf("\n Enter electricity units to be used : ");
//    scanf("%f",&un);
//    if(un<=50)
//    {
//        tot=un*0.50;
//    }
//    else if(un<150)
//    {
//        ext=un-50;
//        tot=((ext*0.75)+(50*0.50));
//    }
//    else if(un<250)
//    {
//        ext=un-150;
//    }
//    else if(un>250)
//    {
//       ext=un-250;
//       tot=((ext*1.5)+(100*1.2)+(100*0.75)+(50*0.5));
//    }
//
//    printf("\n Elecricity bill = %0.2f",(tot*0.2));
//
//    return 0;
//
//}

//---------------------------------------------------------------------------------------------------------------------
//wap to enter any number and find repeting number by choising of user
//
//#include<stdio.h>
//int main()
//{
//
//    int no,rem,count=0,a,tmp;
//
//    printf("\n Enter any number : ");
//    scanf("%d",&no);
//    printf("\n choose repetation number : ");
//    scanf("%d",&a);
//    tmp=no;
//
//    for(;no!=0;no=no/10)
//    {
//        rem=no%10;
//        if(rem==a)
//        {
//            count++;
//        }
//
//    }
//    no=tmp;
//    printf("\n %d number  %d times %d repeting",no,count,a);
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------
//wap to find repetation of each digit from enterd number for eg 188311 (1repeted 3 times)
//
//#include<stdio.h>
//int main()
//{
//    int no,d,rem,tem,count;
//
//    printf("\n Enter any number : ");
//    scanf("%d",&no);
//
//    tem=no;
//    for(d=0;d<10;d++)
//    {
//        no=tem;
//        count=0;
//        while(no!=0)
//        {
//
//            rem=no%10;
//            if(rem==d)
//            {
//                count++;
//            }
//            no=no/10;
//
//
//        }
//        if(count>1)
//         printf("\n %d is repeting %d times",d,count);
//    }
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------
                                       /**         for loop
//---------------------------------------------------------------------------------------------------------------------------*/

//Write a C program to print all natural numbers from 1 to n.
//
//#include<stdio.h>
//int main()
//{
//    int no,i;
//
//    printf("\n Enter any Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        printf("\t%d",i);
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------
//Write a C program to print all natural numbers in reverse (from n to 1)

//#include<stdio.h>
//int main()
//{
//    int no;
//
//    printf("\n Enter  any number : ");
//    scanf("%d",&no);
//
//
//
//    for(;no>=1;no--)
//    {
//        printf("%d\t",no);
//    }
//
//    return 0;
//
//}
//----------anthoer way---------
//
//#include<stdio.h>
//int main()
//{
//    int no,i;
//
//    printf("\n Enter  any number : ");
//    scanf("%d",&no);
//
//    for(i=no;i>=1;i--)
//    {
//        printf("%d\t",i);
//    }
//
//    return 0;
//}

//------------------------------------------------------------------------------------------------------------
//3) Write a C program to print all alphabets from a to z.
//
//#include<stdio.h>
//int main()
//{
//    char ch;
//
//    for(ch='a';ch<='z';ch++)
//    {
//        printf("%c\t",ch);
//    }
//    return 0;
//}

//---------------------------------------------------------------------------------------------------
//4) Write a C program to print all even numbers between 1 to 100.

//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("Even no are :   ");
//    for(i=1;i<=100;i++)
//    {
//        if(i%2==0)
//        {
//            printf("%d\t",i);
//        }
//    }
//    return 0;
//}
//-----------------------Anthoer---------------------------------------------------------

//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("Even no are :     ");
//    for(i=2;i<=100;i+=2)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//--------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.

//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("odd no are :      ");
//    for(i=1;i<=100;i+=2)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//-------------anothe way-------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.
//
//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("odd no are :      ");
//    for(i=1;i<=100;i++)
//    if(i%2!=0)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100.
//
//#include<stdio.h>
//int main()
//{
//    int i;
//    printf("odd no are :      ");
//    for(i=1;i<=100;i+=2)
//    {
//        printf("%d\t  ",i);
//    }
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------------

// Write a C program to find the sum of all natural numbers between 1 to n.
//
//#include<stdio.h>
//int main()
//{
//    int no,i,ans=0;
//
//    printf("\n Enter last digit Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        ans=ans+i;
//
//    }
//    printf("The sum is : %d",ans);
//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all even numbers between 1 to n


//#include<stdio.h>
//int main()
//{
//    int no,i,ans=0;
//
//    printf("\n Enter last digit Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        if(i%2==0)
//        {
//            ans=ans+i;
//        }
//
//    }
//
//    printf("Even no sum is : %d",ans);
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------
//Write a C program to find sum of all odd numbers between 1 to n.

//#include<stdio.h>
//int main()
//{
//    int no,i,ans=0;
//
//    printf("\n Enter last digit Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        if(i%2!=0)
//        {
//            ans=ans+i;
//        }
//
//    }
//
//    printf("odd no sum is : %d",ans);
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------
//Write a C program to print multiplication table of any number.
//
//#include<stdio.h>
//int main()
//{
//
//    int i,no;
//
//    printf("\n Enter any number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=10;i++)
//    {
//        printf("\n%d",i*no);
//    }
//    return 0;
//}

//-----------------------------------------------------------------------------------
//Write a C program to count number of digits in a number.
//
// #include<stdio.h>
// int main()
// {
//     int no,rem,count=0;
//
//     printf("\n Enter any number : ");
//     scanf("%d",&no);
//
//     for(;no!=0;no=no/10)
//     {
//        if(rem=no%10)
//        {
//            count++;
//        }
//
//     }
//     printf("\n Digit count : %d",count);
//     return 0;
//
// }
//
//--------------------------------------------------------------------------------------------------------------
//Wril a C program to find first and last digit of a number.
/**
 #include<stdio.h>
 int main()
 {
     int no,rem,count=0,tem,d,i,ans=1;

     printf("\n Enter any two digit number : ");
     scanf("%d",&no);
     tem=no;
     for(;no!=0;no=no/10)
     {
        if(rem=no%10)
        {
           count++;
        }

     }

     d=count-1;
     for(i=1;i<=d;i++)
     {
         if(i!=0)
         {
             ans=ans*10;

         }
     }
     no=tem;
    rem=no/ans;
    printf("\nfirst Number %d",rem);
    no=tem;
    rem=no%10;
    printf("\nlast Number %d",rem);


     return 0;

 }
 */
 //--------------------------anthoer way----------------------------------------------------------------------------------------------------
 /**
 #include<stdio.h>
int main()
{
    int no,i,rem,rev=0,tem,fd,ld;

    printf("\n Enter any number");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;

        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
    printf("\n fd=%d \t ld=%d",fd,ld);
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------
//Write a C program to find sum of first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tem,fd,ld,sum;

    printf("\n Enter any number :");
    scanf("%d",&no);
    tem=no;

    rem=no%10;
    ld=rem;
    printf("\n last Digit = %d",ld);
    no=tem;
    for(;no!=0;)
    {

        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    fd=rev%10;
    printf("\n first Digit = %d",fd);
    printf("\n Addition of first and last Digit = %d",(fd+ld));
    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to swap first and last digits of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rev;
        }
        no=no/10;
        if(no==0)
        {
            fd=rem;
        }
    }
    printf("\n first Digit : %d\n Last Digit : %d",fd,ld);
    fd=fd+ld;
    ld=fd-ld;
    fd=fd-ld;
    printf("\n ********SWAP*******\n first Digit : %d\n Last Digit : %d",fd,ld);

    return 0;
}

*/
//anathoer type
/**
#include<stdio.h>
int main()

{
    int no,rem,tem,d,i,ans=1,nno;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;

    for(d=0;no!=0;d++,no=no/10);



    for(i=1;i<d;i++)
    {
        ans=(ans*10);
    }

    no=tem;
    rem=no%10;
    nno=rem*ans; // printf("Number=%d",nno);

    no=no%ans;
    no=no/10;
    no=no*10;
    tem=tem/ans;

    nno=(nno+no)+tem;

    printf("\New Number : %d",nno);


    return 0;

}
*/
//-------------
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,d,i,ld,fd,nn=0;

    printf("Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
        no=no/10;
        d++;
    }while(no!=0);

    no=tmp;

    for(;no!=0;)
    {
        rem=no%10;
        rev=(rev*10)+rem;

        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;
        fd=rem;
    }
    no=tmp;

    for(i=1;i<=d;i++)
    {
        rem=rev%10;
        if(i==1)
        {
            nn=(nn*10)+ld;
        }
        else if(i==d)
        {
            nn=(nn*10)+fd;
        }
        else
        {
            nn=(nn*10)+rem;
        }
        rev=rev/10;
    }

    printf("\n Swap No = %d",nn);

    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------
//Write a C program to calculate sum of digits of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,add=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(rem=0;no!=0;no=no/10)
    {
        rem=no%10;
        add=add+rem;
    }
    printf("\n Addition of All Digit are %d",add);
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to calculate product of digits of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,mul;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(mul=1;no!=0;no=no/10)
    {
        rem=no%10;
        mul=mul*rem;
    }
    printf("\n Product of Digit = %d",mul);
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print its reverse.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(rev=0;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;
    }
    printf("\n Reverse Number = %d",rev);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is palindrome or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev,tem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tem=no;
    for(rev=0;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;

    }
    no=tem;
    if(no==rev)
    {
        printf("\n Enter Number is Palindrome");
    }
    else
    {
       printf("\n Enter Number is Not Palindrome");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//Write a C program to find frequency of each digit in a given integer.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,tem,count;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tem=no;

    for(d=0;d<=9;d++)
    {
        no=tem;
        count=0;
        for(;no!=0;no=no/10)
        {
            rem=no%10;
            if(rem==d)
            {
                count++;
                //printf("\n %d repetead %d times",d,count);
            }


         }
         if(count>1)
            {
                printf("\n %d repetead %d times",d,count);
            }

    }
    return 0;

}
*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print it in words.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n enter any Number : ");
    scanf("%d",&no);

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        rev=(rev*10)+rem;

    }
    for(;rev!=0;rev=rev/10)
    {

        rem=rev%10;

        if(rem==1)
        {
            printf(" one");
        }
       else if(rem==2)
        {
            printf(" two");
        }
        else if(rem==3)
        {
            printf(" three");
        }
        else if(rem==4)
        {
            printf(" four");
        }
        else if(rem==5)
        {
            printf(" five");
        }
        else if(rem==6)
        {
            printf(" six");
        }
        else if(rem==7)
        {
            printf(" seven");
        }
        else if(rem==8)
        {
            printf(" eight");
        }
        else if(rem==9)
        {
            printf(" nine");
        }
        else
        {
            printf(" zero");
        }


    }

    return 0;

}
*/

//--------------------------------------------------------------------------------
//Write a C program to print all ASCII character with their values.
/**
#include<stdio.h>
int main()
{
    int i=0;

    for(i>0;i<256;i++)
    {
       // if((i>=48 && i<=57)||(i>=65 && i<97)||(i>=97 && i<=122))
        {
            printf("\n\n %d===>%c",i,i);
        }
    }
    return 0;


}

*/
//----------------------------------------------------------------------------------------
//Write a C program to find power of a number using for loop.
/**
#include<stdio.h>
int main()
{
    int no,i,p,ans=1;

    printf("enter any numbre : ");
    scanf("%d",&no);
    printf("\n Enter the power : ");
    scanf("%d",&p);

    for(i=1;i<=p;i++)
    {
        ans=ans*no;

    }
    printf("\n power of %d  is %d",no,ans);
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
//Write a C program to find all factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    printf("\n Factors of %d ==>",no);

    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("\t%d",i);
        }
    }

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//Write a C program to calculate factorial of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,fact=1,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
    no=tmp;
    printf("\n factorial of %d is %d",no,fact);

    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
//Write a C program to find HCF (GCD) of two numbers.
/**
#include<stdio.h>
int main()
{
    int no1,no2,i,hcf;

    printf("\n Enter First Number : ");
    scanf("%d",&no1);
    printf("\n Enter Second Number : ");
    scanf("%d",&no2);


    for(i=1;i<=(no1/2) || i<=(no2/2);i++)
    {
        if(no1%i==0 && no2%i==0)
        {
            hcf=i;
        }
    }
    printf("\n HCF (GCD) of two numbers : %d ",hcf);

    return 0;

}
*/
//------------anathor way---------------------
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    for(i=1;i<=(max/2);i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("\n HCF : %d",hcf);

    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------------------
//Write a C program to find LCM of two numbers.
/**
#include<stdio.h>
int main()
{
    int no1,no2,i,j,lcm1,lcm2;

    printf("\n Enter First Number : ");
    scanf("%d",&no1);
    printf("\n Enter Second Number : ");
    scanf("%d",&no2);

    for(i=1;i<=no2;i++)
    {

        lcm1=0;
        lcm1=no1*i;

       for(j=1;j<=no1;j++)
       {
           lcm2=0;
           lcm2=no2*j;
        if(lcm1==lcm2)
           {
               printf("\nLCM of %d and %d is \'%d\'",no1,no2,lcm1);
               break;
           }
       }

    }
    return 0;

}
*/
//--------anathor way-------------------

/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    for(i=1;i<=(max/2);i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }

     lcm=(a*b)/hcf;

     printf("\n LCM: %d",lcm);

    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Prime number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,flg=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=2;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }

    }
    if(flg==0 && no!=1)
    {
        printf("\n %d is prime number",no);
    }
    else
    {
        printf("\n %d is not prime number",no);
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------
//Write a C program to print all Prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{

    int no,i,j,flg;

    printf("\n enter any number : ");
    scanf("%d",&no);
    printf("\n Prime Numbers are : ");

    for(i=2;i<=no;i++)
    {
        flg=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            printf("\t%d",i);
        }
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------
//Write a C program to find sum of all prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{

    int no,i,j,flg,add=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=2;i<=no;i++)
    {
        flg=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            add=add+i;
            printf("\n Addition of prime number = %d",add);
        }

    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to find all prime factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    for(i=2;i<=no;i++)
    {
        flg=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            printf("\n %d factors =",i);
           for(j=1;j<=i;j++)
           {
               if(i%j==0)
               {
                   printf("  %d",j);
               }
           }

        }
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/**
#include<stdio.h>
int main()
{
    int no,d,rem,i,ans,sum=0,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;no!=0;d++,no=no/10);

    no=tmp;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        ans=1;
        for(i=0;i<d;i++)
        {
            ans=ans*rem;
        }
        sum=sum+ans;
    }
    no=tmp;
    if(sum==no)
    {
        printf("\n %d is armstron Number ",no);
    }
    else
    {
        printf("\n %d is NOT armstron Number ",no);
    }

    return 0;

}
*/
//--------------------------------------------------------------------------------------------------
//Write a C program to print all Armstrong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int n,no,d,rem,i,ans,sum,tmp;

    printf("\n Enter any number : ");
    scanf("%d",&n);


   for(no=0;no<=n;no++)
   {
        tmp=no;
        for(d=0;no!=0;d++,no=no/10);
       // printf("\n Cnt is %d",d);

        no=tmp;
        sum=0;
        for(;no!=0;no=no/10)
        {
            rem=no%10;
            ans=1;
            for(i=0;i<d;i++)
            {
                ans=ans*rem;
               // printf("\n Ans %d",ans);
            }
            sum=sum+ans;
            //printf("\n Sum %d",sum);
        }
        no=tmp;
        if(sum==no)
        {
            printf("\n %d ",no);
        }

    }


    return 0;

}
*/
//-----------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a addition of all digit number is divided by each digit.
/**
#include<stdio.h>
int main()
{
    int no,rem,tmp,add=0,flg=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    for(;no!=0;no=no/10)
    {
        rem=no%10;
        add=add+rem;
    }
    no=tmp;
    for(;no!=0;no=no/10)
    {
        rem=no%10;
        if(add%rem!=0)
        {
            flg=1;
            break;
        }
    }
    no=tmp;
    if(flg==0)
    {
        printf("\n %d is divided each digit",no);
    }
    else
    {
        printf("\n %d is NOT divided each digit",no);
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Perfect number or not.eg 28=1,2,4,7,14//1+2+4+7+14=28.
/**
#include<stdio.h>
int main()
{
    int no,i,add=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;
    printf("Factors = ");

    for(i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("%d ",i);
            add=add+i;
        }
    }
    no=tmp;
    if(no==add)
    {
        printf("\n %d is pefect Number ",no);
    }
    else
    {
        printf("\n %d is NOT pefect Number ",no);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int n,no,i,add,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&n);

   printf("perfect no 1 to %d = ",n);

    for(no=1;no<=n;no++)
    {
        add=0;
       tmp=no;
       for(i=1;i<=(no/2);i++)
       {
           if(no%i==0)
           {
               add=add+i;
           }
       }
       no=tmp;
       if(no==add)
       {
           printf("\n %d ",no);
       }

    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Strong number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,ans,rem,tmp,d,sum=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    for(d=0;d<=9;d++)//dont use this loop without using this loop we can find stron number
    {
        no=tmp;
        for(;no!=0;no=no/10)
        {
            rem=no%10;
            if(rem==d)
            {
                ans=1;
                for(i=rem;i>=1;i--)
                {
                    ans=ans*i;

                }

                 sum=sum+ans;
            }

        }

    }
    no=tmp;
    if(no==sum)
    {
        printf("\n %d is strong Number",no);
    }
   else
    {
        printf("\n %d is NOT strong Number",no);
    }

    return 0;

}
*/
//----------------------Anthor way--------------------------------------------
/**
#include<stdio.h>
int main()
{
    int no,i,ans,rem,tmp,d,sum=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

        for(;no!=0;no=no/10)
        {
            rem=no%10;
            ans=1;
            for(i=rem;i>=1;i--)
            {
                ans=ans*i;

            }
                sum=sum+ans;
         }


    no=tmp;
    if(no==sum)
    {
        printf("\n %d is strong Number",no);
    }
   else
    {
        printf("\n %d is NOT strong Number",no);
    }

    return 0;

}
*/
//-------------------------------------------------------------------------------------------------
//Write a C program to print all Strong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int n,no,i,ans,rem,tmp,d,sum=0;

    printf("\n Enter any Number : ");
    scanf("%d",&n);

    printf("\n Strong number are : ");

    for(no=1;no<=n;no++)
    {
        tmp=no;
        sum=0;
        for(;no!=0;no=no/10)
        {

            rem=no%10;
            ans=1;
            for(i=rem;i>=1;i--)
            {
                ans=ans*i;

            }
                sum=sum+ans;
        }
        no=tmp;
        if(no==sum)
        {
             printf("\n %d ",no);
        }

     }


    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to print Fibonacci seriess up to n terms.

/**------------------------------------------------------------------------------------------------------------------
                                            WHILE AND DO()WHILE LOOP
-------------------------------------------------------------------------------------------------------------------*/
//Write a C program to print all natural numbers from 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");
    i=1;
    while(i<=no)
    {
        printf("\t%d",i);
        i++;
    }
    return 0;

}
*/
//Write a C program to print all natural numbers from 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");
    i=1;
    do
    {
        printf("\t%d",i);
        i++;
    }while(i<=no);

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------
//Write a C program to print all natural numbers in reverse (from n to 1).
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");

    while(no>=1)
    {
        printf("\t%d",no);
        no--;
    }
    return 0;

}
*/
//Write a C program to print all natural numbers in reverse (from n to 1).
/**
#include<stdio.h>
int main()
{
    int no;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    printf("\n All natural number are :");

    do
    {
        printf("\t%d",no);
        no--;
    }while(no>=1);
    return 0;

}
*/
//--------------------------------------------------------------------------------------------------------
//Write a C program to print all alphabets from a to z.
/**
#include<stdio.h>
int main()
{
    char ch;

    ch='a';
    while(ch<='z')
    {
        printf("\t%c",ch);
        ch++;
    }
    return 0;

}
*/

//Write a C program to print all alphabets from a to z.
/**
#include<stdio.h>
int main()
{
    char ch;

    ch='a';
    do
    {
        printf("\t%c",ch);
        ch++;
    }while(ch<='z');
    return 0;

}
*/
//---------------------------------------------------------------------------------------------
//Write a C program to print all even numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=2;
    while(no<=100)
    {
        printf("\t%d",no);
        no+=2;
    }
    return 0;
}
*/
//Write a C program to print all even numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=2;
    do
    {
        printf("\t%d",no);
        no+=2;
    }while(no<=100);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------
//Write a C program to print all odd numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=1;
    while(no<=100)
    {
        printf("\t%d",no);
        no+=2;
    }
    return 0;
}
*/
//Write a C program to print all odd numbers between 1 to 100
/**
#include<stdio.h>
int main()
{
    int no;

    no=1;
    do
    {
        printf("\t%d",no);
        no+=2;
    }while(no<=100);
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all natural numbers between 1 to n
/**
#include<stdio.h>
int main()
{
    int no,i,sum=0;

    printf("\n eneter any number : ");
    scanf("%d",&no);

    i=1;
    while(i<=no)
    {
        sum=sum+i;
        i++;
    }
    printf("\n all natural number sum = %d ",sum);
    return 0;
}
*/
//Write a C program to find the sum of all natural numbers between 1 to n
/**
#include<stdio.h>
int main()
{
    int no,i,sum=0;

    printf("\n eneter any number : ");
    scanf("%d",&no);

    i=1;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=no);
    printf("\n all natural number sum = %d ",sum);
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to find the sum of all even numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }

    printf("\n sum of Even Number : %d",sum);


    return 0;

}
*/
//Write a C program to find the sum of all even numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }while(i<=no);

    printf("\n sum of Even Number : %d",sum);


    return 0;

}

*/
//---------------------------------------------------------------------------------------------------------
//Write a C program to find sum of all odd numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=1;
    while(i<=no)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }

    printf("\n sum of odd Number : %d",sum);


    return 0;

}
*/
//Write a C program to find sum of all odd numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,sum,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=1;
    do
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }while(i<=no);

    printf("\n sum of odd Number : %d",sum);


    return 0;

}
*/
//--------------------------------------------------------------------------------------------------
//Write a C program to print multiplication table of any number
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    i=1;
    do
    {
        printf("\n %d",(no*i));
        i++;
    }while(i<=10);

    return 0;

}

*/
//Write a C program to print multiplication table of any number
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    i=1;
    while(i<=10)
    {
        printf("\n %d",(no*i));
        i++;
    }

    return 0;

}
*/
//Write a C program to print multiplication table of any number
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    i=1;
    do
    {
        printf("\n %d",(no*i));
        i++;
    }while(i<=10);

    return 0;

}
*/
//----------------------------------------------------------------------------------------------------------------
//Write a C program to count number of digits in a number.
/**
#include<stdio.h>
int main()
{
    int no,d;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    d=0;
    while(no!=0)
    {
        no=no/10;
        d++;

    }

    printf("\n Digit Count = %d",d);

    return 0;

}
*/
//Write a C program to count number of digits in a number.
/**
#include<stdio.h>
int main()
{
    int no,d;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    d=0;
    do
    {
        d++;
        no=no/10;

    }while(no!=0);

    printf("\n Digit Count = %d",d);

    return 0;

}
*/

//---------------------------------------------------------------------------------------------------------------------------
//Write a C program to find first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;

    }
    fd=rev%10;
    printf("\n First Digit : %d",fd);
    printf("\n Last Digit : %d",ld);

    return 0;

}
*/
//--------anathor way

//Write a C program to find first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,d,rem,fd,ld,tmp,i,ans=1;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
        no=no/10;
        d++;
    }while(no!=0);

    no=tmp;

    i=1;
    do
    {
        ans=ans*10;
        i++;
    }while(i<d);

    fd=no/ans;
    ld=no%10;
    printf("\n First digit : %d",fd);
    printf("\n Last digit : %d",ld);


    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to find sum of first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;

    }
    fd=rev%10;

    printf("\n Addition of First and Last Digit : %d",(fd+ld));

    return 0;

}
*/
//Write a C program to find sum of first and last digit of a number.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp,fd,ld;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        if(rem==rev)
        {
            ld=rem;
        }
        no=no/10;

    }while(no!=0);
    fd=rev%10;

    printf("\n Addition of First and Last Digit : %d",(fd+ld));

    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------
//Write a C program to swap first and last digits of a number.

//----------------------------------------------------------------------------------------------------------------
//Write a C program to calculate sum of digits of a number.
//Write a C program to calculate product of digits of a number.
/**

#include<stdio.h>
int main()
{
    int no,sum=0,mul=1,rem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        sum=sum+rem;
        mul=mul*rem;
        no=no/10;
    }
    printf("\n Addition of digit : %d",sum);
    printf("\n product of digit : %d",mul);

    return 0;

}
*/
//Write a C program to calculate sum of digits of a number.
//Write a C program to calculate product of digits of a number.
/**

#include<stdio.h>
int main()
{
    int no,sum=0,mul=1,rem;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    do
    {
        rem=no%10;
        sum=sum+rem;
        mul=mul*rem;
        no=no/10;
    }while(no!=0);

    printf("\n Addition of digit : %d",sum);
    printf("\n product of digit : %d",mul);

    return 0;

}

*/
//-----------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print its reverse.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    printf("\n Reverse Number : %d",rev);

    return 0;
}
*/
//Write a C program to enter a number and print its reverse.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n Enter any Number : ");
    scanf("%d",&no);

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }while(no!=0);
    printf("\n Reverse Number : %d",rev);

    return 0;
}
*/
//--------------------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is palindrome or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }while(no!=0);

    no=tmp;

    if(no==rev)
    {
       printf("\n %d is palindrome number",no);
    }
    else
    {
        printf("\n %d is NOT palindrome number",no);
    }



    return 0;
}
*/
//Write a C program to check whether a number is palindrome or not.
/**

#include<stdio.h>
int main()
{
    int no,rem,rev=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }

    no=tmp;

    if(no==rev)
    {
       printf("\n %d is palindrome number",no);
    }
    else
    {
        printf("\n %d is NOT palindrome number",no);
    }



    return 0;
}
*/
//------------------------------------------------------------------------------------------
//Write a C program to find frequency of each digit in a given integer.
/**
#include<stdio.h>
int main()
{
    int no,rem,count,d,tmp;

    printf("\n Enter any numbetr : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    while(d<=9)
    {
        no=tmp;
        count=0;
        while(no!=0)
        {
            rem=no%10;
            if(rem==d)
            {
                count++;
            }
            no=no/10;
        }
        if(count>1)
        printf("\n %d Number %d time Repeted",d,count);

        d++;
    }
    return 0;

}
*/
//Write a C program to find frequency of each digit in a given integer.
/**
#include<stdio.h>
int main()
{
    int no,rem,count,d,tmp;

    printf("\n Enter any numbetr : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
       no=tmp;
       count=0;
       do
       {
          rem=no%10;
          if(rem==d)
          {
              count++;
          }
          no=no/10;

       }while(no!=0);

       if(count>1)
       {
          printf("\n %d Number %d time Repeted",d,count);
       }

       d++;

    }while(d<=9);

    return 0;

}

*/
//----------------------------------------------------------------------------------------------------------
//Write a C program to enter a number and print it in words.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n enter any Number : ");
    scanf("%d",&no);

    while(no!=0)
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }
    while(rev!=0)
    {

        rem=rev%10;

        if(rem==1)
        {
            printf(" one");
        }
       else if(rem==2)
        {
            printf(" two");
        }
        else if(rem==3)
        {
            printf(" three");
        }
        else if(rem==4)
        {
            printf(" four");
        }
        else if(rem==5)
        {
            printf(" five");
        }
        else if(rem==6)
        {
            printf(" six");
        }
        else if(rem==7)
        {
            printf(" seven");
        }
        else if(rem==8)
        {
            printf(" eight");
        }
        else if(rem==9)
        {
            printf(" nine");
        }
        else
        {
            printf(" zero");
        }

        rev=rev/10;

    }

    return 0;

}

*/

//Write a C program to enter a number and print it in words.
/**
#include<stdio.h>
int main()
{
    int no,rem,rev=0;

    printf("\n enter any Number : ");
    scanf("%d",&no);

    do
    {
        rem=no%10;
        rev=(rev*10)+rem;
        no=no/10;
    }while(no!=0);

    do
    {

        rem=rev%10;

        if(rem==1)
        {
            printf(" one");
        }
       else if(rem==2)
        {
            printf(" two");
        }
        else if(rem==3)
        {
            printf(" three");
        }
        else if(rem==4)
        {
            printf(" four");
        }
        else if(rem==5)
        {
            printf(" five");
        }
        else if(rem==6)
        {
            printf(" six");
        }
        else if(rem==7)
        {
            printf(" seven");
        }
        else if(rem==8)
        {
            printf(" eight");
        }
        else if(rem==9)
        {
            printf(" nine");
        }
        else
        {
            printf(" zero");
        }

        rev=rev/10;

    }while(rev!=0);

    return 0;

}

*/
//-----------------------------------------------------------------------------------------------------------
//Write a C program to print all ASCII character with their values.
/**
#include<stdio.h>
int main()
{
    int i;

    i=0;
    do
    {
        printf("\n %d ==> %c",i,i);
       i++;
    }while(i<=256);

    return 0;
}
*/

//Write a C program to print all ASCII character with their values.
/**
#include<stdio.h>
int main()
{
    int i;

    i=0;
    while(i<=256)
    {
        printf("\n %d ==> %c",i,i);
       i++;
    }

    return 0;
}
*/

//-----------------------------------------------------------------------------------------------
//Write a C program to find power of a number using loop.
/**
#include<stdio.h>
int main()
{
    int no,p,ans=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    printf("\n Enter power : ");
    scanf("%d",&p);

    i=0;
    while(i<p)
    {
        ans=ans*no;
        i++;
    }
    printf("\n power of %d id %d",no,ans);

    return 0;
}
*/
//Write a C program to find power of a number using loop.
/**
#include<stdio.h>
int main()
{
    int no,p,ans=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    printf("\n Enter power : ");
    scanf("%d",&p);

    i=0;
    do
    {
        ans=ans*no;
        i++;
    }while(i<p);
    printf("\n power of %d id %d",no,ans);

    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to find all factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    printf("\n factors are : ");
    i=2;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            printf(" %d",i);
        }
        i++;
    }
    printf(" %d",no);
    return 0;


}

*/

//----------------------------------------------------------------------------------------------------------------
//Write a C program to calculate factorial of a number.
/**
#include<stdio.h>
int main()
{
    int no,fact=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=no;
    while(i>1)
    {
        fact=fact*i;
        i--;
    }
    printf("\n factorial of a number is : %d",fact);

    return 0;
}
*/
//Write a C program to calculate factorial of a number.
/**


#include<stdio.h>
int main()
{
    int no,fact=1,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=no;
    do
    {
        fact=fact*i;
        i--;
    }while(i>1);
    printf("\n factorial of a number is : %d",fact);

    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------
//Write a C program to find HCF (GCD) of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    while(i<=(max/2))
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }

     printf("\n hcf : %d",hcf);

    return 0;
}
*/
//Write a C program to find HCF (GCD) of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    do
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }while(i<=(max/2));

     printf("\n hcf : %d",hcf);

    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------
//Write a C program to find LCM of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    while(i<=(max/2))
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }

     lcm=(a*b)/hcf;

     printf("\n LCM : %d",lcm);

    return 0;
}
*/

//Write a C program to find LCM of two numbers.
/**
#include<stdio.h>
int main()
{
    int a,b,max=0,i,hcf,lcm;

    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);

    max=(a>b)?a:b;

    i=1;
    do
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }while(i<=(max/2));

     lcm=(a*b)/hcf;

     printf("\n LCM : %d",lcm);

    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Prime number or not.
/**
#include<stdio.h>
int main()
{
    int no,flg=0,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

   i=2;
   while(i<=(no/2))
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
       i++;
    }
    if(flg==0)
    {
        printf("\n %d is Prime Number ",no);
    }
    else
    {
        printf("\n %d is NOT Prime Number ",no);
    }

    return 0;

}
*/
//Write a C program to check whether a number is Prime number or not.
/**
#include<stdio.h>
int main()
{
    int no,flg=0,i;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        if(no%i==0)
        {
            flg=1;
            break;
        }
       i++;
    } while(i<=(no/2));
    if(flg==0)
    {
        printf("\n %d is Prime Number ",no);
    }
    else
    {
        printf("\n %d is NOT Prime Number ",no);
    }

    return 0;

}
*/
//-----------------------------------------------------------------------------------------------------------
//Write a C program to print all Prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        j=2;
        flg=0;
        while(j<=(i/2))
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }
        if(flg==0)
        {
             printf("\n %d",i);
        }
        i++;
    }
    return 0;


}
*/
//Write a C program to print all Prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    printf("\n 2");
    i=2;
    do
    {
        j=2;
        flg=0;
        do
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;

        }while(j<=(i/2));

        if(flg==0)
        {
            printf("\n %d",i);
        }
        i++;

    }while(i<=no);

    return 0;

}
*/
//------------------------------------------------------------------
//Write a C program to find sum of all prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg,ans=0;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        j=2;
        flg=0;
        while(j<=(i/2))
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }
        if(flg==0)
        {
            printf("\n %d",i);
             ans=ans+i;
        }

        i++;
    }
     printf("\n Addition of all prime number : %d",ans);
    return 0;
}
*/
//Write a C program to find sum of all prime numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg,ans=0;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        j=2;
        flg=0;
        do
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }while(j<=(i/2));

        if(flg==0)
        {
            printf("\n %d",i);
             ans=ans+i;
        }

        i++;
    }while(i<=no);
    ans=ans+2;
     printf("\n Addition of all prime number : %d",ans);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------
//Write a C program to find all prime factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    while(i<=no)
    {
        j=2;
        flg=0;
        while(j<=(i/2))
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }
        if(flg==0 && no%i==0)
        {
             printf("\n %d",i);
        }
        i++;
    }
    return 0;


}

*/
//
//Write a C program to find all prime factors of a number.
/**
#include<stdio.h>
int main()
{
    int no,i,j,flg;

    printf("\n Enter any Last Number : ");
    scanf("%d",&no);

    i=2;
    do
    {
        j=2;
        flg=0;
        do
        {
            if(i%j==0)
            {
                flg=1;
                break;
            }

            j++;
        }while(j<=(i/2));
        if(flg==0 && no%i==0)
        {
             printf("\n %d",i);
        }
        i++;
    } while(i<=no);
    return 0;


}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,ans,sum=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    while(no!=0)
    {
        d++;
        no=no/10;
    }
    no=tmp;

    while(no!=0)
    {
        rem=no%10;
        i=0;
        ans=1;
        while(i<d)
        {
            ans=ans*rem;
            i++;
        }
        sum=sum+ans;
        no=no/10;
    }
    no=tmp;
    if(sum==no)
    {
        printf("%d is Armstron Number",no);
    }
    else
    {
        printf("%d is NOT Armstron Number",no);
    }

}
*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Armstrong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,tmp,sum=0,ans;

    printf("\n Enter  Any Number : ");
    scanf("%d",&no);
    tmp=no;

    d=0;
    do
    {
        d++;
        no=no/10;
    }while(no!=0);
    no=tmp;

    do
    {
        rem=no%10;
        i=0;
        ans=1;
        do
        {
            ans=ans*rem;
            i++;
        }while(i<d);

        sum=sum+ans;

        no=no/10;
    }while(no!=0);

    no=tmp;

    if(no==sum)
    {
        printf("\n %d is Armstrong Number ",no);
    }
    else
    {
        printf("\n %d is NOT Armstrong Number ",no);
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------
//Write a C program to print all Armstrong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,j,tmp,sum,ans;

    printf("\n Enter  Any Number : ");
    scanf("%d",&no);

    i=1;
    while(i<=no)
    {

        sum=0;
        tmp=i;
        d=0;
        while(i!=0)
        {
           d++;
           i=i/10;
        }

        i=tmp;

        while(i!=0)
        {
            rem=i%10;
            ans=1;
            j=0;
            while(j<d)
            {
                ans=ans*rem;
                j++;

            }
            sum=sum+ans;


            i=i/10;
        }
        i=tmp;
        if(i==sum)
        {
            printf("\n %d",i);
        }
        i++;
    }
    return 0;
}
*/
//Write a C program to print all Armstrong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int no,rem,d,i,j,tmp,sum,ans;

    printf("\n Enter  Any Number : ");
    scanf("%d",&no);

    i=1;
    do
    {

        sum=0;
        tmp=i;
        d=0;
        do
        {
           d++;
           i=i/10;
        } while(i!=0);

        i=tmp;

        do
        {
            rem=i%10;
            ans=1;
            j=0;
            do
            {
                ans=ans*rem;
                j++;

            }while(j<d);
            sum=sum+ans;


            i=i/10;
        }while(i!=0);
        i=tmp;
        if(i==sum)
        {
            printf("\n %d",i);
        }
        i++;
    }while(i<=no);
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Perfect number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,add=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    i=1;
    while(i<=(no/2))
    {
        if(no%i==0)
        {
            add=add+i;
        }
        i++;
    }
    no=tmp;

   if(add==no)
   {
       printf("\n %d is perfect Number",no);
   }
   else
   {
       printf("\n %d is NOT perfect Number",no);
   }

   return 0;
}
*/
//Write a C program to check whether a number is Perfect number or not.
/**
#include<stdio.h>
int main()
{
    int no,i,add=0,tmp;

    printf("\n Enter any Number : ");
    scanf("%d",&no);
    tmp=no;

    i=1;
   do
    {
        if(no%i==0)
        {
            add=add+i;
        }
        i++;
    } while(i<=(no/2));
    no=tmp;

   if(add==no)
   {
       printf("\n %d is perfect Number",no);
   }
   else
   {
       printf("\n %d is NOT perfect Number",no);
   }

   return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
    #include<stdio.h>
    int main()
    {
        int nn,no,i,add=0,tmp;

        printf("\n Enter any Number : ");
        scanf("%d",&nn);

        no=1;
       while(no<=nn)
        {
           add=0;
           tmp=no;
           i=1;
          while(i<=(no/2))
           {
              if(no%i==0)
              {
                add=add+i;
              }
              i++;
            }
            no=tmp;

            if(add==no)
            {
               printf("\n %d ",no);
            }

            no++;
        }
       return 0;
    }

*/
//-------------------------------------------------------------------------------------------------------------
//Write a C program to print all Perfect numbers between 1 to n.
/**
    #include<stdio.h>
    int main()
    {
        int nn,no,i,add=0,tmp;

        printf("\n Enter any Number : ");
        scanf("%d",&nn);

        no=1;
        do
        {
           add=0;
           tmp=no;
           i=1;
           do
           {
              if(no%i==0)
              {
                add=add+i;
              }
              i++;
            }while(i<=(no/2));
            no=tmp;

            if(add==no)
            {
               printf("\n %d ",no);
            }

            no++;
        }while(no<=nn);

       return 0;
    }

*/
//---------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Strong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    while(no!=0)
    {
        rem=no%10;
        fact=1;
        while(rem>1)
        {
            fact=fact*rem;
            rem--;
        }
        add=add+fact;
        no=no/10;
    }
    no=tmp;
    if(add==no)
    {
        printf("\n %d is Strong Number ",no);
    }
    else
    {
        printf("\n %d is NOT Strong Number ",no);
    }
}
*/
//Write a C program to check whether a number is Strong number or not.
/**
#include<stdio.h>
int main()
{
    int no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&no);
    tmp=no;

    do
    {
        rem=no%10;
        fact=1;
        do
        {
            fact=fact*rem;
            rem--;
        }while(rem>1);
        add=add+fact;
        no=no/10;
    } while(no!=0);
    no=tmp;
    if(add==no)
    {
        printf("\n %d is Strong Number ",no);
    }
    else
    {
        printf("\n %d is NOT Strong Number ",no);
    }
}

*/
//----------------------------------------------------------------------------------------------------
//Write a C program to print all Strong numbers between 1 to n.
/**

#include<stdio.h>
int main()
{
    int nn,no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&nn);

    no=1;
    while(no<=nn)
    {
      tmp=no;
      add=0;
      while(no!=0)
      {
         rem=no%10;
         fact=1;
         while(rem>1)
         {
            fact=fact*rem;
            rem--;
         }

         add=add+fact;
         no=no/10;
       }
       no=tmp;
       if(add==no)
       {
          printf("\n %d",no);
       }

       no++;
    }

}
*/
//Write a C program to print all Strong numbers between 1 to n.
/**
#include<stdio.h>
int main()
{
    int nn,no,rem,tmp,fact,add;

    printf("\n Enter any number : ");
    scanf("%d",&nn);

    no=1;
    do
    {
      tmp=no;
      add=0;
      do
      {
         rem=no%10;
         fact=1;
         do
         {
            fact=fact*rem;
            rem--;
         }while(rem>1);

         add=add+fact;
         no=no/10;
       } while(no!=0);
       no=tmp;
       if(add==no)
       {
          printf("\n %d",no);
       }

       no++;
    }while(no<=nn);

}
*/
/**--------------------------------------------------------------------------------------------------------------------------------
                                                 Pattern
------------------------------------------------------------------------------------------------------------*/


/**
List of star pattern programming
exercises
*****
*****
*****
*****
*****
 */

/**
 #include<stdio.h>
 int main()
 {
     int i,j;

     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }
*/

//----------------------------------------------------------------------------------------------------------------------
/**

Square Star Pattern
*****
* *
* *
* *
*****

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------
/**

Hollow Square Star Pattern
*****
** **
* * *
** **
*****

*/
/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((i==1 && j==2) || (i==2 && j==1) || (i==2 && j==3) || (i==3 && j==2))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");

    }
    return 0;

}

*/

//---------------------------------------------------------------------------------------------------------------------------------------

/**
Hollow Square Star Pattern with
Diagonal
    *****
   *****
  *****
 *****
*****

*/
/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<(9-i);j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------------------

/**

    *****
   *   *
  *   *
 *   *
*****

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j<5-i)
            {
                printf("*   *");//DONT USE LIKE THAT
            }


        }
        printf("\n");
    }
    return 0;
}




*/


/**

    *****
   *   *
  *   *
 *   *
*****

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j<5-i)
            {
                printf("*");
            }
            else if(j<(8-i))
            {
                printf(" ");
            }
            else if(j<9-i)
            {
                printf("*");
            }


        }
        printf("\n");
    }
    return 0;
}

*/

//---------------------------------------------------------------------------------------------------------------------------
/**
     *****
      *****
       *****
        *****
         *****
*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------
/**

*****
 *   *
  *   *
   *   *
    *****

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
          if(j<i)
          {
              printf(" ");
          }
          else if( i==0 || i==4)
          {
              printf("*");
          }
          else if(j<=i)
          {
              printf("*");
          }
          else if(j<4+i)
          {
              printf(" ");
          }
          else
          {
              printf("*");
          }
        }
        printf("\n");
    }
     return 0;
}

*/

//---------------------------------------------------------------------------------------------------------------------------
/**

*
**
***
****
*****


*/


//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<=i)
//            {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//-----------------------------------------------------------------------------------------------------
/**

*
**
* *
*  *
*****

*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i==2 && j==1) || (i==3 && j==1) || (i==3 && j==2))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/

//------------------------------------------------------------------------------------------------------
/**

    *
   * *
  * * *
 * * * *
* * * * *


*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//-----------------------------------------------------------------------------------------------------------------------------
/**

    *
   **
  * *
 *  *
*****

*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if ((i==2 && j==3) || (i==3 && j==2) || (i==3 && j==3))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------------
//*****
//****
//***
//**
//*
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5-i;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//
//}

//--------------------------------------------------------------------------------------------------------------------------

/**
*****
*  *
* *
**
*

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if((i==1 && j==1) || (i==1 && j==2) || (i==2 && j==1))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;

}

*/

//---------------------------------------------------------------------------------------------------------------------
/**

* * * * *
 * * * *
  * * *
   * *
    *


*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }

        }
        printf("\n");
    }
    return 0;

}
*/
//------------------------------------------------------------------------------------------------------------------
/**

*****
 *  *
  * *
   **
    *

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if ((i==1 && j==2) || (i==1 && j==3) || (i==2 && j==3))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;

}


*/

//---------------------------------------------------------------------------------------------------------------------------
/**

    *
   ***
  *****
 *******
*********

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/

//-----------------------------------------------------------------------------------------------------------------
/**
    *
   * *
  *   *
 *     *
*********

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if((j<5-i) || i==4)
            {
                printf("*");
            }
            else if((i==1 && j==5) || (i==2 && j==6) || (i==3 && j==7))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------anathor way------------------
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5+i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if((j<5-i) || i==4)
            {
                printf("*");
            }
            else if(j<4+i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//-----------------------------------------------------------------------------------------------------
/**

*********
 *******
  *****
   ***
    *

*/

/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");

    }
    return 0;

}


*/

//-------------------------------------------------------------------------------------------------------------------
/**

*********
 *     *
  *   *
   * *
    *

*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j<=i || i==0)
            {
                printf("*");
            }
            else if((i==1 && j==7)||(i==2 && j==6)||(i==3 && j==5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");

    }
    return 0;

}
*/
//------anathor way----------
/**

#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j<=i || i==0)
            {
                printf("*");
            }
            else if(j<8-i)
            {
                printf(" ");
            }
            else if(j<9-i)//use only else
            {
                printf("*");
            }

        }
        printf("\n");

    }

}
*/

//------------------------------------------------------------------------------------------------------------------------------
/**
*
**
***
****
*****
******
*****
****
***
**
*


*/

/**
#include<Stdio.h>
int main()
{
    int i,j;

    for(i=0;i<11;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i<6)
            {
                if(j<=i)
                {
                printf("*");
                }
            }
            else
            {
                if(j<(6+5)-i)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/

//-----------------------------------------------------------------------------------------------------------------------
/**

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *


*/

/**
#include<Stdio.h>
int main()
{

    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<5)
            {
                if(j<4-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }
            else
            {
                if((j+4)<i)
                {
                    printf(" ");
                }
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//-----------------------------------------------------------------------------------------------------------------------
/**

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *


*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i<5)
            {
                if(j<5+i)
                {
                    if(j<4-i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
            else
            {
              if(j<13-i)//first time i=5 thats why 8+5=13
                {
                    if((j+4)<i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//------------------------------------------------------------------------------------------------------------------------
/**


**********
**** ****
***  ***
**   **
*    *
*    *
**   **
***  ***
**** ****
**********

*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<5)
            {
                if(j<5)
                {
                    if(j<5-i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    if(j<10-i)
                    {
                        printf("*");
                    }
                }
            }
            else
            {
                if(j<5)
                {
                    if((j+5)<=i)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    if(j<=i)
                    {
                        printf("*");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------
/**

*****
 ****
  ***
   **
    *
    *
   **
  ***
 ****
*****

*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<5)
            {
                if(j<i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                if(j<(9-i))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//-----------------------------------------------------------------------------------------------------------------
/**

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/



/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<5)
            {
               if(j<5)
               {
                    if(j<(5-i))
                    {
                        printf("*");
                    }
                    else
                    {
                       printf(" ");
                    }
               }
               else
               {
                   if(j<(i+5))
                   {
                       printf(" ");
                   }
                   else
                   {
                       printf("*");
                   }
               }
            }
            else
            {
                if(j<5)
                {
                    if((j+5)<=i)
                    {
                       printf("*");
                    }
                    else
                    {
                    printf(" ");
                    }
                }
                else
                {
                    if(j<14-i)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }

            }
        }
        printf("\n");
    }
}

*/

//--------------------------------------------------------------------------------------------------------------------------------------
/**

    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
       for(j=0;j<9;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if(j<9-(i+i))
           {
                printf("*");
           }
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j<=i)
            {
                printf(" ");
            }
            else if(j<3+(i+i))
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

*/

//----------------------------------------------------------------------------------------------------------------
/**

  +
  +
  +
  +
+++++++++
  +
  +
  +
  +

*/


/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i==4 || j==2)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------
/**


*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *

*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j<5)
            {
                if(j<i)
                {
                    printf(" ");
                }
                else if(j<=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j<8-i)
                {
                    printf(" ");
                }
                else if(j<9-i)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j<5)
            {
                if(j<3-i)
                {
                    printf(" ");
                }
                else if(j<4-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j-5<i)
                {
                    printf(" ");
                }
                else if(j-5<=i)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//-------------------------------------------------------------------------------------------------------------------------
/**


***
* *
* *
* *
***
* *
* *
* *
***


*/


/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 || i==4 || i==8 || j==0 || j==2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}



*/

//--------------------------------------------------------------------------------------------------------------------------
/**

   ***       ***
  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<19;j++)
        {
          if(j<9)
          {
              if(j<3-i)
              {
                  printf(" ");
              }
              else if(j<6+i)
              {
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
          }
          else
          {
              if(j<13-i)
              {
                  printf(" ");
              }
              else if(j<16+i)
              {
                  printf("*");
              }
          }
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<19-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/

//-----------------------------------------------------------------------------------------------------------------
/**


  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<19;j++)
        {
          if(j<9)
          {
              if(j<2-i)
              {
                  printf(" ");
              }
              else if(j<7+i)
              {
                  printf("*");
              }
              else
              {
                  printf(" ");
              }
          }
          else
          {
              if(j<12-i)
              {
                  printf(" ");
              }
              else if(j<17+i)
              {
                  printf("*");
              }
          }
        }
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<19-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------------------
/**

  *****     *****
 *******   *******
********* *********
*****ARCHER INFOTECH****
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

*/

/**

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<19;j++)
        {
            if(j<2-i)
            {
                printf(" ");
            }
            else if(j<7+i)
            {
                printf("*");
            }
            else if(j<12-i)
            {
                printf(" ");
            }
            else if(j<17+i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<1;i++)
    {
        for(j=0;j<19;j++)
        {
            if((j<5) || (j>14))
            {
                printf("*");
            }
            if(j==6)
            {
                 printf("ARCHER INFOTECH");
            }
        }

    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<17-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------
//star pattern
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<17;j++)
        {
            if(j<8-i)
            {
               if(i==2)
               {
                   if(j<3)
                   printf("  ");
                   else
                    printf("* ");
               }
               else
               {
                   printf("  ");
               }
            }
            else if(j<9-i)
            {
                printf("* ");
            }
            else if(i==2 && (j>2 && j<14))
            {
                printf("* ");
            }
            else if(j==2*i)
            {
                printf("* ");
            }
            else if(i>2 && j==12-((2*i)-4))
            {
                printf("* ");
            }
            else if(j==8+i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/























/**---------------------------------------------------------------------------------------------------------------------------
                                           Character patern
--------------------------------------------------------------------------------------------------------------------------------*/
/**
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/

//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char ch;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A';
//        for(j=0;j<5;j++)
//        {
//            printf("%c",ch++);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------
/**
A
AB
ABC
ABCD
ABCDE
*/


/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';

        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------------
/**
A
BC
DEF
GHIJ
KLMNO
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------------------------
/**
A
BB
CCC
DDDD
EEEEE
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char ch='A';
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%c",ch);
//        }
//        printf("\n");
//        ch++;
//    }
//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------------
/**
A
BB
AAA
BBBB
AAAAA
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            {
                printf("%c",ch);
            }
        }
        printf("\n");
        if(ch=='A')
        {
            ch++;
        }
        else
        {
            ch--;
        }
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------

/**
E
ED
EDC
EDCB
EDCBA
*/

//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char ch;
//
//    for(i=0;i<5;i++)
//    {
//        ch='E';
//        for(j=0;j<=i;j++)
//        {
//            printf("%c",ch--);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------
/**
E
DE
CDE
BCDE
ABCDE

*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char ch;
//
//    for(i<0;i<5;i++)
//    {
//        ch='A';
//       for(j=0;j<5;j++)
//       {
//           if(j<4-i)
//           {
//              ch++;
//           }
//           else
//           {
//               printf("%c",ch++);
//           }
//       }
//        printf("\n");
//    }
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------------

/**
A
BA
CBA
DCBA
EDCBA

*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char ch;
//
//    for(i=0;i<5;i++)
//    {
//        ch='E';
//        for(j=0;j<5;j++)
//        {
//            if(j<4-i)
//            {
//                ch--;
//            }
//            else
//            {
//                printf("%c",ch--);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------------
/**
ABCDE
ABCD
ABC
AB
A
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char ch;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A';
//       for(j=0;j<5-i;j++)
//       {
//           printf("%c",ch++);
//       }
//       printf("\n");
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------
/**
ABCDE
BCDE
CDE
DE
E
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                ch++;
            }
            else
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------
/**
EDCBA
DCBA
CBA
BA
A
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {
        ch='E';
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                ch--;
            }
            else
            {
                printf("%c",ch--);
            }
        }
        printf("\n");
    }
    return 0;

}
*/
//------------------------------------------------------------------------------------------------------
/**
EDCBA
EDCB
EDC
ED
E
*/
/**

#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {
        ch='E';
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%c",ch--);
            }
            else
            {
                ch--;
            }
        }
        printf("\n");
    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------------
/**
E
DD
CCC
BBBB
AAAAA
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='E';
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",ch);
            }
        }
        ch--;
        printf("\n");
    }
    return 0;

}

*/
//---------------------------------------------------------------------------------------------------------------------------

/**
EEEEE
DDDD
CCC
BB
A
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='E';
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%c",ch);
            }
        }
        ch--;
        printf("\n");
    }
    return 0;

}

*/
//-----------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 12
AAAAA
BBBB
CCC
DD
E
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%c",ch);
            }
        }
        ch++;
        printf("\n");
    }
    return 0;

}

*/

//---------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 13
A
B C
D E F
G H I J
K L M N O
*/

/**

#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf(" %c",ch++);
            }
        }
        printf("\n");
    }
    return 0;

}

*/

//--------------------------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 14
A
ABC
ABCDE
ABCDEFG
ABCDEFGHI
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<9;j++)
        {
            if(j<=i+i)
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;

}
*/
//----------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 15
ABCDEEDCBA
ABCD**DCBA
ABC****CBA
AB******BA
A********A
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<10;j++)
        {
            if(j<5)
            {
                if(j<5-i)
                {
                    printf("%c",ch++);
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                if(j-5<i)
                {
                    printf("*");
                }
                else
                {
                    printf("%c",--ch);
                }
            }
        }

        printf("\n");
    }
    return 0;

}
*/
//-------------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 16
    A
  B C D
E F G H I
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
           if(j<4-(i+i))
           {
               printf(" ");
           }
           else
           {
               printf(" %c",ch++);
           }
        }
        printf("\n");
    }
    return 0;

}

*/
//---------------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 17
EDCB*
EDC*A
ED*BA
E*CBA
*DCBA
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='E';
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                printf("%c",ch--);
            }
            else if(j<5-i)
            {
                ch--;
               printf("*");
            }
            else
            {
                printf("%c",ch--);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 18
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<(1+i+i);j++)
        {
            if(j<=i)
            {
                printf("%c",ch++);
            }
             else
            {
                printf("%c",ch-2);
                 ch--;
            }

        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 19
A        A
AB      BA
ABC    CBA
ABCD  DCBA
ABCDEEDCBA
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<10;j++)
        {
            if(j<=i)
            {
                printf("%c",ch++);
            }
            else if(j<9-i)
            {
                printf(" ");
            }
            else
            {
                printf("%c",--ch);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 20
    A
   BA
  CBA
 DCBA
EDCBA
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='E';
        for (j=0;j<5;j++)
        {
            if(j<4-i)
            {
                printf(" ");
                ch--;
            }
            else
            {
                printf("%c",ch--);
            }
        }
        printf("\n");
    }
    return 0;

}

*/
//----------------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 21
A
B*B
C*C*C
D*D*D*D
E*E*E*E*E
D*D*D*D
C*C*C
B*B
A
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<9;i++)
    {
        for(j=1;j<10;j++)
        {
            if(i<5)
            {
                if(j<=1+(i+i))
                {
                        if(j%2==0)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf("%c",ch);
                        }
                }
            }
            else
            {
                if(j<(18-(i+i)))
                {
                    if(j%2==0)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("%c",ch-2);

                    }
                }
            }
        }
        printf("\n");
        if(i<5)
        {
            ch++;
        }
        else
        {
            ch--;
        }
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------
/**

    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='E';
        for(j=0;j<5+i;j++)
        {
            if(j<5)
            {
                if(j<4-i)
                {
                    printf(" ");
                    ch--;
                }
                else
                {
                    printf("%c",ch--);
                }
            }
            else
            {
                printf("%c",ch+2);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}


*/


//---------------------------------------------------------------------------------------------------------------------------
/**

Alphabet Pattern 22
        A
      B C
    D E F
  G H I J
K L M N O
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j<9-(i+i))
            {
                printf(" ");
            }
            else if(j%2==0)
            {
                printf(" ");
            }
            else
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 23
        E
      E D
    E D C
  E D C B
E D C B A
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
       {
          char ch='E';

              for(j=1;j<10;j++)
              {
                  if(j<9-(i+i))
                  {
                      printf(" ");
                  }
                  else if(j%2==0)
                  {
                      printf(" ");
                  }
                  else
                  {
                      printf("%c",ch--);
                  }
              }
              printf("\n");
         }

         return 0;

}


*/
//------------------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 24
A
BAB
CBABC
DCBABCD
EDCBABCDE
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<1+i+i;j++)
        {
            if(j<=i)
            {
                printf("%c",ch--);
            }
            else
            {
                printf("%c",ch++);
            }
            if(i==j)
            {
               ch=ch+2;
            }
        }
        printf("\n");
    }
    return 0;

}

*/
//--------------------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 25
A B C D E
F G H I
J K L
M N
O
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=1;j<10-(i+i);j++)
        {
            if(j%2==0)
            {
                printf(" ");
            }
            else
            {
                printf("%c",ch++);
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//--------------------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 26
ABCDE
BCDEA
CDEBA
DECBA
EDCBA
*/


/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                ch++;
            }
            else
            {
                printf("%c",ch++);
            }
        }
        ch='E';
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                ch--;
            }
            else
            {
                printf("%c",ch--);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 28
E E E E E E E E E
E D D D D D D D E
E D C C C C C D E
E D C B B B C D E
E D C B A B C D E

*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=1;j<18;j++)
        {
            if(j%2==0)
            {
                printf(" ");
            }
            else
            {
                if(i==0 || j==1 || j==17)
                {
                    printf("E");
                }
                else if(i==1 || j==3 || j==15)
                {
                    printf("D");
                }
                else if(i==2 || j==5 || j==13)
                {
                    printf("C");
                }
                else if(i==3 || j==7 || j==11)
                {
                    printf("B");
                }
                else if(i==4 || j==9)
                {
                    printf("A");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------anathor way---------------------------------------------------------------------------------
/**
#include<stdio.h>
int main()
{
    int i,j,l;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='E';
        for(j=1;j<18;j++)
        {
            if(j%2==0)
            {
                printf(" ");
            }
            else
            {
                    if(j<=1+(i+i))
                    {
                        printf("%c",ch--);
                    }
                    else if(j<18-(i+i))
                    {
                        printf("%c",ch+1);
                    }
                    else
                    {
                        printf("%c",ch+2);
                        ch++;
                    }
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//--------------------------------------------------------------------------------------------------------------------------
/**

Alphabet Pattern 29
E E E E E E E E E
E D D D D D D D E
E D C C C C C D E
E D C B B B C D E
E D C B A B C D E
E D C B B B C D E
E D C C C C C D E
E D D D D D D D E
E E E E E E E E E

*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=1;j<18;j++)
        {
            if(j%2==0)
            {
                printf(" ");
            }
            else
            {
                if(i==0 || i==8 || j==1 || j==17)
                {
                    printf("E");
                }
                else if(i==1 || i==7 || j==3 || j==15)
                {
                    printf("D");
                }
                else if(i==2 || i==6 || j==5 || j==13)
                {
                    printf("C");
                }
                else if(i==3 || i==5 || j==7 || j==11)
                {
                    printf("B");
                }
                else if(i==4 || j==9)
                {
                    printf("A");
                }
            }
        }
        printf("\n");
    }
    return 0;
}



*/
//----------------ANATHOR WAY------------------------------------------------------------
/**
#include<stdio.h>
int main()
{
    int i,j,l;
    char ch;

    for(i=0;i<9;i++)
    {
        ch='E';
        for(j=1;j<18;j++)
        {
            if(j%2==0)
            {
                printf(" ");
            }
            else
            {
                if(i<5)
                {
                    if(j<=1+(i+i))
                    {
                        printf("%c",ch--);
                    }
                    else if(j<18-(i+i))
                    {
                        printf("%c",ch+1);
                    }
                    else
                    {
                        printf("%c",ch+2);
                        ch++;
                    }
                }
                else
                {
                    l=i-5;

                    if(j<8-(l+l))
                    {
                        printf("%c",ch--);
                    }
                    else if(j<12+(l+l))
                    {
                        printf("%c",ch+1);
                    }
                    else
                    {
                        printf("%c",ch+2);
                        ch++;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------
/**
Alphabet Pattern 31
A       A
 B     B
  C   C
   D D
    E
*/

/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else if(j<=i)
            {
                printf("%c",ch);
            }
            else if(j<8-i)
            {
                printf(" ");
            }
            else
            {
                printf("%c",ch);
            }
        }
        ch++;
        printf("\n");
    }
    return 0;
}


*/
//------------------------------------------------------------------------------------------------------------------

/**
Alphabet Pattern 32
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/


/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch='A';
        for(j=0;j<5+i;j++)
        {
            if(j<4-i)
            {
                printf(" ");
            }
            else if(j<5)
            {
                printf("%c",ch++);
            }
            else
            {
                printf("%c",ch-2);
                ch--;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------
/**

Alphabet Pattern 34
    A
   B B
  C   C
 D     D
E       E
 D     D
  C   C
   B B
    A
*/
/**
#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';

    for(i=0;i<9;i++)
    {
        if(i<5)
        {
            for(j=0;j<5+i;j++)
            {
               if(j<4-i)
               {
                   printf(" ");
               }
               else if(j<=4-i)
               {
                   printf("%c",ch);
               }
               else if(j<4+i)
               {
                   printf(" ");
               }
               else
               {
                   printf("%c",ch);
               }
            }
        }
        else
        {
            for(j=0;j<13-i;j++)//in here i=5 so here conditon write remember that i
            {
                if(j<=i-5)
                {
                    printf(" ");
                }
                else if(j<1+(i-4))
                {
                    printf("%c",ch-2);
                }
                else if(j<12-i)
                {
                    printf(" ");
                }
                else
                {
                    printf("%c",ch-2);
                }

            }
        }
        if(i<5)
        {
            ch++;
        }
        else
        {
            ch--;
        }
        printf("\n");
    }
    return 0;
}
*/
//---------anthoer way---------------------------
/**
#include<stdio.h>
int main()
{
    int i,j,k;
    char ch='A';

    for(i=0;i<9;i++)
    {
        if(i<5)
        {
            for(j=0;j<5+i;j++)
            {
               if(j<4-i)
               {
                   printf(" ");
               }
               else if(j<=4-i)
               {
                   printf("%c",ch);
               }
               else if(j<4+i)
               {
                   printf(" ");
               }
               else
               {
                   printf("%c",ch);
               }
            }
        }
        else
        {
            k=i-5;//i>5 so k get in 0th position and so on.
            for(j=0;j<13-i;j++)
            {
                if(j<=k)
                {
                    printf(" ");
                }
                else if(j<2+k)
                {
                    printf("%c",ch-2);
                }
                else if(j<7-k)
                {
                    printf(" ");
                }
                else
                {
                    printf("%c",ch-2);
                }

            }
        }
        if(i<5)
        {
            ch++;
        }
        else
        {
            ch--;
        }
        printf("\n");
    }
    return 0;
}


*/
/**--------------------------------------------------------------------------------------------------------------------
                                         Numeric patterns
--------------------------------------------------------------------------------------------------------------------------*/
/**

Square number patterns
11111
11111
11111
11111
11111
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            printf("1");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 1
11111
00000
11111
00000
11111

*/
//
//#include<stdint.h>
//int main()
//{
//    int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(i%2==0)
//            {
//                printf("0");
//            }
//            else
//            {
//                printf("1");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------------
/**

Number pattern 2
01010
01010
01010
01010
01010
*/
//
//#include<stdint.h>
//int main()
//{
//    int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j%2==0)
//            {
//                printf("0");
//            }
//            else
//            {
//                printf("1");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------

/**
Number pattern 3
11111
10001
10001
10001
11111
*/
//
//#include<stdio.h>
//int main()
//{
//   int i,j;
//
//   for(i=0;i<5;i++)
//   {
//       for(j=0;j<5;j++)
//       {
//           if(i==0 || i==4 || j==0 || j==4)
//           {
//               printf("1");
//           }
//           else
//           {
//               printf("0");
//           }
//       }
//       printf("\n");
//   }
//   return 0;
//}
//-----------------------------------------------------------------------------------------------------
/**
Number pattern 4
11111
11111
11011
11111
11111
*/
//
//#include<stdio.h>
//int main()
//{
//   int i,j;
//
//   for(i=0;i<5;i++)
//   {
//       for(j=0;j<5;j++)
//       {
//           if(i==2 && j==2 )
//           {
//               printf("0");
//           }
//           else
//           {
//               printf("1");
//           }
//       }
//       printf("\n");
//   }
//   return 0;
//}
//-----------------------------------------------------------------------------------------------------------------
/**
Number pattern 5
10101
01010
10101
01010
10101
*/

//#include<stdio.h>
//int main()
//{
//    int i,j,k=1;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(k==1)
//            {
//                printf("%d",k--);
//            }
//            else
//            {
//                printf("%d",k++);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------
/**
Number pattern 6
11011
11011
00000
11011
11011
*/

/**
#include<stdio.h>
int main()
{
   int i,j;

   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(i==2 || j==2 )
           {
               printf("0");
           }
           else
           {
               printf("1");
           }
       }
       printf("\n");
   }
   return 0;
}

*/

//-------------------------------------------------------------------------------------------------------------------
/**
Number pattern 7
10001
01010
00100
01010
10001
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(i==j || j==4-i)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("0");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//------------------------------------------------------------------------------------------------------------------
/**
Number pattern 8
01110
10001
10001
10001
01110
*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j || j==4-i)
            {
                printf("0");
            }
            else if(i==0 || i==4 || j==0 || j==4)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------

/**
Number pattern 9
11111
22222
33333
44444
55555
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            printf("%d",i);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//---------------------------------------------------------------------------------------------------------

/**
Number pattern 10
12345
12345
12345
12345
12345
*/

//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=1;j<=5;j++)
//        {
//            printf("%d",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//------------------------------------------------------------------------------------------------------------------------

/**

Number pattern 11
12345
23456
34567
45678
56789
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5+i;j++)
        {
            if(j<i)
            {
                k++;
            }
            else
            {
                printf("%d",k++);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------

/**
Number pattern 12
1  2  3  4  5
6  7  8  9  10// i==0,1 two gap bw=etween two number
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j%2==0)
            {
                if(i<2)
                {
                    printf("  ");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf("%d",k++);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------

/**
Number pattern 13
55555
54444
54333
54322
54321
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<5;j++)
        {
           if(j<=i)
           {
               printf("%d",k--);
           }
           else
           {
               printf("%d",k+1);
           }
        }
        printf("\n");
    }
    return 0;
}

*/

//-----------------------------------------------------------------------------------------------------------------------------

/**
Number pattern 14
12345
23455
34555
45555
55555
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5+i;j++)
        {
            if(j<5)
            {
                if(j<i)
                {
                    k++;
                }
                else
                {
                    printf("%d",k++);
                }
            }
            else
            {
                printf("%d",k-1);
            }
        }
        printf("\n");
    }
    return 0;

}

*/
//--------------------------------------------------------------------------------------------------------------------

/**
Number pattern 15
12345
23451
34521
45321
54321

*/
/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5+i;j++)
        {
            if(j<5)
            {
                if(j<i)
                {
                    k++;
                }
                else
                {
                    printf("%d",k++);
                }
            }
            else
            {
                printf("%d",k-(6-i));
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 16
12345
21234
32123
43212
54321
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<9-i;j++)
        {
            if(j<5)
            {
                if(j<4-i)
                {
                    k--;
                }
                else
                {
                    printf("%d",k--);
                }
            }
            else
            {
                printf("%d",k+2);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------

/**
Number pattern 17
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/


/**
#include<stdio.h>
int main()
{
    int i,j,k,l;

    for(i=0;i<9;i++)
    {
        k=5;
        for(j=1;j<18;j++)
        {
            if(j%2==0)
            {
                printf(" ");
            }
            else
            {
               if(i<5)
               {
                    if(j<=1+i+i)
                    {
                       printf("%d",k--);
                    }
                    else if(j<18-(i+i))
                    {
                       printf("%d",k+1);
                    }
                    else
                    {
                       printf("%d",k+2);
                       k++;
                    }
               }
               else
               {
                   l=i-5;
                   if(j<8-(l+l))
                   {
                       printf("%d",k--);
                   }
                   else if(j<12+(l+l))
                   {
                       printf("%d",k+1);
                   }
                   else
                   {
                       printf("%d",k+2);
                       k++;
                   }
               }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------

/**
Number pattern 18
1    2    3    4    5
16   17   18   19   6
15   24   25   20   7
14   23   22   21   8
13   12   11   10   9

*/

/**
#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<2 && j<4)
            {
                if(i<1)
                {
                    printf("  %d ",k++);
                }
                else
                {
                    printf("  %d",k+11);
                    k++;
                }
            }
            else if(j==4)
            {
                printf("  %d",5+i);
            }
            else if(j==0)
            {
                printf("  %d",17-i);
            }
            else if(i==2)
            {
                if((j>0 && j<3))
                {
                     printf("  %d",k+15);
                     k++;
                }
                else
                {
                    printf("  %d",k+9);
                }
            }
            else if(i==3)
            {
                printf("  %d",k+12);
                k--;
            }
            else
            {
                printf("  %d",k+4);
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------------------
/**
Number pattern 19
Triangle Easy Number Patterns
1
22
333
4444
55555
*/

//
//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=5;j++)
//        {
//            if(j<=i)
//            {
//                printf("%d",i);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//----------------------------------------------------------------------------------------------------------------------
/**
Number pattern 20
55555
4444
333
22
1
*/

//
//#include<stdio.h>
//int main()
//{
//    int i,j,k=5;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<5-i)
//            {
//                printf("%d",k);
//            }
//        }
//        k--;
//        printf("\n");
//    }
//    return 0;
//}
//-------anthoer way----------------------------------------------------------------------------------------------------------------------

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%d",5-i);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------
/**
Number pattern 22
5
44
333
2222
11111
*/
/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",5-i);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------
/**
Number pattern 23
1
12
123
1234
12345
*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------
/**
Number pattern 24
12345
1234
123
12
1
*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<7-i)//i start from 1 so consider i value
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 25
1
21
321
4321
54321
*/


/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                k--;
            }
            else
            {
                printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------
/**
Number pattern 26
54321
4321
321
21
1
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                k--;
            }
            else
            {
                printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//---------------------------------------------------------------------------------------------
/**
Number pattern 27
5
54
543
5432
54321
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 28
54321
5432
543
54
5
*/
/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------------------
/**
Number pattern 29
5
45
345
2345
12345
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j<4-i)
            {
                k++;
            }
            else
            {
                printf("%d",k++);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 30
12345
2345
345
45
5
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%d",k++);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 31
1
23
345
4567
56789
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1+i;
        for(j=0;j<5;j++)
        {
           if(j<=i)
           {
               printf("%d",k++);
           }
        }
        printf("\n");
    }
    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------------
/**
Number pattern 32
56789
4567
345
23
1
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5-i;
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
               printf("%d",k++);
            }

        }
        printf("\n");
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 33
13579
3579
579
79
9
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1+(2*i);
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
               printf("%d",k++);
               k++;
            }

        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------
/**
Number pattern 34
Triangle 0,1 Easy Number Patterns

1
10
101
1010
10101
*/
/**

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=1;j<=1+i;j++)
        {
            if(j%2==0)
            {
               printf("%d",k++);
            }
            else
            {
                printf("%d",k--);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 35
1
00
111
0000
11111
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=1+i;j++)
        {
           printf("%d",k);
        }
         printf("\n");

         if(k==1)

            {
                k--;
            }
            else
            {
               k++;
            }
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------------------

/**
Number pattern 36
1
01
010
1010
10101
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=1+i;j++)
        {
            if(k==1)

            {
               printf("%d",k--);
            }
            else
            {
               printf("%d",k++);
            }
        }
         printf("\n");
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 37
1
11
101
1001
11111
*/

/**
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==4 || j==0 || j==i)
            {
               printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------------
/**
Number pattern 38
Triangle Hard Number Patterns
________________________________________
1
123
12345
1234567
123456789
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<=i+i;j++)
        {
           printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------
/**
Number pattern 39
1
24
135
2468
13579
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=i+i;j++)     //1
        {                       //24 in that j itrate 4 times.
            if(i%2==0)          //135 in that j itrate 6 times
            {
                if(k%2==0 )
                {
                   printf("%d",k++);
                }
                else
                {
                   k++;
                }
            }
            else
            {
                if(k%2==0 )
                {
                   k++;
                }
                else
                {
                    printf("%d",k++);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 40
1
131
13531
1357531
135797531
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<=i+i;j++)
        {
           if(j<=i)
           {
               printf("%d",k);
               k+=2;
           }
           else
           {
               printf("%d",k-4);
               k-=2;
           }
        }
        printf("\n");
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 41
2
242
24642
2468642
2468108642
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=2;
        for(j=0;j<=i+i;j++)
        {
           if(j<=i)
           {
               printf("%d",k);
               k+=2;
           }
           else
           {
               printf("%d",k-4);
               k-=2;
           }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 42
1
121
12321
1234321
123454321
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<=i+i;j++)
        {
           if(j<=i)
           {
               printf("%d",k++);
           }
           else
           {
               printf("%d",k-2);
               k--;
           }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 43
1
32
4543
567654
67898765
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<13;j++)
        {
            if(i<1  && j==0)
            {
                printf("%d",k);
            }
            else
            {
                if(j<=3*i)
                {
                    if(j<=i+i)
                    {
                        if(j<=1*i)
                        {
                            k++;
                        }
                        else
                        {
                           printf("%d",k++);
                        }
                    }
                    else
                    {
                        printf("%d",k-2);
                        k--;
                    }

                }

            }
        }
        printf("\n");
    }
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/**
Number pattern 44
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

//#include<stdio.h>
//int main()
//{
//    int i,j,k=1;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%d ",k++);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 45
1
21
123
4321
12345
*/

/**
#include<Stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        if(i%2==0)
        {
            k=5;
        }
        else
        {
            k=1;
        }
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                if(j<=5-i)
                {
                    k--;
                }
                else
                {
                    printf("%d",k--);
                }
            }
            else
            {
                if(j<1+i)
                {
                    printf("%d",k++);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//--------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 46
1
23
4567
89123456
7891234567891234
*/

/**

#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=16;j++)
        {
            if(k==10)
                {
                   k=1;
                }

            if(i<2 && j<=i)
            {
                printf("%d",k++);
            }
            else if(i==3)
            {
                if(j<8)
                {
                    printf("%d",k++);
                }
            }
            else if(j<i*i )
            {

                printf("%d",k++);
            }

        }
        printf("\n");
    }
    return 0;
}


*/
//-----------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 47
1        1
12      21
123    321
1234  4321
1234554321
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<10;j++)
        {
            if(j<=i)
            {
                printf("%d",k++);
            }
            else if(j<9-i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",k-=1);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------------------------------

/**
Number pattern 48
1
2  6
3  7  10
4  8  11 13
5  9  12 14 15
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                printf("%d ",k=1+i);
            }
            else
            {
                printf("%d ",k+=5-j);

            }

        }
        printf("\n");
    }
}

*/
//-------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 49
1
2  4
7  11 16
22 29 37 46
56 67 79 92 106
*/

//#include<stdio.h>
//int main()
//{
//    int i,j,k=1,l=0;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%d ",k+=l);
//            l++;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//----------------------------------------------------------------------------------------------------------------------------
/**
1
2
4
7 8 9
10 11 12 13 14
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k=1,l=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<4 && j==0)
            {
                printf("%d ",k+=l);
                l++;
            }
            else if(i==3 && j<3)
            {
                printf("%d ",++k);
            }
            else if(i==4)
            {
                printf("%d ",++k);
            }

        }
        printf("\n");
    }
    return 0;
}

*/
//------------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 50
1
3  2
4  5  6
10 9  8  7
11 12 13 14 15
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            if(j==1)
            {
                if(i<2)
                {
                    printf("%d",i);
                }
                else if(i<4)
                {
                    printf("%d ",k=i+1);
                }
                else
                {
                    printf("%d ",k=i+6);
                }
            }
            else
            {
                if(i%2==0)
                {
                    printf("%d ",--k);
                }
                else
                {
                    printf("%d ",++k);
                }
            }

        }
        printf("\n");
    }
    return 0;
}

*/

//--------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 51
1
22
333
2222
11111
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",k);
        }
        printf("\n");
        if(i<2)
        {
            k++;
        }
        else
        {
            k--;
        }
    }
    return 0;
}

*/


//------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 52
N = 12345

12345
1234
123
12
1
*/

//#include<stdio.h>
//int main()
//{
//    int no;
//
//    printf("Enter any number : ");
//    scanf("%d",&no);
//
//    for(;no!=0;)
//    {
//        printf("%d\n",no);
//        no=no/10;
//    }
//}
//--------------------------------------------------------------------------------------------------------------------
/**
Number pattern 53
N = 12345

12345
2345
345
45
5
*/
//
//#include<stdio.h>
//int main()
//{
//    int no,d,tmp,i,j,k,ans=1;
//
//    printf("Enter Any number : ");
//    scanf("%d",&no);
//    tmp=no;
//
//    for(d=0;no!=0;d++,no=no/10);
//    no=tmp;
//
//    for(k=1;k<d;k++)
//    {
//        ans=ans*10;
//
//    }
//    for(i=0;i<d;i++)
//    {
//        printf("%d\n",no);
//        no=no%ans;
//        ans=ans/10;
//    }
//}
//-------------------------------------------------------------------------------------------------------------------------

/**
Number pattern 54
Diamond Number Patterns
________________________________________
1
12
123
1234
12345
1234
123
12
1
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j,k,l;
//
//    for(i=0;i<9;i++)
//    {
//        k=1;
//        for(j=0;j<5;j++)
//        {
//            if(i<5)
//            {
//                if(j<=i)
//                printf("%d",k++);
//            }
//            else
//            {
//                l=i-5;
//                if(j<4-l)
//                {
//                    printf("%d",k++);
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------
/**

Number pattern 55
1
123
12345
1234567
123456789
1234567
12345
123
1
*/
//
//#include<stdio.h>
//int main()
//{
//    int i,j,k,l;
//
//    for(i=1;i<10;i++)
//    {
//        k=1;
//        for(j=1;j<10;j++)
//        {
//            if(i<6)
//            {
//                if(j<i+i)
//                printf("%d",k++);
//            }
//            else
//            {
//                l=i-6;
//                if(j<8-(l+l))
//                {
//                    printf("%d",k++);
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------
/**
Number pattern 56
1
121
12321
1234321
123454321
1234321
12321
121
1
*/
/**
#include<stdio.h>
int main()
{
    int i,j,k,l;

    for(i=1;i<10;i++)
    {
        k=1;
        for(j=1;j<10;j++)
        {
            if(i<6)
            {
                if(j<i+i)
                {
                    if(j<=i)
                    {
                         printf("%d",k++);
                    }
                    else
                    {
                        printf("%d",k-2);
                        k--;
                    }
                }

            }
            else
            {
                l=i-6;
                if(j<8-(l+l))
                {
                    if(j<5-l)
                    {
                        printf("%d",k++);
                    }
                    else
                    {
                        printf("%d",k-2);
                        k--;
                    }

                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------------------------

/**
Number pattern 57

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*

*/


/**
#include<stdio.h>
int main()
{
    int i,j,k,l;

    for(i=0;i<11;i++)
    {
        k=1;
        for(j=0;j<11;j++)
        {
            if(j==0)
            {
                printf("*");
            }
            else
            {
                if(i<6)
                {
                    if(j<=i+i)
                    {
                       if(j<=i)
                       {
                          printf("%d",k++);
                       }
                       else if(j<i+i)
                       {
                          printf("%d",k-2);
                          k--;
                       }
                       else
                       {
                           printf("*");
                       }
                    }
                }
                else
                {
                    l=i-6;
                    if(j<9-(l+l))
                    {
                        if(j<5-l)
                        {
                            printf("%d",k++);
                        }
                        else if(j<8-(l+l))
                        {
                            printf("%d",k-2);
                            k--;
                        }
                        else
                        {
                            printf("*");
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

//-----------------------------------------------------------------------------------------------------------------------------------
/**
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
*/

/**

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<4;i++)
    {
        k=1;
        for(j=0;j<7-i;j++)
        {
            if(j<4)
            {
                if(j<i)
                {
                    printf("  ");
                }
                else
                {
                    printf("%d ",k++);
                }
            }
            else
            {
                printf("%d ",k-2);
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//---------------------------------------------------------------------------------------------------------------------------
/**
1
121
12321
1234321
*/

/**
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<4;i++)
    {
        k=0;
        for(j=0;j<=i+i;j++)
        {
            if(j<=i)
            {
                printf("%d",++k);
            }
            else
            {
                printf("%d",--k);
            }
        }
        printf("\n");
    }
    return 0;
}

*/

//----------------------------------------------------------------------------------------------------------------------------
/**
1234321
  12321
    121
      1
*/

//
//#include<stdio.h>
//int main()
//{
//    int i,j,k;
//
//    for(i=0;i<4;i++)
//    {
//        k=0;
//        for(j=0;j<7;j++)
//        {
//            if(j<i+i)
//            {
//                printf(" ");
//            }
//            else if(j<4+i)
//            {
//                printf("%d",++k);
//            }
//            else
//            {
//                printf("%d",--k);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//-------------------------------------------------------------------------------------------------------------------------------
/**
987654321
98765432
9876543
987654
98765
9876
987
98
9
*/


//#include<stdio.h>
//int main()
//{
//    int i,j;
//
//    for(i=0;i<10;i++)
//    {
//        for(j=9;j>i;j--)
//        {
//            printf("%d",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
/**-----------------------------------------------------------------------------------------------------------------------------------
                                                SERIES
---------------------------------------------------------------------------------------------------------------------------------*/

//- Write a Program to print the Fibonacci series. 1 1 2 3 5 8 13

//
//#include<stdio.h>
//int main()
//{
//    int no,x=0,y=1,z;
//
//    printf(" Enter any number : ");
//    scanf("%d",&no);
//
//    printf("\n Fibonacci series : - %d %d",x,y);
//
//    for(int i=0;i<no;i++)
//    {
//        z=x+y;
//        printf(" %d",z);
//        x=y;
//        y=z;
//    }
//    return 0;
//}
//--------------------------------------------------------------------------------------------------------------------------
//- Write a program to find the sum of series 1+2+3..+N.

//#include<stdio.h>
//int main()
//{
//    int no,x=0;
//
//    printf("Enter any number : ");
//    scanf("%d",&no);
//
//    for(int i=0;i<no;i++)
//    {
//        x=x+1;
//
//        printf("%d ",x);
//    }
//    return 0;
//}
//---------------------------------------------------------------------------------------------------------------------------------------
//- Write a program to find the sum of series 1+3+5+7..+N

//#include<stdio.h>
//int main()
//{
//    int no;
//
//    printf("Enter any number : ");
//    scanf("%d",&no);
//
//    for(int i=1;i<=no;i+=2)
//    {
//        printf("%d ",i);
//    }
//    return 0;
//}
///=========================================================================================================================
//- Write a Program to find the sum of series 1^2+2^2+3^2...+N^2.
//
//#include<stdio.h>
//int main()
//{
//    int no,x=0;
//
//    printf("Enter any number : ");
//    scanf("%d",&no);
//
//    for(int i=1;i<=no;i++)
//    {
//        x=x+(i*i);
//    }
//     printf("\nTotal : %d",x);
//
//    return 0;
//}
///=========================================================================================================================
//- Write a Program to find the sum of series 1^1+2^2+3^3...+N^N

//#include<stdio.h>
//int main()
//{
//    int i,j,no,ans=0,pow;
//
//    printf(" Enter any number : ");
//    scanf("%d",&no);
//
//    i=1;
//    while(i<=no)
//    {
//        j=0;
//        pow=1;
//        while(j<i)
//        {
//           pow=pow*i;
//           j++;
//        }
//        ans=ans+pow;
//        i++;
//    }
//    printf("\n Total : %d",ans);
//}
///=========================================================================================================================
///- Write a Program to find the sum of series 1/1+1/2+1/3..+1/N

//#include<stdio.h>
//int main()
//{
//    float i,no;
//    float ans,total=0.0;
//    printf(" Enter any number : ");
//    scanf("%f",&no);
//
//    i=1;
//    do
//    {
//        ans=0;
//        ans=(1/i);
//        total=total+ans;
//        i++;
//    }while(i<=no);
//   printf("\n Total : %0.2f",total);
//
//   return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------

///- Write a Program to find the sum of series X^1+X^2+X^3...+X^N

//#include<stdio.h>
//int main()
//{
//    int no,x,i,j,ans,total=0;
//
//    printf(" Enter the value of X : ");
//    scanf("%d",&x);
//    printf(" Enter the n^th value : ");
//    scanf("%d",&no);
//
//    i=1;
//    do
//    {
//        ans=1;
//        j=0;
//        do
//        {
//            ans=ans*x;
//            j++;
//        }while(j<i);
//
//        total=total+ans;
//        i++;
//    }while(i<=no);
//
//    printf("Total : %d",total);
//
//    return 0;
//}
///-------------------------------------------------------------------------------------------------------------------------
///- Write a Program to find the sum of series X^1/1+X^2/2...+X^N/N
/**
#include<stdio.h>
int main()
{
    float x,no,i,j,ans,total=0;

    printf("Enter the value of X : ");
    scanf("%f",&x);
    printf("\nEnter the n^th value : ");
    scanf("%f",&no);


    i=1;
    do
    {
        ans=1;
        j=0;
        do
        {
            ans=ans*x;
            j++;
        }while(j<i);

        ans=ans/i;

        total=total+ans;

        i++;
    }while(i<=no);
    printf("\n Total : %.2f",total);

    return 0;

}

*/
///=================================================================================================================
///- Write a Program to find the sum of series X^1+X^2+X^3...+X^N
/**
#include<stdio.h>
int main()
{
    int i,j,no,x,ans,total=0;

    printf(" Enter the value of X : ");
    scanf("%d",&x);
    printf(" Enter the N^th value : ");
    scanf("%d",&no);


    i=1;
    do
    {
        ans=1;
        j=0;
        do
        {
            ans=ans*x;
            j++;
        }while(j<i);

        total=total+ans;
        i++;
    }while(i<=no);
   printf("\n Total : %d",total);

   return 0;
}
*/
///=================================================================================================================
///-Write a Program to find the sum of series X^1/1!+X^2/2!+X^3/3!...+X^N/N!
/**
#include<stdio.h>
int main()
{
    float no,x,i,j,k,ans,fact,total=0.0;

    printf(" Enter the value of X : ");
    scanf("%f",&x);
    printf(" Enter the N^th value : ");
    scanf("%f",&no);

    i=1;
    do
    {
        ans=1;
        j=0;
        do
        {
            ans=ans*x;
            j++;
        }while(j<i);
        k=i;
        fact=1;
        do
        {
           fact=fact*k;
           k--;
        }while(k>1);

       // printf("\n Ans = %f",ans);

        ans=ans/fact;

      //  printf("\n fact = %f",fact);
          total=total+ans;
        i++;
    }while(i<=no);

    printf("\n Total = %.2f",total);


    return 0;
}
*/
///==============================================================================================================================
///9- Write a program to find the sum of series (1)+(1+2)+(1+2+3)+...till N)
//
//#include<stdio.h>
//int main()
//{
//    int no,i,j,ans,total=0;
//
//    printf("\n Enter N^th value :");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        ans=0;
//        for(j=1;j<=i;j++)
//        {
//            ans=ans+j;
//        }
//        total=total+ans;
//    }
//    printf("\n Total = %d",total);
//
//    return 0;
//}
///==============================================================================================================================
///10- Write a program to find the sum of series (1+(1*2)+(1*2*3)+...till N)
//
//#include<stdio.h>
//int main()
//{
//    int no,i,j,ans,total=0;
//
//    printf("\n Enter N^th value :");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        ans=1;
//        for(j=1;j<=i;j++)
//        {
//            ans=ans*j;
//        }
//        total=total+ans;
//    }
//    printf("\n Total = %d",total);
//
//    return 0;
//}
///==============================================================================================================================
///11- Write a Program to find the sum of series 1!+2!+3!...+n!
//
//#include<stdio.h>
//int main()
//{
//    int no,i,j,fact,tot=0;
//
//    printf("Enter any number : ");
//    scanf("%d",&no);
//
//    i=1;
//    do
//    {
//
//        fact=1;
//        j=i;
//        do
//        {
//            fact=fact*j;
//            j--;
//        }while(j>1);
//
//        tot=tot+fact;
//        i++;
//    }while(i<=no);
//    printf("\n Total : %d",tot);
//}
///==============================================================================================================================
///12- Write a program to find the sum of series 1!/1+2!/2+3!/3...+n!/n
/**
#include<stdio.h>
int main()
{
    int no,i,j,fact,tot=0;

    printf("Enter last value : ");
    scanf("%d",&no);

    i=1;
    do
    {
        fact=1;
        j=i;
        do
        {
            fact=fact*j;
            j--;
        }while(j>1);
        fact=fact/i;

        tot=tot+fact;
        i++;
    }while(i<=no);
    printf("\n Total : %d",tot);

    return 0;
}
*/

///==============================================================================================================================
///13- Write a program to find the sum of series 1^1/1+2^2/2+3^3/3...+n^n/n

//
//#include<stdio.h>
//int main()
//{
//    float no,i,j,ans,tot=0;
//
//    printf("Enter last numberr : ");
//    scanf("%f",&no);
//
//    i=1;
//    do
//    {
//        ans=1;
//        j=0;
//        do
//        {
//            ans=ans*i;
//            j++;
//        }while(j<i);
//
//        ans=ans/i;
//
//        tot=tot+ans;
//        i++;
//
//    }while(i<=no);
//
//    printf("\n Total :- %.2f",tot);
//
//    return 0;
//}
///==============================================================================================================================
///14- Write a program to find the sum of series 1^1/1!+2^2/2!+3^3/3!...+n^n/n!
//
//#include<stdio.h>
//int main()
//{
//    float no,i,j,ans,k,fact,tot=0;
//
//    printf("Enter last numberr : ");
//    scanf("%f",&no);
//
//    i=1;
//    do
//    {
//        ans=1;
//        j=0;
//        do
//        {
//            ans=ans*i;
//            j++;
//        }while(j<i);
//
//        fact=1;
//        k=i;
//        do
//        {
//            fact=fact*k;
//            k--;
//        }while(k>1);
//
//        ans=ans/fact;
//
//        tot=tot+ans;
//        i++;
//
//    }while(i<=no);
//
//    printf("\n Total :- %.2f",tot);
//
//    return 0;
//}
///==============================================================================================================================
///15- Write a program to find the sum of series 1/2-2/3+3/4-4/5+5/6...+N/N+1

//#include<stdio.h>
//int main()
//{
//    float no,i,ans,tot=0.0,flg=0;
//
//    printf("Enter last Number : ");
//    scanf("%f",&no);
//
//    i=1;
//    do
//    {
//        ans=0;
//        ans=i/(i+1);
//
//        if(flg==0)
//        {
//            tot=tot+ans;
//            flg=1;
//        }
//        else
//        {
//            tot=tot-ans;
//            flg=0;
//        }
//
//        i++;
//    }while(i<=no);
//
//    printf("\n Total : %.2f ",tot);
//
//    return 0;
//}
///==============================================================================================================================
///17- Write a Program to find sum of series 5^2+10^2+15^2+.....N^2
//
//#include<stdio.h>
//int main()
//{
//    int i,j,no,ans,tot=0;
//
//    printf("\n Enter any Number : ");
//    scanf("%d",&no);
//
//    i=5;
//    do
//    {
//        ans=1;
//        j=0;
//        do
//        {
//            ans=ans*i;
//            j++;
//        }while(j<2);
//
//        tot=tot+ans;
//        i+=5;
//    }while(i<=no);
//    printf("\n Total = %d",tot);
//    return 0;
//}
//
///=========================================================================================================
///18- Write a program to find the sum of series 1+(1+3)+(1+3+5)+....+n
/**
#include<stdio.h>
int main()
{
    int no,i,j,k,ans,tot=0;

    printf("enter any Number : ");
    scanf("%d",&no);

    i=1;
    do
    {
        ans=0;
        j=1;
        k=0;
        do
        {
            ans=ans+j;
            j+=2;
            k++;
        }while(k<i);

        tot=tot+ans;
        i++;
    }while(i<=no);

    printf("\n total = %d",tot);
    return 0;
}
*/
///=========================================================================================================================
///19- Write a program to find the sum of series 1+4-9+16-25+.....+N.
/**
#include<stdio.h>
int main()
{
    int i,j,no,ans,tot=1,flg=0;

    printf(" Enter any number : ");
    scanf("%d",&no);
    i=2;
    do
    {
        ans=0;

        ans=i*i;

        if(flg==0)
        {
            tot=tot+ans;
            flg=1;
        }
        else
        {
            tot=tot-ans;
            flg=0;
        }
        i++;
    }while(i<=no);

    printf("Total = %d",tot);
    return 0;
}

*/
///=========================================================================================================================
///20- Write a program to find the sum of series 1/(1+1)+1/(2+1)+1/(3+1)+.....1/(N+1)
///===================================================================================================================================
//
//#include<stdio.h>
//int main()
//{
//    int no,i;
//    float ans,tot=0;
//
//    printf("\n Enter last Number : ");
//    scanf("%d",&no);
//
//    i=1;
//    do
//    {
//        ans=0;
//        ans= (float)1/(i+1);
//
//        tot=tot+ans;
//        i++;
//        }while(i<=no);
//
//    printf("\n Total = %.2f",tot);
//
//    return 0;
//
//}
///====================================================================================================================================
///21- Write a Program to find the sum of series 1+4+9+16+25+.....+N
//
///#include<stdio.h>
///int main()
///{
//    int i,j,no,ans;
//
//    printf("Enter last no : ");
//    scanf("%d",&no);
//
//    printf("\n list : ");
//    for(i=1;i<=no;i++)
//    {
//        j=0;
//        ans=1;
//        do
//        {
//            ans=ans*i;
//            j++;
//        }while(j<2);
//        printf("%5d",ans);
//
//    }
//    return 0;
//}
///================================================================================================================================
///22- Write a program to find the sum of series 1/2!+2/3!+3/5!+4/6!+.....N/(N+1)!.
//
//#include<stdio.h>
//int main()
//{
//    float i,j,ans,no;
//
//    printf("\nEnter the Last number : ");
//    scanf("%f",&no);
//
//    printf("\n List : ");
//    i=1;
//    do
//    {
//        j=i+1;
//        ans=1;
//        do
//        {
//            ans=ans*j;
//            j--;
//        }while(j>1);
//        ans=i/ans;
//        printf("%f\t",ans);
//        i++;
//    }while(i<=no);
//
//    return 0;
//}
///============================================================================================================
///23- Write a Program to Find the sum of series 1/1!+2/2!+3/3!.....+N/N!.

//
//#include<stdio.h>
//int main()
//{
//    float i,j,ans,no,tot=0;
//
//    printf("\nEnter the Last number : ");
//    scanf("%f",&no);
//
//    printf("\n List : ");
//    i=1;
//    do
//    {
//        j=i;
//        ans=1;
//        do
//        {
//            ans=ans*j;
//            j--;
//        }while(j>1);
//        ans=i/ans;
//        printf("%.2f\t",ans);
//        tot=tot+ans;
//        i++;
//    }while(i<=no);
//    printf("\n Total : %.2f",tot);
//
//    return 0;
//}
///================================================================================================================================
///24- Write a Program to Find the sum of series 1-2+3-4+5-6...+N.
//
//int main()
//{
//    int i,sum=0,no;
//
//    printf("\n Enter last Number : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i+=2)
//    {
//        sum=sum+(i-(i+1));
//    }
//    printf("\n Answer : %d",sum);
//    return 0;
//}
//
///================================================================================================================================
///25-Write a Program to Find the sum of series 1+11+111+1111.....+N.
//
//int main()
//{
//    int i,sum=0,cnt,a=0;
//
//    printf("\n Enter the count (1+11+111+1111.....+N) : ");
//    scanf("%d",&cnt);
//
//    for(i=0;i<cnt;i++)
//    {
//
//        sum=sum+(a=(a*10)+1);
//    }
//    printf("\n Answer : %d",sum);
//    return 0;
//}
///================================================================================================================================
///26- Write a Program to Find the sum of series  1/2+2/3+3/4+4/5.....+(N-1)/N.
///27- Write a Program to Find the sum of series 2+4+6+8.....+N.

///28- Write a Program to Find the sum of series 9+99+999+9999.....+N.
//
//int main()
//{
//    int i,sum=0,cnt,a=0;
//
//    printf("\n Enter the count (9+99+999+9999.....+N) : ");
//    scanf("%d",&cnt);
//
//    for(i=0;i<cnt;i++)
//    {
//
//        sum=sum+(a=(a*10)+9);
//    }
//    printf("\n Answer : %d",sum);
//    return 0;
//}
///================================================================================================================================
///29- Write a Program to Find the sum of series 1/1!+1/2!+1/3!+1/4!.....+1/N!.
//
//int main()
//{
//    int i,k,no;
//    float sum=0,fact;
//
//    printf("\n enter the last count : ");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        fact=1;
//        k=i;
//        do
//        {
//            fact=fact*k;
//            k--;
//        }while(k>1);
//
//        sum=sum + 1/fact;
//
//    }
//    printf("\n Answer : %.2f",sum);
//}
///================================================================================================================================
///30- Write a Program to Find the sum of series 3+33+333+3333.....+N.
///31- Write a Program to Find the sum of series 3+7+13+21+31.....+N.

//int main()
//{
//    int i,cnt,sum=0;
//
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);
//
//    printf("\n list : ");
//    for(i=2;i<cnt+2;i++)
//    {
//        sum=sum+i*i-(i-1);
//        printf("%5d",i*i-(i-1));
//    }
//    printf("\n total : %d",sum);
//    return 0;
//}
///================================================================================================================================
///32- Write a Program to Find the sum of series 1³+2³+3³+4³.....+N³.
//
//#include<math.h>
//int main()
//{
//    int i,cnt,sum=0;
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);
//
//    for(i=1;i<=cnt;i++)
//    {
//        printf("\n %d",i*i*i);
//        sum=sum+(i*i*i);
//    }
//    printf("\n total : %d",sum);
//    return 0;
//}
///================================================================================================================================
///33- Write a program Program to print Arithmetic series 1 4 7 10...
//
//int main()
//{
//    int i,j,cnt,sum=0;
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);
//    printf("\n List : ");
//    for(i=0,j=1;i<cnt;j+=3,i++)
//    {
//        printf("%d ",j);
//        sum=sum+j;
//    }
//    printf("\n total : %d",sum);
//    return 0;
//}
///================================================================================================================================
///34- Write a Program to Print Square Number series 1 4 9 16...
//
//int main()
//{
//    int i,cnt;
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);
//    printf("\n List : ");
//    for(i=1;i<=cnt;i++)
//    {
//        printf("%d ",i*i);
//    }
//    return 0;
//}
///================================================================================================================================
///35- Write a Program to print Cube Number series 1 8 27 64...
//int main()
//{
//    int i,cnt;
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);
//    printf("\n List : ");
//    for(i=1;i<=cnt;i++)
//    {
//        printf("%d ",i*i*i);
//    }
//    return 0;
//}
///================================================================================================================================
///36- Write a Program to print Triangular Number series 1 3 6 10 15 ...
//
//int main()
//{
//    int i,cnt,sum=0;
//
//    printf("\n Enter the cnt : ");
//    scanf("%d",&cnt);
//    printf("\n List : ");
//    for(i=1;i<=cnt;i++)
//    {
//        sum=sum+i;
//        printf("\t %d",sum);
//    }
//    return 0;
//}
///================================================================================================================================
///37- Write a Program to print the Fibonacci series. 1 1 2 3 5 8 13
//
//int main()
//{
//    int x=1,y=1,z=0,cnt;
//
//    printf("\n Enter the count : ");
//    scanf("%d",&cnt);
//
//    printf("\n fiboncci series : ");
//    printf("%d%5d",x,y);
//    for(int i=0;i<cnt;i++)
//    {
//        z=x+y;
//        x=y;
//        y=z;
//        printf("%5d",z);
//    }
//    return 0;
//}

///================================================================================================================================
///38- Write a program to print series -1 4 -7 10 -13 16 -19...n

int main()
{

}


































///================================================================================================================================
///===========================================Array=====================================================================================
///================================================================================================================================
///Wap to insert element at end in given array.

/**
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,opt,cnt;

    printf("\n Enter the cnt of element : ");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\n Insufficient memory !!!!");
        return 0;
    }
    printf("\n Enter the %d element : ",cnt);

    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\n Display All Elements : ");
        for(i=0;i<cnt;i++)
        {
            printf("[%d] ",x[i]);
        }
        printf("\n******enter option*******\n1.for insert end element \t2.stop : ");
        scanf("%d",&opt);
        if(opt==1)
        {
            if(cnt==10)
            {
                printf("\n Insufficient Memory !!!!");
                break;
            }
            else
            {
                printf("\n Enter any Number to insert at end : ");
                scanf("%d",&x[cnt]);
                cnt++;
            }
        }
        else
        {
            if(opt==2)
            {
                printf("\n***********Thank You Visit Again**********");
                break;
            }
            else
            {
                printf("\n try again !!!");
            }
        }
    }
    return 0;
}

*/
///===Insert At start=============================================================================================================================
/**
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt;

    printf("\n Enter the element cnt : ");
    scanf("%d",&cnt);
    if(cnt<SIZE)
    {
       printf("\n Enter the %d Elements  : ",cnt);
       for(i=0;i<cnt;i++)
       {
           scanf("%d",&x[i]);
       }

       while(1)
       {
          printf("\n Select Your Option ");
          printf("\n 1.Input \t 2. Display \t 3.Stop ");
          scanf("%d",&opt);

          switch(opt)
          {
              case 1:
                  if(cnt<SIZE)
                  {
                     for(i=cnt;i>=1;i--)
                     {
                         x[i]=x[i-1];
                     }
                     printf("\n Enter any Element ");
                     scanf("%d",&x[0]);
                     cnt++;
                  }
                  else
                  {
                      printf("\n Array Full !!!!");
                      break;
                  }
                  break;

              case 2:
                    printf("\n Display All Elements : ");
                    for(i=0;i<cnt;i++)
                    {

                        printf("\t %d",x[i]);
                    }
                    break;
              case 3:
                    exit(0);

              default:
                    printf("\n Incorrect Option ... Please Try Again ");
          }

       }
    }
    else
    {
        printf("\n Insufficient Memory !!!!!");
        return 0;
    }
    return 0;
}

*/
///-------Insert At Pos--------------------------------------------------------
/**
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt,pos;

    printf("\n Enter the element cnt : ");
    scanf("%d",&cnt);
    if(cnt<SIZE)
    {
       printf("\n Enter the %d Elements  : ",cnt);
       for(i=0;i<cnt;i++)
       {
           scanf("%d",&x[i]);
       }

       while(1)
       {
          printf("\n Select Your Option ");
          printf("\n 1.Input \t 2. Display \t 3.Stop ");
          scanf("%d",&opt);

          switch(opt)
          {
              case 1:
                  printf("\n Enter the pos ");
                  scanf("%d",&pos);

                  if(cnt<SIZE)
                  {
                     for(i=cnt;i>=pos+1;i--)
                     {
                         x[i]=x[i-1];
                     }
                     printf("\n Enter any Element ");
                     scanf("%d",&x[pos]);
                     cnt++;
                  }
                  else
                  {
                      printf("\n Array Full !!!!");
                      break;
                  }
                  break;

              case 2:
                    printf("\n Display All Elements : ");
                    printf("\n Current Array Element Count is %d ",cnt);
                    for(i=0;i<cnt;i++)
                    {
                        printf("\t %d",x[i]);
                    }
                    break;
              case 3:
                    exit(0);

              default:
                    printf("\n Incorrect Option ... Please Try Again ");
          }

       }
    }
    else
    {
        printf("\n Insufficient Memory !!!!!");
        return 0;
    }
    return 0;
}

*/
///================================================================================================================================
/// wap to delete element in array

/**
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,pos,tmp,opt,cnt;

    printf("\n Enter Element cnt : ");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient Memory : ");
    }
    else
    {
        printf("\n enter any %d element : ",cnt);
        for(i=0;i<cnt;i++)
        {
            scanf("%d",&x[i]);
        }

        while(1)
        {
            printf("\n************MENU*************\n1.Display\t2.Deleat At First\t3.Deleat At Position\t4.Deleat at Last\t5.Stop\nEnter Your Option : ");
            scanf("%d",&opt);
            switch(opt)
            {
                case 1:
                    if(cnt<0)
                    {
                        printf("\n Array is Empty!!!!");
                    }
                    else
                    {
                        printf("\n Array List : ");
                        for(i=0;i<cnt;i++)
                        {
                            printf("[%d] ",x[i]);
                        }
                    }
                    break;
                case 2:
                    tmp=x[0];
                    cnt--;
                    for(i=0;i<cnt;i++)///or for(i=0;i<cnt-1;i++) and that time cnt-- take after for loop.
                    {
                        x[i]=x[i+1];
                    }

                    break;

                case 3:
                   printf("\n Enter the Position in between 0 to %d : ",cnt-1);
                   scanf("%d",&pos);

                   if(pos<0 && pos>=cnt)
                   {
                        printf("\n Incorrect position Try again : ");
                   }
                   else
                   {
                       tmp=x[pos];
                        cnt--;
                        for(i=pos;i<cnt;i++)
                        {
                            x[i]=x[i+1];
                        }
                   }
                   break;
                case 4:
                    tmp=x[cnt-1];
                    cnt--;
                    break;
                case 5:
                    printf("\n*********Thank you visit again***********");
                    exit(0);
                default:
                    printf("\n Incorrect option Please try Again");
            }
        }
    }
    return 0;
}

*/
///=================================================1D array list===============================================================================
///1) Write a program to print the marks obtained by a student in five tests.
//
//#include<stdio.h>
//int main()
//{
//    int x[5],i;
//    printf("\n Enter 5 Subject Marks : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Subject marks are :");
//    for(i=0;i<5;i++)
//    {
//       printf("\t%d",x[i]);
//    }
//    return 0;
//}
///=================================================1D array list===============================================================================
///2) Write a program to print the average marks obtained by a student in five tests.
//
//#include<stdio.h>
//int main()
//{
//    int x[5],add=0,i,avg;
//
//    printf("\n Enter 5 Subject Marks : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//        add=add+x[i];
//    }
//    printf("\n 5 Subject marks are :");
//    for(i=0;i<5;i++)
//    {
//       printf("\t%d",x[i]);
//    }
//    avg=(add/5);
//    printf("\n Avarage of 5 Subject is %d%%",avg);
//
//    return 0;
//}
///=================================================1D array list===============================================================================
///3)- Write a program to find the sum of negative and positive integers.

//#include<stdio.h>
//#define SIZE 100
//int main()
//{
//   int x[SIZE],i,psum=0,nsum=0;
//
//    printf("\n Enter any 10 negative and positive integers  : ");
//  for(i=0;i<10;i++)
//  {
//      scanf("%d",&x[i]);
//      if(x[i]>0)
//      {
//          psum=psum+x[i];
//      }
//      else
//      {
//          nsum=nsum+x[i];
//      }
//  }
//  printf("\n Number list : ");
//  for(i=0;i<10;i++)
//  {
//      printf("%d\t",x[i]);
//  }
//  printf("\n Sum of Negative Intiger is %d",nsum);
//  printf("\n sum of positive intiger is %d",psum);
//
//  return 0;
//}
///=================================================1D array list===============================================================================
///4)- Write a program to find the sum of N numbers in an array

//#include<stdio.h>
//#define SIZE 1000
//int main()
//{
//    int x[SIZE],add=0,i,no;
//
//    printf("\n Enter the last number under 1000 : ");
//    scanf("%d",&no);
//
//    printf("\n Enter %d number",no);
//    for(i=0;i<no;i++)
//    {
//        scanf("%d",&x[i]);
//        add=add+x[i];
//    }
//    printf("\n 5 Subject marks are :");
//    for(i=0;i<no;i++)
//    {
//       printf("\t%d",x[i]);
//    }
//    printf("\n sum of %d number is : %d",no,add);
//
//    return 0;
//}
///=================================================1D array list===============================================================================
///5)- Write a program to find the smallest element in the array


























///=================================================2D array list===============================================================================
/**C Program to Read and Print a RxC Matrix, R and C must be input by the User
This program will read a two dimensional array (Matrix), number of rows (R) and number of columns (C) will be read through the User.
Input : Enter number of Rows :3
        Enter number of Cols :3
Output:Matrix is :
1	1	1
2	2	2
3	3	3
*/
/**
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],i,j,r,c;

    printf("\n Enter the rows and column : ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            x[i][j]=i+1;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


///================================================================================================================================
/**
C Program to Read a Matrix and find Sum and Product of all elements
This program will read a matrix and prints sum and product of all elements of the two dimensional array.
Input : Enter number of Rows :3
        Enter number of Cols :3
Output:Matrix is :
1	1	1
2	2	2
3	3	3
Sum :18
Product: 216
*/

/**
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],i,j,r,c,sum=0,prd=1;

    printf("\n Enter row and column : ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            x[i][j]=i+1;
            sum=sum+x[i][j];
            prd=prd*x[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }

    printf("\n Sum is %d",sum);
    printf("\n product is %d",prd);

    return 0;
}
*/
///================================================================================================================================
/**C Program to find Sum of all elements of each row of a matrix
This C program will read a Matrix (two dimensional arrays) and print the sum of all elements of each row.
*/

/**
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],i,j,r,c,sum;

    printf("\n Enter row and column : ");
    scanf("%d%d",&r,&c);

    i=0;
    do
    {
        printf("\n Enter %d row",i+1);
        j=0;
        do
        {
           scanf("%d",&x[i][j]);
           j++;
        }while(j<c);
        i++;
    }while(i<r);

    i=0;
    do
    {
        sum=0;

        j=0;
        do
        {
           printf("%3d",x[i][j]);
           sum=sum+x[i][j];
           j++;
        }while(j<c);
        printf(" = %d\n",sum);
        i++;
    }while(i<r);
    return 0;

}
*/


///===========================================================================================================================================
///C Program to Transpose a Matrix.This C program will read a matrix and print its transpose matrix.

/**
#include<stdio.h>
#define ROW 100
#define COl 100
int main()
{
    int x[ROW][COl],i,j,rc,k=-1;

    printf("\n Enter same row and coloum : ");
    scanf("%d",&rc);
    printf("\n ENter a array of x : ");
        for(i=0;i<rc;i++)
        {
            printf("\n Enter %d row",i+1);
            for(j=0;j<rc;j++)
            {
                scanf("%d",&x[i][j]);
            }
        }
    printf("\n x-array \t Transpose array : \n");

    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\t");
        k++;
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[j][k]);
        }
        printf("\n");
    }
    return 0;
}
*/
///===================================================================================================================================
/**C Program to Read a Matrix and Print Diagonals
This C program will read a matrix of MxN dimensions and prints only diagonal’s elements of the matrix.
Input:
1	1	1
2	2	2
3	3	3

Output:
1
	2
		3
*/

/**
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],i,j,rc;

    printf("\n Enter same row and coloum : ");
    scanf("%d",&rc);

    printf("\n Enter the x array : \n");
    for(i=0;i<rc;i++)
    {
        printf("\n Enter %d row : \n",i+1);
        for(j=0;j<rc;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
     printf("\n x-array \t digonal array : \n");

    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\t");
        for(j=0;j<rc;j++)
        {
            if(i==j)
            {
                printf("%3d ",x[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///=================================================================================
///C Program to find sum and subtraction of two matrices
///This C program will read two matrices and find their sum (addition) and subtraction, in addition matrix addition of both matrixes’
///elements will be assigned and in the subtraction matrix, subtraction of both matrixes’ elements will be assigned.

/**
#include<stdio.h>
int main()
{
    int x[50][50],y[50][50],i,j;

    printf("\n Enter 4x4 X aray : ");
    for(i=0;i<4;i++)
    {
        printf("\n Enter %d row of x array",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter 4x4 y aray : \n");
    for(i=0;i<4;i++)
    {
        printf("\n Enter %d row of y array",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    printf("\n  x array \t  y array \t substraction \t addition \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%3d",y[i][j]);
        }
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%3d",x[i][j]-y[i][j]);
        }
        printf("\t");
        for(j=0;j<4;j++)
        {
            printf("%3d",x[i][j]+y[i][j]);
        }
        printf("\n");
    }
    return 0;

}
*/
///=============================================================================================================================================
/**C Program to print lower diagonal of a matrix
This C program will read a square matrix and print its lower diagonal.
Output:
Lower Triangular Matrix
2 0 0
4 5 0
6 7 8
*/
//---------

/**
#include<stdio.h>
int main()
{
    int x[50][50],i,j,k=2;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<=i)
            {
                x[i][j]=k++;
            }
            else
            {
                x[i][j]=0;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///--------anthoer----one-----------
/**
#include<stdio.h>
int main()
{
    int x[50][50],i,j,rc,k=2;

    printf("\n Enter same row and coloum : ");
    scanf("%d",&rc);
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            if(j<=i)
            {
                x[i][j]=k++;
            }
            else
            {
                x[i][j]=0;
            }
        }
    }
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%4d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================================================================
/**
C program to check a given matrix is an identity matrix or not
Given a matrix, we have to check whether the matrix is an identity matrix or not using C program.
Input :
Matrix 1
1	0	0
0	1	0 ==== output: 	 matrix is an identity matrix
0	0	1

Matrix 1
1	0	0
0	1	1 ==== 	output:  matrix is not identity matrix
0	0	1
*/
/**

#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],i,j,rc,flg;

    printf("\n Enter same row and coloum : ");
    scanf("%d",&rc);

    printf("\n Enter the x array : \n");
    for(i=0;i<rc;i++)
    {
        printf("\n Enter %d row : \n",i+1);
        for(j=0;j<rc;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
     for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rc;i++)
    {
        flg=0;
        for(j=0;j<rc;j++)
        {
            if(i==j && x[i][j]==1 || (x[i][j]==0))
            {
                continue;
            }
            else if(i==j && x[i][j]!=1)
            {
                flg=1;
                break;
            }
            else
            {
                flg=1;
                break;
            }
        }
        if(flg==1)
        {
            break;
        }
    }
     if(flg==0)
        {
            printf("\nmatrix is an identity matrix ");
        }
        else
        {
            printf("\nmatrix is an not identity matrix ");
        }
    return 0;
}

*/
///================================================================================================================================
/**
C program to check two matrices are identical or not
Given two matrices, we have to check whether they are identical or not using C program

Input
Matrix 1
1	1	1
2	2	2
3	3	3

Matrix 2
1	1	1
2	2	2
3	3	3
Output: both are identical
*/

/**
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],y[ROW][COL],r,c,i,j,flg=0;

    printf("\n Enter Row and coloum : ");
    scanf("%d %d",&r,&c);

    printf("\n Enter %dx%d X 2D array : \n",r,c);
    for(i=0;i<r;i++)
    {
        printf("\n Enter %d row : ",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter %dx%d Y 2D array : \n",r,c);
    for(i=0;i<r;i++)
    {
        printf("\n Enter %d row : ",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    printf("\n x matarix  \t  y matarix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\t");
        for(j=0;j<c;j++)
        {
            printf("%3d",y[i][j]);
        }
        printf("\n");
    }
    i=0;
    do
    {
        j=0;
        do
        {
            if(x[i][j]!=y[i][j])
            {
                flg=1;
            }
            j++;
        }while(j<c);
        i++;
    }while(i<r);
    if(flg==1)
    {
        printf("\n Materix is not identical matarix");
    }
    else
    {
        printf("\n Materix is identical matarix");
    }
    return 0;
}
*/
///========================================================================================================================================
/**
C program to check a given matrix is a sparse matrix or not
Given a matrix, and we have to check whether the matrix is a sparse matrix or not using C program.
Matrix 1:
Enter the elements of the matrix:
4 5 6
7 0 0
0 0 0
 Output : Matrix is a Sparse Matrix
*/

/**
#include<stdio.h>
#define ROW 100
#define COL 100
int main()
{
    int x[ROW][COL],i,j,r,c,cnt=0;

    printf("\n Enter row and coloum : ");
    scanf("%d%d",&r,&c);

    printf("\n ENter the %dx%d Array : ",r,c);
    for(i=0;i<r;i++)
    {
        printf("\n enter %d row : ",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
            if(x[i][j]==0)
            {
                cnt++;
            }
        }
    }
    printf("\n x array is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    if(r*c/2<cnt)
    {
        printf("\n Matrix is a Sparse Matrix");
    }
    else
    {
        printf("\n Matrix is not a Sparse Matrix");
    }
    return 0;
}
*/
///===========================================================================================================================================
/**

C program to interchange the rows in the matrix
Given a matrix, and we have to interchange the specified rows in the matrix using C program.
*/
/**

#include<stdio.h>
int main()
{
    int x[50][50],i,j,r=0,c=0;

    printf("\n Enter row and coloum : ");
    scanf("%d%d",&r,&c);

    printf("\n ENter the %dx%d Array : ",r,c);
    for(i=0;i<r;i++)
    {
        printf(" Enter the %d row",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n ex-change Array : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0)
            {
                printf("%3d",x[r-1][j]);
            }
            else
            {
                printf("%3d",x[i-1][j]);
            }
        }
         printf("\n");
    }

    return 0;
}
*/
///---------anthoer-----one---------------------
/**
#include<stdio.h>
int main()
{
    int x[500][500],i,j,r,c,tmp;

    printf("\n Enter row and coloum : \n");
    scanf("%d%d",&r,&c);

    printf("\n ENter the %dx%d Array : ",r,c);
    for(i=0;i<r;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c;j++)
        {
            tmp=x[(1+i)][j];
            x[(1+i)][j]=x[i][j];
            x[i][j]=tmp;
        }
    }
    printf("\n ex-change Array : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
///======================================================================================================================================
///C program to interchange the columns in the matrixGiven a matrix, and we have to interchange the specified columns using C program.

/**
#include<stdio.h>
int main()
{
    int x[500][500],i,j,r,c,tmp;

    printf("\n Enter row and coloum : \n");
    scanf("%d%d",&r,&c);

    printf("\n ENter the %dx%d Array : ",r,c);
    for(i=0;i<r;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c-1;j++)
        {
            tmp=x[i][j];
            x[i][j]=x[i][j+1];
            x[i][j+1]=tmp;
        }
    }
    printf("\n ex-change Array : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
///======================================================================================================================================
///C program to arrange row elements in ascending order.Given an array, we have to arrange the row elements in ascending order using C program.
/**
#include<stdio.h>
int main()
{
    int x[500][500],i,j,k,c,r,tmp;

     printf("\n Enter row and coloum : \n");
    scanf("%d%d",&r,&c);

    printf("\n ENter the %dx%d Array : ",r,c);
    for(i=0;i<r;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    i=0;
    while(i<r)
    {
        k=1;
        while(k<c)
        {
            j=0;
            while(j<c-k)
            {
                if(x[i][j]>x[i][j+1])
                {
                    tmp=x[i][j];
                    x[i][j]=x[i][j+1];
                    x[i][j+1]=tmp;
                }
                j++;
            }
            k++;
        }
        i++;
    }
    printf("\n Ascending row matarix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
///===============================================================================================================================
///C program to find the frequency of even numbers in matrix. Given a matrix we have to find the frequency of even numbers in matrix using C program.
/**
#include<stdio.h>
int main()
{
int x[500][500],i,j,r,c,cnt;

    printf("\n Enter row and coloum : \n");
    scanf("%d%d",&r,&c);

    printf("\n ENter the %dx%d Array : ",r,c);
    for(i=0;i<r;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<c;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }

    i=0;
    do
    {
        j=0;
        do
        {
            if(x[i][j]%2==0)
            {
                cnt++;
            }
            j++;
        }while(j<c);
        i++;
    }while(i<r);
    printf("\n Frequency of even number is %d ",cnt);
    return 0;

}
*/
///===========================================================================================================================================
/**
C program to find the sum of main and opposite diagonal elements of a matrix
Given a matrix, we have to find the sum of main and opposite diagonal elements of a matrix using C program.
Input :
Matrix:
 9 8 7
 5 4 6
 1 2 3
Output :
Sum of Main diagonal elements: 16
Sum of Opposite diagonal elements: 12
*/

/**
#include<stdio.h>
int main()
{
    int x[500][500],i,j,rc,maindig=0,oppdig=0;

    printf("\n Enter same row coloum : \n");
    scanf("%d",&rc);

    printf("\n ENter the %d Array : ",rc);
    for(i=0;i<rc;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<rc;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n");
     for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            if(i==j)
            {
                maindig=maindig+x[i][j];
            }
            else if(j==rc-1-i)
            {
                oppdig=oppdig+x[i][j];
            }
        }
    }
    printf("\n sum of main digonal is %d",maindig);
    printf("\n sum of opposite digonal is %d",maindig);
    return 0;
}
*/
///==================================================================================================================================
/**
C program to print the upper triangular matrix
Given a 3x3 matrix, we have to print the upper triangular matrix using C program.
Input:

Matrix:
9 8 7
5 4 6
1 2 3

Output:

Upper triangular matrix is:
9 8 7
  4 6
    3
*/

/**
#include<stdio.h>
int main()
{
     int x[100][100],i,j,rc;

    printf("\n Enter row and coloum : \n");
    scanf("%d",&rc);

    printf("\n ENter the %dx%d Array : ",rc,rc);
    for(i=0;i<rc;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<rc;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n \n");
     for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            if(j<i)
            {
                printf("   ");
            }
            else
            {
                printf("%3d",x[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=========================================================================================================================
/**
C program to find the trace of matrix
Trace of a n x n square matrix is sum of diagonal elements. Given a square matrix, we have to find the trace of matrix.
Input:
Matrix:
 9 8 7
 5 4 6
 1 2 3
Output:
Trace of matrix is: 16
*/

/**
#include<stdio.h>
int main()
{
    int x[100][100],i,j,rc,sum=0,mid;

     printf("\n Enter odd number for same row coloum : \n");
    scanf("%d",&rc);

    printf("\n ENter the %dx%d Array : \n",rc,rc);
    for(i=0;i<rc;i++)
    {
        printf(" Enter the %d row : \n",i+1);
        for(j=0;j<rc;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n original Array : \n \n");
     for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    mid=rc/2;
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            if(i==j)
            {
                sum=sum+x[i][j];
            }
        }
    }
    for(i=1;i<=sum/2;i++)
    {
        if(i*i==sum)
        {
            break;
        }
    }
    if(i==x[mid][mid])
    {
        printf("\n it is trace matarix  ");
    }
    else
    {
        printf("\n it is not trace matarix  ");
    }
    return 0;
}
*/
///=====================================================================================================================
///****************************************************String list*********************************************
///=====================================================================================================================
///C Program to compare two strings

/**
#include<stdio.h>
int main()
{
    char str[30],ch[30];
    int i,j,flg=0;

    printf("\n Enter first string : ");
    gets(str);
    printf("\n Enter second String : ");
    gets(ch);

    for(i=0;str[i]!='\0';i++);
    for(j=0;str[j]!='\0';j++);
    printf("\n first string is %s",str);
    printf("\n second string is %s",ch);

    if(i==j)
    {
        for(i=0;str[i]!=0;i++)
        {
            if(str[i]!=ch[i])
            {
                flg=1;
                break;
            }
        }
    }
    else
    {
        flg=1;
    }
    if(flg==0)
    {
        printf("\n string are match");
    }
    else
    {
        printf("\n string is not match");
    }
    return 0;
}
*/
///=================================================================================================================
///C Program to reverse any string
/**
#include<stdio.h>
int main()
{
    char str[50],tmp;
    int i,j;

    printf("\n Enter any String : ");
    gets(str);
    printf("\n orignal String is %s",str);
    for(j=0;str[j]!='\0';j++);

    for(i=0,j--;i<=j;i++,j--)
    {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
    }
     printf("\n reverce String is %s",str);
     return 0;
}

*/
///================================================================================================================================
///C Program to find frequency of characters










///================================================================================================================================
///                     pointer List
////===================================================================================================================================

///Write a C program to create, initialize and use pointers.
//#include<stdio.h>
//int main()
//{
//    int *p;
//    int x=19;
//
//    p=(int*)malloc(sizeof(int));
//    p=&x;
//
//    printf("\n x value using pointer : %d",*p);
//    return 0;
//}
///===================================================================================================================================
///2. Write a C program to add two numbers using pointers.
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,*q;
//    int i,j,x,y;
//
//    printf("\n Enter The Value for X and Y : ");
//    scanf("%d%d",&x,&y);
//
//    p=&x;
//    q=&y;
//    printf("\n Addition Of Two Numbers BY Using Pointer is %d",*p+*q);
//    return 0;
//}
///==========================================================================================================================================
///3. Write a C program to swap two numbers using pointers.
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,*q;
//    int x,y,tmp;
//
//    printf("\n Enter any Two Numbers : ");
//    scanf("%d%d",&x,&y);
//
//    printf("\n Before Swap : X=%d \t Y=%d",x,y);
//    p=&x;
//    q=&y;
//
//    tmp=p;
//    p=q;
//    q=tmp;
//     printf("\n After Swap : X=%d \t Y=%d",*p,*q);
//     return 0;
//}
///=====================================================================================================================================
///4. Write a C program to input and print array elements using pointer.

//#include<stdio.h>
//int main()
//{
//    int *p;
//    int x[5],i,j;
//
//    printf("\n Enter any 5 values for x array : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n List of array By Using Pointer : ");
//    for(i=0;i<5;i++)
//    {
//        p=&x[i];
//        printf("%5d",*p);
//    }
//    return 0;
//}
//

///=====================================================================================================================================
///5)- Write a program to find the smallest element in the array

//#include<stdio.h>
//int main()
//{
//    int x[10],i,smno;
//
//    printf("\n Enter any 10 element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n10 element list : ");
//    for(i=0;i<10;i++)
//    {
//        printf("\t%d",x[i]);
//        if(x[i]<smno)
//        {
//            smno=x[i];
//        }
//    }
//    printf("\n Small Number in array is %d",smno);
//    return 0;
//}

///=====================================================================================================================================
///6)- Write a program to find the largest element in the array

//#include<stdio.h>
//int main()
//{
//    int x[10],i,lrno;
//
//    printf("\n Enter any 10 element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n10 element list : ");
//    for(i=0;i<10;i++)
//    {
//        printf("\t%d",x[i]);
//        if(x[i]>lrno)
//        {
//            lrno=x[i];
//        }
//    }
//    printf("\n large Number in array is %d",lrno);
//    return 0;
//}

///=====================================================================================================================================
///7)- Write a program to find the 2nd smallest element in the array
//
//
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,tmp;
//
//    printf("\n Enter any 10 element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n10 element list : ");
//    for(i=0;i<10;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]>x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    printf("\n Array List : ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\n Second smallest Number : %d",x[1]);
//    return 0;
//}
///=====================================================================================================================================
///8)- Write a program to find the 2nd largest element in the array

//
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,tmp;
//
//    printf("\n Enter any 10 element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n10 element list : ");
//    for(i=0;i<10;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]>x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    printf("\n Array List : ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\n Second largest Number : %d",x[10-2]);
//    return 0;
//}
///=====================================================================================================================================
///9)- Write a program to Print the Average of Numbers in array at an even position

//#include<stdio.h>
//int main()
//{
//    int x[5],i,count=0,sum=0;
//
//    printf("\n Enter any 5 element : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//        if(i%2==0)
//        {
//            sum=sum+x[i];
//            count++;
//        }
//    }
//    printf("\n Array List : ");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n avarage of even poistion number is %d",sum/count);
//}
///==========================================================================================================================================
 ///10)-Write a program to Print the Average of Numbers in array at an odd position

//#include<stdio.h>
//int main()
//{
//    int x[5],i,count=0,sum=0;
//
//    printf("\n Enter any 5 element : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//        if(i%2!=0)
//        {
//            sum=sum+x[i];
//            count++;
//        }
//    }
//    printf("\n Array List : ");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n avarage of odd poistion number is %d",sum/count);
//}
//

///==========================================================================================================================================
///11)-Write a program to print array elements in reverse order.

//#include<stdio.h>
//#define SIZE 1000
//int main()
//{
//    int x[SIZE],i,cnt;
//
//    printf("\n Enter Array count : ");
//    scanf("%d",&cnt);
//
//    printf("\n Enter %d Element : ",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Original Array List : ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\n  revers Array List  : ");
//    for(i=cnt-1;i>=0;i--)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
///==========================================================================================================================================
///12)-Write a program to print array elements in reverse order using the swapping method.
//
//#include<stdio.h>
//#define SIZE 1000
//int main()
//{
//    int x[SIZE],i,j,cnt,tmp;
//
//    printf("\n Enter Array count : ");
//    scanf("%d",&cnt);
//
//    printf("\n Enter %d Element : ",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Original Array List : ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    for(i=0,j=cnt-1;i<cnt/2;i++)
//    {
//        tmp=x[i];
//        x[i]=x[j];
//        x[j--]=tmp;
//    }
//    printf("\n  revers Array List  : ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
///==========================================================================================================================================
///13)- Write a program to display list of even and odd numbers separately from array.
//#include<stdio.h>
//int main()
//{
//    int x[5],i;
//
//    printf("\n Enter any 5 Element for x array : ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Even List : ");
//    for(i=0;i<5;i++)
//    {
//        if(x[i]%2==0)
//        {
//           printf("%5d",x[i]);
//        }
//    }
//    printf("\n odd  List : ");
//    for(i=0;i<5;i++)
//    {
//        if(x[i]%2!=0)
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
///==========================================================================================================================================
///14)- Write a program to print the frequency of all numbers in an array.

//
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,cnt=0,flg=0;
//
//    printf("\n Enter any 10 elemnet : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    for(i=0;i<10;i++)
//    {
//        if(x[i]==0)
//        {
//            flg=1;
//            cnt++;
//        }
//        if(i==9 && flg==1)
//        {
//            printf("\n 0 number present at %d times ",cnt);
//        }
//    }
//    for(i=0;i<10;i++)
//    {
//        cnt=0;
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]==x[j])
//            {
//                cnt++;
//                x[j]=0;
//            }
//        }
//        if(cnt>0 && x[i]!=0)
//        {
//            printf("\n %d number present at %d times ",x[i],cnt+1);
//        }
//    }
//    return 0;
//}

///==========================================================================================================================================
///15)- Write a program to print the most occurring elements.
//
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,cnt,most=0,tmp;
//
//    printf("\n Enter any 10 elemnet : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Array List : ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    for(i=0;i<10;i++)
//    {
//        cnt=0;
//        for(j=i;j<10;j++)
//        {
//            if(x[i]==x[j])
//            {
//                cnt++;
//            }
//        }
//        if(cnt>most)
//        {
//            most=cnt;
//            tmp=x[i];
//        }
//    }
//    printf("\n %d number occured most time at %d times",tmp,most);
//    return 0;
//}
///==========================================================================================================================================
///16)- Write a Program to Find missing numbers in an array.

///==========================================================================================================================================
///17)- Write a program to separate even and odd position numbers in an array.

///==========================================================================================================================================
///18)- Write a program to separate positive and negative numbers in an array.

//#include<stdio.h>
//int main()
//{
//    int x[10],i;
//
//    printf("\n Enter any 10 element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\nArray list : ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    printf("\npositive number list : ");
//    for(i=0;i<10;i++)
//    {
//        if(x[i]>=0)
//        {
//            printf("%5d",x[i]);
//        }
//    }
//    printf("\nnegative number list : ");
//    for(i=0;i<10;i++)
//    {
//        if(x[i]<0)
//        {
//            printf("%5d",x[i]);
//        }
//    }
//    return 0;
//}
///==========================================================================================================================================
///18)- Write a program to insert an element into an array at a specified position


//#include<stdio.h>
//int main()
//{
//    int x[10],i,pos=0;
//
//    printf("\n Enter any 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Array list: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n Enter instert position : ");
//    scanf("%d",&pos);
//
//    for(i=10;i>pos;i--)
//    {
//        x[i]=x[i-1];
//    }
//    printf("\n insert the element at %d position : ",pos);
//    scanf("%d",&x[pos]);
//
//    printf("\n insert Array list: ");
//    for(i=0;i<=10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}

//}
///==========================================================================================================================================
///19)- Write a program to delete a specified integer in an array
//
//#include<stdio.h>
//int main()
//{
//    int x[10],i,pos=0;
//
//    printf("\n Enter any 10 Element : ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Array list: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n Enter delete position : ");
//    scanf("%d",&pos);
//
//    x[pos]=0;
//    for(i=pos;i<10;i++)
//    {
//        x[i]=x[i+1];
//    }
//    printf("\n deleted Array list: ");
//    for(i=0;i<10-1;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
///==========================================================================================================================================
///                                      String
///==========================================================================================================================================
///1)- C Program to compare two strings

//#include<stdio.h>
//int main()
//{
//    char str[50],ch[50];
//    int i,j,flg=0;
//
//    printf("\n Enter 1st string : ");
//    gets(str);
//    printf("\n Enter 2nd string : ");
//    gets(ch);
//
//    for(i=0;str[i]!='\0';i++);
//    for(j=0;ch[j]!='\0';j++);
//
//     if(i==j)
//     {
//         for(i=0;i<str[i]!='\0';i++)
//         {
//             if(str[i]!=ch[i])
//             {
//                 flg=1;
//                 break;
//             }
//         }
//     }
//     else
//     {
//         flg=1;
//     }
//     if(flg==1)
//     {
//         printf("\n String are not matach");
//     }
//     else
//     {
//         printf("\n String are matched");
//     }
//     return 0;
//}

///==========================================================================================================================================
///2)- C Program to reverse any string

//#include<stdio.h>
//int main()
//{
//    char ch[50],tmp;
//    int i,j;
//
//    printf("\n Enter a string : ");
//    gets(ch);
//
//    for(i=0;ch[i]!='\0';i++);
//    printf("\n original string is : %s",ch);
//   // puts(ch);
//    printf("\n reverc string is : ");
//    for(j=0,i--;j<=i;j++,i--)
//    {
//        tmp=ch[i];
//        ch[i]=ch[j];
//        ch[j]=tmp;
//    }
//    puts(ch);
//
//    return 0;
//}
///--------anathor way---------by using stack------

//#include<stdio.h>
//int main()
//{
//    char ch[100],str[100];
//    int i,j,k;
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    printf("\n String before processing %s : ",ch);
//
//    for(i=0;ch[i]!='\0';i++)
//    {
//        str[i]=ch[i];
//    }
//    for(j=0,i--;str[j]!='\0';j++,i--)
//    {
//        ch[j]=str[i];
//    }
//    printf("\n String after processing %s : ",ch);
//    return 0;
//}
///==========================================================================================================================================
///3)- C Program to find frequency of characters
//
//#include<stdio.h>
//int main()
//{
//    char ch[50],chh;
//    int i,cnt=0;
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    printf("\n Enter search character : ");
//    scanf("%c",&chh);
//
//    i=0;
//    do
//    {
//        if(chh==ch[i])
//        {
//            cnt++;
//        }
//        i++;
//    }while(ch[i]!='\0');
//
//    printf("\n Frequency of %c character is %d times",chh,cnt);
//    return 0;
//}
///==========================================================================================================================================
///4)-C Program to concatenate two string(merge tow or more string)

//int main()
//{
//    char ch[50],str[100];
//    int i,j,opt;
//
//    printf("\n Enter first string : ");
//    gets(ch);
//
//    for(i=0;ch[i]!='\0';i++)
//    {
//        str[i]=ch[i];
//    }
//    while(1)
//    {
//        if(i<=100)
//        {
//            printf("\n********concatenate string*********\n1.add string 2.stop : ");
//            scanf("%d",&opt);
//
//            switch(opt)
//            {
//                case 1:
//
//                    printf("\n Enter any string : ");
//                    scanf("%s",&ch);
//
//                    for(j=0;ch[j]!='\0';j++)
//                    {
//                        str[i++]=ch[j];
//                    }
//                    puts(str);
//                    break;
//                case 2:
//                    printf("\n******Thank you****");
//                    return;
//                default:
//                    printf("\n Incoreect opition!!!try again");
//            }
//        }
//        else
//        {
//            printf("\n Insufficient storage!!!");
//        }
//    }
//
//    printf("\n concatenate string : ");
//    puts(str);
//
//    return 0;
//}
///==========================================================================================================================================
///5)- C Program to copy first string into second string

//int main()
//{
//    char ch[50],str[50];
//    int i;
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    printf("\n original string is %s",ch);
//    printf("\n\n copy string is ");
//    for(i=0;ch[i]!='\0';i++)
//    {
//        str[i]=ch[i];
//    }
//    puts(str);
//    return 0;
//}
///==========================================================================================================================================
///6)- C Program to count number of vowels in string

//int main()
//{
//    char ch[50];
//    int i,cnt=0;
//
//    printf("\n Enter any String : ");
//    gets(ch);
//
//    for(i=0;ch[i]!='\0';i++)
//    {
//        if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U')
//        {
//            cnt++;
//        }
//    }
//    printf("\n string is : %s \n  Vowel count : %d",ch,cnt);
//    return 0;
//}
///==========================================================================================================================================
///7)-C program to delete vowels from a string

//int main()
//{
//    char ch[50];
//    int i,cnt=0;
//
//    printf("\n Enter any String : ");
//    gets(ch);
//
//    for(i=0;ch[i]!='\0';i++)
//    {
//        if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U')
//        {
//            ch[i]=' ';
//        }
//    }
//    printf("\n string is : %s \n  Vowel count : %d",ch,cnt);
//    return 0;
//}

///==========================================================================================================================================
///8)- C Program to reverse each words in string without reversing the characters

//*******xxxxxxxxxxxxxxxxxxxxxxxxxxxx***************
//int main()
//{
//    char str[50],ch[50];
//    int i,j,k,l=0,sp;
//
//    printf("\n Enter any Any String : ");
//    gets(str);
//
//    for(i=0;str[i]==32;i++);
//    sp=i-1;
//    for(;str[i+1]!='\0';i++);
//
//    while(i>=sp)
//    {
//        for(j=i;str[j-1]!=32;j--);
//
//        for(k=j;k<=i;k++)
//        {
//            ch[l++]=str[k];
//        }
//        i=j;
//        for(;str[i]==32;i--)
//        {
//            ch[l++]=32;
//        }
//    }
//    ch[l]='\0';
//    printf("\n Final string is %s ",ch);
//    return 0;
//}
//
///----------------correct---way-----

//int main()
//{
//    char ch[50],tmp;
//    int i,k,l;
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    printf("\n original String : %s",ch);
//    for(i=0;ch[i]!='\0';i++)
//    {
//        for(;ch[i]==32;i++);
//        for(k=i;ch[k]!=32 && ch[k]!='\0';k++);
//        l=k;
//        for(k--;i<=k;i++,k--)
//        {
//            tmp=ch[k];
//            ch[k]=ch[i];
//            ch[i]=tmp;
//        }
//        i=l;
//    }
//     printf("\n fineal String : ");
//    for(;i>0;i--)
//    {
//        printf("%c",ch[i]);
//    }
//
//    return 0;
//}
//

///==========================================================================================================================================
///9)- C Program to reverse each words in string.

//int main()
//{
//    char ch[50],tmp;
//    int i,k,l;
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    printf("\n original String : %s",ch);
//    for(i=0;ch[i]!='\0';i++)
//    {
//        for(;ch[i]==32;i++);
//        for(k=i;ch[k]!=32 && ch[k]!='\0';k++);
//        l=k;
//        for(k--;i<=k;i++,k--)
//        {
//            tmp=ch[k];
//            ch[k]=ch[i];
//            ch[i]=tmp;
//        }
//        i=l;
//    }
//    printf("\n reverce String : %s",ch);
//    return 0;
//}

///==========================================================================================================================================
///10)-C Program to check whether string is palindrome or not

//int main()
//{
//    char str[50];
//    int i,j,flg=0;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    //length of string
//    for(i=0;str[i]!='\0';i++);
//
//
//   for(j=0,i--;j<=i;j++,i--)
//   {
//       if(str[i]!=str[j])
//       {
//           flg=1;
//       }
//   }
//    if(flg==1)
//    {
//        printf("\n Given string is NOT palindrome ");
//    }
//    else
//    {
//        printf("\n Given string is palindrome ");
//    }
//    return 0;
//}
//
///==========================================================================================================================================
///11)C Program to Converting string from lowercase to uppercase and vice-versa

//int main()
//{
//    char str[50];
//    int i;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(str[i]>=97 && str[i]<=122)
//        {
//            str[i]-=32;
//        }
//        else if(str[i]>=65 && str[i]<=90)
//        {
//            str[i]+=32;
//        }
//    }
//    printf("\n  Converting string : %s",str);
//    return 0;
//}
///==========================================================================================================================================
///12)-C Program to Counting the number of words in a given string

//#include<string.h>
//int main()
//{
//    char str[50];
//    int i,j,cnt=0;
//
//    printf("\n Enter any string : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if((str[i]!=32 && str[i+1]==32) || (str[i]!=32 && str[i+1]=='\0'))
//        {
//            cnt++;
//        }
//    }
//    printf("\n Word count : %d",cnt);
//    return 0;
//}
///==========================================================================================================================================
///13)-C Program to Counting the number of character in a given string

//#include<string.h>
//int main()
//{
//    char str[50];
//    int i,j,cnt=0;
//
//    printf("\n Enter any string : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(str[i]!=32)
//        {
//            cnt++;
//        }
//    }
//    printf("\n Word count : %d",cnt);
//    return 0;
//}
///==========================================================================================================================================
///14)-C Program to Remove all Characters in a String Except Alphabet
//
//int main()
//{
//    char str[50],tmp;
//    int i,j,cnt=0;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(!((str[i]==32)|| (str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90)))
//        {
//            for(j=i+1;str[j]!='\0';j++)
//            {
//                if(((str[j]==32)|| (str[j]>=97 && str[j]<=122)||(str[j]>=65 && str[j]<=90)))
//                {
//                    tmp=str[i];
//                    str[i]=str[j];
//                    str[j]=tmp;
//                    cnt++;
//                    break;
//                }
//            }
//        }
//        else
//        {
//            cnt++;
//        }
//    }
//    str[cnt]='\0';
//    printf("\n Finel string : %s",str);
//    return 0;
//}
///==========================================================================================================================================
///15)-C Program to arrange the string in alphabetical order
//
//int main()
//{
//    char str[50],tmp;
//    int i,j;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        for(j=i+1;str[j]!='\0';j++)
//        {
//            if(str[i]>str[j])
//            {
//                tmp=str[i];
//                str[i]=str[j];
//                str[j]=tmp;
//            }
//        }
//    }
//    printf("\n Fineal string : %s",str);
//    return 0;
//}
//
///==========================================================================================================================================
///15)-C program to count uppercase, lowercase and special characters in string


//int main()
//{
//    char str[50];
//    int i,upcnt=0,locnt=0,spcnt=0;
//
//    printf("\n Enter any string : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(str[i]>=97 && str[i]<=122)
//        {
//            locnt++;
//        }
//        else if(str[i]>=65 && str[i]<=90)
//        {
//            upcnt++;
//        }
//        else if(str[i]!=32)
//        {
//            spcnt++;
//        }
//    }
//    printf("\n Uppercase Count : %d\nLowercase Count : %d\nSpecial characacter count : %d",upcnt,locnt,spcnt);
//    return 0;
//}
///==========================================================================================================================================
///16)-C program to toggle each character in a string

///==========================================================================================================================================
///17)-C program to find number of alphabets, digits or special characters in a string

//int main()
//{
//    char str[50];
//    int i,alpcnt=0,digtcnt=0,spcnt=0;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if((str[i]>=97 && str[i]<=122) || str[i]>=65 && str[i]<=90)
//        {
//            alpcnt++;
//        }
//        else if(str[i]>=48 && str[i]<=57)
//        {
//            digtcnt++;
//        }
//        else
//        {
//            spcnt++;
//        }
//    }
//    printf("\n Alphabet count : %d\n Digit count : %d \nSpecial count : %d",alpcnt,digtcnt,spcnt);
//    return 0;
//}
///==========================================================================================================================================
///18)- C program to count total number of vowels and consonants in a string
//
//int main()
//{
//    char ch[50];
//    int i,vocnt=0,concnt=0;
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    for(i=0;ch[i]!='\0';i++)
//    {
//        if((ch[i]>=97 && ch[i]<=122) || ch[i]>=65 && ch[i]<=90)
//        {
//            if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U')
//            {
//                vocnt++;
//            }
//            else
//            {
//                concnt++;
//            }
//        }
//    }
//    printf("\n Vowel Count : %d \n Consonants Count : %d",vocnt,concnt);
//    return 0;
//}
///==========================================================================================================================================
///19)- C program to find the first occurrence of a character in a string
//
//int main()
//{
//    int i;
//    char ch[50];
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    for(i=0;ch[i]==32;i++);
//
//    printf("\n First Occurrence Character : %c",ch[i]);
//    return 0;
//}
///==========================================================================================================================================
///20)- C program to find last occurrence of a character in a string


//int main()
//{
//    int i;
//    char ch[50];
//
//    printf("\n Enter any string : ");
//    gets(ch);
//
//    for(i=0;ch[i]!='\0';i++);
//    for(i--;ch[i]==32;i--);
//
//    printf("\n last Occurrence Character : %c",ch[i]);
//    return 0;
//}
///==========================================================================================================================================
///21)- C program to search all occurrences of a character in a string
//
//int main()
//{
//    char str[50];
//
//    int i,j,cnt;
//
//    printf("\n Enter any string : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        cnt=0;
//        for(j=i+1;str[j]!='\0';j++)
//        {
//            if(str[i]==str[j])
//            {
//                cnt++;
//                str[j]=' ';
//            }
//        }
//        if(str[i]!=32)
//        printf("\n %c occurrences %d times ",str[i],cnt+1);
//    }
//    return 0;
//}
///==========================================================================================================================================
///22)-C program to find maximum occurring character in a string

//int main()
//{
//    char str[300],most;
//    int i,j,cnt,mostn=0;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        cnt=0;
//        for(j=i;str[j]!='\0';j++)
//        {
//            if(str[i]==str[j])
//            {
//                cnt++;
//            }
//        }
//        if(cnt>mostn && str[i]!=32)
//        {
//            mostn=cnt;
//            most=str[i];
//        }
//    }
//    printf("\n Most occuring character : %c\n Occuring Time : %d",most,mostn);
//
//    return 0;
//}
///==========================================================================================================================================
///23)-C program to find minimum occurring character in a string
//
//int main()
//{
//    char str[500],min;
//    int i,j,k,cnt;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(k=0;str[k]!='\0';k++);
//    for(i=0;str[i]!='\0';i++)
//    {
//
//        cnt=0;
//        for(j=i;str[j]!='\0';j++)
//        {
//            if(str[i]==str[j])
//            {
//                cnt++;
//            }
//        }
//        if(cnt<k && str[i]!=32)
//        {
//           // printf("\n ch=%c \t k=%d \t ant=%d",str[i],k,cnt);
//            k=cnt;
//            min=str[i];
//        }
//    }
//    printf("\n minimum occuring character : %c\n Occuring time =%d",min,k);
//    return 0;
//}
///==========================================================================================================================================
///24)-C program to remove first occurrence of a character from string

//
//int main()
//{
//    char str[50];
//    int i,cnt;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(cnt=0;str[cnt]!='\0';cnt++);
//    printf("\n Original String : %s",str);
//    for(i=0;str[i]!='\0';i++)
//    {
//        str[i]=str[i+1];
//    }
//    str[cnt-1]='\0';
//    printf("\n Finel String : %s",str);
//    return 0;
//}
///==========================================================================================================================================
///25)-C program to remove last occurrence of a character from the string

//int main()
//{
//    char str[50];
//    int i,cnt;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(cnt=0;str[cnt]!='\0';cnt++);
//    printf("\n cnt=%d",cnt);
//    for(cnt--;str[cnt]==32;cnt--);
//    printf("\n cnt=%d",cnt);
//    printf("\n Original String : %s",str);
//    str[cnt]='\0';
//    printf("\n Finel String : %s",str);
//    return 0;
//}
//---------anathor-way
//int main()
//{
//    char str[50];
//    int i,cnt;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(cnt=0;str[cnt]!='\0';cnt++);
//    printf("\n cnt=%d",cnt);
//    for(;str[cnt-1]==32;cnt--);
//    printf("\n cnt=%d",cnt);
//    printf("\n Original String : %s",str);
//    str[cnt-1]='\0';
//    printf("\n Finel String : %s",str);
//    return 0;
//}
///==========================================================================================================================================
///26)-C program to remove all occurrences of a character from the string
//
//int main()
//{
//    char str[50],tmp;
//    int i,j,cnt=0;
//
//    printf("\n Enter any String : ");
//    gets(str);
//
//    for(i=0;str[i+1]!='\0';i++)
//    {
//        if((str[i]>97 && str[i]<=122) || (str[i]>=65 && str[i]<=90))
//        {
//            for(j=i+1;str[j]!='\0';j++)
//            {
//                 if(!(str[j]>97 && str[j]<=122) || (str[j]>=65 && str[j]<=90))
//                 {
//                     tmp=str[i];
//                     str[i]=str[j];
//                     str[j]=tmp;
//                     cnt++;
//                     break;
//                 }
//
//            }
//        }
//        else
//        {
//            cnt++;
//        }
//    }
//    str[cnt]='\0';
//    printf("\n String is %s ",str);
//    return 0;
//}
///==========================================================================================================================================
///27)-C program to remove all repeated characters in a string

//
//int main()
//{
//    char str[500];
//    int i,j,k;
//
//    printf("\n Enter any Any String : ");
//    gets(str);
//    for(i=0;str[i+1]!='\0';i++)
//    {
//        for(j=i+1;str[j]!='\0';j++)
//        {
//            if(str[i]==str[j] && str[j]!=32)
//            {
//                for(k=j;str[k]!='\0';k++)
//                {
//                    str[k]=str[k+1];
//                }
//                str[k--]='\0';
//            }
//        }
//    }
//    printf("\n Final String is %s",str);
//    return 0;
//}
//
///==========================================================================================================================================
/**28)-C program to replace first occurrence of a character in a string

output:-
Enter any string: I love Codeforwin.

Enter character to replace 'I' with: !

String before replacing: I love Codeforwin.
String after replacing first 'I' with '!' : ! love Codeforwin.
*/
//
//int main()
//{
//    char str[50],ch,nch;
//    int i;
//
//    printf("\n Enter any string : ");
//    gets(str);
//    ch=str[0];
//    printf("\n Enter character to replace '%c' with:  ",ch);
//    scanf("%c",&nch);
//    printf("\n String before replacing : %s",str);
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(ch==str[i])
//        {
//            str[i]=nch;
//        }
//    }
//    printf("\n String after replacing : %s",str);
//    return 0;
//
//}
///==========================================================================================================================================
///29)-C program to replace last occurrence of a character in a string

//
//int main()
//{
//    char str[50],ch,nch;
//    int i,cnt;
//
//    printf("\n Enter any string : ");
//    gets(str);
//    for(cnt=0;str[cnt]!='\0';cnt++);
//    for(cnt--;str[cnt]==32;cnt--);
//    printf("\ncnt=%d",cnt);
//    ch=str[cnt-1];
//    printf("\n Enter character to replace '%c' with:  ",ch);
//    scanf("%c",&nch);
//    printf("\n String before replacing : %s",str);
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(ch==str[i])
//        {
//            str[i]=nch;
//        }
//    }
//    printf("\n String after replacing : %s",str);
//    return 0;
//
//}
//
//












///================================================================================================================================
///-------------------------------------------------------ENDED-last------------------------------------------------------------------------------
///================================================================================================================================
