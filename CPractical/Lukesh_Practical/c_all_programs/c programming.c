//#include<stdio.h>
//int main()
//{
//printf("\n name :: lukesh");
//printf("\n address :: a/p sultangade \t taluka :: khanapur \t district :: sangli \t pin code :: 415307 ");
//printf("\n ssc marks :: 65%% \t diploma marks :: 88%% ");
//printf("\n abc is my best friend \r nitin ");
//printf("\n what about you \?");
//return 0;
//
//}
//=========================================================================================================================================================

/// write a program to declare multiple variable of different data type input through key word and display all
//#include<stdio.h>
//int main ()
//{
// int a,b;
// char x,y;
// float p,q;
// double j,k;
// printf(" enter the values of A and B :: ");
// scanf("%d %d",&a,&b);
// printf("\n a=%d\t b=%d",a,b);
// printf("\n enter the values of a and b ::");
// scanf("%f %f",&p,&q);
// printf("\n a=%f\t b=%f",p,q);
// printf("\n enter the values of a and b ::");
// scanf(" %c %c",&x,&y);
// printf("\n a=%c\t b=%c",x,y);
// printf("\n enter the value of a and b ::");
// scanf("%f %f",&j,&k);
// printf("\n a=%f\t b=%f",j,k);
//
// return 0;
//}
//=========================================================================================================================================================

/// write a c program to enter the two values and interchange the value variable
//#include<stdio.h>
//int main ()
//{
// int a,b,temp;
// printf(" enter the values of A and B ");
// scanf ("%d %d",&a ,&b);
// printf(" \n the values of a and b before exchange is :: %d %d",a,b);
//
// temp =a;
// a=b;
// b=temp;
// printf("\n");
// printf("the values of a and b after exchange is %d %d",a ,b);
// return 0;
//}
//=========================================================================================================================================================

/// write a c program to enter the two values and swap without using third variable
// #include<stdio.h>
// int main()
//{
// int a,b;
// printf (" enter the values of a and b");
// scanf("%d %d",&a,&b);
// printf("\n a and b before swapping \t");
// printf(" a :: %d b :: %d ",a,b);
// a=a+b;
// b=a-b;
// a=a-b;
// printf("\n a and b after swapping \t");
// printf("a=%d b=%d",a,b);
//return 0;
// }
//=========================================================================================================================================================

/// write program to perform increament decreament operator

//  #include<stdio.h>
//  int main ()
//{
//  int a,b,c;
//  a=12; b=34;
//  printf("a=%d b=%d \t",a,b);
//  c=++a;
//  printf("c=%d",c);
//  int ans = ++b - c--; //
//  printf("\n ans = %d",ans);
//  return 0;
//  }

//=========================================================================================================================================================

/// write a c program to enter two numbers and perform the all the arithmatic operation
// #include<stdio.h>
//int main ()
//{
//  float a,b;
//  float ans;
// printf("enter the a and b::");
// scanf("%f%f",&a,&b);
// printf("\n a=%f b=%f",a,b);
// printf("\n sum=%f",a+b);
// printf("\n substraction=%f",a-b);
// printf("\n multiplication =%f",a*b);
// printf("\n division = %f",a/b);
// return 0;
//}
//=========================================================================================================================================================

/// write a c program to enter length breadth of rectangle and find its perimeter
//#include<stdio.h>
// int main ()
//{
// float l,b,p;
// printf("enter the length of the rectangle ::");
// scanf("%f",&l);
// printf("\n l=%f",l);
// printf("\n enter the breadth of the rectangle ::");
// scanf("%f",&b);
// printf("\n b=%f",b);
// p=2*(l+b); // formula
// printf("\n perimeter of the rectangle ::%f",p);
// return 0;
//}
//==========================================================================================================================================================

/// write a program to enter length and breadth of rectangle and find its area
// #include<stdio.h>
// int main ()
// {
//  float l,b,a;
//  printf("enter the length of the rectangle ::");
//  scanf("%f",&l);
//  printf("\n enter the breadth of the rectangle ::");
//  scanf("%f",&b);
//  a=l*b;
//  printf("the area of rectangle is :: %f",a);
//  return 0;
// }
//=========================================================================================================================================================

/// write a c program to enter radius of circle and find its diameter circumference and area
// #include<stdio.h>
// int main ()
// {   float r,d,c,a;
//     printf("enter the radius of the circle::");
//     scanf("%f",&r);
//     d=2*r;
//     printf(" \n the diameter of the circle = %f ",d);
//     printf("\n the circumference of the circle = %f",2*3.14*r);
//     printf("\n the area of the circle= %f",pow(3.14*r,2));
//     return 0;
// }
//=========================================================================================================================================================

/// write a c program to enter length in centimeter and convert it into meter and kilometer
//#include<stdio.h>
//int main ()
//{
//  float l;
//  printf("enter the length in cm::");
//  scanf("%f",&l);
//  printf(" \n the length in meter :: %f",l/100);
//  printf("\n the length in kilometer:: %f",l/100000);
//  return 0;
//}
//==========================================================================================================================================================

///// write a c program to enter temperature in celsius and convert it into fehrenhnite
//#include<stdio.h>
//int main ()
//{ float celsius;
//  printf("temperature in celsius::");
//  scanf("%f",&celsius);
//  printf("\n temperature in fehrenhnite :: %f ",(celsius*1.8)+32);
//  return 0;
//}

//==========================================================================================================================================================
/// write a c program to enter temperature in fehrenhnite and convert it into celsius
//#include<stdio.h>
//  int main ()
//{ float fehrenhnite;
//  printf("enter the temperature in fehrenhnite::");
//  scanf("%f",&fehrenhnite);
//  printf("\n the temperature in celsius %f::" ,(fehrenhnite-32)/1.8);
//  return 0;
//}
//==========================================================================================================================================================
/// write a c program to convert days into years weeks and days
//#include<stdio.h>
//int main ()
//{
//  int days,weeks,years;
//  printf("enter the days ::");
//  scanf("%d",&days);
//  printf("\n years=%d",days/365);
//  printf("\n weeks=%d",days/7);
//  printf("\n days:: %d",days/1);
//  return 0;
//}
//==========================================================================================================================================================
/// write a c program to find the power of any number
//#include<stdio.h>
//#include<math.h>
//int main ()
//{
//int a=1,b=2;
//printf("%d",pow(a,b));
//return 0;
//}
//==========================================================================================================================================================
/// write a c program to enter any number and calculate its square root
//#include<stdio.h>
//int main ()
//{
//     float n,i;
//     printf(" enter any number ::");
//     scanf("%f",&n);
//
//     for(i=0.001; i*i<n; i=i+0.001);
//
//      printf("square root of %f is %f" ,n,i);
//
//    return 0;
//
//}
//==========================================================================================================================================================
/// write a program to enter two angles of triangle and find its third angle
//#include<stdio.h>
//int main ()
//{  float a,b,c;
//   printf(" enter the first angle of triangle::");
//   scanf("%f",&a);
//   printf("\n the first angle is :: %f",a);
//   printf("\n enter the second angle of triangle::");
//   scanf("%f",&b);
//   printf("\n the second angle is :: %f",b);
//   c=180-(a+b);
//   printf("\n the third angle of triangle is :: %f",c);
//   return 0;
//}
//==========================================================================================================================================================
/// write a c program to enter base and height of triangle to find its area
// #include<stdio.h>
// int main ()
// {
//  float b,h,a;
//  printf("enter the base of the triangle ::");
//  scanf("%f",&b);
//  printf("\n the base of the triangle is :: %f",b);
//  printf("\n enter the height of the triangle ::");
//  scanf("%f",&h);
//  printf("\n the height of the triangle :: %f",h);
//  printf("\n the area of the triangle :: %f ",b*h/2);
//  return 0;
// }
//==========================================================================================================================================================
/// write a c program to find the area of equilateral triangle
//#include<stdio.h>
//#include<math.h>
//  int main ()
//{ float s,a;
// printf("enter the first side of the equilateral triangle::");
// scanf("%f",&s);
// printf("\n the side of equilateral triangle :: %f",s);
// a=sqrt(3)/4*s*s;
// printf("\n the area of equilateral triangle :: %f",a);
// return 0;
//}
//==========================================================================================================================================================
/// write a c program to enter the marks of the five subject and calculate total,average and its percentage
//#include<stdio.h>
//int main ()
//{
// float physics,chemistry,maths,bio,english,t,a,p;
// printf("********** enter marks of the subjects **********");
// printf("\n \t enter marks of physics ");
// scanf("%f",&physics);
// printf("\n marks of the physics :: %f",physics);
// printf("\n enter  marks of the chemistry ::");
// scanf("%f",&chemistry);
// printf("\n marks of the chemistry :: %f",chemistry);
// printf("\n enter marks of the bio ::");
// scanf("%f",&bio);
// printf("\n marks of the bio :: %f",bio);
// printf("\n marks of english::");
// scanf("%f",&english);
//
// t=physics+chemistry+maths+bio+english;
// printf("\n total marks:: %f",t);
// a= t/5;
// printf("\n average of marks is:: %f",a);
// p=t/500*100;
// printf("\n percentage :: %f",p);
// return 0;
//}
//============================================================================================================================================================
/// write a program to entered number is divisible by 3 & 5
//#include<stdio.h
//int main ()
//{ int n;
//printf(" enter the number ::");
//scanf("%d",&n);
//if (n%3==0){
//    if(n%5 ==0){
//        printf("\n divisible by both");
//    }else { printf("\n no is divisible by 3 only");
//    }
//}
//else {
//    if(n%5==0){
//        printf("\n no is divisible by 5 only");
//    }else {
//    printf("\n no is not divisible by both");
//    }
//}
//return 0;
//}
//==========================================================================================================================================================
/// write a program to enter any three digit number and display the addition of all three digit
//#include<stdio.h>
//
//int main ()
//{
//    int n,rem,sum=0;
//    printf("enter the any three digit number::");
//    scanf("%d",&n);
//    rem=n%10; // 8
//    sum=sum+rem;//8
//    n=n/10;     // 14
//
//    rem=n%10;     //4
//    sum=sum+rem;  //12
//    n=n/10;       //1
//
//    rem=n%10;     //1
//    sum=sum+rem;  //13
//    n=n/10;       //0
//    printf("\n the sum of three digit number == %d",sum);
//    return 0;
//}
//==========================================================================================================================================================
/// Enter the price of 4 items and find the total bill. also calculate the discount with 5% when amount is greater than 500 otherwise discount is 2%.
/// and finally display the payable amount.
//  #include<stdio.h>
//  int main ()
//  {
//      int p1,p2,p3,p4,t,discount;
//      printf("enter the price of the four items ::");
//      scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
//      t=p1+p2+p3+p4;
//      discount= (t>500) ? (t*0.05) : (t*0.02);
//      printf("\n the payable amount is = %d",t-discount);
//      return 0;
//  }
//==========================================================================================================================================================
/// write a program to find max from three numbers without using third variable
//   #include<stdio.h>
//    int main ()
//{
//    int n1,n2,n3,max,t;
//    printf("enter the three numbers ::");
//    scanf("%d %d %d",&n1,&n2,&n3);
//    max=(n1>n2)?(n1>n3 ? n1:n3) : (n2>n3)? n2:n3;
//    printf("\n max is %d",max);
//    return 0;
//}
//==========================================================================================================================================================
/// enter the no through keyboard and display menu to perform following operation option 1 - to check the number is positive or negative
//option 2 - to check number is divisible by 5 or not.   menu driven

//#include<stdio.h>
//int main()
//{
//   int n1,opt;
//   printf("enter the number" );
//   scanf("%d",&n1);
//   printf("\n *********** enter your option ***********");
//   printf("\n enter the option 1 to check number is positive or negative or  option 2 to check number is divisible by 5 or not ");
//   scanf("%d",&opt);
//
//   if (opt==1)
//    {
//        if(n1>=0)
//        {
//          printf("\n number is positive");
//        }
//        else
//        {
//              printf("\n number is nigative");
//        }
//    }  else
//          {
//              if(opt==2)
//               {
//                  if(n1%5==0)
//                    {
//                       printf("\n number is divisible by 5");
//                  }
//                    else
//                    {
//                         printf("\n number is not divisible by 5");
//                    }
//              }
//                else ("\n invalid option !!!!!!!");
//         }
//
//    return 0;
//
//}
//===========================================================================================================================================================================//
/// Write a C program to enter P, T, R and calculate Simple Interest.
//#include<stdio.h>
//int main()
//{
//  float p,t,r,si;
//  printf(" enter the principal :: ");
//  scanf("%f",&p);
//  printf("\n enter interest rate ::");
//  scanf("%f",&r);
//  printf("\n enter the time in years ::");
//  scanf("%f",&t);
//  si=p*t*r/100;
//  printf("\n simple interest = %f",si);
//  return 0;
//}
//==========================================================================================================================================================================//
/// Write a C program to enter P, T, R and calculate Compound Interest.
//#include<stdio.h>
//#include<math.h>
//int main ()
//{
//     float p,t,r,a,n=10;
//     printf("enter the principal=");
//     scanf("%f",&p);
//     printf("\n enter the interest rate =");
//     scanf("%f",&r);
//     printf("\n enter time in years=");
//     scanf("%f",&t);
//
//     a=p*[pow(1+r/n ,nt)-1];
//     printf("\n compound interest=%f ",a);
//    return 0;
//}
//==============================================================================================================================================================================
/*********************************** CONDITIONAL OPERATOR EXERCISES ****************************************/

/// Write a C program to find maximum between two numbers using conditional operator

//#include<stdio.h>
//int main ()
//{
//  int n1,n2,max;
//  printf(" enter the two numbers ::");
//  scanf("%d %d",&n1,&n2);
//
//   max=(n1>n2)?(n1):(n2) ;
//   printf("\n the maximum number is %d",max);
//   return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to find maximum between three numbers using conditional operator

//#include<stdio.h>
//int main ()
//{
//    int a,b,c,max;
//    printf("enter the two numbers::");
//    scanf("%d %d %d",&a,&b,&c);
//    max=(a>b) ? (a>c ? a:c ):(b>c) ? b :c;
//    printf("\n max is %d",max);
//
//return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to check whether a number is even or odd using conditional operator

//#include<stdio.h>
//int main ()
//{
//
//    int n;
//    printf(" enter any number :");
//    scanf("%d",&n);
//    (n%2==0)?(printf("\n number is even")) : (printf("\n number is odd")) ;
//    return 0;
//
//}
//===============================================================================================================================================================================
/// Write a C program to check whether year is leap year or not using conditional operator.
//#include<stdio.h>
//int main ()
//{
//    int y;
//    printf("enter the year :: ");
//    scanf("%d",&y);
//    (y%4==0)? (printf("\n entered year is leap year")) :(printf(" entered year is not leap year sorry "));
//    return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to check whether character is an alphabet or not using conditional operator

