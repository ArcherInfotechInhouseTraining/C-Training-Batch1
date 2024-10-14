
//*******************************************For Loop **************************************************************
/*
//print 5 time hii
#include<stdio.h>
int main()
{
    int i;
    for(i=0 ; i<5 ; i++)
    {
        printf("\n hii");
        printf("\n %d",i);
    }
    return 0;
}
*/

/*
//Display even or odd no's from 1-25

#include<stdio.h>
int main()
{
    int i;

    printf("\n List of original no's : ");
    for( i=1 ; i<=25 ; i++)
    {
        printf(" %5d ",i);
    }

    printf("\n\n List of Even no's : ");
    for( i=1 ; i<=25 ; i++)
    {
        if( i % 2 == 0)
        {
            printf("%5d",i);
        }
    }

    printf("\n List of odd no's : ");
        for( i=1 ; i<=25 ; i++)
    {
        if( i % 2 != 0)
        {
            printf(" %5d",i);
        }
    }
    return 0;
}
*/

/*

//1.print natural no's from 1 to n

#include<stdio.h>
int main()
{
    int n;

    printf("\n Enter value of n : ");
    scanf("%d",&n);

    printf("\n List of natural no's from 1 to n :");
    for( int i=1 ; i<=n ; i++)
    {
        printf("\n %d",i);
    }
    return 0;
}
*/

/*
//2.print reverse no's from n to 1
#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number: ");
    scanf("%d",&num);
    for(int i=num ; i>=1 ; i-- )
    {
        printf("\n %d",i);
    }
    return 0;
}
*/
/*
//3.print all alphabates from a to z

#include<stdio.h>
int main()
{
    for(char ch = 65 ; ch <= 90 ; ch++)
    {
        printf(" %5c",ch);
    }
    return 0;
}
*/

/*
//4.print even no's between 1 to 100
#include<stdio.h>
int main()
{
    for(int i=1 ; i<=100 ; i++)
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}
*/

/*
//4.print odd no's between 1 to 100
#include<stdio.h>
int main()
{
    printf("\n List of odd no' between 1 to 100 is :");
    for(int i=1 ; i<=100 ; i++)
    {
        if(i%2!=0)
        {
            printf("\n %d",i);
        }
    }
    return 0;
}

*/

/*

//5.Print sum of all natural no's between 1 to n
#include<stdio.h>
int main()
{
    int n ;
    int sum=0;

    printf("\n Enter n: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        sum = sum+i;

    }

   printf("\n sum is : %d",sum);
    return 0;
}
*/

/*
//6.Print sum of all even no's between 1 to n
#include<stdio.h>
int main()
{
    int n ;
    int sum=0;

    printf("\n Enter n: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        if( i%2==0)
        {
            sum = sum+i;
        }

    }

   printf("\n sum is : %d",sum);
    return 0;
}
*/

/*

//7.Print sum of all odd no's between 1 to n
#include<stdio.h>
int main()
{
    int n ;
    int sum=0;

    printf("\n Enter n: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        if( i%2!=0)
        {
            sum = sum+i;
        }

    }

   printf("\n sum is : %d",sum);
    return 0;
}

*/

/*
//8.print table of any number
#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    printf("\n Table of %d is : ",num);

    for(int i=1 ; i<=10 ; i++)
    {
        printf("\n %d",(num*i));
    }
    return 0;
}
*/

/*
//9.count no of digits in a number
#include<stdio.h>
int main()
{
    int num;
    int count=0;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(int i=num ; i>0 ; i=i/10)
    {
        count = count+1;
    }
    printf("\n no of digits in %d are : %d",num,count);

    return 0;
}

*/

/*
//10.print 1 and last digit of no

#include<stdio.h>
int main()
{
    int num,i,j,last_digit;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(i=num ; i>=num ; i = i%10)
    {

    }
    printf("\n Last digit is: %d ",i);

    for(j=num ; j>=10 ; j = j/10)
    {

    }
    printf("\n First digit is: %d ",j);


    return 0;
}
*/

/*
//11.print sum of first and last digit of no

#include<stdio.h>
int main()
{
    int num,i,j,sum;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(i=num ; i>=num ; i = i%10);

    printf("\n Last digit is: %d ",i);

    for(j=num ; j>=10 ; j = j/10)
    {

    }
    printf("\n First digit is: %d ",j);

    sum = i+j;
    printf("\n Sum is: %d",sum);


    return 0;
}

*/


