#include<stdio.h>
int main()
{
    ///Conditional Oprator
    ///1
  /*Between Two Number greater
    int a,b;
    printf("Enter any two number");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("Ther number %d is grater ",a);

    }
    if(b>a){
        printf("The number %d is Greater",b);
    }

    return 0;
    */

    ///2
    //------------three number greter---------------

    /*int a,b,c;

    printf("Enter the three number ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("a is greater :",a);
    }
    if(b>a && b>c){
        printf("b is greater :",b);
    }
    if(c>a && c>b){
        printf("c is greater :",c);
    }

    return 0;

    */
    ///3
    //------------Even or odd-------------

    /*int num;

    printf("Enter the any number");
    scanf("%d",&num);

    if(num%2==0){
        printf("The number %d is even",num);
    }
    if(num%2!=0){
        printf("The number is odd",num);
    }
    return 0;

    */
    //==================================================================================
    ///4
    #include<stdio.h>
    int main()
    {
        int year;
        printf("\n Enter Your Year:");
        scanf("%d",&year);

        if(year%4==0)
        {
            printf("\n Leap Year:");
        }
        if(year%400==0 || year%100!=0)
        {
            printf("\n Leap Year:");
        }
    }
    //=============================================================================================
    ///5
    //--------Enterd Character is Alphabet or not------

    /*char c;

    printf("Enter the character");
    scanf("%c",&c);

    if((c>='A' && c<='Z') || (c>='a' &&c<='z'))
    {
        printf("The entered Character %c is alphabet",c);
    }
     else
    {
        printf("The entered Character %c is Not alphabet",c);
    }
    return 0;

    */

    ///List Of If()__else

    ///3
    //Positive or negative

    /*int num;

    printf("enter the number");
    scanf("%d",&num);

    if(num<0){
        printf("You enter negative number");
    }
    else{
        printf("You entered positive number");
    }

    return 0;
    */

    ///4
    // Write a C program to check whether a number is divisible by 5 and 11 or not

    /*int num;
    printf("Enter the number");
    scanf("%d",&num);

    if(num%5==0 && num%11==0){
        printf("Divisible by 5 and 11\n True");
    }
    else{
        printf("Not divisible by 5 and 11 \n False");
    }

    return 0;
    */

    ///5 Even And Odd
    /*

    int num;

    printf("Enter the any number");
    scanf("%d",&num);

    if(num%2==0){
        printf("The number %d is even",num);
    }
    else{
        printf("The number is odd",num);
    }
    return 0;
    */
    ///6Write a C program to check whether a year is a leap year or not
    //======================================================================================================================================================
/*
   #include<stdio.h>
    int main()
    {
        int year;
        printf("\n Enter Your Year:");
        scanf("%d",&year);

        if((year%4==0&&year%400==0) || year%100!=0)
        {
            printf("\n Leap Year:");
        }
        else
        {
            printf("\n Not Leap Year:");
        }
    }
*/

    //==============================================================================================================================
    ///
    ///7 WAP to enter price of 3 items and calc the discount. (discount is 7% when amount exceeds 500)------------------

    /*float ListPrice,SellPrice;
    float dis;
    printf("Enter the Listprice");
    scanf("%f",&ListPrice);

    printf("Enter the SellPrice");
    scanf("%f",&SellPrice);

    dis=((ListPrice-SellPrice)/ListPrice)*100;

    printf("The discount is %f",dis);

    return 0;
    */


    //Write a C program to input any alphabet and check whether it is vowel or consonant

    /*char c;
    printf("Enter the character");
    scanf("%c",&c);

    if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u')
    {
        printf("Entered Character is Ovel");
    }
    else if(c=='A' || c=='E' || c=='i'|| c=='I' || c=='U')
    {
         printf("Entered Character is Ovel in uppercase");
    }
    else
    {
        printf("Entered Character is Constant");
    }

    return 0;

    */

    ///9

    //Write a C program to input any character and check whether it is alphabet, digit or special character

    /*char c;
    printf("Enter the charcter ");

    scanf("%c",&c);

    if((c>='A' && c<='Z') || (c>='a' &&c<='z'))
    {
        printf("The entered Character %c is alphabet",c);
    }

    else if(c>='0' && c<='9'){
        printf("The entered Character %c is number",c);
    }
    else{
        printf("The entered Character %c is Special Symobl",c);
    }

    return 0;
    */

    ///10
    //-------------11.Write a C program to check whether a character is uppercase or lowercase alphabet.-----------------------

    /*char c;

    printf("Enter the character :");
    scanf("%c",&c);

    if(c>='a' && c<='z'){
        printf("Lowercase Alphabet");
    }
    else if(c>='A' && c<='Z')
    {
        printf("Uppercase alphabet");
    }

    else{
        printf("This is not an alphabet");
    }

    return 0;
    */

    ///11

    // Write a C program to input week number and print week day.-----------

   /* int num;

    printf("\nEnter the number :");
    scanf("%d",&num);

    if(num==1){
        printf("Monday");
    }
    if(num==2){
        printf("tuseday");
    }
    if(num==3){
        printf("wenseday");
    }
    if(num==4){
        printf("thursday");
    }
    if(num==5){
        printf("friday");
    }
    if(num==6){
        printf("Sat");
    }
    if(num==7){
        printf("Sunday");
    }

    return 0;
    */

    ///12
   //.Write a C program to input month number and print number of days in that month---------------

   /*int n;

   printf("Enter the number :");
   scanf("%d",&n);

   if(n==2){
    printf(" Days 28/29");
   }
   if(n==1 || n==3 || n==5 || n==7 || n==8 ||n==10 || n==12){
    printf("Days : 31");
   }
   if(n==4 || n==6 || n==9 ||n==11){
    printf(" Days : 30");
   }

   return 0;
   */

   ///13  Write a C program to count total number of notes in given amount
/*
  #include<stdio.h>
   int main()
   {
       int amount,Th;
       printf("\n Enter Your Amount:");
       scanf("%d",&amount);

       if(amount>1000)
       {
           Th=(amount%1000);
           printf("\n 1000 notes = %d",amount/1000);
           amount=Th;

           if(amount>=500 && amount <1000)
           {
                Th=amount%500;
                printf("\n 500 notes = %d",amount/500);
                amount=Th;

                if(amount>=100 && amount <500)
                 {
                     Th=amount%100;
                     printf("\n 100 notes = %d",amount/100);
                     amount=Th;

                        if(amount>=10 && amount <100)
                        {
                            Th=amount%10;
                            printf("\n 100 notes = %d",amount/10);
                            amount=Th;
                 }
             }
           }

       }
       return 0;
   }

*/

   ///14
   //Write a C program to input angles of a triangle and check whether triangle is valid or not.
/*
   int a1,a2,a3;
   int sumofAngle;

   printf("Enter the Angle of tringle :");

   scanf("%d%d%d",&a1,&a2,&a3);

   sumofAngle=a1+a2+a3;

   if(sumofAngle==180){
    printf("The tringle is valid");
   }
   else{
        printf("The tringle is not valid");
   }
   return 0;

   */
//========================================================================================================================================================

 ///15 Write a C program to input all sides of a triangle and check whether triangle is valid or not.

/*
 #include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("\n Enter The All Sides of Triangle:");
     scanf("%d%d%d",&a,&b,&c);

     int side=a+b+c;

     if(side==180)
     {
         printf("\n Triangle Is Valid:");
     }
     else
     {
          printf("\n Triangle Is Not Valid:");
     }
     return 0;
 }
*/

 //===========================================================================================================================================
///16 Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
/*
#include<stdio.h>
 int main()
 {
     int a,b,c;

     printf("\n Enter The All Sides of Triangle:");
     scanf("%d%d%d",&a,&b,&c);

     if(a==b && b==c)
     {
         printf("equilateral");
     }
     else if( a==b ||b==c || a==c)
     {

         printf(" isosceles");
     }
     else
     {
         printf("scalene");
     }

     return 0;
 }
*/
 //================================================================================================================================================
 ///17 Write a C program to find all roots of a quadratic equation


 //=======================================================================================================================================
   ///18
   //Write a C program to calculate profit or loss.

  /* int buyprice,sellprice;
   int profit,loss;
   printf("Enter The value of buyprice and sellprice");
   scanf("%d%d",&buyprice,&sellprice);

   if(buyprice<sellprice){
        profit=sellprice-buyprice;
        printf("The profit is %d",profit);
   }
   if(buyprice>sellprice){
        loss=buyprice-sellprice;
        printf("the loss is %d",loss);
   }

   return 0;*/
//===================================================================================================================================================
   ///19

//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage
 //and grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% :
     //Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

    /* float p,c,b,m,com;
     float per;
     printf("Enter the marks of Subjects");
     scanf("%f%f%f%f%f",&p,&c,&b,&m,&com);
     per=(p+c+b+m+com)/5;

     printf("the percentage is %f ",per);

     if(per>=90){
        printf("Grade A ");
     }
     if(per>=80 && per<=90){
        printf("Grade B ");
     }
     if(per>=70 && per<=60){
        printf("Grade C ");
     }
     if(per>=60 && per<=40){
        printf("Grade D ");
     }
     if(per>=40&& per<=60){
        printf("Grade E ");
     }
     if(per<40){
        printf(" Fail ");
     }

     return 0;

     */
}
///===================================================================================================================================================
/*

Unsolved Quetion

Write a C program to find all roots of a quadratic equation


 Write a C program to input basic salary of an employee and calculate its Gross
 salary according to the following:
 Basic Salary <= 10000 : HRA = 20%, DA = 80%
 Basic Salary <= 20000 : HRA = 25%, DA = 90%
 Basic Salary > 20000 : HRA = 30%, DA = 95%


 Write a C program to input electricity unit charges and calculate total electricity bill
 according to the given condition: For the first 50 units Rs. 0.50/unit
 For next 100 units Rs. 0.75/unit
 For next 100 units Rs. 1.20/unit
 For unit above 250 Rs. 1.50/unit
 An additional surcharge of 20% is added to the bil
*/
