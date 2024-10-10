#include <stdio.h>
#include <stdlib.h>

/*for Loop : Reduce Repeated Task
    Syntax
        for(<intialize>;<conditon>;<incrament/Decreament/Statment/Expression>){
            -----------;
            ----------; //Block Of Code
            ----------;
}
*/

int main()
{
//Simple For Loops Programs

    /*int x;
    for(x=0;x<5;x++){
        printf("\n Hello");
    }
    */


    //or

    /*int x;
    for(x=1;x<=5;x++){
        printf("\n Hello");
    }
    */

    /*int i;
    for(i=1;i<=5;i=i+2){
        printf("\n HI");
    }
    */

   /* int i;
    for(i=0;i<25;i=i+5){
        printf("\nHi");
    }
    */

    /*for(int i=0;i<25;i=i+5){
        printf("\n Hello World");
    }*/

    /*int i;
    for(i=1;i<=25;i=i+1){
        printf("\n%d",i);
    }
    */

    //-------decreament

   int i;
    for(i=25;i>=1;i=i-1){

        printf("\n%d",i);
    }
    

    //WAP to display Number From 1-10;

   /* int num;
    printf("The Numbers Are :");
    for(num=1;num<=10;num=num+1){
        printf("\n %d",num);
    }
*/
    //Taking input From User

   /* int num,i;
    printf("\nEnter the Nummber");
    scanf("%d",&num);

    printf("\nThe Numbers are :");

    for(i=1;i<=num;i=i+1){
        printf("\n%d",i);
    }
    */

    //----------WAP To display Even And dd Number Using Loops-------------

   /* int num,i;
    printf("\nEnter the Limit :");
    scanf("%d",&num);

    //For Original Numbers
    printf("\nThe Numbers Are :");
    for(i=1;i<=num;i++){
        printf("%5d",i);
    }

    //For Even Nummber
    printf("\nThe Even Numbers are :");
    for(i=1;i<=num;i++){
        if(i%2==0){
            printf("%5d",i);
        }
    }

    //For Odd Numbers
    printf("\nThe Odd Numbers Are :");
    for(i=1;i<=num;i++){
        if(i%2!=0){
            printf("%5d",i);
        }
    }

    */

    //---------LIST PROGRAMS---------

    //QUE 1 : Write a C program to print all natural numbers from 1 to n.

    /*int n,i;

    printf("\nEnter Your Number :");
    scanf("%d",&n);

    printf("\n Ther numbers Are :");
    for(i=1;i<=n;i++){
        printf("\n%d",i);

    }
    */

    //QUE 2: Write a C program to print all natural numbers in reverse (from n to 1).

  /*  int num,i;

    printf("Enter your limit");
    scanf("%d",&num);

    printf("The Revese numbers are :");

    for(i=num;i>=1;i--){
        printf("\n%d",i);
    }

    */

    //QUE 3:Write a C program to print all alphabets from a to z

   /* char c;
    printf("The Characters From a TO z Are :");
    for(c='a';c<='z';c++){
        printf("\n%c",c);
    }
    */

    //QUE 4: Write a C program to print all even numbers between 1 to 100.

/*    int i;

    //For Original Numbers
    printf("\nThe Original Numbers Are :");

    for(i=1;i<=100;i=i+1){
        printf("%5d",i);
    }

    //For Even Numbes
    printf("\nThe Even Numbers are ");

    for(i=1;i<=100;i=i+1){
        if(i%2==0){
            printf("%5d",i);
        }
    }
*/

    //QUE 5: Write a C program to print all odd numbers between 1 to 100.

    /*int num,i;
    printf("\nEnter Limit Of Number");
    scanf("%d",&num);

    //For Original Numbers
    printf("\nThe Original Numbers Are :");
    for(i=1;i<=num;i++){
        printf("%5d",i);
    }

    //For odd Numbes

    printf("\nThe Odd Numbers Are :");
    for(i=1;i<=100;i++){
        if(i%2!=0){
        printf("%5d",i);
        }
    }
    */

    //QUE 6 :Write a C program to find the sum of all natural numbers between 1 to n

   /* int n,sum=0,i;

    printf("Enter linit :");
    scanf("%d",&n);

    //for original numbers
    for(i=1;i<=n;i++)
    {
        printf("%5d",i);
    }

    //For Sum of all Natural Numbers
    for(i=1;i<=n;i++){
        printf("%d",i);
        sum=sum+i;
    }
    printf("The sum Of all Natural Number  is %d",sum);
*/

   // QUE 7 :Write a C program to find the sum of all even numbers between 1 to n.

  /*  int i,n,sum=0;

    printf("\nEnter the number limit :");
    scanf("%d",&n);

    //for Original number

    printf("The Original Numbers are: ");
    for(i=1;i<=n;i++){
        printf("%5d",i);
    }

    //for Even Number
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("\nthe sum of Even Number is %d",sum);

    */

    //QUE 8:Write a C program to find sum of all odd numbers between 1 to n.

  /*  int n,i,sum=0;
    printf("\nEnter the limit :");
    scanf("%d",&n);

    printf("\nThe numbers are :");

    for(i=1;i<=n;i++){
        printf("%5d",i);
    }

    //For sum Of all Odd number
    printf("\nThe Odd Numbers Are :");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0){
            printf("%5d",i);
            sum=sum+i; // sum+=i
        }
    }

    printf("\nThe sum Of All Od Number is %d ",sum);

*/

    //QUE 9: Write a C program to print multiplication table of any number.

 /*   int n,i,MulTab;
    printf("Enter The Number :");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        MulTab=n*i;
        printf("\n%d",MulTab);
    }
*/

   //QUE 10:Write a C program to count number of digits in a number.

 /*  int n,i,count=0;
   printf("Enter your Number :");
   scanf("%d",&n);

   for(i=n;i>0;i=i/10){
        count++;
   }
   printf("Number of digit is %d",count);

*/

   //QUE 11 And 12 :Write a C program to find first and last digit of a number.

  /* int n,i,LD,FD,sum;
   printf("\nenter the number ");
   scanf("%d",&n);

   //for LastDIGIT
   for(i=n;i>0;i=i/10){
    LD=i%10;
    printf("%d",LD);

   }


    OR
    int n=123,LD,i,FD;
    for(i=n;i>=n;i=i/10){
        LD=i%10;
        printf("\n%d",LD);
   }

   //For Fist Digit
   for(i=n ;i<=0;i=i/10){
        FD=i%10;
   }
   printf("\n%d",FD);



    for(i=1;i<n;i=i*10){

        FD=n/i;
    }
      printf("\n%d",FD);

    sum=LD+FD;
    printf("\nThe sum Of Last Digit And First digit is %d ",sum);

    */


    //QUE 13 : Write a C program to swap first and last digits of a number.


    //QUE14 :Write a C program to calculate sum of digits of a number.

   /* int number,sum=0,rem=0;
    printf("Enter your number ");
    scanf("%d",&number);

    for(int i=number;i>0;i=i/10){
        //sum += i%10 ; Or
        //sum=sum+(i%10);
    }
    printf("\nThe Sum of Digit is%d %d",number,sum);

    */


    //QUE 15 : Write a C program to calculate product of digits of a number

  /*  int n=134,product=1;

    for(int i=n;i>0;i=i/10){
        //product *= i%10;
        product=product*(i%10);
    }
    printf("\nThe Product OF Entered number is %d %d",n,product);

    */

    //QUE 16: Write a C program to enter a number and print its reverse.

   /* int n=1234,LD;

    for(int i=n;i>0;i=i/10){
        LD=i%10;
        printf("%d",LD);
    }
    */

    //QUE :17 Write a C program to check whether a number is palindrome or not.

  /*  int num,reserve=0,LD,i;
    printf("Enter the number :");
    scanf("%d",&num);

    for(i=num;i>0;i=i/10){
        LD=i%10;
        reserve=reserve*10+LD;
    }
    if(reserve==num)
        {
            printf("\nthe number %d is Palindrom",num);
        }
    else
        {
            printf("\nThe Number %d is Not Palindrom",num);
        }
    */


    /*int n=123,LD,i,FD;
    for(i=n;i>=n;i=i/10)
        {
            LD=i%10;
            printf("\n%d",LD);
        }

   //For Fist Digit
    for(i=n;i>0;i=i/10)
        {
            FD=i%10;
        }
    printf("\n%d",FD);

    printf("\nBefore Swapping The Program %d And %d is",LD,FD);

  //Swapping for LD and FD

    int temp;
    temp =FD;
    FD=LD;
    LD=temp;

    printf("\nAfter Swapping The Program %d And %d is",LD,FD);

    */


    //QUE 18 Write a C program to find frequency of each digit in a given integer.


/*
    //Que 19: WAP To genrate the max of entered number;

    int num,max=0,rem,i,NewNum;

    printf("\nEnter the number :");

    scanf("%d",&num);
    NewNum=num;
    for(i=9;i>=0;i--){
        num=NewNum;
        for(;num!=0;num=num/10){
            rem=num%10;
            if(i==rem){
                max=(max*10)+rem;
            }
        }
    }
    printf("\nThe max value is %d",max);


    return 0;
}
*/


/*
    //Que 20: WAP To genrate the min of entered number;

    int num,min=0,rem,i,NewNum;

    printf("\nEnter the number :");

    scanf("%d",&num);
    NewNum=num;
    for(i=0;i<=9;i++){
        num=NewNum;
        for(;num!=0;num=num/10){
            rem=num%10;
            if(i==rem){
                min=(min*10)+rem;
            }
        }
    }
    printf("\nThe min value is %d",min);


    return 0;
}

*/

//21.WAP to generate min even and odd numeric_limits
/*
    int num,nn,rem,E_min=0,O_min=0;
    printf("\n Enter any number : ");
    scanf("%d",&num);
    nn = num;
    for(int i=0 ; i<=9 ; i++)
    {
        num = nn;
        for( ; num!=0 ; num=num/10)
        {
            rem = num % 10;
            if(rem%2==0)
            {
                if(i==rem)
                {
                    E_min=E_min*10+rem;
                }
            }
            else
            {
                if(i==rem)
                {
                    O_min=O_min*10+rem;
                }

            }
        }
    }

    printf("\n E_min = %d",E_min);
    printf("\n O_min = %d",O_min);
    */

    //QUE 22 :WAP to generate Max even and odd numeric_limits

 /*   int num,nn,rem,E_max=0,O_max=0;
    printf("\n Enter any number : ");
    scanf("%d",&num);
    nn = num;
    for(int i=9 ; i>=0 ; i--)
    {
        num = nn;
        for( ; num!=0 ; num=num/10)
        {
            rem = num % 10;
            if(rem%2==0)
            {
                if(i==rem)
                {
                    E_max=E_max*10+rem;
                }
            }
            else
            {
                if(i==rem)
                {
                    O_max=O_max*10+rem;
                }

            }
        }
    }

    printf("\n E_max = %d",E_max);
    printf("\n O_max = %d",O_max);
*/




  /*  int num,Esum=0,Osum=0,i,NN,rem;
    printf("Enter the number :");
    scanf("%d",&num);

    //NN=num;

    //for(i=9;i>=0;i--){
        //num=NN;
        for(;num!=0;num=num/10){
            rem=num%10;
            if(rem%2==0){
                //if(i==rem){
                    Esum=Esum+rem;
                //}
            }
            else{
                //if(i==rem){
                    Osum=Osum+rem;
                //}
            }
        }
    //}
    printf("\nThe Esum = %d",Esum);
    printf("\nThe Osum =% d",Osum);


*/

    ///21

     //FInd The Power of Entered Number

   /* int base,Expo,power=1;
    printf("Enter your Base And Power");
    scanf("%d%d",&base,&Expo);

    for(int i=1;i<=expo;i++)
    {
        power=power*base;
    }
    printf("The Power = %d",power);
*/

    ///13
    //WAP To enter any number Through Keyboard and Revese it
    //also find the last digit and First Digit And display revese number 1st and
    //last digit with exchange number

    int num,LD,FD,rem,rev=0,count=0,i,NN=0,temp;
    printf("\nEnter the Number");
    scanf("%d",&num);

    //Finding Last Digit
    LD=num%10;

    //For Reverse number
    for(;num!=0;num=num/10){
        rem=num%10;
        count++;
        rev=rev*10+rem;
    }

   //Finding Fist Digit
    if(num==0){
            FD=rem;
        }
    printf("\nThe first Digit=%d \nLast digit=%d",FD,LD);
    printf("\nThe reverse number is %d",rev);
    printf("\nThe count is %d",count);

   /* //Swapping
    printf("\nBefore Swap :");
    printf("\nThe first And Last digit are %d %d",FD,LD);

    //After Swapping
    temp=FD;
    FD=LD;
    LD=temp;

    printf("\nAfter Swap :");
    printf("\nThe first And Last digit are %d %d",FD,LD);
*/

    for(i=1;rev!=0;i++){
        rem=rev%10;
        if(rem==FD && i==1){
            NN=NN*10+LD;
        }
        else if(rem==LD && i==count){
            NN=NN*10+FD;
        }
        else{
            NN=NN*10+rem;
        }

        rev=rev/10;
    }
    printf("\nThe new number is %d",NN);





    //QUE 25: WAP of Enter Any 10 Number through keyboard an
    //find the even count odd COunt also even sum and odd sum
/*
    int num,Esum=0,Ecount=0,Ocount=0,Osum=0,i;
    printf("Enter the Number");
    for(int i=1;i<=10;i++){
        scanf("%d",&num);
         if(num%2==0){
            Esum=Esum+num;
            Ecount++;
        }
        else{
            Osum=Osum+num;
            Ocount++;
        }
    }
    printf("\nThe sum Of Evem = %d",Esum);
    printf("\nThe count of Even = %d",Ecount);
    printf("\nThe sum Of Odd = %d",Osum);
    printf("\nThe Count of Odd = %d",Ocount);

    */

    ///Find All Factors Of Numbers:
    ///22
    #include<stdio.h>
    int main()
    { int num,fact=1,i,rem;
    printf("\nenter any number");
    scanf("%d",&num);
    for(;num!=0;num=num/10)
    {
        rem=num%10;
        i=1;
        fact=1;
       while(i<=rem){
             fact=fact*i;
             i++;
         }
        printf("\nThe Fact = %d",fact);
    }
    return 0;

    }

    return 0;
}