/*
//12. swap first and last digit of no

#include<stdio.h>
int main()
{
    int num,i,last_digit,first_digit,temp;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    last_digit = num%10;
    printf("\n Last digit is: %d ",last_digit);

    for(i=num ; i>=10 ; i = i/10);

    first_digit = i;
    printf("\n First digit is: %d ",i);

    printf("\n Before swap number is : %d %d",first_digit,last_digit);

    temp = first_digit;
    first_digit = last_digit;
    last_digit = temp;

    printf("\n After swap number is : %d %d",first_digit,last_digit);



    return 0;
}

*/

/*
//13.calculate sum of digits of number

#include<stdio.h>
int main()
{
    int num,r;
    int sum=0;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(int i=num ; i>0 ; i=i/10)
    {
        r = i%10;
        sum = sum+r;
    }

    printf("\n sum of digits of number %d is : %d",num,sum);
    return 0;
}
*/

/*
//14.calculate product of digits of number

#include<stdio.h>
int main()
{
    int num,r;
    int pro=1;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(int i=num ; i>0 ; i=i/10)
    {
        r = i % 10;
        pro = pro * r;

    }

    printf("\n Product of number %d of digits is : %d",num,pro);

    return 0;
}
*/


/*

//15.print reverse of a number

#include<stdio.h>
int main()
{
    int num,r,i;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(i=num ; i>0 ; i=i/10)
    {
        r = i % 10;
        printf("%d",r);
    }
    return 0;
}
*/

/*
//16.check palindrom or not

#include<stdio.h>
int main()
{
    int num , r;
    int sum = 0;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(int i=num ; i>0 ; i=i/10)
    {
        r = i % 10;
        sum = sum * 10 + r;
    }

    if( num == sum)
    {
        printf("\n %d is palindrom number",num);
    }
    else
    {
        printf("\n %d is not palindrom number",num);
    }
    return 0;
}

*/


//17.find frequency of each digit in a number

/*
//for single digit

#include<stdio.h>
int main()
{
    int num , d ,r , count=0;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    printf("\n Enter a digit to check frequency : ");
    scanf("%d",&d);

    for( ; num!=0 ; num=num/10)
    {
        r = num % 10;

        if(r == d)
        {
            count++;
        }
    }
    printf("\n frequency of digit %d is : %d",d,count);
    return 0;
}
*/

/*
//check frequency of all digits

#include<stdio.h>
int main()
{
    int num , nn , count=0,r;

    printf("\n Enter any number : ");
    scanf("%d",&num);
    //temp = num;
    nn = num;
    //for( ; temp!=0 ; temp = temp/10 )
    for(int i=1 ; i<=9 ; i++)
    {
        //rem = temp % 10;
        //rem = num % 10;
        num = nn;

        for( ; num!=0 ; num = num/10)
        {

            r = num % 10;

            if(i == r)
            {
                count++;
            }

        }
       printf("\n %d frequency is : %d",i,count);
       count = 0;
    }
            return 0;
}
*/


/*
//18.Enter a number and print it in word

#include<stdio.h>
int main()
{
   int num;

   printf("\n Enter any number : ");
   scanf("%d",&num);

   if(num>=20 && num<=29)
   {
       if(num==21)
       {
           printf("\n %d : Twenty - One",num);
       }
       if(num==22)
       {
           printf("\n %d : Twenty - Two",num);
       }
       if(num==23)
       {
           printf("\n %d : Twenty - Three",num);
       }
       if(num==24)
       {
           printf("\n %d : Twenty - Four",num);
       }
       if(num==25)
       {
           printf("\n %d : Twenty - Five",num);
       }
       if(num==26)
       {
           printf("\n %d : Twenty - Six",num);
       }
   }

    return 0;
}
*/

/*
//19. print all ASCII characters with their values.

#include<stdio.h>
int main()
{
    int i=0;

  /*  for(i=0 ; i<=255 ; i++)
    {
        printf("\n %d - %c",i,i);
    }


    while(i<=255)
    {
        printf("\n %d - %c ",i,i);
        i++;
    }

    return 0;
}
*/

