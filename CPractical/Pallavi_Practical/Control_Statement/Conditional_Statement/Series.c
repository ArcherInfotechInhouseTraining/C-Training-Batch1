//******************************* Series *********************************

/*
// 1.Write a C program to print Fibonacci series up to n terms.
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

/*
//2.Write a Program to find the sum of series 1^2+2^2+3^2...+N^2.

#include<stdio.h>
int main()
{
    int n , i , sum=0;

    printf("\n Enter nth term : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        sum = sum + (i*i);
    }
    printf("\n sum is : %d",sum);
    return 0;
}
*/

/*
//3. Write a Program to find the sum of series 1^1+2^2+3^3...+N^N

#include<stdio.h>
int main()
{
    int i , n , x , ans , sum=0;

    printf("\n Enter nth value : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        x=1;
        ans=1;
        while(x<=i)
        {
            ans = ans*i;
            x++;
        }
        sum = sum + ans;
    }
    printf("\n Sum is : %d",sum);
    return 0;
}
*/

/*
//4.- Write a Program to find the sum of series 1/1+1/2+1/3..+1/N.
#include<stdio.h>
int main()
{
    int n,i;
    float ans , sum=0;

    printf("\n Enter any number : ");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        sum = sum + (1/i);
    }
    printf("%f",sum);
    return 0;

}
*/

//5. Write a Program to find the sum of series 1+X+X^3...+X^N
//6. Write a Program to find the sum of series 1+X+X^2/2...+X^N/N
//7. Write a Program to find the sum of series 1+X+X^2/2!+X^3/3!...+X^N/N!
//8. Write a program to find the sum of series (1+(1+2)+(1+2+3)+...till N)
//9. Write a program to find the sum of series (1+(1*2)+(1*2*3)+...till N)

//10. Write a Program to find the sum of series 1!+2!+3!...+n!
/*
#include<stdio.h>
int main()
{
    int i,j,fact,n,sum=0;
    printf("\n Enter the Nth term : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        fact=1;
        j=1;
        while(j<=i)
        {
            fact = fact*j;
            j++;
        }
        sum = sum + fact;
        printf("%d",fact);
    }
   printf("\n Sum is : %d",sum);
    return 0;
}
*/

/*
//11.Write a program to find the sum of series 1!/1+2!/2+3!/3...+n!/n
#include<stdio.h>
int main()
{
    int i , ans ,n,j, fact,sum=0;
    printf("\n Enter Nth term : ");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        fact = 1;
        j=1;
        while(j<=i)
        {
            fact = fact*j;
            j++;
        }
        sum = sum + (fact / i);
    }
    printf("\n sum is : %d",sum);
    return 0;
}
*/

/*
//12.Write a program to find the sum of series 1^1/1+2^2/2+3^3/3...+n^n/n
#include<stdio.h>
int main()
{
    int i,j,ans,n,x,sum=0;

    printf("\n Enter Nth term : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        ans = 1;
        j=1;

        while(j<=i)
        {
            ans = ans*i;
            j++;
        }

       // x = ans/i;
        sum = sum + (ans/i);
    }

    printf("\n sum is : %d",sum);
    return 0;

}
*/

//13. Write a program to find the sum of series 1^1/1!+2^2/2!+3^3/3!...+n^n/n!
/*
#include<stdio.h>
int main()
{
    int i , j ,n, fact , sum=0 , sqr;

    printf("\n Enter Nth term : ");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        j = 1;
        fact = 1;
        sqr = 1;

        while(j<=i)
        {
            fact = fact*j;
            sqr = sqr*i;
            j++;
        }
        sum = sum + (sqr/fact);
    }
    printf("sum is : %d ",sum);
    return 0;
}
*/

//14.Write a program to find the sum of series 1/2-2/3+3/4-4/5+5/6...+N/N+1
/*
#include<stdio.h>
int main()
{
    int i , no ;

    for(i=1 ; i<=5 ; i++)
    {

    }
}

*/

/*
//15.Write a Program to find sum of series 5^2+10^2+15^2+.....N^2
#include<stdio.h>
int main()
{
    int i , sum=0 , no;
    printf("\n Enter any number : ");
    scanf("%d",&no);
    for(i=5 ; i<=no ; i=i+5)
    {
        sum = sum + (i*i);
    }
    printf("\n sum is : %d",sum);
    return 0;
}

*/


///16.Write a program to find the sum of series 1+(1+3)+(1+3+5)+....+n
/*
#include<stdio.h>
int main()
{
    int i , no , sum = 0;
    printf("\n Enter number : ");
    scanf("%d",&no);

    for(i=1 ; i<=no ; i++)
    {
        if(i%2!=0)
        {
            printf("\t %d",i);
            sum = sum + i;
        }

    }
    printf("\n sum is : %d",sum);
}
*/

///17.Write a program to find the sum of series 1+1/3+1/5+1/7+.....1/(N+2)




///21.- Write a Program to Find the sum of series 1-2+3-4+5-6...+N.
/*
#include<stdio.h>
int main()
{
    int i,num;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%2==0)
            printf("\t -%d",i);
        else
            printf("\t %d",i);
    }
    return 0;
}
*/

///22.- Write a Program to Find the sum of series 1+11+111+1111.....+N.
/*
#include<stdio.h>
int main()
{
    int no,i,sum=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=1;i<=no;i=(i*10+1))
    {
        sum=sum+i;
    }
    printf("\n Sum is : %d",sum);
    return 0;
}
*/

///24. Write a Program to Find the sum of series 2+4+6+8.....+N.
/*
#include<stdio.h>
int main()
{
    int no , i , sum=0 ;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=1 ; i<=no ; i++)
    {
        if(i%2==0)
        {
            sum = sum + i;
            printf("\t %d",i);
        }
    }

    printf("\n Sum is : %d",sum);
    return 0;
}

*/