//#include<stdio.h>
//int main ()
//{
//    char ch;
//    printf(" enter any character::");
//    scanf("%c",&ch);
//    (ch>='A'&& ch<='Z'|| ch>='a' && ch<='z') ? (printf("\n entered character is alphabet")) : (printf("\n entered character is not alphabet"));
//    return 0;
//
//}
//===============================================================================================================================================================================
/************************************************ IF ELSE EXERCISES **********************************************/

/// Write a C program to find maximum between two numbers.
//#include<stdio.h>
//int main ()
//{
//    int a,b;
//    printf(" enter any two numbers::");
//    scanf("%d %d",&a,&b);
//    if(a>b){
//        printf("\n a is max %d",a);
//    }else{
//         printf("\n b is max%d",b);
//         }
//return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to find maximum between three number

//#include<stdio.h>
//int main ()
//{
//   int a,b,c;
//   printf(" enter any three numbers ::");
//   scanf("%d %d %d",&a,&b,&c);
//
//   if(a>b)
//    {
//      if(a>c)
//        printf("\n a is max %d",a);
//
//      else printf("\n c is max %d",c);
//    } else{
//        if(b>c)
//      printf("\ b is max %d",b);
//      else printf("\n c is max %d",c);
//    }
//    return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to check whether a number is negative, positive or zero.

// #include<stdio.h>
//  int main ()
//{
//    int n;
//    printf(" enter any number ::");
//    scanf("%d",&n);
//
//    if(n==0)
//    {
//         printf("\n number is zero");
//    }else
//    {
//        if(n>0)
//            printf("\n number is positive");
//        else printf("\n number is negative");
//    }
//}
//===============================================================================================================================================================================
/// write a program to enter amount and purchase gold platinum and silver with the per gram rate of 8000,6000,and 700 and display cash in hand
//#include<stdio.h>
//int main ()
//{
//   int amt,g,p,s;
//   printf("enter the amount ::");
//   scanf("%d",&amt);
//
//   p=amt/8000;       //gram
//   amt=amt%8000; //
//
//   g=amt/6000;   // gram
//   amt=amt%6000;
//
//   s=amt/700;    // gram
//   amt=amt%700;
//
//   printf("\n platinum in gram :%d \t gold in gram  :%d \t silver in :%d \t cash in hand :%d  ",g,p,s,amt) ;
//    return 0;
//}
//===============================================================================================================================================================================
/// write a program to display the sum of numbers from 1 to 10 using for loop
//#include<stdio.h>
//int main ()
//{
//    int i,sum=0;
//
//    for(i=1;i<=10;i+=1)
//    {
//          sum=sum+i;
//    }
//    printf("\n th sum is %d",sum);
//
//return 0;
//}
//===============================================================================================================================================================================
/// write a program to print table of any number using for loop

//#include<stdio.h>
//int main ()
//{
//  int n,table;
//  printf("enter any number::");
//  scanf("%d",&n);
//
//    for(int i=1;i<=10;i+=1)
//  {
//      printf("\n %d",n*i);
//  }
//}
//===============================================================================================================================================================================
/// write a program to enter any number and display addition of all digit
//#include<stdio.h>
//int main ()
//{
//    long int n,rem,sum=0;                 /// here signed int is used
//    printf("enter an number \t");
//    scanf("%ld",&n);
//
//    for( ;n!=0; )
//    {
//      rem=n%10;
//      sum=sum+rem;
//      n=n/10;
//    }
//    printf("\n the sum of number is %d",sum);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to display all even nos from 1 to 100
//#include<stdio.h>
//int main ()
//{
//   for(int i=1;i<=100;i+=1)
//   {
//       if(i%2==0)
//
//        printf("\n even numbers :: %d",i);
//   }
//    printf("\n ");
//
//   for(int i=1;i<=100;i+=1)
//   {
//       if(i%2!=0)
//
//        printf("\n odd numbers ::%d ",i);
//
//   }
//   return 0;
//}
//==============================================================================================================================================================

/// another way to display odd and even numbers ***without using if condition***
//#include<stdio.h>
//int main ()
//{
//  for(int i=0;i<=100;i+=2)
//
//    printf("\n even numbers =%d",i);
//    printf("\n \n ");
//
//    for(int i=1;i<=100;i+=2)
//    printf("\n odd numbers =%d",i);
//
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to display addition of 5 nos entered  through keyboard
//#include<stdio.h>
//int main ()
//{
//    int i,n,sum=0;
//    printf("enter any five numbers::");
//    for(i=1;i<=5;i+=1)
//    {
//      scanf("%d",&n);
//      sum= sum+n;
//    }
//    printf(" \n sum is %d",sum);
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is divisible by 5 and 11 or not.
//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf(" enter any number::");
//    scanf("%d",&n);
//
//    if(n%5==0 && n%11==0)
//
//            printf("\n number is divisible by 5 and 11");
//    else
//            printf("\n number is not divisible by 5 and 11");
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is even or not
//#include<stdio.h>
//int main ()
//{
//   int n;
//   printf(" enter any number::");
//   if(n%2==0)
//
//          printf("\n number is even");
//   else
//          printf("\n number is not even");
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a year is leap year or not.
//#include<stdio.h>
//int main ()
//{
//    int y;
//    printf(" enter any year::");
//    scanf("%d",&y);
//    if(y%4==0)
//    {
//        printf("\n %d is leap year",y);
//    }
//     else
//    printf("\n %d is not leap year",y);
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a character is alphabet or not.
//#include<stdio.h>
//int main ()
//{
//   char ch;
//   printf("enter the character::");
//   scanf("%c",&ch);
//
//   if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
//    printf("\ character is alphabet");
//    else
//        printf("\n character is not alphabet");
//    return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to input any alphabet and check whether it is vowel or consonant.
//#include<stdio.h>
//int main ()
//{
//  char ch;
//  printf("enter any character to check its vowel or consonant ::");
//  scanf("%c",&ch);
//  if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
//        printf("\n character is vowel");
//  else
//       printf("\n character is consonant");
//  return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input any character and check whether it is alphabet, digit or special character.

//#include<stdio.h>
//int main ()
//{
//    char ch;
//    printf("enter any character to check whether it is alphabet ,digit or special character");
//    scanf("%c",&ch);
//    if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z')
//    {
//        printf("\n entered character is alphabet");
//    }  else
//       {
//
//     if(ch>='0' && ch<= '9')
//        printf("\n entered character is digit");
//     else
//
//        printf("\n special character");
//       }
//}
//==============================================================================================================================================================
/// Write a C program to check whether a character is uppercase or lowercase alphabet.
//#include<stdio.h>
//int main ()
//{
//    char ch;
//    printf("enter any character to check whether is UP case or LW case ::");
//    scanf("\t %c",&ch);

//    if(ch>='A' && ch<='Z')
//    printf("\n entered character is upper case");
//    else

//    if(ch>='a' && ch<='z')
//    printf("\n entered character is lower case");
//      else

//        printf("\n invalid character !!!!!!!");
//      return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input week number and print week day.
//#include<stdio.h>
//int main ()
//{
//    int wn,days;
//    printf("\n enter the number of week number::");
//    scanf("%d",&wn);
//    if(wn==0)
//    {
//        printf("\n SUNDAY");
//    }
//    if(wn==1)
//    {
//        printf("\n MONDAY");
//    }
//    if(wn==2)
//    {
//        printf("\n TUESDAY");
//    }
//    if(wn==3)
//    {
//        printf("\n WEDNSDAY");
//    }
//    if(wn==4)
//    {
//        printf("\n THURSDAY");
//    }
//    if(wn==5)
//    {
//        printf("\n FRIDAY");
//    }
//    if(wn==6)
//    {
//        printf("\n SATURDAY");
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input month number and print number of days in that month.
//#include<stdio.h>
//int main()
//{
//    int month;
//    printf("enter the month ::");
//    scanf("%d",&month);
//    if((month == 1 || 3 || 5 || 7 || 8 || 10 || 12) && (month<13) )
//    {
//        printf("\n 31 DAYS");
//    }else if((month== 4 || 6 || 9 || 11) && (month <13))
//    {
//        printf("\n 30 DAYS");
//    }else if((month==2) && (month<13))
//    {
//        printf("\n 29 DAYS");
//    }else
//    {
//      printf("\n INVALID MONTH");
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number and display its table
//#include<stdio.h>
//int main()
//{
//    int no,i,ans;
//
//    printf("\n ENter any no ");
//    scanf("%d",&no);
//
//    ans=no;
//    printf("\n  Multiplication of %d",ans);
//    for(i=1;i<=10;i++,ans+=no)
//    {
//        printf("\n %d*%d = %d",no,i,ans);
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number and find its even max and odd max digit
//#include<stdio.h>
//
//int main()
//{
//    int no,rem,emax=0,omax=0,max;
//
//    printf("\n Enter any no :");
//    scanf("%d",&no);
//
//    for(max=0;no!=0;no=no/10 )
//    {
//        rem=no%10;
//        if(rem>max)
//        {
//            max=rem;
//            if(max%2==0)
//                emax=max;
//            else
//                omax=max;
//        }
//    }
//    printf("\n Even  Max digit is %d",emax);
//    printf("\n Odd  Max digit is %d",omax);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number and display in reverse
//#include<stdio.h>
//int main ()
//{
//   int n,rev,rem;
//   printf(" enter any number");
//   scanf("%d",&n);
//    for(rev=0;n!=0;n=n/10){
//
//        rev=(rev*10)+(n%10);
//    }
//    printf("\n reverse number is %d",rev);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number any display its digit count
//#include<stdio.h>
//int main ()
//{
//   int n,count=0;
//   printf("enter any number");
//   scanf("%d",&n);
//
//   for(; n!=0; n=n/10)
//        count++;
//   printf("\n count of digit is %d",count);
//   return 0;
//}
/// another way
//   #include<stdio.h>
//   int main  ()
//   {
//       int n,count=0;
//       printf(" enter any number ");
//       scanf("%d",&n);
//       for(; n!=0; )
//        {
//        count++;
//        n=n/10;
//        }
//       printf("\n count of digit is %d",count);
//       return 0;
//   }
//==============================================================================================================================================================
/// WAP to display even count and odd count from given range 1 to 100
//  #include<stdio.h>
//  int main ()
//  {
//    int ecount=0,ocount=0;
//    for(int i=1;i<=100;i++)
//    {
//        if(i%2==0)
//        ecount++;
//    else
//        ocount++;
//    }
//    printf("\n even count is %d",ecount);
//    printf("\n odd count is %d",ocount);
//    return 0;
//  }
//==============================================================================================================================================================
///  WAP to enter any number and find its even min and odd min digit
//#include<stdio.h>
//int main ()
//{
//    int n,min,emin=0,omin=0,rem;
//    printf("enter any number ::");
//    scanf("%d",&n);
//    min=n%10;
//    n=n/10;
//    for( ;n!=0;n=n/10 )
//    {
//      rem=n%10;
//       if(rem<min)
//      {
//     min=rem;
//     if(min%2==0)
//        emin=min;
//     else
//        omin=min;
//      }
//    }
//    printf("\n even min is %d",emin);
//    printf("\n odd min is %d",omin);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to count total number of notes in given amount
//#include<stdio.h>
//int main ()
//{
//    int n,amt,notes,rupese;
//    printf("enter any amount::");
//    scanf("%d",&amt);
//    printf("\n enter the which notes you want::");
//    scanf("%d",&n);
//
//    notes= amt/n;
//
//    printf("\n notes are %d",notes);
//    rupese=amt%n;
//    printf("\n rupese are %d",rupese);
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to input angles of a triangle and check whether triangle is valid or not
//#include<stdio.h>
//int main ()
//{
//    int a,b,c,ans;
//    printf("enter the angles of triangles ::");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a+b+c==180)
//        printf("\n triangle is valid");
//    else
//        printf("\n triangle is not valid ");
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input all sides of a triangle and check whether triangle is valid or not
//#include<stdio.h>
//int main ()
//{
//    int a,b,c;
//    printf(" enter the all sides of triangle ");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a+b>c && b+c>a && a+c>b)
//        printf("\n triangle is valid");
//    else
//        printf("\n triangle is not valid");
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
//#include<stdio.h>
//int main ()
//{
//  int a,b,c;
//  printf(" enter the area and side of equilateral triangle ");
//  scanf("%d %d %d",&a,&b,&c);
//  if(a==b && b==c && a==c)
//  {
//      printf("\n this is equilateral triangle");
//
//  }else
//  {
//     if(a==b || a==c ||b==c)
//     {
//         printf("\n this is isosceles triangle ");
//
//     }else
//     printf("\n this is scalene triangle");
//  }
//   return 0;
//}
//==============================================================================================================================================================
/// write a c program to find all roots of quadratic equation
//#include<stdio.h>
//int main ()
//{
//
//}
//==============================================================================================================================================================
/// Write a C program to calculate profit or loss
//#include<stdio.h>
//int main ()
//{
//    int sp,cp,p,l;
//    printf(" enter the selling price and cost price ::");
//    scanf("%d %d",&sp,&cp);
//    if(sp>cp)
//        printf("\n profit :: %d",sp-cp);
//    else
//            printf("\n loss :: %d",cp-sp);
//return 0;
//}
//==============================================================================================================================================================
/// write a c program to input marks of five subjects p,c,m,b,CMP,PER;
//#include<stdio.h>
//int main ()
//{
//   int p,c,m,b,cmp,per;
//   printf(" ENTER THE MARKS OF STUDENT \t");
//   scanf("%d %d %d %d %d",&p,&c,&m,&b,&cmp);
//
//    per= (p+c+m+b+cmp)/5;
//    printf("\n percentage :: %d",per);
//
//    if(per>90 || per==90)
//
//        printf("\n Grade A");
//    else if (per>=80 && per<90)
//        printf("\n Grade B");
//
//    else if (per>=70 && per<80)
//
//        printf("\n Grade C");
//
//    else if (per>=60 && per<70)
//
//        printf("\n Grade D");
//
//    else if(per>=40 && per<60)
//
//        printf("\n Grade E");
//
//    else if (per<40)
//
//        printf("\n Grade F");
//
//
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
/// Basic Salary <= 10000 : HRA =20%,DA=80%
/// Basic Salary <= 20000 : HRA =25%,DA=90%
/// Basic Salary > 20000 : HRA =30%,DA=95%

