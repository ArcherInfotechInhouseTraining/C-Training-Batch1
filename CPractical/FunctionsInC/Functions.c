/// 1. WAP to display the message multiple times using the function.
/*
#include <stdio.h>
#include <stdlib.h>
void msg();
int main()
{
    msg();
    printf("\nHello Good morning To all Of You ");
    msg();
    printf("\nHiiiiiiiiiiiiiiiiiiii ");
    msg();
    return 0;
}
void msg()
{
    printf("\nHow are You");
}
*/
//========================================================================================
 /// How Function Works?
/// Simple Function :
/*
 #include<stdio.h>
 void pune();
 void kolhapur();
 void mumbai();

 int main()
 {
     printf("\nHello How Are You");
     pune();
     printf("\nHave a nice Day");
     kolhapur();
     printf("\nHello good Mornng To all of Yue");
     mumbai();

     return 0;
 }
 void pune()
 {
     printf("\nI am From Pune");
 }
 void kolhapur()
 {
     printf("\nI am from Kolhaour");
 }
 void mumbai()
 {
     printf("\nI am From Mumbai");
 }
*/
//=======================================================================================
 ///------------------------------------------------------------------------------------
 /*
 #include<stdio.h>
 void pune();
 void kolhapur();
 void mumbai();

 int main()
 {
     printf("\nHello How Are You");
     pune();
     printf("\nHave a nice Day");
     //kolhapur();
     mumbai();
     printf("\nHello good Mornng To all of Yue");

     return 0;
 }
void mumbai()
 {
     printf("\nI am From Mumbai");
     kolhapur();
     printf("\nBack To mumbai From Kolhapur");
 }
void kolhapur()
 {
     printf("\nI am from Kolhaour");
 }
 void pune()
 {
     printf("\nI am From Pune");
 }
 */
//=====================================================================================
///
/*
#include<stdio.h>
int main()
 {
     void pune();
     void mumbai();
     void kolhapur();

     mumbai();
     printf("\nHello How Are You");
     pune();
     printf("\nHave a nice Day");
     //kolhapur();

     printf("\nHello good Mornng To all of Yue");

     return 0;
 }
void mumbai()
 {

     printf("\nI am From Mumbai");
     kolhapur();
     printf("\nBack To mumbai From Kolhapur");
 }
void kolhapur()
 {
     printf("\nI am from Kolhaour");
 }
 void pune()
 {
     mumbai();
     kolhapur();
     printf("\nI am From Pune");
 }
*/
  ///It will make an error incompatible declaration of function Kolhapur
