#include <stdio.h>
#include <stdlib.h>

int main()
{
    //QUE 1: simple Switch case problem for add mul and div

  /*  int num1,num2,choise,ans;

    printf("\n------WEL-COME-------");
    printf("\n--------MENU---------");
    printf("\n 1.ADD \t 2.SUB \t 3.MUL \t 4.DIV");
    printf("\nEnter your choise");
    scanf("%d",&choise);
    printf("\nEnter the numbers :");
    scanf("%d %d",&num1,&num2);

    switch(choise)
    {
        case 1:
            ans=num1+num2;
            printf("\nThe Add = %d ",ans);
            break;

        case 2:
            ans=num1-num2;
            printf("\nThe sub =%d ",ans);
            break;

        case 3:
            ans=num1*num2;
            printf("\nThe Mul= %d ",ans);
            break;

        case 4:
            ans=num1/num2;
            printf("\nThe Mul = %d ",ans);

        default:
            printf("\n INVALID CHOISE");
    }
    */
//================================================================================================================================================
    //QUE 2 : switch case program using while loop condition
/*
    int num1 ,num2,ans;
    int choise,i;

    i=1;
    while(i<=4)
    {
        printf("\n-----WEL-COME-----");
        printf("\n------MENU--------");
        printf("\n 1.ADD \t 2.SUB \t 3.MUL \t 4.DIV ");

        printf("\nEnter Your choise");
        scanf("%d",&choise);

        printf("\nEnter Your Two number :");
        scanf("%d%d",&num1,&num2);

        switch(choise)
        {
            case 1:
                ans=num1+num2;
                break;

            case 2:
                ans=num1-num2;
                break;

            case 3:
                ans=num1*num2;
                break;

            case 4:
                ans=num1/num2;
                break;

            default:
                printf("\nYou Entered INVALID CHOISE");
        }
        i++;
        printf(" \n%d",ans);
    }
*/
//===========================================================================================================================================
    //QUE 3 : switch case program using infinite while loop(using exit(0),stop)

/*
    int num1 ,num2,ans;
    int choise,i;

    while(1)
    {
        printf("\n-----WEL-COME-----");
        printf("\n------MENU--------");
        printf("\n 1.ADD \t 2.SUB \t 3.MUL \t 4.DIV ");

        printf("\nEnter Your choise");
        scanf("%d",&choise);

        printf("\nEnter Your Two number :");
        scanf("%d%d",&num1,&num2);

        if(choise>=5)
        {
            break;
        }
        switch(choise)
        {
            case 1:
                ans=num1+num2;
                break;

            case 2:
                ans=num1-num2;
                break;

            case 3:
                ans=num1*num2;
                break;

            case 4:
                ans=num1/num2;
                break;

            case 5:
                exit(0);
        }

        if(choise>=1 && choise<=4)
        {
            printf("ans = %d ",ans);
        }
    }

*/
//==================================================================================================================================================

    //QUE 4 : using characters
/*
    int num1,num2,ans;
    char choise;

    printf("\n-------WEL-COME-------");
    printf("\n---------MENu---------");
    printf("\n A|a. ADD\t B|b.SUB \t C|c.MUL \t D|d.DIV \t");

    printf("\nEnter The Choise :");
    scanf("%c",&choise);

    printf("Enter your Two Numbers :");
    scanf("%d%d",&num1,&num2);

    switch(choise)
    {
        case 'A':
        case 'a':
            ans=num1+num2;
            break;

        case 'B':
        case 'b':
            ans=num1-num2;
            break;

        case 'C':
        case 'c':
            ans=num1*num2;
            break;

        case 'D':
        case 'd':
            ans=num1/num2;
            break;

        default:
            printf("\n----ENTERD INVALD CHARACTER-----");
    }
    printf("ans = %d",ans);

*/
//===========================================================================================================================================
   // QUE 5 using characters while loop

/*
   int num1,num2,ans;
   char choise;

   while(1)
   {
       printf("\n--------WEL_COME------");
       printf("\n---------MENU---------");
       printf("\nA|a ADD \t B|b SUB \t C|c MUL \t D|d DIV");

       printf("\nEnter Your Choise :");
       scanf("%c",&choise);

       printf("\nEnter Your Two Numbers :");
       scanf("%d%d",&num1,&num2);

       if(choise>='E' || choise>='e')
       {
           break;
       }

       switch(choise)
       {
            case 'A':
            case 'a':
                ans=num1+num2;
                break;

            case 'B':
            case 'b':
                ans=num1-num2;
                break;

            case 'C':
            case 'c':
                ans=num1*num2;
                break;

            case 'D':
            case 'd':
                ans=num1/num2;
                break;

            case 'E':
            case 'e':
                exit(0);
       }

        if((choise>='A' || choise >='a') && (choise<='D' || choise <='d'))
        {
             printf("ans = %d",ans);
        }
   }
   */
//=======================================================================================================
   /*
   QUE 6 program to read weekday number and print weekday name using switch.
            This program will read weekday number and print its corresponding week name switch case statement in C language.


    int choise;
    while(1)
    {
        printf("\n---------MENU--------");
        printf("\n 1.Monday\t 2.Tuesday\t 3.Wed\t 4.thur\t 5.friday\t 6.sat\t 7.sunday");
        printf("\nEnter Your Choise");
        scanf("%d",&choise);
        if(choise>=8)
        {
            break;
        }
        switch(choise)
        {
            case 1:
                printf("Moday");
                break;

            case 2:
                printf("Tuesday");
                break;

            case 3:
                printf("wed");
                break;

            case 4:
                printf("thursday");
                break;

            case 5:
                printf("friday");
                break;

            case 6:
                printf("Saturday");
                break;

            case 7:
                printf("Sunday");
                break;

            case 8:
                exit(0);
        }
    }

*/
//====================================================================================

 /*   QUE 7 C program to read gender (M/F) and print corresponding gender using switch.
            This program will read gender in single character like 'M' or 'F'
            and print its corresponding complete word "Male" or "Female" using switch case statement in C language

    char choise;
    while(1)
    {
        printf("\nGENDER");
        printf("\nM.Male\t F.Female");

        printf("\n Enter Your Choise");
        scanf("%c",&choise);

        switch(choise)
        {
            case 'M':
            case 'm':
                printf("Male");
                break;

            case 'F':
            case 'f':
                printf("Female");
                break;

            default:
                printf("INVALID CHOISE");
                break;
            }
    }

*/
//==========================================================================================================================================
/*
    QUE 8 :C program to check whether a character is VOWEL or CONSONANT using switch.
    This program will read a character and check whether it is VOWEL or CONSONANT using switch case statement in C language.

    char choise;
    printf("\n---choises---");
    printf("A|a\t E|e\t I|i\t O|o\t U|u");
    printf("\n Enter Your Choise");
    scanf("%c",&choise);

    if((choise>='A'&& choise<='Z') || (choise>='a' && choise<='z'))
    {
        switch(choise)
        {
            case 'A':
            case 'a':
                printf("vowel");
                break;

            case 'E':
            case 'e':
                printf("vowel");
                break;

            case 'I':
            case 'i':
                printf("vowel");
                break;

            case 'O':
            case 'o':
                printf("vowel");
                break;

            case 'U':
            case 'u':
                printf("vowel");
                break;

            default:
                printf("\nConstat");

        }
    }
    else
    {
        printf("INVALID CHOISE");
    }

*/
//====================================================================================================
/*
    QUE 9:C program to check whether number is EVEN or ODD using switch.
    This program will read an integer number and check whether it is
    EVEN or ODD using switch case statement in C language.

    int num,choise;
    printf("1.Even\t 2.Odd\t");

    printf("\n Enter your choise");
    scanf("%d",&choise);

    switch(choise)
    {
        case 1:
            printf("\nEnter the Number");
            scanf("%d",&num);
            if(num%2==0)
            {
                printf("\nEVEN");
            }
            break;

        case 2:
            printf("\nEnter the Number");
            scanf("%d",&num);
            if(num%2!=0)
            {
                printf("\nODD");
            }
            else
            {
                printf("Exit");
            }
            break;

        default:
            printf("\nINVALID CHOISE");
    }
*/

//=============================================================================================================================================================

/*    QUE 10 :C program to find number of days in a month using switch case.
    This program will read month value and print total number of days in input month in C language.

    int choise;
    while(1)
    {
        printf("\n-----WEL-COME-----");
        printf("\n 1.jan\t 2.feb\t 3.mar\t,4.april\t 5.may\t \n6.jun\t 7.jul\t 8.aug\t 9.sep\t 10.oct\t 11.nov\t 12.dec");

        printf("\nEnter your choise");
        scanf("%d",&choise);
        if(choise>=13)
        {
            break;
        }
        switch(choise)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("31 Days");
                break;

            case 2:
            case 4:
            case 6:
            case 9:
            case 11:
                printf("30 Days");
                break;

            case 13:
                exit(0);
        }
    }

*/
    return 0;
}


/*
unsolved

C program to find number of days in a month using switch case.
This program will read month value and print total number of days in input month in C language.

*/