//#include<stdio.h>
//int main ()
//{
//    float bs,gs;
//    printf("ENTER THE BASE SALARY ::");
//    scanf("%f",&bs);
//
//    if(bs<=10000)
// {
//    gs=(bs*0.2)+(bs*0.8);
//    printf("\n Gross salary of employee is %f",gs+bs);
//
// }
//    if(bs<=20000 && bs>10000)
// {
//    gs=(bs*0.25)+(bs*0.9);
//    printf("\n Gross Salary Of Employee is %f",gs+bs);
// }
//    if(bs>20000)
// {
//      gs=(bs*0.30)+(bs*0.95);
//      printf("\n Gross Salary Of Employee is %f",gs+bs);
// }
//
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
///For first 50 units Rs. 0.50/unit
///For next 100 units Rs. 0.75/unit
///For next 100 units Rs. 1.20/unit
///For unit above 250 Rs. 1.50/unit
///Anadditional surcharge of 20% is added to the bill

//#include<stdio.h>
//int main ()
//{
//    float unit,charges;
//    printf("ENTER YOUR ELECTRICITY CONSUMED UNITS::");
//    scanf("%f",&unit);
//
//    if(unit<=50)
// {
//    charges=0.50*unit;
//    printf("\n TOTAL ELECTRICITY BILL RS::%f",charges);
// }
//    if(unit<=150 && unit>50)
//
// {
//    charges=0.75*unit;
//    printf("\n TOTAL LECTRICITY BILL RS::%f",charges);
// }
//    if(unit<=250 && unit>150)
// {
//    charges=1.20*unit;
//    printf("\n TOTAL ELECTRICITY BILL RS::%f",charges);
// }
//    if(unit>250)
// {
//    charges=1.50*unit;
//    printf("\n ELECTRICITY BILL RS::%f",charges);
// }
// return 0;
//}
//==============================================================================================================================================================
/*********************************************** FOR LOOP EXERCISES **********************************************************************/

///  Write a C program to print all natural numbers from 1 to n
//#include<stdio.h>
//int main ()
//{
//  int n;
//  printf("ENTER THE NUMBER \t");
//  scanf("%d",&n);
//  printf("\n NATURAL NUMBERS FROM 1-%d",n);
//      for(int i=1;i<=n;i++)
//  {
//      printf("\n %d",i);
//  }
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print all natural numbers in reverse (from n to 1)
//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("ENTER THE NUMBER \t");
//    scanf("%d",&n);
//    printf("NATURAL NUMBERS FROM %d-1",n);
//    for(int i=n; i>=1; i--)
//    {
//        printf("\n %d",i);
//    }
//
//    return 0;
//
//
//}
//==============================================================================================================================================================
/// Write a C program to print all alphabets from a to z
//#include<stdio.h>
//int main ()
//{
//
//        for(int i='a';i<='z';i++)
//    {
//        printf("%c \t ",i);
//    }
//
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print all even numbers between 1 to 100
//#include<stdio.h>
//int main ()
//{
//    printf("ALL EVEN NUMBERS BETWEEN 1-100");
//    for(int i=1;i<=100;i++)
//{
//    if(i%2==0)
//    printf("\n  %d",i);
//}
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all odd number between 1 to 100
//#include<stdio.h>
//int main ()
//{
//      printf("ALL THE EVEN NUMBERS FROM 1-100");
//      for(int i=1;i<=100;i++)
// {
//      if(i%2!=0)
//        printf("\n  %d",i);
// }
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all natural numbers between 1 to n
//#include<stdio.h>
//int main ()
//{
//   int n,sum=0;
//   printf("ENTER THE NUMBER:: \t");
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//   {
//     sum=sum+i;
//   }
//    printf("\n THE OF ALL NATURAL NUMBERS FROM 1-N %d \t",sum);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all even numbers between 1 to n.
//#include<stdio.h>
//int main ()
//{
//    int n,sum;
//    printf("ENTER THE NUMBER:: \t");
//    scanf("%d",&n);
//    for(int i=0;i<=n;i+=2)
//    {
//        sum=sum+i;
//    }
//
//    printf("\n SUM OF ALL EVEN NUMBERS FROM 1-N %d",sum);
//
//   return 0;
//}
//==============================================================================================================================================================

///WAP to generate max from digits of entered number

//#include <stdio.h>
//int main()
//{
//	int no,nn=0,rem,tmp;
//	printf("\n Enter the No: ");
//	scanf("%d",&no);
//	tmp=no;
//
//	for(int i=9;i>=0;i--)
//	{
//		no=tmp;
//		for(;no!=0;)
//		{
//			rem=no%10;
//			if(rem==i)
//			{
//				nn=(nn*10)+rem;
//			}
//			no=no/10;
//		}
//	}
//	printf("\n Max Number: %d",nn);
//	return 0;
//}

//==============================================================================================================================================================
/// WAP tp generate maximum even digits and maximum odd digits from entered number
//#include<stdio.h>
//   int main ()
//{
//    int n,emax=0,omax=0,temp,rem;
//
//    printf("enter the number");
//    scanf("%d",&n);
//    temp=n;
//    for(int i=9; i>=0;i--)
//    {
//        n=temp;
//        for( ; n!=0; )
//
//      {
//          rem=n%10;
//          if(rem==i)
//        {   if(rem%2==0)
//
//            emax=(emax*10)+rem;
//            else
//            omax=(omax*10)+rem;
//        }
//         n=n/10;
//      }
//
//
//    }
//    printf("\n maximum even digits from number %d",emax);
//    printf("\n maximum odd digits from number %d",omax);
//
//    return 0;
//}
//==============================================================================================================================================================
///WAP to Find Missing digits in a number entered through keyboard.    e.g.  no: 15967	=  Missing digits: 0, 2, 3, 4, 8
//#include<stdio.h>
//int main ()
//{
//    int n,rem;
//    printf(" enter the number \t");
//    scanf("%d",&n);
//
//    for(;n!=0;)
//  {
//       for(int i=n;i>=1;i--)
//    {
//        rem=n%10;
//        if(rem!=0)
//        {
//            nn=nn*10+rem;
//        }else
//              n=n/10;
//     }
//  }
//
//
//
//
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all odd numbers between 1 to n.
//#include<stdio.h>
//int main ()
//{
//    int n,sum=0;
//    printf("enter the number:: \t");
//    scanf("%d",&n);
//
//       for(int i=1;i<=n;i+=2)
//    {
//    sum=sum+i;
//    }
//
//       printf("\n sum of all even numbers from 1-n %d",sum) ;
//
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print multiplication table of any number
//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("ENTER THE NUMBER:: \t");
//    scanf("%d",&n);
//    printf("\n MULTIPLICATION TABLE OF %d::",n);
//    for(int i=1;i<=10;i++)
// {
//     printf("\n %d",n*i);
// }
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to count number of digits in a number
//#include<stdio.h>
//int main ()
//{
//
//    int n,rem,count=0;
//    printf("ENTER THE NUMBER \t");
//    scanf("%d",&n);
//    for(;n!=0;n=n/10)
//    {
//        rem=n%10;
//        count++;
//    }
//
//    printf("\n THE COUNT OF THE NUMBER IS %d",count);
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find first and last digit of a number.

//#include<stdio.h>
//int main ()
//{
//    int n,fn=0,ln=0,rem;
//    printf("\n enter the number::");
//    scanf("%d",&n);
//    rem=n%10;
//    ln=rem;
//    for(int i=0; n!=0; i++)
//    {    rem=0;
//        rem=n%10;
//        fn=rem;
//        n=n/10;
//    }
//
//
//    printf("\n first digit is %d",fn);
//    printf("\n last digit is %d",ln);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of first and last digit of a number
//#include<stdio.h>
//int main ()
//{
//    int n,fd,ld,rem;
//    printf("n enter the number ::");
//    scanf("%d",&n);
//    rem=n%10;
//    ld=rem;
//
//    for(int i=0; n!=0; i++)
//    {
//        rem=0;
//        rem=n%10;
//        fd=rem;
//        n=n/10;
//    }
//    printf("sum of first and last digit is %d",fd+ld);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to swap first and last digits of a number.





//==============================================================================================================================================================

/// WAP to generate the max using the digits of entered number

//#include <stdio.h>
//int main()
//{
//	int no,nn=0,rem,tmp,d;
//	printf("\n Enter the No: ");
//	scanf("%d",&no);
//	tmp=no;
//
//	for(d=9;d>=0;d--)
//	{
//		no=tmp;
//		for(;no!=0;)
//		{
//			rem=no%10;
//			if(rem==d)
//			{
//				nn=(nn*10)+rem;
//			}
//			no=no/10;
//		}
//	}
//	printf("\n Max Number: %d",nn);
//	return 0;
//}
//==============================================================================================================================================================
/// Generate max from even and odd digits from entered number

//#include <stdio.h>
//int main()
//{
//	int no,enn=0,onn=0,rem,tmp,d;
//	printf("\n Enter the No: ");
//	scanf("%d",&no);
//	tmp=no;
//
//	for(d=9;d>=0;d--)
//	{
//		no=tmp;
//		for(;no!=0;)
//		{
//			rem=no%10;
//			if(rem==d)
//			{
//				if(rem%2==0)
//					enn=(enn*10)+rem;
//				else
//					onn=(onn*10)+rem;
//			}
//			no=no/10;
//		}
//	}
//	printf("\n Max Number from Even Digits: %d",enn);
//	printf("\n Max Number from odd Digits: %d",onn);
//	return 0;
//}
//==============================================================================================================================================================
/// WAP to Find Missing digits in a number entered thw keyboard.

//#include<stdio.h>
//int main ()
//{
//    int n,rem,d,flag=0,temp;
//    printf("\n enter the number::");
//    scanf("%d",&n);
//    temp=n;
//    printf("\n missing digits are ::");
//
//    for(d=0; d<=9; d++)
//    {
//        n=temp;
//
//        for( ; n!=0;)
//        {
//            rem=n%10;
//            if(d==rem)
//            {
//                flag=1;
//                break;
//            }
//            n=n/10;
//        }
//        if(flag==0)
//        {
//            printf("%d",d);
//        }
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to calculate sum of digits of a number.
//#include<stdio.h>
//int main ()
//{
//    int n,rem,sum=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    for(;n!=0;n=n/10)
//    {
//        rem=n%10;
//        sum=sum+rem;
//
//    }
//    printf("\n sum of digit %d",sum);
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to calculate product of digits of a number
//#include<stdio.h>
//int main ()
//{
//    int n,rem,p=1;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    for(;n!=0;n=n/10)
//    {
//        rem=n%10;
//        p=p*rem;
//
//    }
//    printf("\n product of digit %d",p);
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to enter a number and print its reverse
//#include<stdio.h>
//int main ()
//{
//   int n,rev,rem;
//   printf(" enter any number \t");
//   scanf("%d",&n);
//    for(rev=0;n!=0;n=n/10){
//
//        rev=(rev*10)+(n%10);
//    }
//    printf("\n reverse number is %d",rev);
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is palindrome or not
//#include<stdio.h>
//int main ()
//{
//   int n,rev,rem,temp;
//   printf(" enter any number \t");
//   scanf("%d",&n);
//     temp=n;
//    for(rev=0;n!=0;n=n/10)
//    {
//      rev=(rev*10)+(n%10);
//    }
//    n=temp;
//    if(rev==n)
//    {
//        printf("\n number is palindrome %d",rev);
//    }else
//    {
//        printf("\n number is not palindrome %d",rev);
//    }
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find frequency of each digit in a given integer
//#include<stdio.h>
//int main ()
//{
//    int n,temp,rem,dc=0;
//    printf("\n enter the number ::");
//    scanf("%d",&n);
//    temp=n;
//
//    for(int i=0;i<=9;i++)
//    {
//        n=temp;
//        dc=0;
//        for(;n!=0;)
//        {
//            rem=n%10;
//            if(i==rem)
//            {
//                dc++;
//            }
//            n=n/10;
//        }
//        if(dc>1)
//            printf("\n %d digit occured at %d times",i,dc);
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to enter a number and print it in words.
//#include<stdio.h>
//int main ()
//{
//    int n,rem,rev,temp,r;
//    printf("\n enter the any number:");
//    scanf("%d",&n);
//
//    for(;n!=0;n=n/10)
//    {
//        rem=n%10;
//        rev=(rev*10)+(rem*10);
//    }
//     temp=rev;
//     r=0;
//        for(;temp!=0;temp=temp/10)
//        {
//          r=temp%10;
//          if(r==9)
//          {
//            printf("\n nine");
//          }
//         else if(r==8)
//          {
//              printf("\n eight");
//          }
//          else if(r==7)
//          {
//              printf("\n seven");
//          }
//          else if(r==6)
//          {
//              printf("\n six");
//          }
//         else if(r==5)
//          {
//              printf("\n five");
//          }
//         else if(rem==4)
//          {
//              printf("\n four");
//          }
//          else if(r==3)
//          {
//              printf("\n three");
//          }
//          else if(r==2)
//          {
//              printf("\n two");
//          }
//          else if(r==1)
//          {
//              printf("\n one");
//          }
//          else if(r==0)
//          {
//              printf("\n zero");
//          }
//
//        }
//
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all ASCII character with their values
//#include<stdio.h>
//int main ()
//{
//    for(int i=0;i<=255;i++)
//    {
//        printf("\n ascii value of character %c %d",i,i);
//    }
//  return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find power of a number using for loop

//#include<stdio.h>
//int main()
//{
//    int a,b,p=1;
//    printf("\n enter number ::");
//    scanf("%d %d",&a,&b);
//
//    for(int i=1;i<=b;i++)
//      {
//         p=p*a;
//      }
//      printf("\n %d",p);
//return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to find all factors of a number
//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("enter the number ::");
//    scanf("%d",&n);
//
//    for(int i=1;i<=n;i++)
//    {
//        if(n%i==0)
//        {
//            printf("\n %d",i);
//        }
//    }
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to calculate factorial of a number
//#include<stdio.h>
//int main ()
//{
//    int n,fact=1;
//    printf("\n enter the number: ");
//    scanf("%d",&n);
//
//    for(int i=1;i<=n;i++)
//       {
//           fact=fact*i;
//       }
//    printf("\n factorial of %d is %d",n,fact);
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find HCF (GCD) of two numbers

//#include <stdio.h>
//
//int main()
//{
//    int i,n1,n2,min,hcf=1;
//
//
//    printf("Enter any two numbers to find HCF: ");
//    scanf("%d%d", &n1, &n2);
//
//
//    min = (n1<n2) ? n1 : n2;
//
//    for(i=1; i<=min; i++)
//    {
//
//        if(n1%i==0 && n2%i==0)
//        {
//            hcf = i;
//        }
//    }
//
//    printf("HCF of %d and %d = %d\n", n1, n2, hcf);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find LCM of two numbers