//======================================================================================
//Simple Progrm:
/*
#include<stdio.h>
int main()
{
    int a ,b,c;

    printf("\nEnter Two Nos:");
    scanf("%d%d",&a,&b);

    c=a+b;
    printf("\n Add Is %d",c);

    return 0;
}
*/
//======================================================================================
///Function Types in c:
///                   1. Simple(Without Return Without Arguments:
/*
#include<stdio.h>
void add();

int main()
{
    printf("\nStat The Main");
    add();
    printf("\nSecound try");
    add();
    printf("\nThird try");
    add();
    printf("\nEnd");

    return 0;
}

void add()
{
    int a,b,c;
    printf("\nENter The Two Numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The Add Is = %d",c);
}
*/
//========================================================================================
///2. Functions Without return with arguments:
/*
#include<stdio.h>

void add(int,int);
int main()
{
    int a,b;
    printf("\nEnter The Two Numbers:");
    scanf("%d%d",&a,&b);
    add(a,b);

    return 0;
}
void add (int a,int b)
{
    int c;
    c=a+b;
    printf("\nThe add = %d",c);
}
*/
//==========================================================================================
///3.Functions With Return And Without Arguments:
/*
#include<stdio.h>
int add();
int main()
{
    int ans;
    ans=add();
    printf("\n The Ans Is %d",ans);
    return 0;
}
int add()
{
    int a,b,c;
    printf("\nEnter The Two Numbers:");
    scanf("%d%d",&a,&b);

    c=a+b;

    return c;

}
*/
//==========================================================================================
///4.Functions With Return And With Arguments:
/*
#include<stdio.h>
int add(int ,int );
int main()
{
    int a,b,sum;
    printf("\n Enter The Two numbers:");
    scanf("%d%d",&a,&b);

    sum=add(a,b);
    printf("\n Sum = %d",sum);

    return 0;
}
int add(int x ,int y)
{
    int c;
    c=x+y;
    return c;
}
*/
//========================================================================================
///5.Recurtion :- Fucntion call itself
/* WAP to calc the factorial of number

	5! = 5*4*3*2*1			5! --> 5 * 4!
					4! --> 4 * 3!
					3! --> 3 * 2!
					2! --> 2 * 1!
					1! --> 1


#include<stdio.h>
int fact(int);
int main()
{
    int num,ans;
    printf("\n Enter Your Number:");
    scanf("%d",&num);

    ans=fact(num);
    printf("\n The Fact Of No %d is %d",num,ans);

    return 0;
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
*/
//========================================================================================
///simple program to reverse the number
/*
#include<stdio.h>
int main()
{
    int num,rev=0,rem,temp;
    printf("\nEnter Your Number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    num=temp;
    printf("\n The Reverse number of %d is %d",num,rev);
    return 0;
}
*/
//====================================================================================
///simple program to palindrom the number
/*
#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    printf("\nEnter The Number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rev=(rev*10)+num%10;
        num=num/10;
    }
    num=temp;
    if(rev==num)
    {
        printf("\n The Number %d is Palindrom",num);
    }
    else
    {
        printf("\n The Number %d is Not Palindrom",num);
    }
    return 0;
}
*/
//=======================================================================================
///using Functions Cheak Number Is palindrome or not:
/*
#include<stdio.h>

int Isrev(int );
char Ispalindrom(int );

int main()
{
    int num,reverse;
    char Ch;
    printf("\nEnter The Number:");
    scanf("%d",&num);

    reverse=Isrev(num);
    printf("\n The Reverse Number is  %d",reverse);

    Ch=Ispalindrom(num);
    if(Ch=='y')
    {
        printf("\n num %d Is palindrom",num);
    }
    else
    {
        printf("\n num %d is Not Palindrom",num);
    }

    return 0;
}

int Isrev(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
    return rev;
}

char Ispalindrom(int n)
{
    int rev=Isrev(n);
    if(rev==n)
    {
        return 'y';
    }
    else
    {
        return 'n';
    }
}
*/
//========================================================================================
/*
#include<stdio.h>
int Isrev(int);
char Ispali();

int main()
{
    int num,reverse;
    char Ch,ans;
    //printf("\nEnter The Number:");
    //scanf("%d",&num);

   // reverse=Isrev(num);
   // printf("\n The Reverse Number is  %d",reverse);

    ans=ispali();
    printf("\n The Reverse Number is  %d",ans);

    if(ans=='y')
    {
        printf("\n The Num %d is Palindrom",num);
    }
    else
    {
        printf("\n The num %d is Not Palindrom",num);
    }

    return 0;
}

char ispali()
{
    int num;

    printf("\nEnter The Number:");
    scanf("%d",&num);

    int reverse=Isrev(num);

    if(reverse==num)
    {
        return 'y';
    }
    else
    {
        return 'n';
    }
}

int Isrev(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
    return rev;
}
*/
//========================================================================================
/// WAP to implement following functions to perform the arithmetic operators and operation expected
/*
		int add(int,int);
		float div(int,int);
		int findmax();
		char isprime(int);


#include<stdio.h>

int add(int,int);
float div(int,int);
int findmax();
char isprime(int);

int main()
{
    int a,b,sum=0,max;
    float Division;
    char prime;

    printf("\n Enter Your two Numbers:");
    scanf("%d%d",&a,&b);

    sum=add(a,b);
    printf("\n The sum Of Two Values is = %d",sum);

    Division=div(a,b);
    printf("\n The Division Of Two Values is = %.2f",Division);

    max=findmax();
    printf("\n The max = %d",max);

    prime=isprime(a);
    if(prime=='y')
    {
        printf("\n Number is prime");
    }
    else
    {
        printf("\n Number is Not Prime");
    }

    return 0;
}

int add(int x ,int y)
{
    int c=x+y;
    return c;
}
float div(int x,int y)
{
    int divi= x/y;
    return divi;
}
int findmax()
{
    int a,b;
    printf("\n Enter The two Values:");
    scanf("%d%d",&a,&b);

    return (a>b)?a:b;
}

char isprime(int x)
{
    int i;
    char flg='y';

    i=2;
    while(i<=x/2)
    {
        if(x%i==0)
        {
            flg='n';
            break;
        }
        i++;
    }
    return flg;
}
*/
//=======================================================================================
/// call by value
/*
#include<stdio.h>

void swap(int,int);
int main()
{
    int a,b;
    printf("\n Enter Your two values:");
    scanf("%d%d",&a,&b);

    printf("\n Values Before Swap : A : %d\t B : %d",a,b);

    swap(a,b);

    printf("\n Values After Swap : A : %d\t B : %d",a,b);


    return 0;
}
void swap(int x,int y)
{
    int temp =x;
    x=y;
    y=temp;
}
*/
//=======================================================================================
/// Call by reference
/*
#include<stdio.h>
void swap(int* x,int* y);
int main()
{
    int a,b;
    printf("\n Enter Your two values:");
    scanf("%d%d",&a,&b);

    printf("\n Values Before Swap : A : %d\t B : %d",a,b);

    swap(&a,&b);

    printf("\n Values After Swap : A : %d\t B : %d",a,b);


    return 0;
}
void swap(int* x,int* y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}
*/
//==============================================================================
/// Passing the array as a argument:
/*
#include<stdio.h>

void display(int arr[])
{
    printf("\n Elements are:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }
}

int main()
{
    int arr[10];
    int i;

    printf("\nEnter the Array Elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    display(arr);

    return 0;
}
*/
//============================================================================
///Now lets see the array is passed by ref or by the value
/*
#include<stdio.h>

void intcre100(int arr[])
{
    for(int i=0;i<10;i++)
    {
       arr[i]=arr[i]+100;
    }
}

void display(int arr[5])
{
    printf("\n Elements Are:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }
}

int main()
{
    int arr[10];

    printf("\n Enter The Elements of an Array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Before Indcreaments:");
    display(arr);

    printf("\n After Indcreaments:");
    intcre100(arr);
    display(arr);

    return 0;
}
*/
//====================================================================================
/// write the iO methods
/*
#include<stdio.h>
void input()
{
    int arr[10];
    printf("\n Enter Your Array Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output()
{
    int arr[10];
    printf("\n Display The Elements:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }
}
int main()
{
    input();
    output();

    return 0;
}

*/
//===========================================================================
/*
#include<stdio.h>
void input(int x[])
{
   // int arr[10];
    printf("\n Enter Your Array Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
}
void output(int y[])
{
    //int arr[10];
    printf("\n Display The Elements:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",y[i]);
    }
}
int main()
{
    int x[10],y[10];

    input(x);
    output(x);

    input(y);
    output(y);

    return 0;
}
*/
//====================================================================================
/// collected array in the pointer variable also.Then above program can be written as...
/*
#include<stdio.h>

void input(int *p)
{
    printf("\n Enter Your Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",(p+i));
    }
}
void display(int *q)
{
    printf("\n Elements Are:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",*(q+i));
    }
}

int main()
{
    int arr[10];

    input(arr);
    display(arr);

    return 0;
}
*/
//================================================================================================
/// WAP to get the array of even values from function when an array is passed as a argument.
/*
#include<stdio.h>

void input(int arr[])
{
    printf("\n Enter your Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void getEven(int arr[],int ev[])
{
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            ev[cnt]=arr[i];
            cnt++;
        }
    }

    printf("\n The Count Of Even Number = %d",cnt);

    printf("\nEven numbers are:");
    for(int i=0;i<cnt;i++)
    {
        printf("\t%d",ev[i]);
    }
}
int main()
{
    int arr[10],ev[10],cnt=0;

    input(arr);

    printf("\n Original Array is");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    getEven(arr,ev);

    return 0;
}
*/
//================================================================================================
/// display the array of even numbers in main().
///1st WAy
/*
#include<stdio.h>
void input(int arr[])
{
    printf("\n Enter The array Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void geteven(int arr[],int ev[],int *cnt)
{
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            ev[*cnt]=arr[i];
            (*cnt)++;
        }
    }
    printf("\n The Count = %d",*cnt);
}

int main()
{
    int arr[10],ev[10],cnt=0;

    input(arr);

    printf("\n Original Elements:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    geteven(arr,ev,&cnt);

    printf("\n Even Numbers List:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",ev[i]);
    }
    return 0;
}
*/
//============================================================================================
///passing the array (by default by reference) as argument and returning the count
///2nd Way
/*
#include<stdio.h>

int getEven(int arr[],int ev[])
{
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            ev[cnt]=arr[i];
            cnt++;
        }
    }
    return cnt;

}

int main()
{
    int arr[10],ev[10],cnt1;

    printf("\nEnter Your array Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Original Elements:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    cnt1=getEven(arr,ev);

    printf("\n The Count = %d",cnt1);

    printf("\n Even elements Are:");
    for(int i=0;i<cnt1;i++)
    {
        printf("\t%d",ev[i]);
    }

    return 0;
}
*/
//================================================================================================
///3rd Way. Using the static:
/*
#include<stdio.h>

int GetEven(int arr[],int *cnt)
{
    static int ev[10];

    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            ev[*cnt]=arr[i];
            (*cnt)++;
        }
    }
    return ev;
}

int main()
{
    int arr[10],cnt=0;
    int *p;

    printf("\nEnter an Array Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    p=GetEven(arr,&cnt);


    printf("\n The Count = %d",cnt);

    printf("\n The Even Elements are:");
    for(int i=0;i<cnt;i++)
    {
        printf("\t%d",p[i]);
    }

    return 0;
}
*/
//==============================================================================================
/// 4 Using Global variables

