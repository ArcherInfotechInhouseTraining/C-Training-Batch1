/*
//1. Max num

#include<stdio.h>
int main()
{
    int x,y;

    printf("\n Enter any two number: ");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("\n Enter number %d is max number",x);
    }

    if(y>x)
    {
        printf("\n Enter number %d is max number",y);
    }

    return 0;
}

*/

/*
// 2.max between 3 num
#include<stdio.h>
int main()
{
    int x,y,z;

    printf("\n Enter any 3 numbers : ");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y)
    {
        if(x>z)
        {
            printf("\n Max number is %d",x);
        }
    }

    if(y>z)
    {
        printf("\n Max number is %d",y);
    }

    if(z>y)
    {
        printf("\n Max number is %d",z);
    }

    return 0;
}
*/

/*
// 3. calc discount

#include<stdio.h>
int main()
{
    float i1,i2,i3,sp,d;
    float mp = 1000;

    printf("\n Enter the seling price of 3 items: ");
    scanf("%f %f %f",&i1,&i2,&i3);

    sp = i1+i2+i3;
    d = ((mp-sp)/mp)*100;

    printf("\n On %.2f seling price we give %.2f %% disscount",sp,d);

    return 0;
}
*/

/*
//4.number check positive negetive or zero
#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("\n Number is positive",num);
    }

    if(num<0)
    {
        printf("\n Number is negative",num);
    }

    if(num==0)
    {
        printf("\n Number is Zero",num);
    }

    return 0;
}

*/
/*
// 5.Divisible by 5 and 11 or not

#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number: ");
    scanf("%d",&num);

    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("\n Number is divisible by 5 and 11");
    }

    if((num % 5 != 0) || (num % 11 != 0))
    {
        printf("\n Number is Not divisible by 5 and 11");
    }

    return 0;
}
*/

/*
// 6. Even odd number

#include<stdio.h>
int main()
{
    int num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("\n Number is Even");
    }

    if(num % 2 != 0)
    {
        printf("\n Number is odd");
    }

    return 0;
}

*/

/*
// 7. Leap Year

#include<stdio.h>
int main()
{
    int y;

    printf("\n Enter any Year : ");
    scanf("%d",&y);

    if((y % 4 == 0) && ( (y % 400 == 0) || (y % 100 != 0)) )
    {
        printf("\n Year is leap year");
    }

    if((y % 4 != 0) || (y % 400 != 0) && (y % 100 == 0))
    {
        printf("\n Year is not leap year");
    }

    return 0;
}

*/

/*
// 8.check character is Alphabet or not
#include<stdio.h>
int main()
{
    char c;

    printf("\n Enter any value : ");
    scanf("%c",&c);

    if((c>='A' && c<= 'Z') || (c>='a' && c<='z'))
    {
        printf("\n Enterd value is character ");
    }

    return 0;
}

*/

/*
// 9. check wheter vowel or not

#include<stdio.h>
int main()
{
    char c;

    printf("\n Enter any character : ");
    scanf("%c",&c);

    if( (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
    {
        printf("\n Enter character %c is Vowel ",c);
    }

    if( (c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u'))
    {
        printf("\n Enter character %c is not a Vowel ",c);
    }

}
*/

/*

// 10. check character is whether alphabet ,digit or special character

#include<stdio.h>
int main()
{
    char c;

    printf("\n Enter any value: ");
    scanf("%c",&c);

    if(( (c >= 'A') && (c <= 'Z') ) || ((c >= 'a') && (c <= 'z')))
    {
        printf("Enterd value is alphabet");
    }

    if( (c >= '0') && (c <= '9'))
    {
        printf("\n Enterd value is digit");
    }

    if((c == '!') || (c == '@') || (c == '#') || (c == '$') || (c == '%') || (c == '^'))
    {
        printf("\n Enter value is special character");
    }

    return 0;
}
*/

