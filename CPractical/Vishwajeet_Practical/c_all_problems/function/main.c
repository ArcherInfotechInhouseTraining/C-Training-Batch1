/////===================== FUNCTIONS ==================================
///// FUNCTION CALL TO CALL FUNCTION IN FUNCTION
//#include<stdio.h>
//void sangli();
//void kolhapur();
//void Solapur();
//    int main()
//    {
//        printf("\n Main Starts");
//        sangli();
//        kolhapur();
//        Solapur();
//        printf("\n Main Ends");
//        return 0;
//    }
//    void sangli()
//    {
//        printf("\n I am in sangli");
//        kolhapur();
//        printf("\n I am Back to Sangli");
//    }
//    void kolhapur()
//    {
//        printf("\n Iam in kolhapur");
//    }
//    void Solapur()
//    {
//        printf("\n I am in solapur");
//    }
//
///// ADD TWO NUMBERS WITH SIMPLE FUNCTION
//
//#include<stdio.h>
//void add();
//    int main()
//    {
//        printf("\n Main Starts");
//        add();
//        printf("\n Main Ends");
//        add();
//        return 0;
//    }
//    void add()
//    {
//        int a,b,c;
//        printf("\n Enter two numbers");
//        scanf("%d %d",&a,&b);
//        c=a+b;
//        printf("\n Answer is %d",c);
//    }
//
///// ADD TWO NUMBERS USING FUNCTION WITH ARGUMENTS WITHOUT RETURN TYPE
//#include<stdio.h>
//void add();
//    int main()
//    {
//        int a,b;
//        printf("\n Enter the value of a and b");
//        scanf("%d %d",&a,&b);
//        add(a,b);
//
//    }
//    void add(int x,int y)
//    {
//        int c;
//        c=x+y;
//        printf("\n Answer is %d",c);
//    }
//
///// ADD TWO NUMBERS USING FUNCTION WITHOUT ARGUMENTS WITH RETURN TYPE
//
//#include<stdio.h>
//int add();
//    int main()
//    {
//        int t;
//        printf("\n Main Starts");
//        t=add();
//        printf("\n Addition is %d",t);
//        printf("\n Main ends");
//    }
//    int add()
//    {
//        int a,b,c;
//        printf("\n Enter the value of a and b");
//        scanf("%d %d",&a,&b);
//        c=a+b;
//        return c;
//    }
//
///// ADD TWO NUMBERS USING FUNCTION WITH ARGUMENTS WITH RETRURN TYPE
//
//#include<stdio.h>
//int add();
//    int main()
//    {
//        int a,b,t;
//        printf("\n Enter the value of a and b");
//        scanf("%d %d",&a,&b);
//        t=add(a,b);
//        printf("\n Addition is %d",t);
//        return 0;
//    }
//    int add(int x,int y)
//    {
//        int c;
//        c=x+y;
//        return c;
//    }
//
/////=== WAP FOR VARIABLES ARE GLOBAL
//#include<stdio.h>
//int a,b,c;
//void add();
//    int main()
//    {
//
//        printf("\n Enter the value of a and b");
//        scanf("%d %d",&a,&b);
//        add();
//        printf("\n Addition is %d",c);
//        return 0;
//    }
//    void add()
//    {
//        c=a+b;
//    }
//
/// WAP TO REVERSE A NUMBER USING FUNCTION
//#include<stdio.h>
//int reverse();
//    int main()
//    {
//        int no,tmp;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp = reverse(no);
//        printf("\n Reverse number is %d",tmp);
//    }
//    int reverse(int n)
//    {
//        int rev=0;
//        while(n!=0)
//        {
//            rev = rev*10+(n%10);
//            n = n/10;
//        }
//        return rev;
//    }
//
/// WAP TO ENTER A NUMBER AND FIND THAT NUMBER IS PALINDROME OR NOT USING FUNCTION
//#include<stdio.h>
//int reverse(int);
//char isPalindrome(int);
//    int main()
//    {
//        int no,tmp;
//        char ans;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        tmp = reverse(no);
//        printf("\n Reverse number is %d",tmp);
//        ans = isPalindrome(no);
//        if(ans=='y')
//        {
//            printf("\n %d is Palindrome",no);
//        }
//        else
//        {
//            printf("\n %d is not palindrome",no);
//        }
//        return 0;
//    }
//    int reverse(int n)
//    {
//        int rev=0;
//        while(n!=0)
//        {
//            rev = rev*10+(n%10);
//            n = n/10;
//        }
//        return rev;
//    }
//    char isPalindrome(int t)
//    {
//        int a;
//        a=reverse(t);
//        if(a==t)
//        {
//            return 'y';
//        }
//        else
//        {
//            return 'n';
//        }
//    }
//
/// WAP CALL BY VALUE
//#include<stdio.h>
//void swap(int,int);
//    int main()
//    {
//        int x,y;
//        printf("\n Enter the value of x and y");
//        scanf("%d %d",&x,&y);
//        printf("\n Before Swap the values are %d %d",x,y);
//        swap(x,y);
//        printf("\n After swap the values are %d %d",x,y);
//        return 0;
//    }
//    void swap(int a, int b)
//    {
//        int tmp;
//        tmp = a;
//        a = b;
//        b = tmp;
//    }
//
/// CALL BY REFERENCE
//#include<stdio.h>
//void swap(int*,int*);
//    int main()
//    {
//        int x,y;
//        printf("\n Enter the value of x and y");
//        scanf("%d %d",&x,&y);
//        printf("\n Before Swap the values are %d %d",x,y);
//        swap(&x,&y);
//        printf("\n After swap the values are %d %d",x,y);
//        return 0;
//    }
//    void swap(int *a, int *b)
//    {
//        int tmp;
//        tmp = *a;
//        *a = *b;
//        *b = tmp;
//    }
//
/// 1. WAP TO FIND CUBE OF ANY NUMBER
//#include<stdio.h>
//int cube(int);
//    int main()
//    {
//        int no,t;
//        printf("\n Enter the number");
//        scanf("%d",&no);
//        t=cube(no);
//        printf("\n Cube of %d is %d",no,t);
//        return 0;
//    }
//    int cube(int n)
//    {
//        int c;
//        c=n*n*n;
//        return c;
//    }
//
/// 2. WAP TO FIND DIAMETER, CIRCUMFERENCE AND AREA OF CIRCLE USING FUNCTION
//#include<stdio.h>
//void diameter(float a);
//void circumference(float a);
//void area(float a);
//    int main()
//    {
//        float r;
//        printf("\n Enter the radius");
//        scanf("%f",&r);
//        diameter(r);
//        circumference(r);
//        area(r);
//        return 0;
//    }
//    void diameter(float a)
//    {
//        float d;
//        d=2*a;
//        printf("\n Diameter is %.2f",d);
//    }
//    void circumference(float a)
//    {
//        float c;
//        c = 2 * 3.142 * a;
//        printf("\n Circumference is %.2f",c);
//    }
//    void area(float a)
//    {
//        float c;
//        c= 3.142*a*a;
//        printf("\n Area of Circle is %.2f",c);
//    }
//
/// 3.WAP TO FIND MAX AND MIN BETN 2 ENTERED NUMBERS USING FUNCTION
//#include<stdio.h>
//void max(int,int);
//void min(int,int);
//    int main()
//    {
//        int no1,no2;
//        printf("\n Enter any  two number");
//        scanf("%d %d",&no1,&no2);
//        max(no1,no2);
//        min(no1,no2);
//        return 0;
//    }
//    void max(int n1,int n2)
//    {
//        if(n1>n2)
//        {
//            printf("\n %d is max",n1);
//        }
//        else
//        {
//            printf("\n %d is max",n2);
//        }
//    }
//    void min(int n1,int n2)
//    {
//        if(n1>n2)
//        {
//            printf("\n %d is min",n2);
//        }
//        else
//        {
//            printf("\n %d is min",n1);
//        }
//    }
//
/// 4. WAP TO CHECK NO IS EVEN OR ODD
//#include<stdio.h>
//char evenodd(int);
//    int main()
//    {
//        int no;
//        char t;
//        printf("\n Enter any number");
//        scanf("%d",&no);
//        t=evenodd(no);
//        if(t=='e')
//        {
//            printf("\n %d is even",no);
//        }
//        else
//        {
//            printf("\n %d is odd",no);
//        }
//    }
//    char evenodd(int n)
//    {
//        if(n%2==0)
//        {
//            return 'e';
//        }
//        else
//        {
//            return 'o';
//        }
//    }
/// RECURSION FACTORIAL
//#include<stdio.h>
//int fact(int n);
//int main()
//{
//	int no, ans;
//	printf("\n Enter the no: ");
//	scanf("%d",&no);
//
//	ans=fact(no);
//}
//
//int fact(int no)
//{
//	if(no==1)
//	  return 1;
//	else
//	  return (no* fact(no-1));
//}
//
///PASSING ARRAY AS ARGUMENT
//#include<stdio.h>
//void display(int[]);
//int main()
//{
//	int x[10],i;
//
//	printf("\n Enter 10 nos: ");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&x[i]);
//	}
//	display(x);
//	return 0;
//}
//void display(int y[10])
//{
//    int i;
//    printf("\n Elements are: ");
//	for(i=0;i<10;i++)
//	{
//		printf("%6d",y[i]);
//	}
//}
/// BY USING PTR
//#include<stdio.h>
//void display(int *p)
//{
//    int i;
//    printf("\n Elements are: ");
//	for(i=0;i<10;i++)
//	{
//		// printf("%6d",p[i]);
//		printf("%6d",*(p+i));
//	}
//}
//void input(int *q)
//{
//    int i;
//    printf("\n Enter 10 nos: ");
//	for(i=0;i<10;i++)
//	{
//		// scanf("%d",&q[i]);
//		scanf("%d",(q+i));
//	}
//}
//int main()
//{
//	int x[10],y[10];
//
//	input(x);
//	display(x);
//
//	return 0;
//}