/*
#include<stdio.h>

int ev[10],cnt=0;

void GetEven(int arr[])
{
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            ev[cnt]=arr[i];
            cnt++;
        }
    }
}

int main()
{
    int arr[10];

    printf("\n Enter The array Elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Original Array is:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    GetEven(arr);

    printf("\n The Count = %d",cnt);

    printf("\n Even Array Elements Are:");
    for(int i=0;i<cnt;i++)
    {
        printf("\t%d",ev[i]);
    }

    return 0;
}
*/
//==========================================================================================
///Pointer to function
/*
#include<stdio.h>

void add(int x,int y)
{
    int c;
    c=x+y;
    printf("\n Add = %d",c);
}
void Mul(int x,int y)
{
    int c;
    c=x*y;
    printf("\n The Mul = %d",c);
}
int main()
{
    int a,b;
    printf("\n Enter The values Of a and b");
    scanf("%d%d",&a,&b);

    printf("\n Values Without Function Pointer:");
    add(a,b);
    Mul(a,b);


    printf("\n Values With Function Pointer:");
    void (*fptr)(int,int);

    fptr=&add;
    fptr(a,b);

    fptr=&Mul;
    fptr(a,b);

    return 0;
}
*/
//=========================================================================================
/// Storage class in C

///1.
/*
Auto Storage class:
eg:
    auto int x;
*/
//====================================
///2 extern class:
/*
#include<stdio.h>
extern i;
int main()
{
    printf(" The value of i = %d",i);
    return 0;
}

#include<stdio.h>
i=48;
*/
//=====================================
///3 Static Storage Class in C
/*
#include<stdio.h>
void incre()
{
    static int i=5;
    printf("\n %d",i);
    i=i+1;
}
int main()
{

    for(int i=0;i<10;i++)
    {
        incre();
    }

    return 0;
}
*/
///4 Register Storage Class
//===================================================
///calling the function from the function call: (nested call to function)

/// find the max between three nos
/*
#include<stdio.h>

int findmax(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }

}

int main()
{
    int a,b,c,max=0;
    printf("\n Enter The Values Of a,b & c");
    scanf("%d%d%d",&a,&b,&c);

    max=findmax(findmax(a,b),c);

    printf("\n The max= %d",max);

    return 0;
}
*/
//====================================================================================


