/*

//20.find power of no using loop

#include<stdio.h>
int main()
{
    int num , i , j , power=1;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for( i=1 ; i<=10 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            power = power*num;
        }
        printf("\n %d raise to %d is : %d",num,i,power);
        power = 1;
    }

    return 0;
}

/*

//21. Find all factors of the number
#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    printf("\n factors of no %d is : ",num);

    for(int i=num ; i<=num ; i--)
    {
        if( num%i==0)
        {
            printf("%5d",i);
        }
    }

    return 0;
}

*/

/*
//22. calculate factorial of no

#include<stdio.h>
int main()
{
    int num;
    int fact=1;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for( int i=num ; i>0 ; i--)
    {
        fact = fact * i;
    }

    printf("\n factorial of %d is : %d",num,fact);
    return 0;
}
*/


///23. Write a C program to find HCF (GCD) of two numbers.
/*
#include <stdio.h>
int main()
{
    int n1, n2, i, HCF;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {

        if(n1%i==0 && n2%i==0)
            HCF = i;
    }

    printf("HCF of %d and %d is %d", n1, n2, HCF);

    return 0;
}

*/


///24.Write a C program to find LCM of two numbers.
/*
#include<stdio.h>
int main()
{
    int n1 , n2 , max ;

    printf("\n ENter any two numbers : ");
    scanf("%d %d",&n1,&n2);

    max = (n1>n2)? n1 : n2 ;
    printf("\n max %d",max);

    while(1)
    {
        if( max%n1==0 && max%n2==0)
        {
            printf("\n LCF of %d and %d is : %d",n1,n2,max);
            break;
        }

        max++;
    }
    return 0;
}

*/

/*
//25.check number is prime or not

#include<stdio.h>
int main()
{
    int num , count=0;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    if(num == 0 || num == 1)
    {
        count=1;
    }

    for(int i=2 ; i<num ; i++)
    {
        if(num % i == 0)
        {
            count=1;
            break;
        }
    }

    if(count == 0)
    {
        printf("\n %d is prime no.",num);
    }
    else
    {
        printf("\n %d is not a prime no.",num);
    }

    return 0;
}

*/

/*

//26. print all prime nos between 1 to n

#include<stdio.h>
int main()
{
    int num , count=0;

    printf("\n Enter the number : ");
    scanf("%d",&num);

    for(int i=1 ; i<=num ; i++)
    {
        count=0;
        for(int j=2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
            {
                count ++;
                break;

            }
        }
        if(count==0)
            {
                printf("\n %d",i);
            }
    }
    return 0;
}

*/
/*
//27.Generate max no

#include<stdio.h>
int main()
{
    int num,nn,max=0,rem;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    nn = num;

    for(int i=9 ; i>=0 ; i--)
    {
        num = nn;
        for( ; num!=0 ; num=num/10)
        {
            rem = num%10;
            if( i==rem)
            {
                max = max*10+rem;
            }

        }
    }

    printf("\n max no is : %d",max);
    return 0;
}

*/

/*
//28.generate min no

#include<stdio.h>
int main()
{
    int num,nn,rem,min=0;

    printf("\n Enter any number: ");
    scanf("%d",&num);

    nn = num ;

    for(int i=0 ; i<=9 ; i++)
    {
        num = nn;

        for( ; num!=0 ; num=num/10)
        {
            rem = num%10;

            if(i==rem)
            {
                min = min*10+rem;
            }
        }
    }

    printf("\n min is : %d",min);
    return 0;
}
*/

/*
//29. generate max no of even and odd no

#include<stdio.h>
int main()
{
    int num,nn,E_max=0,E_sum=0,O_max=0,O_sum=0,rem;

    printf("\n Enyter any number : ");
    scanf("%d",&num);
    nn = num;

    for( int i=9 ; i>=0 ; i--)
    {
        num = nn;

        for( ; num!=0 ; num=num/10)
        {
            rem = num%10;

            if(rem%2==0)
            {
                if(i==rem)
                {
                    E_max = E_max*10+rem;
                    E_sum = E_sum+rem;
                }
            }
            else
            {
                if(i==rem)
                {
                    O_max = O_max*10+rem;
                    O_sum = O_sum+rem;
                }
            }
        }
    }

    printf("\n E_max is : %d and E_sum is : %d",E_max,E_sum);
    printf("\n O_max is : %d and O_sum is : %d",O_max,O_sum);
    return 0;
}

*/