//#include <stdio.h>
//
//int main()
//{
//    int i,n1,n2,max,lcm=1;
//
//
//    printf("Enter any two numbers to find LCM: ");
//    scanf("%d%d", &n1, &n2);
//
//
//    max = (n1<n2) ? n1 : n2;
//
//    for(i=1; i<=max; i++)
//    {
//
//        if(n1%i==0 && n2%i==0)
//        {
//            lcm = i;
//        }
//    }
//
//    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
//
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a number is Prime number or not
//#include<stdio.h>
//int main ()
//{
//    int n,temp=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    for(int i=2;i<=n/2;i++)
//    {
//        if(n%i==0)
//        {
//            temp++;
//            break;
//        }
//    }
//
//        if(temp==0 && n!=1)
//            printf("\n %d is prime number",n );
//        else
//            printf("\n %d id not prime number",n);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Prime numbers between 1 to n
//#include<stdio.h>
//int main ()
//{
//    int n,i,j;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//
//    for( i=1;i<=n;i++)
//     {
//
//       for(j=2;j<i;j++)
//        {
//            if(i%j==0)
//            {
//              break;
//            }
//
//        }
//         if(i==j)
//            printf("\n %d",i);
//
//     }
//
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all prime numbers between 1 to n.
//#include<stdio.h>
//int main ()
//{
//    int n,i,j,sum=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//
//    for( i=1;i<=n;i++)
//     {
//
//       for(j=2;j<i;j++)
//        {
//            if(i%j==0)
//            {
//              break;
//            }
//
//        }
//         if(i==j)
//        {
//            sum=sum+i;
//        }
//
//     }
//     printf("\n sum is %d",sum);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find all prime factors of a number
//#include<stdio.h>
//int main ()
//{
//    int n,i,fact,flag,d;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    for(i=1;i<=n/10;i++)
//    {
//     if(n%i==0)
//     {
//         fact=i;
//         d=2;
//         while(d<=(fact/2))
//         {
//             if(fact%d==0)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0)
//            printf("\n %d",fact);
//
//     }
//    }
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is Armstrong number or not

//#include<stdio.h>
//int main ()
//{
//    int n,dc,rem,temp,ans,sum=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//     temp=n;
//
//    for(dc=0; n!=0; dc++, n=n/10);
//
//       n=temp;
//
//       for(;n!=0;n=n/10)
//     {
//         rem=n%10;
//         ans=1;
//
//          for(int i=0;i<dc; i++)
//        {
//            ans=ans*rem;
//        }
//            sum=sum+ans;
//     }
//
//     if(temp==sum)
//                   printf("\n %d is Armstrong number",temp);
//     else
//                   printf("\n %d is not Armstrong number",temp);
//
//   return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Armstrong numbers between 1 to n.

// #include<stdio.h>
// int main ()
//{
//
//    int no,n,i,dc,rem,ans,sum=0,tmp;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    for(no=1;no<=n;no++)
//    {
//        tmp=no;
//
//        for(dc=0; no!=0; dc++,no=no/10);
//        printf("Dc is %d ",dc);
//
//        no=tmp;
//        sum=0;
//        for(;no!=0; no=no/10)
//        {
//            rem=no%10;
//            ans=1;
//
//            for(i=0;i<dc;i++)
//            {
//                ans=ans*rem;
//
//            }
//            sum=sum+ans;
//            no=no/10;
//        }
//        printf("\n %d is number............ ",tmp);
//        no=tmp;
//        printf("\n %d is number ",tmp);
//
//        if(sum==tmp)
//        {
//            printf("\n %d is armstrong number ",tmp);
//        }
//
//
//    }
//
//    return 0;
//}

//==============================================================================================================================================================
/// Write a C program to check whether a number is Perfect number or not

//#include<stdio.h>
//int main ()
//{
//    int n,rem,ans=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    for(int i=1; i<n; i++)
//    {
//        if(n%i==0)
//
//        {
//            ans=ans + i;
//        }
//    }
//
//    if(ans==n)
//    {
//        printf("\n %d is perfect number",n);
//    }
//    else
//    printf("\n %d not perfect number",n);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Perfect numbers between 1 to n.

//#include<stdio.h>
//int main ()
//{
//        int i,j,n,ans=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    for( i=1;i<=n;i++)
//
//  {
//      ans=0;
//     for( j=1; j<i; j++)
//    {
//        if(i%j==0)
//
//        {
//            ans=ans+j;
//        }
//    }
//
//    if(ans==i)
//    {
//        printf("\n %d is perfect number",i);
//
//    }
//
//
//  }
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is Strong number or not

//#include<stdio.h>
//int main ()
//{
//    int n,tmp,i,rem,fact,sum=0;
//
//    printf("\n enter the number :");
//    scanf("%d",&n);
//    tmp=n;
//    for(;n!=0;n=n/10)
//
//    {
//        rem=n%10;
//        fact=1;
//        for(i=1;i<=rem;i++)
//        {
//            fact=fact*i;
//            printf("\n fact = %d",fact);
//        }
//        sum+=fact;
//        printf("\n sum=%d",sum);
//
//    }
//    if(sum==tmp)
//        printf("\n %d is strong number",sum);
//    else
//        printf("\n %d is not strong number",sum);
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all Strong numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int no,n,i,tmp=0,rem,fact,sum=0;
//
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    for(no=1;no<=n;no++)
//   {
//         tmp=no;
//         sum=0;
//
//        for(;no!=0; no=no/10)
//
//        {
//            rem=no%10;
//            fact=1;
//
//            for(i=1;i<=rem;i++)
//            {
//                fact=fact*i;
//            }
//
//            sum+=fact;
//        }
//
//            no=tmp;
//
//           if(sum==tmp)
//            printf("\n %d",tmp);
//    }
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print Fibonacci series up to n terms

//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//     int fibn1=1;
//     int fibn2=2;
//    long int fibn3=0;
//
//    for(int i=1;i<=n;i++)
//     {
//
//     long fibn3 = fibn1 + fibn2;
//
//      fibn1=fibn2;
//      fibn2=fibn3;
//
//     printf("\n %ld",fibn3);
//
//     }
//
//return 0;
//}
//==============================================================================================================================================================
/**************************************************** WHILE LOOP *************************************************************


 Write a C program to print all natural numbers from 1 to n.- using while loop */

// #include<stdio.h>
// int main ()
// {
//     int n,i=1;
//     printf("\n enter the number:");
//     scanf("%d",&n);
//
//     while(i<=n)
//     {
//         printf("\n %d",i);
//         i++;
//     }
//
//     return 0;
// }
//==============================================================================================================================================================
///  Write a C program to print all natural numbers in reverse (from n to 1).- using while loop

//#include<stdio.h>
//int main ()
//{
//    int n,i;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//    i=n;
//    while(i>=1)
//    {
//        printf("\n %d",i);
//        i--;
//    }
//    return 0;
//}
//==============================================================================================================================================================

///  Write a C program to print all alphabets from a to z.- using while loop

//#include<stdio.h>
//
//int main ()
//{
//    int i=97;
//    while (i<=122)
//    {
//       printf("\t %c",i);
//       i++;
//    }
//return 0;
//}

/***********************  ANOTHER WAY  *********************/

//#include<stdio.h>
//int main ()
//{
//    int i='A';
//
//    while(i<='Z')
//    {
//        printf("\t %c",i);
//
//        i++;
//    }
//  return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all even numbers between 1 to 100.- using while loop

//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(i<=n)
//    {
//        if(i%2==0)
//      {
//        printf("\n %d",i);
//
//      }
//      i++;
//    }
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all odd number between 1 to 100
//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//
//    while(i<=n)
//    {
//        if(i%2!=0)
//     {
//        printf("\n %d",i);
//     }
//     i++;
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all natural numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int i=1,n,sum=0;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//    while(i<=n)
//    {
//        sum+=i;
//    i++;
//    }
//    printf("\n sum =%d",sum);
//
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find sum of all even numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int i=1,n,sum;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(i<=n)
//    {
//        if(i%2==0)
//        {
//            sum+=i;
//        }
//     i++;
//    }
//    printf("\n sum =%d",sum);
//
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find sum of all odd numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int i=1,n,sum;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(i<=n)
//    {
//        if(i%2!=0)
//        {
//            sum+=i;
//        }
//      i++;
//    }
//    printf("\n sum =%d",sum);
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print multiplication table of any number

//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(i<=10)
//    {
//        printf("\n %d",n*i);
//
//     i++;
//    }
//  return 0;
//}
//==============================================================================================================================================================
///  Write a C program to count number of digits in a number

// #include<stdio.h>
// int main()
//{
//  int n,rem,cnt=0;
//
//  printf("\n enter the number :");
//  scanf("%d",&n);
//  while(n!=0)
//  {
//      rem=n%10;
//      cnt++;
//      n=n/10;
//  }
//  printf("\n count of number %d",cnt);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find first and last digit of a number.

//#include<stdio.h>
//int main ()
//{
//    int n,tmp,rem,fd,ld;
//
//    printf("\n enter the number:");
//    scanf("%d",&n);
//    tmp=n;
//    while(n>10)
//    {
//        n=n/10;
//    }
//    printf("\n first digit =%d",n);
//
//    rem=tmp%10;
//    printf("\n last digit =%d",rem);
//
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find sum of first and last digit of a number

// #include<stdio.h>
// int main ()
//{
//  int n,tmp,rem,fd,ld;
//
//  printf("\n enter the number :");
//  scanf("%d",&n);
//  tmp=n;
//  while(n>10)
//  {
//    n=n/10;
//  }
//  printf("\n %d",n);
//
//  rem=tmp%10;
//  printf("\n sum of first and last digit =%d" ,n+rem);
//  return 0;
//}
//==============================================================================================================================================================
/// Write a C program to swap first and last digits of a number.

// #include<stdio.h>
// int main()
//
//{
//    int no,rem,tem,d,i,ans=1,nno;
//
//    printf("\n Enter any Number : ");
//    scanf("%d",&no);
//    tem=no;
//
//    for(d=0;no!=0;d++,no=no/10);
//
//
//
//    for(i=1;i<d;i++)
//    {
//        ans=(ans*10);
//    }
//
//    no=tem;
//    rem=no%10;
//    nno=rem*ans; // printf("Number=%d",nno);
//
//    no=no%ans;
//    no=no/10;
//    no=no*10;
//    tem=tem/ans;
//
//    nno=(nno+no)+tem;
//
//    printf("\n New Number : %d",nno);
//
//
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to calculate sum of digits of a number

// #include<stdio.h>
// int main ()
//{
//    int n,rem,sum=0;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(n!=0)
//    {
//        rem=n%10;
//        sum+=rem;
//        n=n/10;
//    }
//    printf("\n sum=%d",sum);
//
// return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to calculate product of digits of a number

//#include<stdio.h>
//
//int main ()
//{
//    int n,rem,p=1;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(n!=0)
//    {
//        rem=n%10;
//        p=p*rem;
//        n=n/10;
//    }
//   printf("\n product =%d",p);
//  return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to enter a number and print its reverse

//#include<stdio.h>
//int main ()
//{
//    int n,rem,rev;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//     rev=0;
//    while(n!=0)
//    {
//        rem=n%10;
//        rev=(rev*10)+(rem);
//        n=n/10;
//    }
//    printf("\n reverse number=%d",rev);
//
//  return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is palindrome or not

// #include<stdio.h>
// int main ()
//{
//    int n,tmp,rem,nn=0;
//    printf("\n enter the number:");
//    scanf("%d",&n);
//    tmp=n;
//    while(n!=0)
//    {
//        rem=n%10;
//        nn=(nn*10)+rem;
//        n=n/10;
//    }
//    if(nn==tmp)
//
//               printf("\n %d is palindrome number",nn);
//
//    else
//               printf("\n %d is not palindrome number",nn);
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find frequency of each digit in a given integer

//#include<stdio.h>
//int main ()
//{
//        int n,i=0,nn=0,rem,tmp,cnt;
//        printf(" enter the number :\t ");
//        scanf("%d",&n);
//         tmp=n;
//         while(i<=9)
//
//    {
//             n=tmp;
//             cnt=0;
//             nn=0;
//         while(n!=0)
//        {
//            rem=n%10;
//
//                 if(rem==i)
//               {
//                    cnt++;
//                    nn=i;
//               }
//        n=n/10;
//        }
//               if(cnt>1)
//             {
//             printf("\n %d is arrived at %d times",nn,cnt);
//             }
//
//         i++;
//    }
//
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to enter a number and print it in words.

//#include<stdio.h>
//int main ()
//{
//    int n,nn=0,rem;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(n!=0)
//    {
//        rem=n%10;
//        nn=(nn*10)+rem;
//        n=n/10;
//    }
//       rem=0;
//      while(nn!=0)
//     {
//         rem=nn%10;
//        if(rem==0)
//            printf("\n ZERO");
//        if(rem==1)
//            printf("\t ONE");
//        if(rem==2)
//            printf("\t TWO");
//        if(rem==3)
//            printf("\t THREE");
//        if(rem==4)
//            printf("\t FOUR");
//        if(rem==5)
//            printf("\t FIVE");
//        if(rem==6)
//            printf("\t SIX");
//        if(rem==7)
//            printf("\t SEVEN");
//        if(rem==8)
//            printf("\t EIGHT");
//        if(rem==9)
//            printf("\t NINE");
//    nn=nn/10;
//    }
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all ASCII character with their values

//#include<stdio.h>
//int main ()
//{
//    int i=1;
//
//    while(i<=255)
//    {
//        printf("\n %d=%c",i,i);
//     i++;
//    }
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to find power of a number using for loop.

// #include<stdio.h>
// int main ()
//{
//    int i,j,ans=1;
//    printf("\n enter the base and exponent : ");
//    scanf("%d %d",&i,&j);
//
//    while(j>0)
//    {
//       ans=ans*i;
//    j--;
//    }
//
//    printf("\n %d",ans);
//return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to find all factors of a number.

// #include<stdio.h>
// int main ()
//{
//    int n,i=2;
//    printf("\n ENTER THE NUMBER :");
//    scanf("%d",&n);
//
//    while(i<n)
//    {
//      if(n%i==0)
//      {
//          printf("\n FACTOR OF %d =>%d",n,i);
//      }
//    i++;
//    }
//  return 0;
//}
//==============================================================================================================================================================
///  Write a C program to calculate factorial of a number