/*
// 11. check character is uppercase or lower case

#include<stdio.h>
int main()
{
    char c;
    printf("\n Enter any character : ");
    scanf("%c",&c);

    if( (c >= 'A') && ( c <= 'Z') )
    {
        printf("\n Uppercase character");
    }

    if( ( c >= 'a') && ( c <= 'z') )
    {
        printf("\n lowercase character");
    }

    return 0;
}
*/

/*
// 12.Input week number and print week day

#include<stdio.h>
int main()
{
    int w;

    printf("\n Enter week number: ");
    scanf("%d",&w);

    if(w == 1)
    {
        printf("\n Monday");
    }

    if(w == 2)
    {
        printf("\n Tuesday");
    }

    if(w == 3)
    {
        printf("\n wednesday");
    }

    if(w == 4)
    {
        printf("\n Thursday");
    }

    if(w == 5)
    {
        printf("\n Friday");
    }

    if(w == 6)
    {
        printf("\n Saturday");
    }

    if(w == 7)
    {
        printf("\n Sunday");
    }

    return 0;
}
*/

/*
//  13. find days in month

#include<stdio.h>
int main()
{
    int m;

    printf("\n Enter the month number : ");
    scanf("%d",&m);

    if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("\n this month is having  31 days");
    }

    if( m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("\n this month is having  30 days");
    }

    if(m == 2)
    {
        printf("\n This month is having 28/29 days");
    }

    return 0;
}
*/

// 14.

/*
// 15. check traingle is valid or not

#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;

    printf("\n Enter 3 values of traingle : ");
    scanf("%d %d %d",&a1,&a2,&a3);

    sum = a1+a2+a3;

    if(sum == 180)
    {
        printf("\n Traingle is valid");
    }

    if(sum != 180)
    {
        printf("\n Traingle is not valid");
    }

    return 0;
}
*/

// 16.

/*
// 17.check traingle is equilateral , isosceles or scalene

#include<stdio.h>
int main()
{
    int s1,s2,s3;

    printf("\n Enter side of the trainlge : ");
    scanf("%d %d %d",&s1,&s2,&s3);

    if((s1 == s2) && (s2 == s3))
    {
        printf("\n Equilateral traingle");
    }

    if (s1 == s2 || s2 == s3 || s3 == s1)
    {
        printf("\n isosceles traingle ");
    }

    if ( (s1 != s2) && (s2 != s3) && (s3 != s1))
    {
        printf("\n scalene traingle");
    }

    return 0;
}
*/

/*
// 18.Find roots of quadractic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float b,a,c,d,r1,r2;

    printf("\n Enter the value of a ,b,c : ");
    scanf("%f %f %f",&a,&b,&c);

    d = b*b - 4*a*c;

    if(d>0)
    {
        r1 = (- b + sqrt(d)) / (2*a);
        r2 = ( -b - sqrt(d)) / (2*a);

        printf("\n Roots are %f %f",r1,r2);
    }

    if(d==0)
    {
        r1 = -b / (2*a);
        r2 = -b / (2*a);

        printf("\n Roots are %f %f",r1,r2);

    }

    if(d<0)
    {
        printf("\n Roots are imaginary");
    }

    return 0;
}
*/


/*
// 19. calculate profit or loss
#include<stdio.h>
int main()
{
    int s,c,profit,loss;

    printf("\n Enter cost price: ");
    scanf("%d",&c);

    printf("\n Enter selling price: ");
    scanf("%d",&s);

    if(s > c)
    {
        profit = s - c;
        printf("\n Profit is : %d",profit);
    }

    if(c > s)
    {
        loss = c - s;
        printf("\n loss is : %d",loss);
    }

    return 0;

    return 0;
}
*/