/*

//29. generate min no of even and odd no

#include<stdio.h>
int main()
{
    int num,nn,E_min=0,E_sum=0,O_min=0,O_sum=0,rem;

    printf("\n Enyter any number : ");
    scanf("%d",&num);
    nn = num;

    for( int i=0 ; i<=9 ; i++)
    {
        num = nn;

        for( ; num!=0 ; num=num/10)
        {
            rem = num%10;

            if(rem%2==0)
            {
                if(i==rem)
                {
                    E_min = E_min*10+rem;
                    E_sum = E_sum+rem;
                }
            }
            else
            {
                if(i==rem)
                {
                    O_min = O_min*10+rem;
                    O_sum = O_sum+rem;
                }
            }
        }
    }

    printf("\n E_min is : %d and E_sum is : %d",E_min,E_sum);
    printf("\n O_min is : %d and O_sum is : %d",O_min,O_sum);
    return 0;
}

*/


/*
//30.Enter any 10 no's through keyboard find even count,odd count and also even sum ,odd sum

#include<stdio.h>
int main()
{
    int num,EC=0,OC=0,ES=0,OS=0;

    printf("\n Enter any 10 no's : ");
    for(int i=1 ; i<=10 ; i++)
    {
        scanf("%d",&num);
        printf("%d",num);
        if( num%2==0 )
        {
            ES = ES+num;
            EC=EC+1;
        }
        else
        {
            OS = OS+num;
            OC=OC+1;
        }

    }
    printf("\n ES : %d \n EC : %d \n OS : %d \n OC : %d",ES,EC,OS,OC);
    return 0;
}
*/


/*
//31.print 1st and last digit , reverse no ,swap 1st and last digit and print number

#include<stdio.h>
int main()
{
    int num,nn=0,FD,LD,rev=0,r,temp,count=0;

    printf("\n ENter any number: ");
    scanf("%d",&num);

    LD = num % 10;
    for( ; num!=0 ; num=num/10)
    {
        r = num%10;
        rev = rev*10+r;
        count++;
    }
    if(num==0)
    {
        FD=r;
    }

    printf("\n Reverse no is : %d ",rev);

    for(int i=1 ; rev!=0 ; i++)
    {
        r = rev % 10;

        if( r==FD && i==1)
        {
            nn = nn * 10 + LD;
        }
        else if( r==LD && i==count)
        {
            nn = nn * 10 + FD;
        }
        else
        {
            nn = nn * 10 + r;
        }

        rev = rev /10;
    }

    printf("\n First Digit is : %d",FD);
    printf("\n Last Digit is : %d",LD);
    printf("\n New No is : %d",nn);
    return 0;

}
*/

/*
//32.Write a C program to find sum of all prime numbers between 1 to n.

#include<stdio.h>
int main()
{
    int num ,sum=0, count=0;

    printf("\n Enter the number : ");
    scanf("%d",&num);

    for(int i=1 ; i<=num ; i++)
    {
        count=0;
        for(int j=2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
            {
                count ++;
                break;

            }
        }
        if(count==0)
            {
                sum = sum+i;
                printf("\n %d",i);
            }
    }
                printf("\n sum of all prime no's from 1 to %d is : %d",num,sum);

    return 0;
}
*/

//33. Write a C program to find all prime factors of a number.
/*
#include<stdio.h>
int main()
{
    int num , i , j , flag = 0 ;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(i=1 ; i<=(num/2) ; i++)
    {
        if(num%i==0)
        {
            flag=0;
            if(i==1)
            {
                flag=1;
            }
            for(j=2 ; j<=i/2 ; j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
             if(flag==0)
            {
                printf("\n %d",i);
            }
        }
    }
    return 0;
}
*/

/*
//34.WAp to check no is perfect no or not

#include<stdio.h>
int main()
{
    int num,sum=0;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(int i=1 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            sum = sum+i;
        }
    }
    if(num==sum)
    {
        printf("\n %d is perfect no ",num);
    }
    else
    {
        printf("\n %d is not a perfect no",num);
    }
    return 0;
}
*/

/*
//35.WAp to check no is strong or not
//strongno.=145:5!+4!+1!=145

#include<stdio.h>
int main()
{
    int num,fact,sum=0,temp,rem;
    printf("\n Enter any number : ");
    scanf("%d",&num);
    temp = num;

    for( ; num!=0 ; num=num/10)
    {
        rem = num%10;
        fact=1;
        for(int i=1 ; i<=rem ; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
    }
    if(temp==sum)
    {
        printf("\n %d is strong no",temp);
    }
    else
    {
        printf("\n %d is not strong no",temp);
    }
    return 0;
}
*/