///18 Friquency Of Eech Digit
#include<stdio.h>
int main()
{
    int num,i,count=0,rem,NN;
    printf("Enter the number");
    scanf("%d",&num);
    NN=num;
    for(i=0;i<10;i++)
    {
        num=NN;
        count=0;
        for(;num!=0;num=num/10)
        {
            rem=num%10;
            if(rem==i)
            {
                count++;
            }
        }
        if(count>0)
            {
                printf("\nthe  i=%d count=%d ",i ,count);
        }
    }
}



 Write a C program to find one's complement of a binary number.
 Write a C program to find two's complement of a binary number.
 Write a C program to convert Binary to Octal number system.
 Write a C program to convert Binary to Decimal number system.
 Write a C program to convert Binary to Hexadecimal number system.
 Write a C program to convert Octal to Binary number system.
 Write a C program to convert Octal to Decimal number system.
 Write a C program to convert Octal to Hexadecimal number system.
 Write a C program to convert Decimal to Binary number system.
 Write a C program to convert Decimal to Octal number system.
 Write a C program to convert Decimal to Hexadecimal number system.
 Write a C program to convert Hexadecimal to Binary number system.
 Write a C program to convert Hexadecimal to Octal number system.
 Write a C program to convert Hexadecimal to Decimal number system.
 Write a C program to print Pascal triangle upto n rows
