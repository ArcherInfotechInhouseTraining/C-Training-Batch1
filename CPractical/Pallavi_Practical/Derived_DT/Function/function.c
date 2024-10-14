///Basic
/*

#include<stdio.h>
///function decl.
void pune();
void kolhapur();
void mumbai();

int main()
{

   pune();      ///function calling

   printf("\n Prg. start here.....");

   mumbai();    ///function calling
  // kolhapur();  ///function calling

   printf("\n Prg.end here....");
   return 0;
}

///function definatio
void pune()
{
    //kolhapur();
    printf("\n I am from pune.");

}
void kolhapur()
{
    //mumbai();
    printf("\n I am from Kolhapur.");
}
void mumbai()
{
    kolhapur();
    printf("\n I am from Mumbai.");
}

*/


///=================================================================================
/*
#include<stdio.h>
int main( )
{
    void mumbai( );
    void kolhapur( );
    void pune( );

	printf("\n The main( ) starts");
    kolhapur( );
	pune( );
	printf("\n In main Back From Pune");

	mumbai( );
	printf("\n In main Back from Kolhapur");

	printf("\n The main() ends");
	return 0;
}
void mumbai( )
{
	printf("\n I am in mumbai");
	kolhapur( );
	printf("\n back to mumbai from kolhapur");
}
void kolhapur( )
{
	printf("\n I am in kolhapur");
}
void pune()
{
	printf("\n I am in Pune");
}

*/
///=================================================================================

///***********User defined functions***********************

///1.Simple function (function without return and withou argument)

/*
#include<stdio.h>
void add();

int main()
{
    printf("\n Main start here..");
    add();
    printf("\n Main end here...");
}
void add()
{
    int a,b,c;

    printf("\n Enter any two values: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Addition is: %d",c);
}
*/

///2. function with argument without return type
/*
#include<stdio.h>
void add(int , int);

int main()
{
    int a,b;

    printf("\n Enter any two numbers : ");
    scanf("%d%d",&a,&b);

    add(a,b); ///actual arguments
}

void add(int x,int y)  ///formal arguments
{
    int c;
    c=x+y;

    printf("\n Addition is : %d",c);
}
*/

///3.function without argument with return type
/*
#include<stdio.h>
int add();

int main()
{
    int t;

    t=add();

    printf("\n Addition is: %d",t);
}

int add()
{
    int a,b,c;
    printf("\n Enter any two values : ");
    scanf("%d%d",&a,&b);

    c=a+b;

    return c;
}

*/

///4.function with argument with return type
/*
#include<stdio.h>

int add(int,int);

int main()
{
    int a,b,ans;

    printf("\n Enter any two values : ");
    scanf("%d%d",&a,&b);

    ans=add(a,b);   ///original argument

    printf("\n Addition is : %d",ans);


}
///int add(int x,int y)
int add(x ,y) ///formal argument
{
    int c;

    c=x+y;

    return c;
}

*/

///5.Recursion: Calling the function from it's own body.

/// WAP to calc the factorial of number(with argument and with return type)


#include<stdio.h>
 int fact(int n);

 int main()
 {
     int no,ans;

     printf("\n Enter any number : ");
     scanf("%d",&no);

     ans=fact(no);
     printf("\n Factorial of %d is : %d",no,ans);
 }

 int fact(int no)
 {
     if(no==1)
        return 1;
     else
        return (no*fact(no-1));

 }



///check number is palindrome or not(with return and with argument)
/*
#include<stdio.h>

int isrev(int );
char ispalindrome(int );

int main()
{
    int no,ans;
    char ch;

    printf("\n Enter any number : ");
    scanf("%d",&no);

   ans=isrev(no);
    printf("\n Reverse number is : %d",ans);

    ch=ispalindrome(no);
    if(ch=='y')
        printf("\n %d is palindrome number ",no);
    else
        printf("\n %d is not palindrome number ",no);

}

char ispalindrome(no)
{
    int t;
    t=isrev(no);

    if(no==t)
        return 'y';
    else
        return 'n';

}

int isrev(n)
{
    int rev=0;

    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    return rev;
}

*/