/*
//36.WAp to print missing digits from enter number

#include<stdio.h>
int main()
{
    int num,i,flag,rem,temp;

    printf("\n Enter any number : ");
    scanf("%d",&num);
    temp = num;

    for(i=0 ; i<=9 ; i++)
    {
        flag = 0;
        num = temp;

        for( ; num!=0 ; num = num/10)
        {
            rem = num % 10;
            if(i==rem)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\t%d",i);
        }
    }
    return 0;
}

*/

/*
//37.Write a C program to print Fibonacci series up to n terms.
#include<stdio.h>
int main()
{
    int x=0 , y=1 , i,z , n;

    printf("\n ENter nth term : ");
    scanf("%d",&n);
    printf("\n %d \t %d",x,y);
    z = x + y;

    for(i=2 ; i<n ; i++)
    {
        printf("\t %d ",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}
*/

//38.


//******************************************** while loop ************************************************

/*

// 1.WAP to count the digits in a number and add every digit resto count  op:123=1*3+2*3+3*3=36

#include<stdio.h>
int main()
{
        int num ,r, temp , pow = 1 ,  sum = 0 , count = 0 , i = 1 ;
        printf("\n Enter any number : ");
        scanf("%d",&num);

        temp = num;

        while( num != 0 )
        {
            count++;
            num = num / 10 ;
        }

        num = temp;

        printf("\n %d count is : %d",num,count);

        while( num != 0)
        {

            r = num % 10;

            while( i <= count)
            {
                pow = pow * r;
                i++;
            }
           sum = sum + pow;
           num = num / 10;
           i = 1;
           pow = 1;
        }

     printf("\n sum is : %d",sum);
        return 0;
}

*/

/*
// 2. WAP to calculate the power of x raise to  y

#include<stdio.h>
int main()
{
    int x , y , i=1 , power=1 ;

    printf("\n ENter  value of x and y : ");
    scanf("%d %d",&x,&y);

    while(i <= y)
    {
        power = power * x;
        i++;
    }

    printf("\n %d raise to %d is : %d",x,y,power);
    return 0;
}
*/

/*
// 3. calculate factorial of a number

#include<stdio.h>
int main()
{
    int num , fact=1;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        fact = fact * num;
        num--;
    }

    printf("\n factorial  is : %d",fact);
    return 0;
}


// 2 way

#include<stdio.h>
int main()
{
    int num,fact=1,i=1;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    while(i<=num)
    {
        fact = fact * i;
        i++;
    }

    printf("\n factorial of %d is : %d",num,fact);
    return 0;
}
*/

/*
// 3. display table of entered number

#include<stdio.h>
int main()
{
    int num,i=1;

    printf("\n Enter any value : ");
    scanf("%d",&num);

    while(i<=10)
    {
        printf("\n %d * %d : %d",num , i , (num*i));
        i++;
    }
    return 0;
}
*/

/*
// 4. display n , sq(n) and cu(n) upro 10

#include<stdio.h>
int main()
{
    int i=1;

    while(i<=10)
    {
        printf("\n \t %d \t %d \t %d ",i,i*i,i*i*i);
        i++;
    }
    return 0;
}
*/

/*
// 5. check no is Armstrong or not

#include<stdio.h>
int main()
{
    int num , temp , power , sum=0 , i , count=0 ,rem;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    temp = num;
    while(num!=0)
    {
        count++;
        num = num / 10;
    }

    num = temp;
    while(num!=0)
    {
        i = 1;
        power = 1;
          //  num = temp;

        rem = num % 10;
        while( i <= count)
            {
                power = power*rem;
                i++;
            }
            sum = sum + power;
            num = num / 10;

    }

    printf("\n %d",sum);
    if( temp == sum)
    {
        printf("\n %d is Armstrong number",temp);
    }
    else
    {
        printf("\n %d is not Armstrong number",temp);
    }


    return 0;
}

*/

/// 6. print list of  Armstrong no's from 1 to 100
/*
#include<stdio.h>
int main()
{
    int i=1 , j , temp , power , sum=0  , count=0 ,rem;

    printf("\n List of Armstrong no's from 1 to 100 : ");

    while(i<=1000)
    {
        temp= i;

        count = 0;
        while(i!=0)
            {
                count++;
                i = i/ 10;
            }

            i= temp;
            j = 1;
            power = 1;
            sum = 0;

            while(i!=0)
                {
                    rem = i% 10;
                    while( j <= count)
                    {
                        power = power*rem;
                        j++;
                    }
                    sum = sum + power;
                    i = i/ 10;
                }
                i=temp;
                if( i == sum)
                    {
                        printf("\n %d is Armstrong number",i);
                    }
                    i++;
            }
    return 0;
}
*/