/*
// 20.calculate percentage and grade

#include<stdio.h>
int main()
{
    float a,b,c,d,e,sum;
    float p;

    printf("\n Enter the marks of 5 subject : ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    sum = a+b+c+d+e;
    p = (sum/500)*100;

    if(p >= 90)
    {
        printf("\n Grade A");
    }

    if( (p < 90) && (p >= 80))
    {
        printf("\n Grade B");
    }

    if((p < 80) && (p >= 70))
    {
        printf("\n Grade C");
    }

    if( (p < 70) && (p >= 60) )
    {
        printf("\n Grade D");
    }

    if( (p < 60) && (p >= 40))
    {
        printf("\n Grade E");
    }

    if(p < 40)
    {
        printf("\n Grade F");
    }

    return 0;
}
*/

/*
// 21. calculate gross salary

#include<stdio.h>
int main()
{
    float s,da,hra,g;

    printf("\n Enter the salary : ");
    scanf("%f",&s);

    if(s <= 10000)
    {
        hra = s * (80.0 / 100);
        da = s * (20.0 / 100);
    }

     if( s <= 20000 )
    {
        hra = s * (90.0 / 100);
        da = s * (25.0 / 100);
    }

    if(s > 20000)
    {
        hra = s * (95.0 / 100);
        da = s * (30.0 / 100);
    }
    g = s + hra + da;
    printf("\n Gross salary is : %f",g);

return 0;
}
*/

/*
// 22.WAP to calculate total electricity bill

#include<stdio.h>
int main()
{
    float u , EB , TEB ;

    printf("\n Enter the electricity unit :  ");
    scanf("%f",&u);

    if(u <= 50)
    {
        EB = u * 0.50;
    }

    if(u > 50 && u <= 100)
    {
        EB = u * 0.75;
    }

    if(u > 100)
    {
        EB = u * 1.20;
    }

    if(u >= 250)
    {
        EB = u * 1.50;
    }

    TEB = EB + 0.2;

    printf("\n for %f units total Electricity bill is : %.2f",u,TEB);

    return 0;
}

*/


/*
//***************************If_Ladder*****************************************

#include<stdio.h>
int main()
{
    char ch;

    printf("\n Enter any character : ");
    scanf("%c",&ch);

    if( ch >= 'A' && ch <= 'Z')
    {
        printf("\n %c is Upprcase ",ch);
    }

    else if( ch >= 'a' && ch <= 'z')
    {
        printf("\n %c is Lowercase",ch);
    }

    else if( ch >= '0' && ch <= '9')
    {
        printf("\n %c is digit",ch);
    }

    else
    {
        printf("\n %c is special symbol");
    }

    return 0;
}
*/

/*
//Enter quardinates of 2 no. and find exact location

#include<stdio.h>
int main()
{
    int x ,y;

    printf("\n Enter the values of x and y : ");
    scanf("%d %d",&x,&y);

    if( x>0 && y>0)
    {
        printf("\n %d and %d present in First quadrant.",x,y);
    }
    else if( x<0 && y>0)
    {
        printf("\n %d and %d present in Second quadrant.",x,y);
    }
    else if( x<0 && y<0)
    {
        printf("\n %d and %d present in Third quadrant.",x,y);
    }
    else if( x>0 && y<0 )
    {
        printf("\n %d and %d present in Fourth quadrant.",x,y);
    }
    else if( x!=0 && y==0)
    {
        printf("\n %d and %d present on x-axis",x,y);
    }
    else if( x==0 && y!=0)
    {
        printf("\n %d and %d present on y=axis",x,y);
    }
    else
    {
        printf("\n %d and %d present on Origin",x,y);
    }
    return 0;

}

*/

/*
//Enter employee salary and display employee position in company
#include<stdio.h>
int main()
{
    int s;

    printf("\n Enter employee salary : ");
    scanf("%d",&s);

    if( s >= 100 && s <= 1000)
    {
        printf("\n Employee is Jr");
    }
    else if( s > 1000 && s <= 3000)
    {
        printf("\n Employee is Sr");
    }
    else if( s > 3000 && s <= 5000)
    {
        printf("\n Employee is Manager");
    }
    else if( s > 5000 && s <= 7000)
    {
        printf("\n Employee is Director");
    }
    else
    {
        printf("\n Employee is CEO");
    }
    return 0;
}
*/




