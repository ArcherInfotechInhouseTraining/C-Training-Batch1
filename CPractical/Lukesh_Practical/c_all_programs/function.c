// Consider aSimple Program

//#include<stdio.h>
//int main()
//{
//    int a,b,sum=0;
//    printf("\n Enter The Values :");
//    scanf("%d%d",&a,&b);
//
//    sum=a+b;
//
//    printf("\n Sum is %d",sum);
//
//    return 0;
//
//}
//====================================================================================================================================================/
// I] simple function (function without argument without return type)

// #include<stdio.h>
//
// void add();
//
// int main()
//{
//    printf("\n Start Of Main");
//    add();
//    printf("\n Start Of Main");
//    add();
//    printf("\n start of Main");
//    add();
//    printf("\n End Of Main");
//
// return 0;
//}
//
//void add()
//{
//    int a,b,sum=0;
//    printf("\n Enter The a & b");
//    scanf("%d%d",&a,&b);
//
//    sum=a+b;
//
//    printf("\n Sum is %d",sum);
//
//}

//#include<stdio.h>
//
//void trip();
//
//int main()
//{
//    printf("\n Start The Journey");
//    printf("\n I Am In NYC");
//    trip();
//    printf("\n I Am In India");
//    trip();
//    printf("\n I Am in My Home");
//    trip();
//    printf("\n Peace");
//    return 0;
//}
//
//
//void trip()
//{
//     printf("\n I Am Enjoing");
//}
//====================================================================================================================================================/

/// II] function with argument without return type

//#include<stdio.h>
// void add(int,int);   // function Decleration
//
//    int main()
//    {
//    int a,b;
//
//    printf("\n Enter The Two Values: ");
//    scanf("%d%d",&a,&b);
//
//    add(a,b);         // function call
//
//    return 0;
//
//    }
//
// void add(int x,int y)        // function definition
//
// {
//     int ans;
//     ans=x+y;
//     printf("\n Addition Of Two Number is %d ",ans);
//
//     printf("\n");
//
// }
//====================================================================================================================================================/

/// III] Function Without Argument with return type

//#include<stdio.h>
//int add();
//
//int main()
//{
//    int sum;
//    sum=add();
//    printf("\n Addition of X and Y :%d",sum);
//    return 0;
//}
//
//int add()
//{
//     int x,y,ans=0;
//    printf("\n Enter The x and y ");
//    scanf("%d%d", &x,&y);
//     ans=x+y;
//
//     return ans;
//}

//====================================================================================================================================================/

/// WAP to Calculate Factorial of  any no

// #include<stdio.h>
// int main()
// {
//     int no,i,fact=1;
//     printf("\n Enter The Number:");
//     scanf("%d",&no);
//
//     for(i=1; i<=no; i++)
//     {
//         fact=fact*i;
//     }
//
//     printf("\n Factorial is %d",fact);
//
//    return 0;
// }
//====================================================================================================================================================/
/// Iv] Function with return and with arguments

/// WAP to Calculate Factorial of any number using function

//#include<stdio.h>
//
//int fact(int no);
//int main()
//{
//    int no,ans;
//    printf("\n Enter The Number :");
//    scanf("%d",&no);
//
//    ans=fact(no);
//
//    printf("\n Factorial is %d",ans);
//
//  return 0;
//
//}

// int fact(int no)
// {
//     int t=1,i;
//
//     for(i=1; i<=no; i++)
//     {
//         t=t*i;
//     }
//     return t;
// }

/// using recursion

// int fact(int no)
// {
//     if(no==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return no*fact(no-1);
//     }
//
// }

//====================================================================================================================================================/

 /// WAP to reverse the entered no

// #include<stdio.h>
// int main()
// {
//     int no,rev=0,rem;
//
//     printf("\n Enter any no :");
//     scanf("%d",&no);
//
//     for( ; no!=0; no=no/10)
//     {
//         rem=no%10;
//         rev=(rev*10)+rem;
//     }
//
//     printf("\n Reverse no is %d ",rev);
//     return 0;
// }
//====================================================================================================================================================/
/// WAP to display palindrome number

//#include<stdio.h>
//int main()
//{
//    int no,tmp,rem,rev=0;
//
//    printf("\n Enter The Number :");
//    scanf("%d",&no);
//    tmp=no;
//
//    for( ; no!=0; no=no/10)
//    {
//        rem=no%10;
//        rev=(rev*10)+rem;
//    }
//    if(rev==tmp)
//        printf("\n Number is Palindrome Number");
//    else
//        printf("\n Number is not palindrome");
//
//    return 0;
//
//}
//====================================================================================================================================================/
/// Using Function