///perform the arithmetic operators and operation expected
/*
#include<stdio.h>
int add(int x,int y)
{
    int z;
    z=x+y;

    return z;

}
void findmax(int p,int q)
{
    int max;

    max=(p>q)?p:q;

    printf("\n Max number is : %d",max);

}

float divi(int a,int b)
{
    float c;

    c=(float)a/b;

    return c;
}

char isprime(int no)
{
    int d=2;
    char flg='y';

    while(d<=no/2)
    {
        if(no%d==0)
        {
            flg='n';
            break;
        }
        d++;
    }
    return flg;
}
int main()
{
    int a,b,ans;
    float tmp;

    printf("\n Enter any two values : ");
    scanf("%d%d",&a,&b);

    ans=add(a,b);
    printf("\n Addition is: %d",ans);

    tmp=divi(a,b);
    printf("\n Division is: %.2f",tmp);

    findmax(a,b);

    char t=isprime(a);
    if(t=='y')
        printf("\n %d is prime Number",a);
    else
        printf("\n %d is not prime Number",a);
}

*/

///swap two numbers using  call by value
/*
#include<stdio.h>
void swap(int x,int y)
{
    int tmp;

    tmp=x;
    x=y;
    y=tmp;
}

int main()
{
    int a,b;

    printf("\n Enter any two values: ");
    scanf("%d%d",&a,&b);

    printf("\n Before swap a : %d\t\tb : %d",a,b);

    swap(a,b);
    printf("\n After swap a : %d\t\tb: %d",a,b); ///values are not swaped
}

*/

///---------------------------------------------------
///swap two numbers using  call by reference

/*
#include<stdio.h>
void swap(int *x,int *y)
{
    int tmp;

    tmp=*x;
    *x=*y;
    *y=tmp;
}

int main()
{
    int a,b;

    printf("\n Enter any two values: ");
    scanf("%d%d",&a,&b);

    printf("\n Before swap a : %d\t\tb : %d",a,b);

    swap(&a,&b);
    printf("\n After swap a : %d\t\tb: %d",a,b); ///values are  swaped
}

*/

///-----------------------------------------------------------------------------------------

/// Passing the array as a argument:
/*
#include<stdio.h>
void display(int[]);

int main()
{
    int x[10],i;

    printf("\n Enter 10 no's : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    display(x);
    return 0;
}

void display(int y[10]) //int y[];
{
    int i;

    printf("\n Display Elements : ");
    for(i=0;i<10;i++)
    {
        printf("%d\t",y[i]);
    }
}

*/

///=======================================================
///check  array is passed by ref or by the value
/*
#include<stdio.h>
void inc100(int t[])
{
    for(int i=0;i<10;i++)
    {
        t[i]=t[i]+100;
    }

}
void display(int y[])
{
    int i;

    printf("\n Elements are: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",y[i]);
    }
}

int main()
{
    int x[10],i;

    printf("\n Enter the array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\n Before inc100: ");
    display(x);

    printf("\n After inc100: ");
    inc100(x);
    display(x);

    return 0;

}

///array is always passed by reference.
*/

///WAP for iO methods
/*
#include<stdio.h>
void input(int a[])
{
    int i;
    printf("\n Enter 10 elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
}
void output(int b[10])
{
    printf("\n Display elements");
    for(int i=0;i<10;i++)
    {
        printf("%6d",b[i]);
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

///above program can be written using pointer
/*
#include<stdio.h>
 void input(int *p)
 {
     printf("\n Enter array elements : ");
     for(int i=0;i<10;i++)
     {
         scanf("%d",(p+i));
     }
 }
 void output(int *q)
 {
     printf("\n Display array elements: ");
     for(int i=0;i<10;i++)
     {
         printf("%6d",*(q+i));
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


///------------------------------------------------------------------------------------------------

/// WAP to get the array of even values from function when an array is passed as a argument.
/*
#include<stdio.h>
void evcnt(int y[])
{
    int ev[10],cnt=0,i;

    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            ev[cnt]=y[i];
            cnt++;
        }
    }
    printf("\n List of even no's: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",ev[i]);
    }
}
int main()
{
    int x[10],i;

    printf("\n Enter array elements: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display original array: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",x[i]);
    }

    evcnt(x);

    return 0;
}

*/

///=======================================================================
/// Now  display the array of even numbers in main().
/// 1a - passing the all arguments by reference