// #include<stdio.h>
// int main ()
//{
//    int n,fact=1;
//    printf("\n ENTER THE NUMBER :");
//    scanf("%d",&n);
//
//    while(n!=0)
//    {
//        fact*=n;
//     n--;
//    }
//    printf("\n FACTORIAL IS %d",fact);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find HCF (GCD) of two numbers

// #include<stdio.h>
// int main ()
//{
//    int n1,n2,i=1,min,hcf;
//    printf("\n enter the n1 and n2 \t");
//    scanf("%d %d",&n1,&n2);
//
//    min= (n1<n2) ? n1  : n2 ;
//
//    while(i<=min)
//    {
//        if(n1%i==0 && n2%i==0)
//         hcf=i;
//    i++;
//    }
//    printf("\n hcf of %d and %d : %d",n1,n2,hcf);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find LCM of two numbers

//#include<stdio.h>
//int main ()
//{
//    int i=1,n1,n2,max=0,lcm;
//    printf("\n enter the n1 and n2 \t");
//    scanf("%d %d",&n1,&n2);
//
//    max= (n1>n2)? n1:n2;
//
//    while(i<=max)
//    {
//        if(i%n1==0 && i%n2==0)
//        {
//            lcm=i;
//        }
//    i++;
//    }
//    printf("\n lcm of %d and %d : %d",n1,n2,lcm);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is Prime number or not

// #include<stdio.h>
// int main ()
//{
//    int n,i=2,flag=0;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(i<n)
//    {
//               if(n%i==0)
//                flag++;
//    i++;
//    }
//    if(flag==0 && n>1)
//    {
//     printf("\n %d is prime number ",n);
//    }
// return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print all Prime numbers between 1 to n.
//
//#include<stdio.h>
//int main ()
//{
//    int no=1,n,i;
//    printf("enter the number :");
//    scanf("%d",&n);
//
//  while(no<=n)
//  {
//      i=2;
//      while(i<no)
//      {
//          if(no%i==0)
//          {
//              break;
//          }
//
//          i++;
//      }
//    if(no==i)
//      {
//          printf("\n %d",no);
//      }
//  no++;
//  }
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all prime numbers between 1 to n
//
//#include<stdio.h>
//int main ()
//{
//    int no=1,n,i,sum=0;
//    printf("enter the number:");
//    scanf("%d",&n);
//
//    while(no<=n)
//    {
//        i=2;
//
//        while(i<no)
//        {
//            if(no%i==0)
//            {
//                break;
//            }
//
//         i++;
//        }
//        if(no==i)
//        {
//            sum+=no;
//        }
//
//
//    no++;
//    }
//    printf("\n sum=%d",sum);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find all prime factors of a number
//
//#include<stdio.h>
//int main ()
//{
//    int no,i=2,d,factor;
//    printf("enter the number :");
//    scanf("%d",&no);
//
//    while(i<no)
//    {
//        if(no%i==0)
//        {
//           factor=i;
//
//           d=2;
//           while(d<factor)
//           {
//               if(factor%d==0)
//                {
//                   break;
//                }
//
//        d++;
//           }
//            if(factor==d)
//                 {
//                   printf("\n prime number=%d",factor);
//                 }
//
//        }
//
//     i++;
//    }
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a number is Armstrong number or not
//
//#include<stdio.h>
//int main ()
//{
//    int no,cnt,rem,ans,sum=0,tmp;
//
//    printf("enter the number :");
//    scanf("%d",&no);
//    tmp=no;
//
//     cnt=0;
//     while( no!=0 )
//  {
//     no=no/10;
//     cnt++;
//  }
//     no=tmp;
//     printf("\n %d",no);
//
//        while( no!=0 )
//      {
//           rem=no%10;
//           no=no/10;
//           ans=1;
//
//         int i=0;
//        while(i<cnt)
//        {
//            ans=ans*rem;
//
//         i++;
//        }
//        printf("\n ans is %d",ans);
//        sum+=ans;
//        printf("\n sum is %d",sum);
//      }
//
//    if(sum==tmp)
//    {
//        printf("\n %d is Armstrong number",tmp);
//    }
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all Armstrong numbers between 1 to n.
//
//#include<stdio.h>
//int main ()
//{
//    int n,no=1,cnt,rem,tmp,ans,sum=0,i;
//
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//     while(no<=n)
//  {
//        tmp=no;
//        sum=0;
//
//     cnt=0;
//    while(no!=0)
//    {
//         no=no/10;
//
//     cnt++;
//    }
//
//     no=tmp;
//
//          while(no!=0)
//      {
//         rem=no%10;
//         no=no/10;
//         ans=1;
//
//           i=0;
//           while(i<cnt)
//           {
//               ans=ans*rem;
//
//            i++;
//           }
//              sum+=ans;
//      }
//       no=tmp;
//
//      if(sum==no)
//      {
//          printf("\n %d",sum);
//      }
//
// no++;
//
// }
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is Perfect number or not
//
//#include<stdio.h>
//int main ()
//{
//    int no,ans=0,i;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    i=1;
//    while(i<no)
//    {
//           if(no%i==0)
//          {
//            ans=ans+i;
//          }
//    i++;
//    }
//    if(no==ans)
//        printf("\n %d is perfect number",no);
//    else
//        printf("\n %d is not perfect number",no);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Perfect numbers between 1 to n
//
//#include<stdio.h>
//int main ()
//{
//    int n,no=1,ans=0,i;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(no<=n)
//  {
//      ans=0;
//      i=1;
//    while(i<no)
//    {
//           if(no%i==0)
//          {
//            ans=ans+i;
//          }
//    i++;
//    }
//    if(no==ans)
//        printf("\n %d ",no);
//
//   no++;
//  }
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a number is Strong number or not
//
//#include<stdio.h>
//int main ()
//{
//    int no,i,tmp,cnt,rem,fact,sum=0;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//     tmp=no;
//
//      while(no!=0)
//      {
//        rem=no%10;
//        no=no/10;
//
//        fact=1;
//
//        i=1;
//      while(i<=rem)
//        {
//            fact=fact*i;
//        i++;
//        }
//        sum+=fact;
//
//      }
//
//    if(sum==tmp)
//    {
//        printf("\n %d is strong number",tmp);
//    }
//    else
//    {
//        printf("\n %d is not strong number",tmp);
//    }
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Strong numbers between 1 to n
//
//#include<stdio.h>
//int main ()
//{
//    int n,no=1,tmp,rem,i,fact,sum;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(no<=n)
//    {
//        tmp=no;
//        sum=0;
//
//        while(no!=0)
//        {
//            rem=no%10;
//            no=no/10;
//
//            fact=1;
//            i=1;
//           while(i<=rem)
//           {
//               fact=fact*i;
//           i++;
//           }
//
//            sum+=fact;
//        }
//      no=tmp;
//
//      if(sum==tmp)
//      {
//          printf("\n %d",tmp);
//      }
//   no++;
//    }
//
// return 0;
//
//}
//
//==============================================================================================================================================================
/// Write a C program to print Fibonacci series up to n terms

//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//     int a=0;
//     int b=1;
//     int c=a+b;
//     printf("\n %d\n %d",a,b);
//
//      int i=3;
//     while(c<=n)
//    {
//      a=b;
//      b=c;
//      c=a+b;
//
//     printf("\n %d",c);
//
//     i++;
//    }
//
//return 0;
//}
//==============================================================================================================================================================
/*********************************************************** DO WHILE ***************************************************************/

///  Write a C program to print all natural numbers from 1 to n.

//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    do{
//        printf("\n %d",i);
//
//        i++;
//      }while(i<=n);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all natural numbers in reverse (from n to 1)

//#include<stdio.h>
//int main ()
//{
//    int n,i;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//    i=n;
//    do{
//        printf("\n %d",i);
//        i--;
//      }while(i>=1);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all alphabets from a to z

//#include<stdio.h>
//int main ()
//{
//    int i=97;
//
//    do{
//        printf("\t %c",i);
//        i++;
//
//      }while(i<=122);
//
//return 0;
//}
  /*********     ANOTHER WAY     ***********/

//#include<stdio.h>
//int main ()
//  {
//      int i='A';
//
//      do{
//        printf("\t %c",i);
//        i++;
//      }while(i<='Z');
//
//return 0;
//  }
//==============================================================================================================================================================
///  Write a C program to print all even numbers between 1 to 100

//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    do{
//        if(i%2==0)
//        {
//            printf("\n %d",i);
//        }
//     i++;
//      }while(i<=100);
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all odd number between 1 to 100.

//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    do{
//        if(i%2!=0)
//        {
//            printf("\n %d",i);
//        }
//
//    i++;
//      }while(i<=n);
//
// return 0;
//}
//
//==============================================================================================================================================================
///  Write a C program to find sum of all natural numbers between 1 to n.

//#include<stdio.h>
//int main ()
//{
//    int i=1,n,sum;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    do{
//        sum+=i;
//
//     i++;
//      }while(i<=n);
//
//    printf("\n sum =%d",sum);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all even numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int i=1,n,sum=0;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    do{
//        if(i%2==0)
//        {
//            sum+=i;
//        }
//     i++;
//      }while(i<=n);
//
//    printf("\n sum =%d",sum);
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find sum of all odd numbers between 1 to n.