//#include<stdio.h>
//int rev(int no);
//
//char ispalindrome(int no);
//
//int main()
//{
//    int no,ans;
//    char ch;
//
//    printf("\n Enter The Number :");
//    scanf("%d",&no);
//
//    ans=rev(no);
//    printf("\n Reverse Number is %d",ans);
//
//    ch=ispalindrome(no);
//
//    if(ch=='y')
//           printf("\n %d Number is Palindrome number",no);
//    else
//           printf("\n %d Number is Not palindrome",no);
//
//    return 0;
//}
//
//
//int rev(int no)
//{
//    int rev=0,rem;
//
//    for( ; no!=0; no=no/10)
//    {
//        rem=no%10;
//        rev=(rev*10)+rem;
//    }
//    return rev;
//}
//
//char ispalindrome(int no)
//{
//    int a;
//    a=rev(no);
//    printf("\n rev is %d",rev(no));
//
//    if(a==no)
//    {
//        return 'y';
//    }
//    else
//    {
//        return 'n';
//    }
//}
//====================================================================================================================================================/
/// WAP to implement following functions to perform the arithmetic operations and operation expected

/// int add(int,int);

// #include<stdio.h>
//
// int add(int a ,int b);
//
// int main()
// {
//     int a,b,sum;
//     printf("\n Enter The Two Nos :");
//     scanf("%d%d",&a,&b);
//
//     sum=add(a,b);
//
//     printf("\n Sum is %d",sum);
//     return 0;
// }
//
// int add(int a ,int b)
// {
//     return a+b;
// }

/// float div(int,int);

//#include<stdio.h>
//
// float div(int a ,int b);
//
// int main()
// {
//     float a,b,ans;
//     printf("\n Enter The Two Nos :");
//     scanf("%f%f",&a,&b);
//
//     ans=div(a,b);
//
//     printf("\n division is %0.2f",ans);
//     return 0;
// }
//
// float div(int a ,int b)
// {
//     float d;
//     d=a/b;
//
//     return d;
// }

/// void findmax();

//#include<stdio.h>
//
//void findmax();
//
//int main()
//{
//    findmax();
//   return 0;
//}
//void findmax()
//{
//    int n,no,max=0,i;
//    printf("\n Enter The Number :");
//    scanf("%d",&n);
//
//    printf("\n Enter The %d Numbers \n",n);
//
//    for(i=0; i<n; i++)
//    {
//        scanf("%d",&no);
//
//        if(no>max)
//          max=no;
//    }
//
//    printf("\n Max Number is %d",max);
//}

 	char isprime(int);

 #include<stdio.h>

    char isprime(int no);

    int main()
{
    int no;
    char ch;

    printf("\n Enter The Number");
    scanf("%d",&no);

    ch=isprime(no);

    if(ch=='y')
        printf("\n %d is prime number",no);
    else
        printf("\n %d is not prime number",no);

   return 0;
}

   char isprime(int no)
   {
       int d,flg=0;

       d=2;
        while(d<no/2)
        {
            if(no%d==0)
               {
                flg++;
                break;
               }
        }
        d++;

        if(flg==0 && no>1)
        {
            return 'y';
        }
        else
        {
            return 'n';
        }
   }
//====================================================================================================================================================/
/// WAP to swap two numbers

//#include<stdio.h>
//
//int main()
//{
//    int a,b,tmp;
//
//    printf("\n Enter any no : ");
//    scanf("%d%d",&a,&b);
//
//    printf("\n  Before  A is %d \t B is %d ",a,b);
//    tmp=a;
//    a=b;
//    b=tmp;
//
//    printf("\n  After A is %d \t B is %d ",a,b);
//
//  return 0;
//}

// // CALL BY VALUE

//void swap(int x,int y)
//{
//    int tmp;
//    tmp=x;
//    x=y;
//    y=tmp;
//}
//
//int main()
//{
//    int a,b;
//    printf("\n Enter the value of a and b : ");
//    scanf("%d%d",&a,&b);
//
//    printf("\n  Before Exchange  A is %d \t B is %d ",a,b);
//    swap(a,b);
//    printf("\n  After Exchange  A is %d \t B is %d ",a,b);
//
//    return 0;
//}
//   // CALL BY REFERENCE OR CALL BY ADDRESS