///25.Write a Program to Find the sum of series 9+99+999+9999.....+N.
/*
#include<stdio.h>
int main()
{
    int i , no , ans , sum=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=1 ; i<=no ; i=i*10+1)
    {
        ans = 9*i;

        printf("\t %d",ans);
        sum = sum + ans;
    }

    printf("\n Sum is : %d",sum);
    return 0;
}


*/
/*
///27.Write a Program to Find the sum of series 3+33+333+3333.....+N.

#include<stdio.h>
int main()
{
    int no , i , ans , sum=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=1 ; i<=no ; i=i*10+1)
    {
        ans = 3 * i;

        printf("\t %d",ans);
        sum = sum + ans;
    }

    printf("\n Sum is : %d",sum);
    return 0;
}

*/

//29.Write a Program to Find the sum of series 1³+2³+3³+4³.....+N³
/*
#include<stdio.h>
int main()
{
    int i,sum=0,power,no;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for(i=1 ; i<=no ; i++)
    {

        power=i*i*i;
        sum=sum+power;
    }
    printf("\n sum is : %d",sum);
    return 0;
}

*/

///36)	- Write a program to print series 2,15,41,80...n
/*
#include<stdio.h>
int main()
{
    int num,i,j;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    i=2;
    j=0;

    while(i<=num)
    {
        i=i+(j*13);
        printf("\t %d",i);
        j++;
    }
    return 0;
}
*/

///35.- Write a program to print series -1 4 -7 10 -13 16 -19...n
/*

#include<stdio.h>
int main()
{
    int i,n,k=1;

    printf("\n Enter the number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("-%d \t",k);
            k=k+3;

        }
        else
        {
            printf("%d \t",k);
            k=k+3;
        }
    }

    return 0;
}
*/


///37)	- Write a program to print series 10,5,60,15,110...N
/*
#include<stdio.h>
int main()
{
    int num,i,j;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    i=10;
    j=5;

    while(i<=num)
    {
        printf("\t %d \t %d",i,j);
        i=i+50;
        j=j+10;
    }
    return 0;
}
*/

///39). Write a program to print series 6,9,14,21,30,41,54...N
/*
#include<stdio.h>
int main()
{
    int num,i,j;

    printf("\n enter any number : ");
    scanf("%d",&num);

    i=5;
    j=1;

    while(i<=num)
    {
        i=i+j;
        printf("\t %d",i);
        j=j+2;
    }
}
*/

///41)	- Write a Program to print series 1,3,7,15,31...n.
/*
#include<stdio.h>
int main()
{
    int num,i,j;

    printf("\n Enter any number : ");
    scanf("%d",&num);

    i=0;
    j=1;

    while(i<=num)
    {
        i=i+j;
        printf("\t %d",i);
        j=j*2;
    }
    return 0;
}
*/

///43)	- Write a Program to print series 6,11,21,36,56...n.
/*
#include<stdio.h>
int main()
{
    int i,n,k=6,m=5;
    printf("\n Enter any value: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\t %d",k);
        k=k+m;
        m=m+5;
    }
    return 0;
}
*/

///44.- Write a Program to print series 1,22,333,4444...n.
/*
#include<stdio.h>
int main()
{
    int i,n,k;

    printf("\n Enter any number: ");
    scanf("%d",&n);

    for(i=1,k=1 ; i<n ; i++,k=(k*10+1))
    {
        printf("\t%d",k*i);
    }
    return 0;
}
*/

///47.Write a Program to print series 0 2 6 12 20 30 42 ...N.
/*
#include<stdio.h>
int main()
{
    int num,i,j;

    printf("\n Enter any value: ");
    scanf("%d",&num);

    i=0;
    j=0;

    while(i<=num)
    {
        i=i+(j*2);
        printf("\t %d",i);
        j++;
    }
    return 0;
}
*/
///================================================================================

///Usolved Problems.

/*
        -Write a program to find the sum of series 1+1/3+1/5+1/7+.....1/(N+2)
		- Write a Program to find the sum of series 1+X+X^3...+X^N
		- Write a Program to find the sum of series 1+X+X^2/2...+X^N/N
		- Write a Program to find the sum of series 1+X+X^2/2!+X^3/3!...+X^N/N!
		- Write a program to find the sum of series (1+(1+2)+(1+2+3)+...till N)
		- Write a program to find the sum of series (1+(1*2)+(1*2*3)+...till N)

        - Write a program to find the sum of series 1+4-9+16-25+.....+N

		- Write a program to find the sum of series 1+1/3+1/5+1/7+.....1/(N+2)
		- Write a Program to find the sum of series 1+4+9+16+25+.....+N
		- Write a program to find the sum of series 1/2!+2/3!+3/5!+4/6!+.....N/(N+1)!
		- Write a Program to Find the sum of series 1/1!+2/2!+3/3!.....+N/N!.

		- Write a Program to Find the sum of series 3+7+13+21+31.....+N

    30)	- Write a program Program to print Arithmetic series 1 4 7 10...
	31)	- Write a Program to Print Square Number series 1 4 9 16...
	32)	- Write a Program to print Cube Number series 1 8 27 64...
	33)	- Write a Program to print Triangular Number series 1 3 6 10 15 ...
	48)	- Write a Program to print series 2 4 7 12 21 38 71...N.
	49)	- Write a Program to print series 1 9 17 33 49 73 97 ...N.
	45)	- Write a Program to print series 0,2,8,14,24,34 ...N.
	46)	- Write a Program to print series 1 2 5 8 15 28 51 94 ...N.
	42)	- Write a Program to print series 1,-2,6,-15,31...n.
	43)	- Write a Program to print series 6,11,21,36,56...n.

	*/