/// WAP TO FIND FACTORIAL USING RECURSION
//#include<stdio.h>
//int fact (int no);
//    int main()
//    {
//        int no,ans;
//        printf("\n Enter the number");
//        scanf("%d",&no);
//        ans = fact(no);
//        printf("\n Factorial of %d is %d",no,ans);
//    }
//    int fact(int no)
//    {
//        if(no==1)
//        return 1;
//        else
//        return (no*fact(no-1));
//    }
//
/// PASSING THE ARRAY ASA NA ARGUMENT
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        display(x);
//        return 0;
//    }
//    void display(int y[])
//    {
//        int i;
//        printf("\n Elements are");
//        for(i=0;i<10;i++)
//        {
//            printf("%6d",y[i]);
//        }
//    }
//
///
//#include<stdio.h>
//void incr(int[]);
//void display(int[]);
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n before incr100");
//        display(x);
//        incr100(x);
//        printf("\n After incr100");
//        display(x);
//        return 0;
//    }
//    void incr100(int t[])
//    {
//        int i;
//        for(i=0;i<10;i++)
//        {
//            t[i]=t[i]+100;
//        }
//    }
//    void display(int y[])
//    {
//        int i;
//        printf("\n Elements are");
//        for(i=0;i<10;i++)
//        {
//            printf("%6d",y[i]);
//        }
//    }
//
//
/// WAP to get the array of even values from function when an array
///is passed as a argument.
//#include<stdio.h>
//void getevens(int[]);
//    int main()
//    {
//        int x[10],i;
//        printf("\n Enter the 10 values");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        getevens(x);
//        printf("\n Original array");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//    void getevens(int y[])
//    {
//        int ev[10],cnt=0,i;
//        for(i=0;i<10;i++)
//        {
//            if(y[i]%2==0)
//            {
//                ev[cnt]=y[i];
//                cnt++;
//            }
//        }
//        printf("\n Count of Even Elements is %d",cnt);
//        printf("\n Even elements of array");
//        {
//            for(i=0;i<cnt;i++)
//            {
//                printf("%5d",ev[i]);
//            }
//        }
//    }
//