///7.print Armstrong no's from 1 to 1000
/*
#include<stdio.h>
int main()
{
    int num , i , sum ,nn,n , power , rem , count = 0 ;

    printf("\n List of Armstrong no's from 1 to 1000 : ");
    for( num = 1 ; num <= 1000 ; num++)
    {
        nn = num;
        count=0;
        sum=0;
        while(num!=0)
        {
            count++;
            num = num / 10;
        }
        num = nn;
        while(num!=0)
        {
            i = 1;
            power = 1;
            rem = num % 10;
            while(i<=count)
                {
                    power = power * rem;
                    i++;
                }
            sum = sum + power;
            num = num / 10;
        }
        num = nn;
        if(num == sum)
        {
            printf("\n %d ",num);
        }
    }
    return 0;
}

*/
///==========================================================================================

///**********Do while()**********

///1.Write a C program to print Fibonacci series up to n terms.
/*
#include<stdio.h>
int main()
{
    int x=0 , y=1 , i,z , n;

    printf("\n ENter nth term : ");
    scanf("%d",&n);
    printf("\n %d \t %d",x,y);
    z = x + y;
    i=2;
    do
    {
        printf("\t %d ",z);
        x=y;
        y=z;
        z=x+y;
        i++;
    }while(i<n);
    return 0;
}

*/

///2.print Armstrong no's from 1 to 1000

/*
#include<stdio.h>
int main()
{
    int num , i , sum ,nn,n , power , rem , count = 0 ;

    printf("\n List of Armstrong no's from 1 to 1000 : ");
    for( num = 1 ; num <= 1000 ; num++)
    {
        nn = num;
        count=0;
        sum=0;
        while(num!=0)
        {
            count++;
            num = num / 10;
        }
        num = nn;
        do
        {
            i = 1;
            power = 1;
            rem = num % 10;
            while(i<=count)
                {
                    power = power * rem;
                    i++;
                }
            sum = sum + power;
            num = num / 10;
        }while(num!=0);
        num = nn;
        if(num == sum)
        {
            printf("\n %d ",num);
        }
    }
    return 0;
}
*/

///3.display table of entered number
/*
#include<stdio.h>
int main()
{
    int num,i=1;

    printf("\n Enter any value : ");
    scanf("%d",&num);

    do
    {
        printf("\n %d * %d : %d",num , i , (num*i));
        i++;
    }while(i<=10);
    return 0;
}
*/

///4.calculate factorial of a number

/*
#include<stdio.h>
int main()
{
    int num , fact=1;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    do
    {
        fact = fact * num;
        num--;
    }while(num!=0);

    printf("\n factorial  is : %d",fact);
    return 0;
}
*/

///5..WAP to count the digits in a number and add every digit resto count  op:123=1*3+2*3+3*3=36
/*
#include<stdio.h>
int main()
{
        int num ,r, temp , pow = 1 ,  sum = 0 , count = 0 , i = 1 ;
        printf("\n Enter any number : ");
        scanf("%d",&num);

        temp = num;

        while( num != 0 )
        {
            count++;
            num = num / 10 ;
        }

        num = temp;

        printf("\n %d count is : %d",num,count);

        do
        {

            r = num % 10;

            while( i <= count)
            {
                pow = pow * r;
                i++;
            }
           sum = sum + pow;
           num = num / 10;
           i = 1;
           pow = 1;
        }while( num != 0);

     printf("\n sum is : %d",sum);
        return 0;
}
*/


/// 6. WAP to calculate the power of x raise to  y
/*
#include<stdio.h>
int main()
{
    int x , y , i=1 , power=1 ;

    printf("\n ENter  value of x and y : ");
    scanf("%d %d",&x,&y);

    do
    {
        power = power * x;
        i++;
    }while(i <= y);

    printf("\n %d raise to %d is : %d",x,y,power);
    return 0;
}
*/
///==========================================================================================

///Unsolved Problems

/*
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
Write a C program to print Pascal triangle upto n rows.
*/
