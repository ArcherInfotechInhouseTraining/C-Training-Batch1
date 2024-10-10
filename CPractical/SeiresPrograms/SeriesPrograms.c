#include <stdio.h>
#include <stdlib.h>

int main()
{
//==========================================================================================================================================
   // QUE 1:- Write a program to find the sum of series 1+2+3..+N.
/*
    int n,i,sum=0;
   printf("Enter the number");
   scanf("%d",&n);

   for(i=0;i<=n;i++)
   {
       printf("\t%d",i);
       sum=sum+i;
   }
   printf("\nThe sum = %d ",sum);

*/
//==========================================================================================================================================
    //QUE 2 Fibo Series

 /*   int n,i;
    int x=0,y=1,z;
    printf("\nEnter The number :");
    scanf("%d",&n);
    printf("\n %d %d",x,y);

    for(i=2;i<n;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf(" %d",z);
    }

*/
//==========================================================================================================================================
    //QUE 3 Fibo Series add all numbers
/*
    int n,x=0,y=1,z;
    int i,sum=0;

    printf("\nEnter your Number");
    scanf("%d",&n);
    printf("%d %d",x,y);
    sum=x+y;
    for(i=2;i<n;i++)
    {
        z=x+y;
        sum=sum+z;
        x=y;
        y=z;
        printf("% d",z);
    }
    printf("\nThe sum of all Fibo series is %d ",sum);
*/
//==========================================================================================================================================
 /*   QUE:4 Write a program to find the sum of series 1+3+5+7..+N.

    int i,n,sum=0;
    printf("\nEnter the Number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf(" %d",i);
            sum=sum+i;
        }
    }
    printf("\nThe sum =%d",sum);

*/

//==========================================================================================================================================
   // QUE 5: Write a Program to find the sum of series 1^2+2^2+3^2...+N^2.

/*
    int n,i,j,sum=0;
    int expo=2,power;

    printf("\nEnter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=1,power=1;
        while(j<=expo)
        {
            power=power*i;
            j++;
        }
        sum=sum+power;
    }
    printf("\nThe sum = %d",sum);

*/
//==========================================================================================================================================

    //QUE 6:Write a Program to print the series 1^1+2^2+3^3...+N^N
    //for example :Enter the Number :5
                                   // 1 4 27 256 3125

 /*   int n,i,j,power;
    printf("\nEnter the Number :");
    scanf(" %d",&n);

    for(i=1;i<=n;i++)
    {
        power=1,j=1;
        while(j<=i)
        {
            power=power*i;
            j++;
        }
        printf(" %d",power);
    }
*/
//==========================================================================================================================================
   // QUE 6:Write a Program to print the the sum of series 1^1+2^2+3^3...+N^N

/*
   int n,i,j,power,sum=0;
    printf("\nEnter the Number :");
    scanf(" %d",&n);

    for(i=1;i<=n;i++)
    {
        power=1,j=1;
        while(j<=i)
        {
            power=power*i;
            j++;
        }
        printf(" %d",power);
        sum=sum+power;
    }
    printf("\nThe sum = %d",sum);

*/
//==========================================================================================================================================
   // QUE 7 :Write a Program to Find the sum of series 1³+2³+3³+4³.....+N³.
/*
    int n,i,j,expo,power,sum=0;
    printf("\nEnter The Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=1,power=1,expo=3;
        while(j<=expo)
        {
            power=power*i;
            j++;
        }
        printf(" %d",power);
        sum=sum+power;
    }
    printf("\nThe sum = %d",sum);

 */
 //==========================================================================================================================================
    //QUE 8 Write a Program to find the sum of series 1!+2!+3!...+n!
/*
    int n,i,j,fact,sum=0;
    printf("\nEnter the Number :");
    scanf(" %d",&n);

    for(i=1;i<=n;i++)
    {
        j=1,fact=1;
        while(j<=i)
        {
            fact=fact*j;
            j++;
        }
        printf(" %d",fact);
        sum=sum+fact;
    }
    printf("\nThe sum = %d",sum);

*/
//==========================================================================================================================================
/*
    QUE 9:Write a Program to find the sum of series 1/1+1/2+1/3..+1/N

   float n,var,i,Value,sum=0.0,ans;
    printf("\nEnter the number :");
    scanf("%f",&n);
    var=1;
    for(i=1;i<=n;i++)
    {
        ans=(var/i);
        printf(" %.2f",ans);
    }
    sum=sum+ans;
    printf(" \nthe sum = %.2f",ans);

*/
//==========================================================================================================================================
    //QUE 9:Write a Program to Find the sum of series 2+4+6+8.....+N.
/*
    int n,i,j,result,sum=0;
    printf("\nEnter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=i+0;
        while(j<=i)
        {
            result=i+j;
            printf(" %d",result);
            j++;
        }
        sum=sum+result;
    }
    printf("\nThe sum = %d",sum);
*/
//==========================================================================================================================================
    //QUE 10:- Write a Program to Print Square Number series 1 4 9 16...
/*
    int n,i,j,expo=2,power;
    printf("\nEnter the number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        power=1,j=1;
        while(j<=expo)
        {
            power=power*i;
            j++;
        }
        printf(" %d",power);
    }
*/
//==========================================================================================================================================
    //QUE:11-Write a Program to print Cube Number series 1 8 27 64...
/*
    int n,i,j,power,expo=3;
    printf("\nEnter the Number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        j=1;power=1;
        while(j<=expo)
        {
            power=power*i;
            j++;
        }
        printf(" %d",power);
    }
*/
//==========================================================================================================================================
   // QUE 12: Write a program to find the sum of series 1!/1+2!/2+3!/3...+n!/n
/*
    int i,j,n;
    int k,fact,sum=0;
    printf("\nEnter the Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1,j=1;
        while(j<=i)
        {
            fact=fact*j;
            j++;
        }
        j=i;
        for(k=j;k<=j;k++)
        {
            printf(" %d",(fact/j));
            k++;
        }

        sum=sum+(fact/j);
    }
    printf("\nThe sum =%d",sum);

*/
//==========================================================================================================================================
/*

    QUE 13: Write a program to find the sum of series 1^1/1+2^2/2+3^3/3...+n^n/n

    int i,j,n,power,sum=0,ans;
    printf("\nEnter the Number");
    scanf(" %d",&n);

    for(i=1;i<=n;i++)
    {
        power=1,j=1,ans=0;
        while(j<=i)
        {
            power=power*i;
            j++;
        }
        ans=(power/i);
        printf(" %d",ans);
        sum=sum+ans;
    }
    printf("\nThe sum = %d",sum);

*/
//==========================================================================================================================================
/*
    QUE 14:- Write a program to find the sum of series 1^1/1!+2^2/2!+3^3/3!...+n^n/n!

   float power,fact,j,i,n,k,ans,sum=0;
   printf("\nEnter the number :");
   scanf("%f",&n);
   for(i=1.0;i<=n;i++)
   {
        power=1.0,j=1.0;
        while(j<=i)
        {
            power=power*i;
            j++;
        }
        k=1.0,fact=1.0;
        while(k<=i)
        {
            fact=fact*k;
            k++;
        }

        ans=(power/fact);
        printf(" %.2f",ans);
        sum=sum+ans;
   }
   printf("\nThe sum =%.2f",sum);
*/
//==========================================================================================================================================
/*
   QUE 15 :- Write a Program to Find the sum of series 1/1!+1/2!+1/3!+1/4!.....+1/N!

  float num,i,j,fact,ans,sum=0.0;
  int var=1;
  printf("\nEnter the number");
  scanf("%f",&num);

  for(i=1;i<=num;i++)
  {
      fact=1,j=1;
      while(j<=i)
      {
          fact=fact*j;
          j++;
      }
      ans=(var/(float)fact);
      printf(" %.2f",ans);

      sum=sum+ans;
  }
  printf("\n the sum = %.2f",sum);
*/
//==========================================================================================================================================
/*
  QUE 16:Write a program to find the sum of series 1/2!+2/3!+3/5!+4/6!+.....N/(N+1)!

    float num,i,fact,j,sum=0.0,ans;
    printf("\nEnter the Number :");
    scanf("%f",&num);

    for(i=1.0;i<=num;i++)
    {
        fact=1.0,j=1.0;
        while(j<=(i+1.0))
        {
            fact=fact*j;
            j++;
        }
        ans=(i/fact);
        printf(" %.2f",ans);

        sum=sum+ans;
    }
    printf("\n The sum = %.2f",sum);
*/
//==========================================================================================================================================
/*
    QUE 17 :- Write a program to find the sum of series 1+1/3+1/5+1/7+.....1/(N+2)

   float num,i,ans,sum=0.0;
   float var=1.0;
   printf("\nEnter the number :");
   scanf("%f",&num);

   printf("%.2f",var);
   sum=sum+var;
   for(i=1.0;i<=num;i=i+2)
   {
        ans=((float)var/(i+2.0));
        printf(" %.2f",ans);
        sum=sum+ans;
   }

   printf("\nThe sum = %.2f",sum);
*/
//==========================================================================================================================================
/*
   QUE 18 :- Write a Program to find sum of series 5^2+10^2+15^3+.....N^2

   int n,expo=2,i,power,j,sum=0;
   printf("\nEnter the number :");
   scanf("%d",&n);

   for(i=5;i<=n;i=i+5)
   {
       power=1;
       j=1;
       while(j<=expo)
       {
           power=power*i;
           j++;
       }
       printf("\n %d = %d",i,power);
       sum=sum+power;
   }
   printf("\n The sum = %d",sum);
//==========================================================================================================================================

   //QUE 19 :- Write a Program to Find the sum of series  1/2+2/3+3/4+4/5.....+(N-1)/N.

   float n,i,sum=0.0,ans;
   printf("\nEnter the number :");
   scanf("%f",&n);

   for(i=2;i<=n;i++)
   {
       ans=(i-1)/i;
       printf(" %.2f",ans);
       sum=sum+ans;
   }
   printf("\nThe sum = %.2f",sum);

*/

//==========================================================================================================================================

    //QUE 20: - Write a Program to print series 0 2 6 12 20 30 42 ...N.

    int num,i;
    printf("\nEnter Any Number:");
    scanf("%d",&num);


    for(i=0;i<num;i++)
    {
        if(i%2==0)
        {
            printf(" %d",i+2);
        }
    }
    return 0;


}
//==================================================================================================================================


        Write a Program to find the sum of series 1+X+X^3...+X^N
		- Write a Program to find the sum of series 1+X+X^2/2...+X^N/N
		- Write a Program to find the sum of series 1+X+X^2/2!+X^3/3!...+X^N/N!
		- Write a program to find the sum of series (1+(1+2)+(1+2+3)+...till N)
		- Write a program to find the sum of series (1+(1*2)+(1*2*3)+...till N)
		- Write a program to find the sum of series 1/2-2/3+3/4-4/5+5/6...+N/N+1

		- Write a program to print series -1 4 -7 10 -13 16 -19...n
		- Write a program to print series 2,15,41,80...n
		- Write a program to print series 10,5,60,15,110...N
		- Write a program to print series 0,6,10,17,22,30,36...N
		- Write a program to print series 6,9,14,21,30,41,54...N
		- Write a Program to print series 1,2,8,16,32...n.
		- Write a Program to print series 1,3,7,15,31...n.

		- Write a Program to print Triangular Number series 1 3 6 10 15 ...
		- Write a Program to Find the sum of series 3+33+333+3333.....+N.
		- Write a Program to Find the sum of series 3+7+13+21+31.....+N.

		- Write a Program to Find the sum of series 1-2+3-4+5-6...+N.
		- Write a Program to Find the sum of series 1+11+111+1111.....+N.
