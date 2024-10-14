#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    //Operators Programs

    ///QUE 1: Write a C program to perform input/output of all basic data types.
   /* int num;
    float num1;
    char c;
    double num3;

    printf("\nenter int num");
    scanf("%d",&num);

    printf("\nenter  float");
    scanf("%f",&num1);

    printf("\nenter  charcter");
    scanf("%c",&c);

    printf("\nenter  Double");
    scanf("%lf",&num3);

    printf("\nint=%d \nFlaot=%f \nChar=%c \nDouble=%lf",num,num1,c,num3);
*/
//==============================================================================================================
   /// QUE 2 : Write a C program to enter two numbers and find their sum

   /*int num1,num2,sum;
   printf("\nEnter the two number");
   scanf("%d%d",&num1,&num2);
   sum=num1+num2;
   printf("\nThe Add Of %d + %d = %d",num1,num2,sum);
   */
//===================================================================================================
   ///QUE 3:  Write a C program to enter two numbers and perform all arithmetic operations

  /* int num1=3,num2=5;
    printf("\nThe Sum of Two Number %d",(num1+num2));
    printf("\nThe minus of Two Number %d",(num1-num2));
    printf("\nThe mul of Two Number %d",(num1*num2));
    printf("\nThe div of Two Number %d",(num1/num2));
    printf("\nThe mod of Two Number %d",(num1%num2));

*/
//===================================================================================================
    ///QUE 4 :  Write a C program to enter length and breadth of a rectangle and find its perimeter.

  /*  int l,b,perimeter;
    printf("Enter the Length and Breadth");
    scanf("%d%d",&l,&b);

    perimeter=(l+b)*2;

    printf("The Peri = %d",perimeter);
*/
//===================================================================================================
    ///QUE 5 : Write a C program to enter length and breadth of a rectangle and find its area.

 /*   int l,b,Area;
    printf("\nEnter the Length and Breadth");
    scanf("%d%d",&l,&b);

    Area=l*b;
    printf("\nThe area = %d",Area);
*/
//===================================================================================================
   /// QUE 6 : Write a C program to enter radius of a circle and find its diameter, circumference and area.

  /* int r,d;
   printf("Enter the Radius");
   scanf("%d",&r);

   d=r*r;
   printf("The Diameter = %d",d);
*/
//===================================================================================================
 ///  QUE 7 :Write a C program to enter length in centimeter and convert it into meter and kilometer

  /*  float cen,Meter,kiloMeter;
    printf("\nEnter the Length in centimeter");
    scanf("%f",&cen);

    Meter=cen/100.0;

    printf("\nThe Meter value = %2f",Meter);

    kiloMeter=cen/100000.0;
    printf("\nThe converted value cen to kiloMeter =%2f",kiloMeter);

*/
//===================================================================================================
   /// QUE 8: Write a C program to enter temperature in Celsius and convert it into Fahrenheit

  /* float temprature=27.0,Farameter,Farameter1 =100.0,temperature1;

    //Convert Celsious To farameter
   Farameter=(temprature*9/5)+32;
   printf("\nThe Farameter =%2f",Farameter);

    //Convert  farameter  To Celsious
   temperature1=(Farameter1-32)*(9/5);
   printf("\nThe Temperature =%2f",temperature1);
    return 0;
*/
//===================================================================================================
    ///10 Write a C program to find power of any number x ^ y
/*
    #include<stdio.h>
    int main()
    {
        int x=4;
        int y=2;

        int power=1;
        int i=1;
        while(i<=y)
        {
            power=power*x;
            i++;
        }
        printf("\n Power = %d",power);
        return 0;
    }
*/
//=======================================================================================================
///11. Write a C program to enter any number and calculate its square root
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("\n Enter Your Number:");
    scanf("%d",&num);

    int ans=sqrt(num);
    printf("\n The Square Root of Number is %d",ans);

    return 0;
}
*/
//====================================================================================================
///12 Write a C program to enter two angles of a triangle and find the third angle
/*
#include<stdio.h>
int main()
{
    int a,b;

    printf("\n Enter The Two Sides Of Triangle:");
    scanf("%d %d",&a,&b);

    int c=180-(a+b);
    printf("\n The Third Angle Of Triangle Is = %d",c);

    return 0;
}
*/
//===================================================================================================
    ///13 Write a C program to enter base and height of a triangle and find its area.
/*
    int b,h,area;
    printf("\n Enter The base And Hight:");
    scanf("%d%d",&b,&h);

    area=(float 1/2)*b*h;
    printf("\n Area Of Triangle=%d",area);

*/
//============================================================================================================
///14 Write a C program to calculate area of an equilateral triangle.
/*
    #include <stdio.h>

    int main() {
    float s, area;

    printf("Enter the length of the side of the equilateral triangle: ");
    scanf("%lf", &s);

    area = (0.25) * s * s * 1.73205;

    printf("The area : %.2f\n", area);

    return 0;
}
*/
//===============================================================================================================
    ///15 Write a C program to enter marks of five subjects and calculate total, average and percentage.

/*
    float a,b,c,d,e;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    float tot=a+b+c+d+e;
    printf("\n Total = %.2f",tot);

    float avg=(a+b+c+d+e)/5;
    printf("\n AVrage = %.2f",avg);


    float per =(tot/500)*100;
    printf("\n percen = %.2f",per);

*/

//==============================================================================================================

    ///16 And 17
    ///Compound interrest
/*
    float P,R,T,A,SI;
    printf("Enter the P R and T");
    scanf("%f%f%f",&P,&R,&T);

    A = P * pow(1+(R/100),T);
    printf("\nThe compound interest after %2f Years is =%2f",T,A-P);


    //Calculating Simple interest

    SI=(P*R*T)/100;
    printf("\nThe Simple Interst is = %2f",SI);
*/
}
//==========================================================================================================