//#include<stdio.h>
//int main ()
//{
//    int i=1,n,sum;
//
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    do{
//        if(i%2!=0)
//        {
//            sum+=i;
//        }
//
//     i++;
//      }while(i<=n);
//
//
//printf("\n sum =%d",sum);
//
//return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to print multiplication table of any number.

//#include<stdio.h>
//int main ()
//{
//    int i=1,n;
//    printf("\n enter any number :");
//    scanf("%d",&n);
//
//     do{
//        printf("\n %d",i*n);
//
//     i++;
//       }while(i<=10);
//
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to count number of digits in a number

//#include<stdio.h>
//int main ()
//{
//    int no,cnt=0;
//    printf ("\n enter the number :");
//    scanf("%d",&no);
//
//    do{
//        no=no/10;
//        cnt++;
//
//      }while(no!=0);
//
//    printf("\n count of number =%d",cnt);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find first and last digit of a number

//#include<stdio.h>
//int main ()
//{
//    int no,fd=0,tmp,rem;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//    tmp=no;
//    do{
//        no=no/10;
//        fd=no;
//        rem=tmp%10;
//
//      }while(no>10);
//
//    printf("\n first digit =%d",fd);
//    printf("\n last digit =%d",rem);
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find sum of first and last digit of a number.
//#include<stdio.h>
//int main ()
//{
//    int no,fd=0,tmp,rem,sum=0;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//    tmp=no;
//
//      do{
//        no=no/10;
//        fd=no;
//        rem=tmp%10;
//
//       }while(no>10);
//
//    printf("\n first digit =%d",fd);
//    printf("\n last digit =%d",rem);
//    printf("\n sum=%d",fd+rem);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to swap first and last digits of a number
















//==============================================================================================================================================================
/// Write a C program to calculate sum of digits of a number

//#include<stdio.h>
//int main ()
//{
//    int no,sum=0,rem;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    do{
//        rem=no%10;
//        sum+=rem;
//        no=no/10;
//
//      }while(no!=0);
//
//    printf("\n sum=%d",sum);
//
//return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to calculate product of digits of a number

//#include<stdio.h>
//int main ()
//{
//    int no,p=1,rem;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    do{
//        rem=no%10;
//        p*=rem;
//        no=no/10;
//
//      }while(no!=0);
//
//    printf("\n sum=%d",p);
//
//return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to enter a number and print its reverse

//#include<stdio.h>
//int main ()
//{
//    int no,rem,rev=0;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    do{
//        rem=no%10;
//        rev=(rev*10)+(rem);
//        no=no/10;
//
//      }  while(no!=0);
//
//    printf("\ reverse number =%d",rev);
//
//return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to check whether a number is palindrome or not

//#include<stdio.h>
//int main ()
//{
//    int no,rem,rev=0,tmp;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//      tmp=no;
//    do{
//        rem=no%10;
//        rev=(rev*10)+(rem);
//        no=no/10;
//
//      }  while(no!=0);
//
//      if(rev==tmp)
//      {
//          printf("\n %d is palindrome number",tmp);
//      }
//      else
//        printf("\n %d is not palindrome number",tmp);
//
//return 0;
//
//}
//==============================================================================================================================================================
/** Write a C program to find frequency of each digit in a given integer */

//#include<stdio.h>
//int main ()
//{
//    int no,nn,tmp,rem,i=0,cnt;
//
//    printf("\n enter the number :");
//    scanf("%d",&no);
//    tmp=no;
//    do{
//
//        cnt=0;
//        no=tmp;
//        nn=0;
//        do{
//            rem=no%10;
//            if(rem==i)
//            {
//                cnt++;
//                nn=i;
//            }
//
//
//        no=no/10;
//        }while(no!=0);
//
//
//        if(cnt>1)
//        {
//            printf("\n %d is occured at %d times",i,cnt);
//        }
//
//     i++;
//    }while(i<=9);
//
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to enter a number and print it in words.

//#include<stdio.h>
//int main ()
//{
//    int n,nn=0,rem=0;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//
//   do{
//        rem=n%10;
//        nn=(nn*10)+rem;
//    n=n/10;
//    } while(n!=0);
//
//
//     do{
//         rem=nn%10;
//        if(rem==0)
//            printf("\n ZERO");
//        if(rem==1)
//            printf("\t ONE");
//        if(rem==2)
//            printf("\t TWO");
//        if(rem==3)
//            printf("\t THREE");
//        if(rem==4)
//            printf("\t FOUR");
//        if(rem==5)
//            printf("\t FIVE");
//        if(rem==6)
//            printf("\t SIX");
//        if(rem==7)
//            printf("\t SEVEN");
//        if(rem==8)
//            printf("\t EIGHT");
//        if(rem==9)
//            printf("\t NINE");
//    nn=nn/10;
//    }   while(nn!=0);
//
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print all ASCII character with their values

//#include<stdio.h>
//int main ()
//{
//    int i=0;
//    do{
//        printf("\n %d %c",i,i);
//    i++;
//    }while(i<=255);
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find power of a number using for loop

//#include<stdio.h>
//int main ()
//{
//    int i,j,ans=1;
//    printf("\n enter the base and exponant : \t");
//    scanf("%d %d",&i,&j);
//
//    do{
//        ans=ans*i;
//
//    j--;
//      }while(j>0);
//
//    printf("\n power =%d",ans);
//
//return 0;
//}
//==============================================================================================================================================================
///   Write a C program to find all factors of a number.

//#include<stdio.h>
//int main ()
//{
//    int no,i=1,factor;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    do{
//        if(no%i==0)
//        {
//            printf("\n %d",i);
//        }
//    i++;
//       }while(i<no);
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to calculate factorial of a number

//#include<stdio.h>
//int main ()
//{
//   int no,rem,fact=1;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    do{
//        fact=fact*no;
//
//    no--;
//    }while(no!=0);
//
//    printf("\n factorial of %d is %d",no,fact);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find HCF (GCD) of two numbers.

//#include<stdio.h>
//int main ()
//{
//    int n1,n2,min=0,i=1,hcf;
//    printf("\n enter the numbers :");
//    scanf("%d%d",&n1,&n2);
//
//    min=(n1<n2) ? n1:n2  ;
//    printf("%d",min);
//
//    do{
//         if(n1%i==0 && n2%i==0)
//         {
//             hcf=i;
//         }
//
//     i++;
//      }while(i<min);
//
//     printf("\n HCF OF %d and %d = %d",n1,n2,i);
//
// return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to find LCM of two numbers.

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//==============================================================================================================================================================
/// Write a C program to check whether a number is Prime number or not

// #include<stdio.h>
// int main ()
//{
//    int n,i=2,flag=0;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//    while(i<n)
//    {
//               if(n%i==0)
//                flag++;
//    i++;
//    }
//    if(flag==0 && n>1)
//    {
//     printf("\n %d is prime number ",n);
//    }
// return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to print all Prime numbers between 1 to n.

//#include<stdio.h>
//int main ()
//{
//    int no=1,n,i;
//    printf("enter the number :");
//    scanf("%d",&n);
//
//
//  do{
//      i=2;
//
//     do{
//          if(no%i==0)
//          {
//              break;
//          }
//
//          i++;
//      }while(i<no);
//
//    if(no==i)
//      {
//          printf("\n %d",no);
//      }
//  no++;
//  }while(no<=n);
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to find sum of all prime numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int no=1,n,i,sum=0;
//    printf("enter the number:");
//    scanf("%d",&n);
//
//
//    do{
//        i=2;
//
//
//       do {
//            if(no%i==0)
//            {
//                break;
//            }
//
//         i++;
//          }while(i<no);
//
//        if(no==i)
//        {
//            sum+=no;
//        }
//
//
//    no++;
//    }while(no<=n);
//
//    printf("\n sum=%d",sum);
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a number is Armstrong number or not

//#include<stdio.h>
//int main ()
//{
//    int no,cnt,rem,ans,sum=0,tmp;
//
//    printf("enter the number :");
//    scanf("%d",&no);
//    tmp=no;
//
//     cnt=0;
//
//  do{
//     no=no/10;
//     cnt++;
//  } while( no!=0 );
//
//     no=tmp;
//     printf("\n %d",no);
//
//
//     do {
//           rem=no%10;
//           no=no/10;
//           ans=1;
//
//         int i=0;
//
//       do {
//            ans=ans*rem;
//
//         i++;
//        } while(i<cnt);
//
//        printf("\n ans is %d",ans);
//        sum+=ans;
//        printf("\n sum is %d",sum);
//
//      } while( no!=0 );
//
//
//    if(sum==tmp)
//    {
//        printf("\n %d is Armstrong number",tmp);
//    }
//
// return 0;
//}
//==============================================================================================================================================================
///  Write a C program to print all Armstrong numbers between 1 to n.

//#include<stdio.h>
//int main ()
//{
//    int n,no=1,cnt,rem,tmp,ans,sum=0,i;
//
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//  do{
//        tmp=no;
//        sum=0;
//
//     cnt=0;
//     do{
//         no=no/10;
//
//     cnt++;
//       } while(no!=0);
//
//     no=tmp;
//
//
//    do {
//         rem=no%10;
//         no=no/10;
//         ans=1;
//
//
//           i=0;
//           do {
//               ans=ans*rem;
//
//            i++;
//           } while(i<cnt);
//
//              sum+=ans;
//
//      } while(no!=0);
//       no=tmp;
//
//      if(sum==no)
//      {
//          printf("\n %d",sum);
//      }
//
// no++;
//
// } while(no<=n);
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is Perfect number or not

//#include<stdio.h>
//int main ()
//{
//    int no,ans=0,i;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//
//    i=1;
//
//    do{
//           if(no%i==0)
//          {
//            ans=ans+i;
//          }
//    i++;
//       }while(i<no);
//
//    if(no==ans)
//        printf("\n %d is perfect number",no);
//    else
//        printf("\n %d is not perfect number",no);
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Perfect numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int n,no=1,ans=0,i;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//
// do {
//      ans=0;
//      i=1;
//
//    do{
//           if(no%i==0)
//          {
//            ans=ans+i;
//          }
//    i++;
//    }while(i<no);
//
//    if(no==ans)
//        printf("\n %d ",no);
//
//   no++;
//  } while(no<=n);
//
//return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a number is Strong number or not

//#include<stdio.h>
//int main ()
//{
//    int no,i,tmp,cnt,rem,fact,sum=0;
//    printf("\n enter the number :");
//    scanf("%d",&no);
//     tmp=no;
//
//
//     do {
//        rem=no%10;
//        no=no/10;
//
//        fact=1;
//
//        i=1;
//
//       do {
//            fact=fact*i;
//        i++;
//        }while(i<=rem);
//
//        sum+=fact;
//
//      }while(no!=0);
//
//    if(sum==tmp)
//    {
//        printf("\n %d is strong number",tmp);
//    }
//    else
//    {
//        printf("\n %d is not strong number",tmp);
//    }
//
//return 0;
//}
//==============================================================================================================================================================
/// Write a C program to print all Strong numbers between 1 to n

//#include<stdio.h>
//int main ()
//{
//    int n,no=1,tmp,rem,i,fact,sum;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//
//   do {
//        tmp=no;
//        sum=0;
//
//
//       do {
//            rem=no%10;
//            no=no/10;
//
//            fact=1;
//            i=1;
//
//          do {
//               fact=fact*i;
//           i++;
//           } while(i<=rem);
//
//            sum+=fact;
//
//        } while(no!=0);
//      no=tmp;
//
//      if(sum==tmp)
//      {
//          printf("\n %d",tmp);
//      }
//   no++;
//
//    } while(no<=n);
//
// return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print Fibonacci series up to n terms

//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("\n enter the number :");
//    scanf("%d",&n);
//
//     int a=0;
//     int b=1;
//     int c=a+b;
//     printf("\n %d\n %d",a,b);
//
//      int i=3;
//
//    do{
//      a=b;
//      b=c;
//      c=a+b;
//
//     printf("\n %d",c);
//
//     i++;
//    } while(c<=n);
//
//return 0;
//}
//==============================================================================================================================================================
/****************************************************** PATTERNS ***************************************************/

///    *  *  *  *  *

//#include<stdio.h>
//int main ()
//{
//    int i;
//    for(i=0;i<=4;i++)
//    {
//        printf(" * ");
//    }
//
//    return 0;
//
//}
//=============================================================================================================================================
/**

    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *
    *  *  *  *  *

*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//     for(i=0;i<=4;i++)
//     {
//         for(j=0;j<=4;j++)
//         {
//             printf(" * ");
//         }
//         printf("\n");
//     }
// return 0;
//}
//=============================================================================================================================================
/**

* * * * *
*       *
*       *
*       *
* * * * *

*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//
//    for(i=0; i<5; i++)
//    {
//        for(j=0; j<5; j++)
//        {
//            if(i==0 || i==4)
//
//                printf("* ");
//
//            else if(j==0 || j==4)
//
//                printf("* ");
//             else
//           {
//              printf("  ");
//           }
//        }
//        printf("\n");
//    }
//
// return 0;
//}
//=============================================================================================================================================
/**

*
* *
* * *
* * * *
* * * * *

*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("* ");
//        }
//         printf("\n");
//    }
// return 0;
//
//}
//=============================================================================================================================================
/**

   * * * * *
    * * * *
      * * *
        * *
          *

*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=5;j++)
//        {
//            if(j<=i)
//                  printf("  ");
//            else
//                  printf("* ");
//        }
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

* * * * *
* * * *
* * *
* *
*

*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5-i;j++)
//
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

        *
      * *
    * * *
  * * * *
* * * * *

*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<4-i)
//                printf("  ");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//  return 0;
//}
//=============================================================================================================================================
/**

*
**
***
****
*****
****
***
**
*

*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<=i && i<5)
//                printf("*");
//
//            else if(i>4 && j<9-i)
//             {
//                 printf("*");
//             }
//        }
//        printf("\n");
//
//    }
//  return 0;
//
//}
//=============================================================================================================================================
/**

 *****
 * *
 * *
 * *
 *****


*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=5;j++)
//        {
//            if(i==1 || i==5)
//                printf("*");
//
//            else if (j==1 || j==3)
//
//                printf("*");
//             else
//                    printf(" ");
//        }
//        printf("\n");
//    }
//  return 0;
//}
//=============================================================================================================================================
/**

* * * * *
* *   * *
*   *   *
* *   * *
* * * * *


 */

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//
//    for(i=1; i<=5; i++)
//    {
//        for(j=1; j<=5; j++)
//        {
//           if(i==1 || i==5)
//           {
//               printf("* ");
//           }
//           else if(j==1 || j==5)
//           {
//               printf("* ");
//           }
//           else if(i==j || j==6-i )
//           {
//               printf("* ");
//           }
//
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//=============================================================================================================================================
/**

        * * * * *
      * * * * *
    * * * * *
  * * * * *
* * * * *


*/

//#include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=5-i;j++)
//        {
//               printf("  ");
//
//        }
//        for(j=1;j<=5;j++)
//    {
//        printf("* ");
//    }
//             printf("\n");
//
//    }
//
//return 0;
//}
//=============================================================================================================================================
/**

      * * * * *
     *       *
    *       *
   *       *
  * * * * *


*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=5-i;j++)
//        {
//            printf(" ");
//        }
//
//        for(j=0;j<5;j++)
//        {
//             if(i==0 || i==4)
//                printf("* ");
//
//            else if(j==0 || j==4)
//                printf("* ");
//            else
//                printf("  ");
//
//        }
//        printf("\n");
//
//    }
//return 0;
//
//
//}
//=============================================================================================================================================
/**

 * * * * *
   * * * * *
     * * * * *
       * * * * *
         * * * * *

*/

// #include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("  ");
//        }
//        for(j=0;j<5;j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;

//}
//=============================================================================================================================================
/**

 *****
  *   *
   *   *
    *   *
     *****

*/

// #include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf(" ");
//        }
//        for(j=0;j<5;j++)
//        {
//            if(i==0 || i==4 || j==0 || j==4)
//                printf("*");
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
// return 0;
//
//}
//=============================================================================================================================================
/**

*
**
***
****
*****

*/

//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//  return 0;
//}
//=============================================================================================================================================
/**

*
**
* *
*  *
*****

*/

// #include<stdio.h>
// int main()
// {
//     int i,j;
//
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             if((i==2 || i==3) && (j==1) || (i==3 && j==2))
//                  printf(" ");
//             else
//                printf("*");
//         }
//         printf("\n");
//     }
//    return 0;
// }
//=============================================================================================================================================
/**


    *
   * *
  * * *
 * * * *
* * * * *


*/

// #include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//          if(j<4-i)
//          {
//              printf(" ");
//          }
//          else
//              printf("* ");  /// Because of lengthy (ladder logic ) space is applied
//        }
//
//        printf("\n");
//    }
//
//  return 0;
//}
//=============================================================================================================================================
/**

    *
   * *
  *   *
 *     *
* * * * *


*/

// #include<stdio.h>
// int main()
// {
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<4-i)
//                printf(" ");
//
//            else if(j<5-i)
//            {
//                printf("* ");
//            }
//            else if(i==4 || j==4)
//            {
//                printf("* ");
//            }
//            else
//                printf("  ");
//        }
//        printf("\n");
//
//    }
// return 0;
//
// }
//=============================================================================================================================================
/**

*****
****   } without space
***
**
*

* * * * *
* * * *
* * *       }  with space
* *
*



*/
// #include<stdio.h>
// int main()
//{
//  int i,j;
//
//  for(i=0;i<5;i++)
//  {
//      for(j=0;j<5-i;j++)
//      {
//          printf("* ");
//      }
//      printf("\n");
//  }
//return 0;
//}
//=============================================================================================================================================
/**

* * * * *
*     *
*   *
* *
*

*/

//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5-i;j++)
//        {
//            if((i==1 || i==2) && (j==1) ||(i==1 && j==2))
//            {
//                printf("  ");
//            }else
//            {
//                printf("* ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//=============================================================================================================================================
/**

 *****
  ****
   ***
    **
     *
     without space

* * * * *
  * * * *
    * * *
      * *
        *
     with space
*/

// #include<stdio.h>
// int main()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<i)
//                printf("  ");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//
// return 0;
//
//}
//=============================================================================================================================================
/**

* * * * *
  *     *
    *   *
      * *
        *
*/

// #include<stdio.h>
// int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<i)
//            printf("  ");
//
//            else if((i==1 || i==2) && (j==3) || (i==1 && j==2))
//                printf("  ");
//
//            else
//                printf("* ");
//
//        }
//        printf("\n");
//    }
//
// return 0;
//
//}
//=============================================================================================================================================


//
//        *
//       ***
//      *****
//     *******
//    *********


// #include<stdio.h>
// int main()
//{
//    int i,j;
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<7;j++)
//        {
//            if((i==0 && j<6) || (i==1 && j<4) || (i==2 && j<2))
//            {
//                printf(" ");
//            }
//            else
//                printf("*");
//        }
//
//        printf("\n");
//    }
//  return 0;
//}

///*************************** ANOTHER WAY *************************************


//#include<stdio.h>
// int main()
//{
//    int i,j;
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<7;j++)
//        {
//            if(j<6-(i+i))
//            {
//                printf(" ");
//            }
//            else
//                printf("*");
//        }
//
//        printf("\n");
//    }
//  return 0;
//}
//=============================================================================================================================================
/**

       *
     *   *
   *       *
 * * * * * * *


*/

// #include<stdio.h>
// int main()
//{
//    int i,j;
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<7;j++)
//        {
//            if(j<6-(i+i))
//            {
//                printf(" ");
//            }
//            else if ((i==1 && j==5) || (i==2 && (j>2 && j<6)))
//                printf("  ");
//
//            else
//                printf(" *");
//        }
//
//        printf("\n");
//    }
//  return 0;
//}
//=============================================================================================================================================
/**

*********
 *******
  *****
   ***
    *

*/

