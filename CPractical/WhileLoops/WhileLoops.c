#include <stdio.h>
#include <stdlib.h>

int main()
{
    //QUE 1:Wap TO Calculate Count Of digit of Entered Number

  /*  int num,count=0;
    printf("Enter the Number ");
    scanf("%d",&num);

    while(num!=0){
        count++;
        num=num/10;
    }
    printf("The Count =%d",count);

//=====================================================================================================

*/

    //QUE 2 FInd The Power of Entered Number

   /* int base,Expo,power=1;
    printf("Enter your Base And Power");
    scanf("%d%d",&base,&Expo);
    int i=1;
    while(i<=Expo){
        power=power*base;
        i++;
    }
    printf("The Power = %d",power);
    */


//=====================================================================================================

    //QUE 3: WAP To count the digit of Entered Number and Find The power for Every digit of that number and take Exponent as Count of that number

/*  int count=0,num,Expo,NN,rem,i=1,sum=0,power=1;

    printf("\nEnter your Number");
    scanf("%d",&num);
    NN=num;

    while(num!=0){
        count++;
        num=num/10;
    }
    printf("\nThe Count is = %d",count);
    Expo=count;

    num=NN;
    while(num!=0){
            rem=num%10;
            while(i<=Expo){
                power=power*rem;
                i++;
            }
            sum=sum+power;
            num=num/10;
            i=1;
            power=1;
        }

    printf("\nThe sum is=%d",sum);
*/


//=====================================================================================================

    //QUE 4: WAP to enter the any number and find its factorial

 /*   int num,fact=1,i=1;
    printf("\nenter any number");
    scanf("%d",&num);

    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("\nThe Fact = %d",fact);
*/
    //another method
/*int num,fact=1;

    printf("\nEnter the number");
    scanf("%d",&num);

    while(num>=1){
        fact=fact*num;
        num--;
    }
    printf("The fact = %d");
*/



//=====================================================================================================

    //QUE 5 : WAP Enter any number and ppriint it multiplication table

  /*  int num,mul,i=1;
    printf("\nEnter any number");
    scanf("%d",&num);

    while(i<=10){
        mul=num*i;
        printf(" %d * %d = %d\n",num,i,mul);
        i++;
    }

    */


//=====================================================================================================

    //QUE 5: WAP TO display numbers From 1-10 and add it Using While Loop

/*
    int i=1,sum=0;
    while(i<=10){
        printf("%5d",i);
        sum=sum+i;
        i++;
    }
    printf("\n%d",sum);
*/


//=====================================================================================================

    //QUE 6 : WAP Add Alternate Digit From /Through Keyboard number using for loop

  /*  int num,rem,flag=0,sum1=0,sum2=0;
    printf("Enter Your Number :");
    scanf("%d",&num);

    for(;num!=0;num=num/10){
            rem=num%10;
            if(flag==0){
                sum1=sum1+rem;
                flag=1;
                //break We cant use here break becuse
            }
            else{
                sum2=sum2+rem;
                flag=0;
                //break;
            }
    }
    printf("%d  %d",sum1,sum2);

    */


//=====================================================================================================

    //WAP To Calculate Frequency of entered number
/*
    int num,i,count=0,rem,NN;
    printf("Enter the number");
    scanf("%d",&num);
    NN=num;
    i=0;
    while(i<10)
        {
            num=NN;
            count=0;
            while(num!=0)
            {
                rem=num%10;
                if(rem==i)
                {
                    count++;
                }
                num=num/10;
            }
            if(count>0)
            {
                printf("\nthe  i=%d count=%d ",i ,count);
            }
            i++;
    }
*/


//=====================================================================================================

///30

    //WAP To calculate The Armostring Number
/*
    int num,count=0,rem,i,power,sum=0,NN;
    printf("\nEnter The number :");
    scanf("%d",&num);
    NN=num;
    //For Count
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("\nThe count =%d",count);

    //For Calculate remender
    num=NN;
    while(num!=0)
    {
        i=1,power=1;
        rem=num%10;
        while(i<=count)
        {
            power=power*rem;
            i++;
        }
        sum=sum+power;
        num=num/10;
    }
    printf("\nThe Sum = %d",sum);
    num=NN;
    if(sum==num)
    {
        printf("\nThe Number is Armstrong");
    }
    printf("\nthe sum is not Equal to num So Its Not Armstring");
   return 0;
*/


//=====================================================================================================
///31

    //Calculate armstrong number number from 1-to 1000
/*
    int i,rem,j,power,sum=0,count,NI;

    for(i=1;i<=1000;i++)
    {
        NI=i;
        count=0;
        while(NI!=0)
        {
            count++;
            NI=NI/10;
        }
        //printf("\nThe Count =%d",count);
        NI=i;
        sum=0;
        while(NI!=0)
        {
            rem=NI%10;
            j=1,power=1;
            while(j<=count)
            {
                power=power*rem;
                j++;
            }
            sum=sum+power;
            NI=NI/10;
        }
        if(sum==i)
        {
            printf("\n %d Armstrong",i);
        }
        else
        {
            printf("\n %d Not armstrong",i);
        }
    printf(" The sum = %d",sum);
    }

    return 0;
}
*/

//=====================================================================================================

    //QUE finding the factors
/*
    int num;

    printf("Enter The number");
    scanf("%d",&num);
    printf("The facters of Number are:");
    int i=1;
    while(i<=num)
    {
        if(num%i==0)
        {
            printf("\n%d",i);
        }
        i++;
    }
*/


//=====================================================================================================

    //QUE finding the factors for digit of entered number
/*
    int num,rem,i;
    printf("Enter your number");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        i=1;
        printf("\nThe Facters for Remender = %d",rem);
        while(i<=rem)
        {
            if(rem%i==0)
            {
                printf("%5d",i);
            }
            i++;
        }
        num=num/10;
    }
   */


//=====================================================================================================

    //QUE Find Factorial Using Loop
/*
    int num,fact=1,i;
    printf("Enter the number");
    scanf("%d",&num);

    i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The Factorial of number %d  = %d ",num,fact);

*/


//=====================================================================================================

///26

    //QUE Write a C program to check whether a number is Prime number or not.

  /*  int num,i,isprime;
    printf("Enter the number");
    scanf("%d",&num);
    isprime=1;
    if(isprime<=1)
    {
        isprime=1;
    }
    for(int j=1;j<=num;j++)
    {
         i=2;
        while(i<=num-1)
        {
            if(num%i==0)
            {
                isprime=0;
            }
            i++;
        }
    }
     if(isprime)
        {
            printf("\nthe number %d is primee",num);

        }
    else
        {
            printf("\nThe number %d is not prime ",num);
        }

*/

//=====================================================================================================

///27

    //QUE Write a C program to check whether a number is Prime number or not.in range
/*
    int num,isprime,i,j;
    printf("\nEnter the Number");
    scanf("%d",&num);

    isprime=1;

    if(isprime<=1)
    {
        isprime=1; //true
    }
    for(i=2;i<=num;i++)
    {
        isprime=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
            }
        }
        printf("\npriime numbers are");
        if(isprime)
        {
            printf(" %d ",i);
        }
        else
        {
            printf(" %d ",i);
        }

    }
        printf("\n");

*/


//=====================================================================================================

///32
     // QUE WAP to calculate numbers Factors And Cheak it is Perfect or not :

    /*    int num,i,sum=0;
        printf("Enter the number");
        scanf("%d",&num);
        printf("\nThe Factors of number Are :");
        for(i=1;i<=(num/2);i++)
        {
            if(num%i==0)
            {
                printf(" %d",i);
                sum=sum+i;
            }
        }

        printf("\n The Sum of factors is %d ",sum);
        if(sum==num)
        {
            printf("\nThe Number %d is Perfect ",num);
        }
        else
        {
            printf("\n The Number %d is Not Perfeect",num);
        }
*/


//=====================================================================================================

///29

        //WAP To enter number and find its factorial and print prime number from the factorial
 /*       int num,i,j,flag;
        printf("\nEnter the number");
        scanf("%d",&num);
        for(i=1;i<=(num/2);i++)
        {
            if(num%i==0)
            {
                flag=1;
                if(i==1)
                {
                    flag=0;

                }
                for(j=2;j<=i/2;j++)
                {
                    if(i%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    printf(" %d",i);
                }
            }
        }


//=====================================================================================================

*/
        //WAP TO calculate the Missing Numbers

        int num,i,rem,NN,flag ;
        printf("Enter the Number");
        scanf("%d",&num);

        NN=num;
        for(i=0;i<=9;i++)
        {
            num=NN;
            flag=1;
            while(num!=0)
            {
                rem=num%10;
                if(rem==i)
                {
                    flag=0;
                    break;
                }
                num=num/10;
            }
            if(flag==1)
            {
                printf("\n %d",i);
            }
        }


//=====================================================================================================

///34
        //QUE WAP To calculate strong number

 /*
        int num,rem,fact,i,sum=0,NN;
        printf("\nEnter the number");
        scanf("%d",&num);
        NN=num;
        while(num!=0)
        {
            rem=num%10;
            fact=1;
            i=1;
            while(i<=rem)
            {
                fact=fact*i;
                i++;
            }
            sum=sum+fact;
            num=num/10;
        }
        printf("The Sum Of all Factorial is = %d",sum);


        if(sum==NN)
        {
            printf("\nThe number %d is Strong Number",NN);
        }
        else
        {
            printf("\nThe number %d is Not Strong Number",NN);
        }

*/
        return 0;
}



//=====================================================================================================