/*
#include<stdio.h>
void getevcnt(int x[10],int y[10],int *cn)
{
    for(int i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            y[*cn]=x[i];
            (*cn)++;
        }
    }
}
int main()
{
    int x[10],ev[10],cnt=0,i;

    printf("\n Enter the array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    getevcnt(x,ev,&cnt);

    printf("\n List of even no's: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",ev[i]);
    }

    printf("\n Original array: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",x[i]);
    }

    return 0;
}

*/

///=================================================

///1b - passing the array (by default by reference) as argument and
///      returning the count

/*
#include<stdio.h>
int getevcnt(int x[10],int y[10])
{
    int c=0;
    for(int i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            y[c]=x[i];
            c++;
        }
    }
    return c;
}
int main()
{
    int x[10],ev[10],cnt,i;

    printf("\n Enter the array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    cnt=getevcnt(x,ev);

    printf("\n Even count is: %d",cnt);
    printf("\n List of even no's: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",ev[i]);
    }

    printf("\n Original array: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",x[i]);
    }

    return 0;
}

*/

///-----------------------------------------------------------------------

///Using the static
/*
#include<stdio.h>

int geteven(int x[],int *cn)
{
    static int ev[10],i;

    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            ev[*cn]=x[i];
            (*cn)++;
        }
    }
    return ev;
}
int main()
{
    int x[10],cnt=0,i,*p;

    printf("\n Enter the array elements: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    p=geteven(x,&cnt);

    printf("\n List of even no's: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }

    printf("\n Original list: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",x[i]);
    }
    return 0;
}

*/

///-----------------------------------------------------------------------

/// 3. Using Global variables
/*
#include<stdio.h>
int ev[10],cnt=0;

void geteven(int y[])
{
    int i;

    for(i=0;i<10;i++)
    {
        if(y[i]%2==0)
        {
            ev[cnt]=y[i];
            cnt++;
        }
    }
}

int main()
{
    int x[10],i;

    printf("\n Enter array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    geteven(x);

    printf("\n List of even no's: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",ev[i]);
    }

    printf("\n List of original array: ");
    for(i=0;i<10;i++)
    {
        printf("%6d",x[i]);
    }
    return 0;
}

*/

///===================================================================================================================

/// Passing the pointer to function and return the pointer

/// Enter the N numbers and display the list of even number using function.

/*
#include<stdio.h>

int ev=0;

int geteven(int *q,int n)
{
    int i,j,*r;

    for(i=0;i<n;i++)
    {
        if(*(q+i)%2==0)
        {
            ev++;
        }
    }
    r=(int*)malloc(ev*sizeof(int));

    for(i=0,j=0;i<n;i++)
    {
        if(*(q+i)%2==0)
        {
            *(r+j)=*(q+i);
            j++;
        }
    }

    return r;
}

int main()
{
    int *p,*s,cnt,i;

    printf("\n Enter the element count: ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n enter the %d element :",cnt);

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display the array elements: ");
    for(i=0;i<cnt;i++)
    {
        printf("\t%d",*(p+i));
    }

    s=geteven(p,cnt);

    printf("\n List of even numbers: ");
    for(i=0;i<ev;i++)
    {
        printf("%6d",*(s+i));
    }
    return 0;
}

*/

///======================================================================
///Pointer to function
/*
#include<stdio.h>

void add(int a,int b)
{
    int c;
    c=a+b;
    printf("\n Addition is: %d",c);
}

void mul(int a,int b)
{
    int c;
    c=a*b;
    printf("\n Multiplication is: %d",c);
}

int main()
{
    int x,y;
    int (*fptr) (int,int);

    printf("\n Enter the values of x and y: ");
    scanf("%d%d",&x,&y);

    add(x,y);
    mul(x,y);

    fptr=&add;
    fptr(x,y);

    fptr=&mul;
    fptr(x,y);

    return 0;
}
*/

///============================================
/// Static Storage Class
/*
#include<stdio.h>

void incr()
{
    static int i=5;		// see the output with and without static
    printf("\n i=%d",i);
    i++;
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        incr();
    }
    return 0;
}

*/

///--------------------------------------------------------------------------------------------------------------------
/// calling the function from the function call: (nested call to function)
/// find the max between three nos
/*

#include<stdio.h>
int findmax(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int x,y,z,max;

    printf("\n Enter the values of x , y and z : ");
    scanf("%d%d%d",&x,&y,&z);

    max=findmax(findmax(x,y),z);
    printf("max number is %d",max);

    return 0;

}

*/
