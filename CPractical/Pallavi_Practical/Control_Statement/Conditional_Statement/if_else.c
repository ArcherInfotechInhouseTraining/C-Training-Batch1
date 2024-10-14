
/*
// 1.Check no is divisible by both 5 and 11 or not

#include<stdio.h>
int main()
{
    int num;

    printf("\n ENter any number: ");
    scanf("%d",&num);

    if( (num % 5 == 0) && (num % 11 ==0) )
    {
        printf("\n %d is divisible by both 5 and 11",num);
    }

    else
    {
        printf("\n %d is not divisible by both 5 and 11",num);
    }

    return 0;
}

*/

/*
// 2.Calculate total price ,discount and final bill

#include<stdio.h>
int main()
{
    float D,FB;
    int p1,p2,TP,p3;
    printf("\n Enter any 3 prices of items : ");
    scanf("%d %d %d",&p1,&p2,&p3);

    TP = p1 + p2 + p3;

    if( TP > 500)
    {
        D = TP * 0.07;
    }
    else
    {
        D = TP * 0.03;
    }

    FB = TP - D;

    printf("\n Total price is : %d",TP);
    printf("\n Total Discount is : %f",D);
    printf("\n Final Bill is : %f",FB);

    return 0;
}

*/

// ******************************if() else Nesting************************************

/*
// 3.check num is divisible by 3 or 5 or by both or not

#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    if(num % 3 == 0)
    {
        if(num % 5 == 0)
        {
            printf("\n Divisible by both 3 and 5");
        }
        else
        {
            printf("\n Divisible by 3 only");
        }
    }

    else
    {
        if(num % 5 == 0)
        {
            printf("\n Divisible by 5 only");
        }
        else
        {
            printf("\n Not divisible by both 3 and 5");
        }
    }

    return 0;
}

*/

/*
// 4. find max no

#include<stdio.h>
int main()
{
    int x,y,z;

    printf("\n Enter any 3 no : ");
    scanf("%d %d %d",&x,&y,&z);

    if(x > z)
    {
        if(x > y)
        {
            printf("\n %d is max value",x);
        }
    }

    else
    {
        if(y > z)
        {
            printf("\n %d is max value",y);
        }
        else
        {
            printf("\n %d is max value",z);
        }
    }

    return 0;
}
*/

/*

// 5.Check enterd character is Ucase or Lcase or Digit or special symbole

#include<stdio.h>
int main()
{
    char c;

    printf("\n Enter any character : ");
    scanf("%c",&c);

    if( ( c >= 'A') && ( c <= 'Z'))
    {
        printf("\n Enterd character is Ucase");
    }

    else
    {
        if( ( c >= 'a') && ( c <= 'z') )
        {
            printf("\n Enterd character is Lcase");
        }

        else
        {
            if( ( c >= '0') && ( c <= '9') )
            {
                printf("\n Enterd character is digit");
            }

            else
            {
                printf("\n Enterd character is special symbole");
            }
        }
    }

    return 0;
}


*/

/*
//6. Enter 4 digit no and display a no whose digits are 2 greater than the corresponding digits of entered no.

#include<stdio.h>
int main()
{
    int num,r,r1,sum=0,new_number=0;

    printf("\n Enter any 4 digit number : ");
    scanf("%d",&num);

    while(num>0)
    {

        r = num % 10;
        sum = r + 2;

        if(r == 8)
        {
            sum = 0;
        }

        if(r == 9)
        {
            sum = 1;
        }
        //printf("%d",sum);

        num = num / 10;

        new_number = new_number * 10 + sum;
    }

    printf("\n ");

    while(new_number > 0)
    {
        r1 = new_number % 10;
        printf("%d",r1);
        new_number = new_number / 10;
    }

    return 0;
}
*/

/*
//7.Divide amount among 3 friends
#include<stdio.h>
int main()
{
    int Amount,a,b,c;

    printf("\n Enter amount : ");
    scanf("%d",&Amount);

    b = Amount / 3;
    a = b/2;
    c = 2*b;
    b = Amount - (a+c);

    printf("\n a is : %d \n b is : %d \n c is : %d",a,b,c);

    return 0;
}
*/

/*
//8.Enter 5 digit no and calculate the sum of first and second last no.

#include<stdio.h>
int main()
{
    int num , r ,SecondLast_num ,First_num , sum = 0 ;

    printf("\n Enter any five digit number : ");
    scanf("%d",&num);

    num = num / 10;
    r = num % 10;

    SecondLast_num = r;

    while(num > 10)
    {
        num = num / 10;
    }

    First_num = num;

    sum = First_num + SecondLast_num;

    printf("\n Sum is : %d",sum);

    return 0;
}

*/

/*

//9.Check a<50 and a<b

#include<stdio.h>
int main()
{
    int a,b;

    printf("\n Enter the value of a and b : ");
    scanf("%d %d",&a,&b);

    if(a < 50)
    {
        if( (a < 50) && (a < b))
        {
            printf("\n %d is less than 50 and %d",a,b);
        }
        else
        {
            printf("\n %d is less than 50 only",a);
        }
    }
    else
    {
        if(a < b)
        {
            printf("\n %d is less than");
        }
        else
        {
            printf("\n %d is greater  than 50 and %d",a,b);
        }
    }
    return 0;
}
*/

/*
//10. Calculate platinum , gold,silver and cash in hand

#include<stdio.h>
int main()
{
    int amount,p,r,r1,g ,s,ch;

    printf("\n Enter Amount : ");
    scanf("%d",&amount);

    p = amount / 8000;
    r = amount % 8000;
    g = r / 4000;
    r1 = r % 4000;
    s = r1 / 700;
    ch = r1 % 700;




    printf("\n You can purchase %d grams of platinum",p);
    printf("\n You can purchase %d grams of gold",g);
    printf("\n You can purchase %d grams of silver",s);
    printf("\n Cash in hand is %d ",ch);

    return 0;
}
*/


//calculate notes in given amount

#include<stdio.h>
int main()
{
    int amount , f ,f1 , t,t1 , o , fif;

    printf("\n Enter total Amount : ");
    scanf("%d",&amount);

    f = amount / 500;
    f1 = amount % 500 ;


    printf("\n in %d amount there are total %d no of 500 notes",amount,f);

    if(f1 > 200)
    {
        t1 = f1 / 200;
        printf("\n in %d amount there are total %d no of 200 notes",amount,t1);
        t1 = f1 % 200;
    }
    if(t1 >= 100 && t1 < 200)
    {

    }



    return 0;
}