//#include<stdio.h>
//void swap(int *x,int *y)
//{
//    int tmp;
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//}
//
//int main()
//{
//    int a,b;
//
//    printf("\n Enter the value of a and b : ");
//    scanf("%d%d",&a,&b);
//
//    printf("\n  Before Exchange  A is %d \t B is %d ",a,b);
//    swap(&a,&b);
//    printf("\n  After Exchange  A is %d \t B is %d ",a,b);
//
//    return 0;
//}
//====================================================================================================================================================/
/// Pass Array as argument

//#include<stdio.h>
//
//void evenno(int ar[])
//{
//    int i;
//    for(i=0;i<10;i++)
//    {
//        if(ar[i]%2==0)
//        {
//            printf("\t %d",ar[i]);
//        }
//    }
//}
//int main()
//{
//    int arr[10],i;
//
//    printf("\n Enter the 10 elements ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//
//    evenno(arr);
//}
//====================================================================================================================================================/
//check Array is passed by value or by Reference
// 1	2	3	4	5
// 1	202	3	404	5

//void evenno(int ar[])
//{
//    int i;
//    for(i=0;i<5;i++)
//    {
//        if(ar[i]%2==0)
//        {
//            ar[i]=ar[i]+100;
//        }
//    }
//}
//
//void display( int s[])
//{
//   int i;
//   for(i=0;i<5;i++)
//   {
//       printf("\t %d",s[i]);
//   }
//}
//int main()
//{
//    int arr[5],i;
//
//    printf("\n Enter any 5 no :");
//    for(i=0;i<5;i++)
//    {
//       scanf("%d",&arr[i]);
//    }
//    printf("\n Before : ");
//    display(arr);
//    evenno(arr);
//    printf("\n After  : ");
//    display(arr);
//    return 0;
//}
//====================================================================================================================================================/
/// using input output method

//#include<stdio.h>
//
//void incr100(int add[])
//{
//    int i;
//    for(i=0;i<5;i++)
//    {
//     add[i]=add[i]+100;
//    }
//}
//void input(int x[])
//{
//    int i;
//    printf("\n Enter any 5 no :");
//    for(i=0;i<5;i++)
//    {
//       scanf("%d",&x[i]);
//    }
//}
//void display( int v[])
//{
//   int i;
//   for(i=0;i<5;i++)
//   {
//       printf("\t %d",v[i]);
//   }
//}
//int main()
//{
//    int x[5];
//
//    input(x);
//    printf("\n Before : ");
//    display(x);
//    incr100(x);
//    printf("\n After  : ");
//    display(x);
//    return 0;
//}
//====================================================================================================================================================/
//#include<stdio.h>

//int input(int x[])
//{
//    int i;
//    int evn[5];
//    printf("\n Enter Any 5 Numbers :");
//
//    for(i=0; i<5; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    for(i=0; i<5; i++)
//    {
//        if(x[i]%2==0)
//        {
//            evn[i]=x[i];
//        }
//    }
//    printf("\n even numbers are");
//
//    for(i=0; i<5; i++)
//    {
//        printf("\t %d",evn[i]);
//    }
//
//
//}
//
//int main()
//{
//    int *x[5],i;
//    input(x);
//
//    printf("\n even numbers are");
//
////    for(i=0; i<5; i++)
////    {
////        printf("\t %d",[i]);
////    }
//    return 0;
//}
//====================================================================================================================================================/
/** We all know array is passed by reference by default means,it can be collected in pointer variable also
    above program can be written as   */

//#include<stdio.h>
//
//void input(int *a)
//{
//    int i;
//    printf("\n enter the 10 Numbers :");
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",(a+i));
//      //scanf("%d",&a[i]);
//    }
//}
//
//void display(int *b)
//{
//    int i;
//    printf("\n Elements are :");
//    for(i=0; i<10; i++)
//    {
//        printf("%5d",*(b+i)); //b[i]
//    }
//}
//
//
//
//
//int main()
//{
//    int x[10];
//    input(x);
//    display(x);
//
//    return 0;
//}
//====================================================================================================================================================/
/** WAP to get the array of even values from function when an array is passed as a argument

   copy and displaying all even elements from array using function  */

//#include<stdio.h>
//
//void even(int a[])
//{
//    int ev[10],cnt=0;
//    int i;
//
//    for(i=0; i<10; i++)
//    {
//        if(a[i]%2==0)
//        {
//            ev[cnt]=a[i];
//            cnt++;
//        }
//    }
//
//    printf("\n List of Even Elements :");
//    for(i=0; i<cnt; i++)
//    {
//        printf("%5d",ev[i]);
//    }
//    printf("\n");
//}
//
//
//
//int main()
//{
//    int x[10],i;
//
//    printf("\n Enter The 10 Numbers :");
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    even(x);
//
//    printf("\n Original Array :");
//
//    for(i=0; i<10; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    return 0;
//}
//====================================================================================================================================================/
/** Now  i Want to display the array of even numbers in main()
    there are different ways

     1a - passing the all arguments by reference    */