// #include<stdio.h>
// int main ()
// {
//   int i,j;
//   for(i=0;i<5;i++)
//   {
//       for(j=0;j<10;j++)
//       {
//           if(j<i&&(i>0))
//            printf(" ");
//
//            else if(j<9-i)
//                printf("*");
//
//            else
//                 printf(" ");
//       }
//
//       printf("\n");
//   }
// return 0;
// }
//=============================================================================================================================================
/**


*********
 *-----*
  *---*     }  without space
   *-*
    *

* * * * * * * * *
  *           *
    *       *     }  with space
      *   *
        *

*/

// #include<stdio.h>
// int main ()
// {
//   int i,j;
//   for(i=0;i<5;i++)
//   {
//       for(j=0;j<10;j++)
//       {
//           if(j<i&&(i>0))
//            printf("  ");
//
//            else if( (i==1 && (j>1 && j<7)) ||(i==2 &&(j>2 && j<6)) || (i==3 && j==4))
//                printf("  ");
//
//             else if(j<9-i)
//                 printf("* ");
//
//
//            else
//                printf(" ");
//       }
//
//       printf("\n");
//   }
// return 0;
// }
//=============================================================================================================================================
/**

*
**
***
****
*****  }  without space
****
***
**
*

*
* *
* * *
* * * *
* * * * *  } with space
* * * *
* * *
* *
*

*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<=i && i<5)
//
//                 printf("* ");
//
//            else if(j<9-i && i>4)
//
//                printf("* ");
//
//             else
//                    printf(" ");
//        }
//
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

    *
  ***
*****     } without space
  ***
    *


     *
   * * *
 * * * * *  } with space
   * * *
     *
*/
// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             if(j<4-(i+i))
//
//                 printf(" ");
//
//            else if( (i==3 && j<2) || (i==4 && j<4)  && (i>2) )
//                printf(" ");
//
//                else
//                    printf(" *");
//         }
//         printf("\n");
//     }
// return 0;
// }

//=============================================================================================================================================
/**

    *
   **
  ***   } without star space
 ****
*****


     *
    * *
   * * *    } with star space
  * * * *
 * * * * *


*/

// #include<stdio.h>
// int main ()
// {
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<4-i)
//
//                printf(" ");
//
//             else
//
//                printf(" *");
//        }
//        printf("\n");
//
//    }
// return 0;
//
// }
//=============================================================================================================================================
/**

      *
    ***
  *****
*******  } without star space
  *****
    ***
      *

       *
     * * *
   * * * * *
 * * * * * * * } with star space
   * * * * *
     * * *
       *
*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=0;i<7;i++)
//     {
//         for(j=0;j<7;j++)
//         {
//             if(j<6-(i+i))
//
//                 printf(" ");
//
//            else if( (i==4 && j<2) || (i==5 && j<4)  || (i==6 && j<6) && (i>3) )
//                printf(" ");
//
//                else
//                    printf(" *");
//         }
//         printf("\n");
//     }
// return 0;
// }
//=============================================================================================================================================
/**


**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=0;i<10;i++)
//     {
//         for(j=0;j<10;j++)
//         {
//             if(j<5-i)
//
//                printf("*");
//
//             else if (j>4+i)
//
//                    printf("*");
//
//              else if(j<=i-5)
//                    printf("*");
//
//              else if( j>13-i )
//                   printf("*");
//
//              else
//                   printf(" ");
//
//         }
//         printf("\n");
//     }
// return 0;
// }
//=============================================================================================================================================
/**


*****
 ****
  ***
   **
    *
   **
  ***
 ****
*****


*/

//#include<stdio.h>
//int main ()
//
//{
//    int i,j;
//
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j>=i)
//                printf("*");
//
//          else if(j>7-i)
//                    printf("*");
//                else
//                    printf(" ");
//        }
//        printf("\n");
//    }
//
//return 0;
//
//}
//=============================================================================================================================================
/**

*****
****
***
**
*
**
***
****
*****


*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<5-i)
//            {
//                printf("*");
//            }
//            else if(j<i-3)
//            {
//
//                printf("*");
//            }
//
//        }
//
//        printf("\n");
//    }
//
// return 0;
//
//}
//=============================================================================================================================================
/**


   ****
  ***
 **
*
 **
  ***
   ****


*/

// #include<stdio.h>
// int main ()
//
//{
//    int i,j;
//    for(i=0;i<7;i++)
//    {
//        for(j=0;j<7;j++)
//        {
//            if(j>2-i && j<7-2*i)
//            {
//                printf("*");
//            }
//            else if (j>i-4 && j<2*i-5 )
//
//                printf("*");
//
//            else
//                    printf(" ");
//
//        }
//
//        printf("\n");
//    }
//
// return 0;
//
// }
//=============================================================================================================================================
/**

  *
  *
  *
  *
** *******
  *
  *
  *
  *
  *

*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//    for(i=0; i<10; i++)
//    {
//        for(j=0; j<10; j++)
//        {
//            if((j==2 && i!=4) || (i==4 && j!=2))
//            {
//                printf("*");
//            }
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//
//return 0;
//
//}
//=============================================================================================================================================
/**

     *
     *
     *
     *
 * * * * * * * * * *
     *
     *
     *
     *
     *

*/
//#include<stdio.h>
//int main ()
//{
//    int i,j;
//    for(i=0;i<10;i++)
//    {
//        for(j=0;j<10;j++)
//        {
//            if((j==2 && i<10) || (i==4 && j<10) )
//                printf(" *");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
// return 0;
//
//}
//=============================================================================================================================================
/**


*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *


*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=0; i<9; i++)
//     {
//        for(j=0;j<9;j++)
//
//         {
//             if((i==j)|| (j==8-i))
//            printf("*");
//             else
//            printf(" ");
//         }
//
//        printf("\n");
//     }
//return 0;
// }
//=============================================================================================================================================
/**

* * *
*   *
*   *
*   *
* * *
*   *
*   *
*   *
* * *

*/
// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            if((i>0 && i<4) &&(j==1) || (i>4 && i<8) && (j==1))
//                printf("  ");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//return 0;
//
//}
//=============================================================================================================================================
/**

   ****   ****
  ****** ******
 ***************
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *
*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     for(i=0;i<13;i++)
//     {
//         for(j=0;j<19;j++)
//         {
//             if(j<3-i || (i==0 && (j>6 && j<10)) || (i==1 &&j==8 ) || (j>i+13))
//             {
//                 printf(" ");
//             }
//             else if(j<i-3)
//             {
//                 printf(" ");
//             }
//             else if(j<20-i)
//                printf("*");
//
//                else
//                    printf(" ");
//         }
//
//         printf("\n");
//     }
// }
//=============================================================================================================================================
/***************************************** CHARACTER PETTERNS *****************************************/
/**

 AAAAA
 BBBBB
 CCCCC
 DDDDD

 */

// #include<stdio.h>
// int main ()
// {
//    char i='A' , j='A';
//    for(i='A';i<'E';i++)
//    {
//        for(j='A';j<='E';j++)
//        {
//            printf("%c",i);
//        }
//      printf("\n");
//    }
//
// return 0;
// }

/**************  ANOTHER WAY  ******************/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            printf("%c",ch);
//        }
//
//         printf("\n");
//         ch++;
//    }
// return 0;
//
//}
//=============================================================================================================================================
/**
ABCD
ABCD
ABCD
ABCD
ABCD

*/
// #include<stdio.h>
// int main ()
//{
//  char i='A',j='A' ;
//  for(i='A';i<='E';i++)
//  {
//      for(j='A';j<'E';j++)
//      {
//          printf("%c",j);
//      }
//      printf("\n");
//  }
//return 0;
//
//}
/***************** ANOTHER WAY *****************/
// #include<stdio.h>
// int main ()
//
//{
// char ch='A';
// int i,j;
// for(i=0;i<5;i++)
// {
//     ch='A';
//     for(j=0;j<4;j++)
//     {
//         printf("%c",ch);
//         ch++;
//     }
//     printf("\n");
// }
//
// return 0;
//}
//=============================================================================================================================================
/**

A
AB
ABC
ABCD
ABCDE

*/
// #include<stdio.h>
// int main ()
//{
//    char i='A',j='A';
//    for(i='A';i<'E';i++)
//    {
//        for(j='A';j<=i;j++)
//        {
//            printf("%c",j);
//        }
//       printf("\n");
//    }
//
//return 0;
//}
/**************** ANOTHER WAY *****************/

//#include<stdio.h>
//int main ()
//{
//    char ch='A';
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        ch='A';
//        for(j=0;j<=i;j++)
//        {
//            printf("%c",ch);
//            ch++;
//        }
//        printf("\n");
//    }
//
//return 0;
//}
//=============================================================================================================================================
/**

E
ED
EDC
EDCB
EDCBA

*/

// #include<stdio.h>
// int main ()
//{
//    char i='A', j='A';
//
//    for(i='E';i>='A';i--)
//    {
//        for(j='E';j>=i;j--)
//        {
//            printf("%c",j);
//        }
//        printf("\n");
//    }
//
//return 0;
//}
/***************** ANOTHER WAY ****************/

// #include<stdio.h>
// int main ()
//{
//    char ch='E';
//    int i,j;
//    for(i=5;i>0;i--)
//    {
//        ch='E';
//        for(j=5;j>=i;j--)
//        {
//            printf("%c",ch);
//            ch--;
//        }
//        printf("\n");
//    }
//
//return 0;
//}
//=============================================================================================================================================
/**

E
DE
CDE
BCDE
ABCDE

*/

// #include<stdio.h>
// int main ()
//{
//  char ch='E';
//  int i,j;
//  for(i=0;i<5;i++)
//  {
//      ch='A';
//      for(j=0;j<5;j++)
//      {
//          if(j<4-i)
//             ch++;
//             else
//              printf("%c",ch++);
//      }
//      printf("\n");
//  }
//
//return 0;
//}
//=============================================================================================================================================
/**

A
BA
CBA
DCBA
EDCBA


*/

//  #include<stdio.h>
// int main ()
//{
//  char ch='E';
//  int i,j;
//  for(i=0;i<5;i++)
//  {
//      ch='E';
//      for(j=0;j<5;j++)
//      {
//          if(j<4-i)
//             ch--;
//             else
//              printf("%c",ch--);
//      }
//      printf("\n");
//  }
//
//return 0;
//}
//=============================================================================================================================================
/**

ABCDE
ABCD
ABC
AB
A

*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     char ch='A';
//
//     for(i=0;i<5;i++)
//     {
//         ch='A';
//         for(j=0;j<5;j++)
//         {
//             if(j<5-i)
//             {
//                 printf("%c",ch);
//                 ch++;
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }//=============================================================================================================================================
/**

A B C D E
B C D E
C D E
D E
E

*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    char ch='A';
//
//    for(i=0;i<5;i++)
//    {
//        ch='A'+i;
//
//        for(j=0;j<5;j++)
//        {
//            if(j<5-i)
//
//                printf("%c ",ch);
//                ch++;
//        }
//        printf("\n");
//
//     }
//
//return 0;
//
//}
// }//=============================================================================================================================================
/**

E D C B A
E D C B
E D C
E D
E


*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    char ch='E';
//
//    for(i=0;i<5;i++)
//    {
//         ch='E';
//        for(j=0;j<5;j++)
//        {
//            if(j<5-i)
//            {
//                printf("%c ",ch);
//                ch--;
//            }
//        }
//        printf("\n");
//    }
//return 0;
//}
// }//=============================================================================================================================================
/**

A
B B
C C C
D D D D
E E E E E

*/

//  #include<stdio.h>
//  int main ()
//{
//    char i='A',j='A';
//
//    for(i='A';i<='E';i++)
//    {
//        for(j='A';j<=i;j++)
//        {
//            printf("%c ",i);
//        }
//        printf("\n");
//    }
//return 0;
//}
// }
//=============================================================================================================================================
/**

E
D D
C C C
B B B B
A A A A A


*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//    char ch='E';
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%c ",ch);
//        }
//        ch--;
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

E E E E E
D D D D
C C C
B B
A

*/
//
// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    char ch='E';
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<5-i)
//            {
//                printf("%c ",ch);
//            }
//        }
//        ch--;
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

A A A A A
B B B B
C C C
D D
E


*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5-i;j++)
//        {
//            printf("%c ",ch);
//        }
//        ch++;
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

A
B C
D E F
G H I J
K L M N O

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%c ",ch++);
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

A
A B C
A B C D E
A B C D E F G
A B C D E F G H I

*/

//  #include<stdio.h>
//  int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//         ch='A';
//        for(j=0;j<9;j++)
//        {
//            if(j<=i+i)
//            {
//                printf("%c ",ch++);
//            }
//        }
//      printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

ABCDEEDCBA
ABCD**DCBA
ABC****CBA
AB******BA
A********A

*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//     char ch='A';
//
//     for(i=0;i<5;i++)
//     {
//         ch='A';
//         for(j=0;j<10;j++)
//         {
//             if(j<5-i)
//             {
//               printf("%c",ch++);
//             }
//             else if(j>4+i)
//             {
//                ch--;
//               printf("%c",ch);
//             }
//             else
//             {
//                 printf("*");
//             }
//         }
//         printf("\n");
//
//     }
//
//return 0;
// }
//=============================================================================================================================================
/**

    A
  B C D
E F G H I

*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    char ch='A';
//
//    for(i=0;i<3;i++)
//    {
//      for(j=0;j<5;j++)
//        {
//          if(j>3-(i+i))
//          {
//              printf("%c ",ch++);
//          }
//          else
//            printf(" ");
//        }
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

EDCB*
EDC*A
ED*BA
E*CBA
*DCBA

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='E';
//    int i,j;
//
//      for(i=0;i<5;i++)
//      {
//          ch='E';
//          for(j=0;j<5;j++)
//          {
//             if(j<4-i)
//             {
//                 printf("%c",ch--);
//             }
//             else if(j>4-i)
//             {
//                 ch--;
//                 printf("%c",ch);
//             }
//             else
//                printf("*");
//          }
//          printf("\n");
//      }
//return 0;
//}
//=============================================================================================================================================
/**
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A';
//        for(j=0;j<9;j++)
//        {
//            if(j<=i+i)
//            {
//                if(j<=i)
//                {
//                    printf("%c",ch++);
//                }
//                else
//                {
//                    ch--;
//                    printf("%c",ch-1);
//                }
//            }
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

A        A
AB      BA
ABC    CBA
ABCD  DCBA
ABCDEEDCBA

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A';
//        for(j=0;j<10;j++)
//        {
//            if(j<=i)
//            {
//                printf("%c",ch++);
//            }
//         else if(j>=9-i)
//            {
//                ch--;
//                printf("%c",ch);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

    A
   BA
  CBA
 DCBA
EDCBA

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='F';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='F';
//        for(j=0;j<5;j++)
//        {
//            ch--;
//            if(j>3-i)
//            {
//                printf("%c",ch);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

A
B*B
C*C*C
D*D*D*D
E*E*E*E*E
D*D*D*D
C*C*C
B*B
A

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A',bh='D';
//    int i,j;
//
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<9;j++)
//        {
//            if(j<=(i+i) && i<5)
//            {
//                if(j%2==0)
//                {
//                    printf("%c",ch);
//                }
//                else
//                {
//                    printf("*");
//                }
//            }
//        }
//        if(i<5)
//        ch++;
//
//        for(j=0;j<9;j++)
//        {
//            if(j<17-(i+i) && i>4)
//            {
//                if(j%2==0)
//                {
//                    printf("%c",bh);
//                }
//                else
//                {
//                    printf("*");
//                }
//            }
//        }
//        if(i>4)
//        bh--;
//
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

        A
      B C
    D E F
  G H I J
K L M N O

*/