//#include<stdio.h>
//
//    void even(int a[], int b[], int *p)
//{
//    int i;
//    for(i=0; i<10; i++)
//    {
//        if(a[i]%2==0)
//        {
//            b[*p]=a[i];
//            (*p)++;
//        }
//    }
//
//    printf("\n Cnt=%d",*p);
//}
//
//int main()
//{
//    int x[10],ev[10],i,cnt=0;
//
//    printf("\n Enter The Numbers :");
//
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    even(x,ev,&cnt);
//
//    printf("\n List Of Even Elements :");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%5d",ev[i]);
//    }
//    printf("\n");
//
//    printf("\n Original Array :");
//    for(i=0; i<10; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
// return 0;
//}
//====================================================================================================================================================/
/** 1-b passing the array (by default by reference) as argument and returning the count  */

//#include<stdio.h>
//
//int even(int a[], int b[])
//{
//    int i,count=0;
//    for(i=0; i<10; i++)
//    {
//        if(a[i]%2==0)
//        {
//            b[count]=a[i];
//            count++;
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    int x[10],ev[10],i,cnt=0;
//
//    printf("\n Enter the 10 Numbers :");
//
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    cnt=even(x,ev);
//
//    printf("\n Original Array :");
//    for(i=0; i<10; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n Even Elements :");
//    for(i=0; i<cnt; i++)
//    {
//        printf("%5d",ev[i]);
//    }
//    return 0;
//}
//====================================================================================================================================================/
/** Using The Static : Normally life and scope of function is limited within the function

    returning the array from function  */

//#include<stdio.h>
//
//int* even(int a[],int *cnt)
//{
//    static int ev[10];
//    int i;
//
//    for(i=0; i<10; i++)
//    {
//        if(a[i]%2==0)
//        {
//            ev[*cnt]=a[i];
//            (*cnt)++;
//        }
//    }
//    return ev;
//}
//
//int main()
//{
//    int x[10],cnt=0,i;
//    int *p;
//
//    printf("\n Enter the 10 Numbers :");
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    p=even(x,&cnt);
//
//    printf("\n Original Array :");
//    for(i=0; i<10; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n Even Elements :");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%5d",*(p+i));
//    }
//
//    return 0;
//}
//====================================================================================================================================================/
/** 3- Using Global Variables */

//#include<stdio.h>
//
//int ev[10],cnt=0;
//void even(int a[])
//{
//    int i;
//    for(i=0; i<10; i++)
//    {
//        if(a[i]%2==0)
//        {
//            ev[cnt]=a[i];
//            cnt++;
//        }
//    }
//}
//
//int main()
//{
//    int x[10],i;
//
//    printf("\n Enter The 10 Numbers :");
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    even(x);
//
//    printf("\n Original Array :");
//    for(i=0; i<10; i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n Even Elements :");
//    for(i=0; i<cnt; i++)
//    {
//        printf("%5d",ev[i]);   // in this code ev is not passed by return
//    }
//    return 0;
//}
//====================================================================================================================================================/
/** Passing the pointer to function and return the pointer
    Enter the N numbers and display the list of even number using function.  */



#include<stdio.h>

int ec=0;                        // Global decelared
int* even(int *a ,int cntt)       // taken int* in function bcz we passing the pointer so when receiving we have to declare pointer
{
    int i,j;
    int *b;

    i=0;
    while(i<cntt)
    {
        if(*(a+i)%2==0)
        {
            ec++;
        }
    }

    b=(int*)malloc(ec*sizeof(int));

    i=0;
    j=0;
    while(i<cntt)
    {
        if(*(a+i)%2==0)
        {
            *(b+j)=*(a+i);
            j++;
        }
    i++;
    }

    return b;
}

//  int main()
//{
//    int i,cnt=0;
//    int *p,*q;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter The %d Elements",cnt);
//
//    i=0;
//    while(i<cnt)
//    {
//        scanf("%d",(p+i));
//    i++;
//    }
//
//    q=even(p,cnt);
//
//    printf("\n Original Elements :");
//
//    i=0;
//    while(i<cnt)
//    {
//        printf("%5d",*(p+i));
//    i++;
//    }
//
//    printf("\n Even Elements :");
//
//    i=0;
//    while(i<ec)
//    {
//        printf("%5d",*(q+i));
//   i++;
//    }
//
//   return 0;
//
//}