// #include<stdio.h>
// int main ()
// {
//     char ch='A';
//     int i,j;
//
//     for(i=0; i<5; i++)
//     {
//         for(j=0; j<5; j++)
//         {
//             if(j>3-i)
//                  printf(" %c",ch++);
//             else
//                  printf("  ");
//         }
//         printf("\n");
//     }
// return 0;
// }
//=============================================================================================================================================
/**

        E
      E D
    E D C
  E D C B
E D C B A

*/

//  #include<stdio.h>
//  int main ()
//{
//    char ch='E';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='E';
//        for(j=0;j<5;j++)
//        {
//            if(j>3-i)
//            {
//                printf(" %c",ch--);
//            }
//            else
//            {
//                printf("  ");
//            }
//        }
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

A
BAB
CBABC
DCBABCD
EDCBABCDE

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='E',bh='B';
//    int i,j;
//
//    for(i=0; i<5; i++)
//    {
//        ch='E';bh='B';
//        for(j=0; j<9; j++)
//        {
//           if(j<=(i+i))
//           {
//               if(j<=i)
//                {
//                printf("%c",ch-4+i);
//                ch--;
//                }
//
//            else if(j>i)
//               {
//
//               printf("%c",bh++);
//               }
//
//           }
//        }
//        ch++;
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**

A B C D E
F G H I
J K L
M N
O

*/

//  #include<stdio.h>
//  int main ()
//  {
//      char ch='A';
//      int i,j;
//
//      for(i=0;i<5;i++)
//      {
//          for(j=0;j<5-i;j++)
//          {
//              printf(" %c",ch++);
//          }
//          printf("\n");
//      }
//return 0;
//  }
//=============================================================================================================================================
/**

 A B C D E
 B C D E A
 C D E B A
 D E C B A
 E D C B A
*/

//  #include<stdio.h>
//  int main ()
// {
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A'+i;
//        for(j=0;j<5;j++)
//        {
//           if(j<5-i)
//           {
//               printf(" %c",ch++);
//           }
//           else if(j>4-i)
//           {
//               printf(" %c",ch-(6-i));
//               ch--;
//
//           }
//
//        }
//        printf("\n");
//    }
// return 0;
// }
//=============================================================================================================================================
/**
    A
   A B
  A B C
 A B C D
A B C D E

*/

// #include<stdio.h>
// int main ()
// {
//     char ch='A';
//     int i,j;
//
//     for(i=0;i<5;i++)
//     {
//         ch='A';
//         for(j=0;j<5;j++)
//         {
//             if(j>3-i)
//             {
//                 printf(" %c",ch++);
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }
//=============================================================================================================================================
/**

E E E E E E E E E
E D D D D D D D E
E D C C C C C D E
E D C B B B C D E
E D C B A B C D E
*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<9;j++)
//        {
//            if( i==0 || j==0 || j==8)
//                printf(" E");
//
//            else if(i==1 || j==1 || j==7)
//                printf(" D");
//
//            else if(i==2 || j==2 || j==6)
//                printf(" C");
//
//            else if(i==4 && j==4)
//                printf(" A");
//
//              else
//                printf(" B");
//        }
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/**
E E E E E E E E E
E D D D D D D D E
E D C C C C C D E
E D C B B B C D E
E D C B A B C D E
E D C B B B C D E
E D C C C C C D E
E D D D D D D D E
E E E E E E E E E
*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<9;j++)
//        {
//            if((i==0 || i==8) || (j==0 || j==8))
//                printf(" E");
//
//            else if((i==1 || i==7) || (j==1 || j==7))
//                printf(" D");
//
//            else if((i==2 || i==6) || (j==2 || j==6))
//                printf(" C");
//
//            else if(i==4 && j==4)
//                printf(" A");
//
//            else
//                printf(" B");
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**

ABCDE
BABCD
CBABC
DCBAB
EDCBA

*/

// #include<stdio.h>
// int main ()
//{
//    char bh,ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A';bh='E';
//        for(j=0;j<5;j++)
//        {
//            if(j>=i)
//            {
//                printf("%c",ch++);
//            }
//            else
//            {
//                printf("%c",bh-(4-i));
//                bh--;
//            }
//        }
//        printf("\n");
//    }
//return 0;
//}
/************  ANOTHER WAY  ****************/

// #include<stdio.h>
// int main ()
//{
//    char ch;
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='E';
//        for(j=0;j<5;j++)
//        {
//            if(j<=i)
//            {
//                printf("%c",ch-(4-i));
//                ch--;
//            }
//            else
//            {
//                printf("%c",ch-(2-i));
//                ch++;
//            }
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**
A       A
 B     B
  C   C
   D D
    E

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<9;j++)
//        {
//            if(j==i || j==8-i)
//            {
//                printf("%c",ch);
//            }
//
//            else
//                printf(" ");
//        }
//        ch++;
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/** A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        ch='A';
//        for(j=0;j<9;j++)
//        {
//          if(j<4-i || j>4+i)
//          {
//              printf(" ");
//          }
//          else if(j<5)
//          {
//              printf("%c",ch++);
//          }
//          else
//          {
//              printf("%c",ch-2);
//              ch--;
//          }
//
//        }
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**
    A
   B B
  C   C
 D     D
E       E
*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<9;j++)
//        {
//            if(j==4-i || j==4+i)
//            {
//                printf("%c",ch);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        ch++;
//        printf("\n");
//    }
//return 0;
//}
//=============================================================================================================================================
/**
    A
   B B
  C   C
 D     D
E       E
 D     D
  C   C
   B B
    A

*/

// #include<stdio.h>
// int main ()
//{
//    char ch='A';
//    int i,j;
//
//    for(i==0;i<9;i++)
//    {
//        for(j=0;j<9;j++)
//        {
//            if(j==4-i || j==4+i)
//            {
//                printf("%c",ch);
//            }
//            else if(i>4 && (j==i-4 || j==12-i))
//            {
//                printf("%c",ch-2);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//
//      if(i<5)
//     {
//            ch++;
//     }
//     else
//     {
//         ch--;
//     }
//        printf("\n");
//    }
// return 0;
//}
//=============================================================================================================================================
/*****************************************  NUMERIC PATTERNS  ************************************/

/**

11111
22222
33333
44444
55555

*/

//#include<stdio.h>
//int main ()
//{
//    int i,j;
//
//    i=1;
//    while(i<=5)
//    {
//        j=0;
//        while(j<5)
//        {
//            printf("%d",i);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**

 11111
 11111
 11111
 11111
 11111

*/

// #include<stdio.h>
// int main ()
// {
//     int i,j;
//
//   i=0;
//   while(i<5)
//   {
//       j=0;
//       while(j<5)
//       {
//           printf("1");
//    j++;
//       }
//       printf("\n");
//  i++;
//   }
//
// return 0;
// }
//====================================================================================================================================
/**

 11111
 00000
 11111
 00000
 11111

*/
// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//
//        while(j<5)
//        {
//            if(i%2==0)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("0");
//            }
//
//       j++;
//        }
//           printf("\n");
//   i++;
//    }
//
// return 0;
//
//}
//====================================================================================================================================
/**

 01010
 01010
 01010
 01010
 01010

*/
// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//        while(j<5)
//        {
//            if(j%2!=0)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("0");
//            }
//        j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**

 11111
 10001
 10001
 10001
 11111

*/

// #include<stdio.h>
// int main ()
//  {
//      int i,j;
//
//      i=0;
//      while(i<5)
//      {
//          j=0;
//          while(j<5)
//          {
//            if(i==0 || j==0 || i==4 || j==4)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("0");
//            }
//
//        j++;
//          }
//               printf("\n");
//      i++;
//
//      }
// return 0;
//
//  }
//====================================================================================================================================
/**

 11111
 11111
 11011
 11111
 11111

*/
// #include<stdio.h>
// int main ()
//{
//    int i,j;
//    i=0;
//    while(i<5)
//    {
//        j=0;
//
//        while(j<5)
//        {
//            if(i==2 && j==2)
//            {
//                printf("0");
//            }
//            else
//            {
//                printf("1");
//            }
//       j++;
//        }
//          printf("\n");
//   i++;
//    }
// return 0;
//}
//====================================================================================================================================
/**

 10101
 01010
 10101
 01010
 10101

*/
// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//        while(j<5)
//        {
//            if((j+i)%2==0)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("0");
//            }
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//}
//====================================================================================================================================
/**
11011
11011
00000
11011
11011
*/
//  #include<stdio.h>
//  int main ()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//        while(j<5)
//        {
//           if(i==2 || j==2)
//            printf("0");
//           else
//            printf("1");
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**
10001
01010
00100
01010
10001
*/
//  #include<stdio.h>
//  int main ()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//        while(j<5)
//        {
//            if(j==i || j==4-i)
//                printf("1");
//            else
//                printf("0");
//       j++;
//        }
//        printf("\n");
//    i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**
01110
10001
10001
10001
01110

*/

//  #include<stdio.h>
//  int main()
//  {
//      int i=0,j;
//
//      while(i<5)
//        {
//            j=0;
//          while(j<5)
//          {
//              if((i==0 || i==4) && j>0 && j<4)
//              {
//                  printf("1");
//              }
//              else if((j==0 || j==4) &&(i>0 && i<4))
//              {
//                  printf("1");
//              }
//              else
//                printf("0");
//         j++;
//          }
//             printf("\n");
//       i++;
//        }
//
//return 0;
//  }
//====================================================================================================================================
/**
11111
22222
33333
44444
55555
*/

// #include<stdio.h>
// int main ()
//{
//    int i,j;
//
//    i=1;
//    do
//    {
//         j=0;
//       do
//       {
//          printf("%d",i);
//      j++;
//       }while(j<5);
//
//       printf("\n");
//
//   i++;
//    }while(i<6);
//
//return 0;
//}
//====================================================================================================================================
/**
12345
12345
12345
12345
12345
*/
// #include<stdio.h>
// int main()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=1;
//        while(j<6)
//        {
//            printf("%d",j);
//       j++;
//        }
//
//        printf("\n");
//
//   i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**
12345
23456
34567
45678
56789
*/
// #include<stdio.h>
// int main()
//{
//    int i,j;
//
//    i=1;
//    while(i<=5)
//    {
//        j=0;
//        while(j<5)
//        {
//            printf("%d",i++);
//       j++;
//        }
//
//        i=i-5;
//        printf("\n");
//  i++;
//    }
//
// return 0;
//}
//====================================================================================================================================
/**
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
//  #include<stdio.h>
//  int main()
//{
//    int i,j,cnt=1;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//        while(j<5)
//        {
//            if(i<2)
//          {
//                printf("%3d",cnt++);
//          }else
//          {
//               printf(" %d",cnt++);
//          }
//       j++;
//        }
//        printf("\n");
//    i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**
55555
54444
54333
54322
54321
*/

// #include<stdio.h>
// int main()
//{
//    int i,j;
//
//    i=0;
//    while(i<5)
//    {
//        j=0;
//        while(j<5)
//        {
//            if((i==0 && j<5) || (j==0 && i<5))
//                printf("5");
//
//            else if((i==1 && j>0) || (j==1 && i>0))
//                printf("4");
//
//            else if((i==2 && j>1) || (j==2 && i>1))
//                printf("3");
//
//            else if(j==i)
//                printf("1");
//
//            else
//                printf("2");
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//}
//====================================================================================================================================
/**
12345
23455
34555
45555
55555
*/

// #include<stdio.h>
// int main()
// {
//     int i,j,cnt=0;
//
//     i=1;
//     while(i<=5)
//     {
//        cnt=cnt+i;
//            j=0;
//         while(j<5)
//         {
//             if(j<5-i)
//             {
//                 printf("%d",cnt++);
//             }
//             else
//             {
//                 printf("5");
//             }
//        j++;
//         }
//         printf("\n");
//         cnt=cnt-cnt;
//
//
//     i++;
//     }
// return 0;
// }
//====================================================================================================================================
/**
12345
23451
34521
45321
54321
*/

//  #include<stdio.h>
//  int main()
//{
//    int i,j,cnt=0;
//
//    i=1;
//    while(i<=5)
//    {
//        cnt=cnt+i;
//        j=0;
//        while(j<5)
//        {
//            if(j<=5-i)
//            {
//                printf("%d",cnt++);
//            }
//            else if(j>5-i)
//
//             {
//                  cnt=6-(j+1);
//
//               printf("%d",cnt--);
//             }
//      j++;
//        }
//
//        printf("\n");
//     //  printf("\t cnt is %d",cnt);
//
//        cnt=cnt-cnt;
//   i++;
//    }
//}
//====================================================================================================================================
/**
12345
21234
32123
43212
54321
*/

//  #include<stdio.h>
//  int main()
//{
//    int i,j,cnt=0;
//
//    i=1;
//    while(i<=5)
//    {
//          cnt=cnt+i;
//        j=0;
//        while(j<5)
//        {
//           if(j<i)
//           {
//               printf("%d",cnt--);
//           }
//           else
//           {
//               cnt=cnt+2;
//               printf("%d",cnt--);
//           }
//       j++;
//        }
//        cnt=cnt-cnt;
//        printf("\n");
//   i++;
//    }
// return 0;
//
//}
//====================================================================================================================================


//5 5 5 5 5 5 5 5 5
//5 4 4 4 4 4 4 4 5
//5 4 3 3 3 3 3 4 5
//5 4 3 2 2 2 3 4 5
//5 4 3 2 1 2 3 4 5
//5 4 3 2 2 2 3 4 5
//5 4 3 3 3 3 3 4 5
//5 4 4 4 4 4 4 4 5
//5 5 5 5 5 5 5 5 5


















