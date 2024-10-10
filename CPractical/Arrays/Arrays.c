//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
    //int HS[5],i;
/*
    printf("\n Enter The Values..");
    scanf(" %d" ,&HS[0]);
    scanf(" %d" ,&HS[1]);
    scanf(" %d" ,&HS[2]);
    scanf(" %d" ,&HS[3]);
    scanf(" %d" ,&HS[4]);

    printf("\n Display The Values :");
    printf(" %d" ,HS[0]);
    printf(" %d" ,HS[1]);
    printf(" %d" ,HS[2]);
    printf(" %d" ,HS[3]);
    printf(" %d" ,HS[4]);
*/

//==========================================================================================================================================
    //using Loops taking input of an array
/*
    //for taking Input from user
    printf("\nTaking Input from the user");
    printf("\nEnter your Element");
    for(i=0;i<5;i++)
    {
        scanf(" %d",&HS[i]);
    }

    //Displaying That Element

    printf("\nDisplaying The Element");
    for(i=0;i<5;i++)
    {
        printf(" %d",HS[i]);
    }
*/
//==========================================================================================================================================
    //initialzation of an array

/*
    float Prise[5]={1.2 , 2.2 , 3.3 , 4.4 , 5.5};

    for(i=0;i<5;i++)
    {
        printf(" %f",Prise[i]);
    }

    */
    //==========================================================================================================================================

    /*QUE 1: WAP To ENter the 10 numbers from an array and do the additon of that elemet

    int arr[10];
    int i,sum=0;

    //INput The element
    printf("\nEnter the elelment");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    //process
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum = %d",sum);
*/
//==========================================================================================================================================
/*
    QUE 2:WAP to Enter the 10 element And find the max of That element

    int arr[10],max=0,i;

    //input
    printf("\nEnter the element");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&arr[i]);
    }
    //process
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        printf(" %d",arr[i]);
    }
    printf("\nMax = %d",max);
*/
//==========================================================================================================================================
/*
    --------QUE 3 Find Even max and Odd max from entered array

    int arr[10],i,Emax=0,Omax=0,max=0;

    //input
    printf("\nEnter the Element:");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&arr[i]);
    }

    //process
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            if(max%2==0)
            {
                Emax=max;
            }
            else
            {
                Omax=max;
            }
        }
        printf(" %d",arr[i]);
    }
    printf("\nEmax = %d",Emax);
    printf("\nOmax = %d",Omax);
*/
//==========================================================================================================================================
/*
    ----QUE 4 WAP enter an array of 10 numbers and find the presence/count of entered number

    int arr[10],num,i,count=0;
    //input

    printf("\nEnter the number :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    //processing
    printf("\nEnter the numbr you want to count :");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
        if(num==arr[i])
        {
            count++;
        }
        printf(" %d",arr[i]);
    }
    printf(" \nThe count of Entered Number = %d ",count);

*/
//==========================================================================================================================================
    /*
    ------QUE 4:WAP to find the primes numbers from entered array //direct using array

    int arr[10],i,j,flag;

    //input
    printf("\nEnter the numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process
    for(i=0;i<10;i++)
    {
        j=2;
        flag=1;
        while(j<=(arr[i]/2))
        {
            if(arr[i]%j==0)
            {
                flag = 0;
                break;
            }
            j++;
        }
        if(flag==1)
        {
            printf("\n %d is Prime Number",arr[i]);
        }
    }
*/
//==========================================================================================================================================
/*

    ------QUE 5:WAP to find the primes numbers from entered array //variable for array

     int arr[10],i,j,flag,num;

    //input
    printf("\nEnter the numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process
    for(i=0;i<10;i++)
    {
        j=2;
        flag=1;
        num=arr[i];
        while(j<=(num/2))
        {
            if(num%j==0)
            {
                flag = 0;
                break;
            }
            j++;
        }
        if(flag==1)
        {
            printf("\n %d is Prime Number",num);
        }
    }

*/
//==========================================================================================================================================
/*
    QUE 6----:WAP to find the perfect numbers from entered array

    int arr[10],i,j,sum,num;

    //input
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    //process
    for(i=0;i<10;i++)
    {
        j=1;
        sum=0;
        num=arr[i];
        while(j<=num/2)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
            j++;
        }
        if(num==sum)
        {
            printf("\n %d is perfect number",num);
        }
    }

*/
//==========================================================================================================================================
/*
    QUE 7----:WAP to find the strong numbers from entered array

    int arr[10],i,fact,rem,j,sum,num;

    //input
    printf("\nEnter your numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process

    for(i=0;i<10;i++)
    {
        sum=0;
        num=arr[i];
        while(arr[i]!=0)
        {
            rem=arr[i]%10;
            j=1;
            fact=1;
            while(j<=rem)
            {
                fact=fact*j;
                j++;
            }
            sum=sum+fact;
            arr[i]=arr[i]/10;
        }
        if(sum==num)
        {
            printf("\n %d is strong",num);
        }
    }

*/
//==========================================================================================================================================

   // QUE 8:----:WAP to find the armstrong numbers from entered array

/*
    int arr[10],i,j,power,rem,sum,num,count=0;

    //input
    printf("\nEnter your Numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    //process

    for(i=0;i<10;i++)
    {
        num=arr[i];
        count=0;
        while(num!=0)
        {
            count++;
            num=num/10;
        }
        num = arr[i];
        sum=0;
        while(num!=0)
        {
            rem=num%10;

            j=1,power=1;
            while(j<=count)
            {
                power=power*rem;
                j++;
            }
            sum=sum+power;
            num = num/10;
        }
        //arr[i]=num;
        if(arr[i]==sum)
        {
            printf("\n %d is armstrong number",arr[i]);
        }
    }

*/
//==========================================================================================================================================

    //QUE 8: WAP To Add Even and Odd numbers separetly from entered array of five element
/*
    int arr[10],i,Esum,Osum;

    //Input
    printf("\nEnter the numbers :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process
    Esum=0;
    Osum=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            printf(" \t%d",arr[i]);
            Esum=Esum+arr[i];
        }
        else
        {
            printf("\n \t%d",arr[i]);
            Osum=Osum+arr[i];
        }
    }
    printf("\nthe Esum = %d",Esum);
     printf("\nthe Osum = %d",Osum);

*/
//==========================================================================================================================================
/*
    QUE 9:WAP TO enter an array of 5 element and display in revese manner

    int arr[5],i;
    //input
    printf("\nEnter the Element :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process
    //Display The Element
    printf("\n The Element Before reverse :");
    for(i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }


    printf("\n The Element after reverse :");
    for(i=4;i>=0;i--)
    {
        printf(" %d",arr[i]);

    }
    printf("\n The Element after reverse //Another Method :");
    for(i=0;i<5;i++)
    {
        printf(" %d",arr[4-i]);
    }

*/
//==========================================================================================================================================
/*
    QUE 10:WAP TO enter an array of 5 element and display it in another location.

    int x[5],y[5],i;

    //Input
    printf("\nEnter the Element :");
    for(i=0;i<5;i++)
    {
        scanf(" %d",&x[i]);
    }
    //process
    printf("\n Display the Element At another location :");
    for(i=0;i<5;i++)
    {
        y[i]=x[i];
    }

    printf("\nElemt before changing the locaton :");
    for(i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }
    printf("\nElemt after changing the locaton :");
    for(i=0;i<5;i++)
    {
        printf(" %d",y[i]);
    }

*/
//==========================================================================================================================================
/*
    QUE 11:WAP TO enter an array of 5 element and display it in another location in reverse.

   int x[5],y[5],i;

   //Input
   printf("\nEnter the Element :");
   for(i=0;i<5;i++)
   {
       scanf(" %d",&x[i]);
   }

   //process
    printf("\n Assining value in revers Order :");
   for(i=0;i<5;i++)
   {
        y[i]=x[4-i];
   }

   printf("\n Values of x Before Reverse :");
   for(i=0;i<5;i++)
   {
       printf(" %d",x[i]);
   }

   printf("\n Values of y after Reverse :");
   for(i=0;i<5;i++)
   {
       printf(" %d",y[i]);
   }

*/
//==========================================================================================================================================
/*

   QUE 12:WAP TO enter any 10 numbers and replace all odd ny -3.

   int x[10],i;

   //Input
   printf("\nEnter The Element : ");
   for(i=0;i<10;i++)
   {
       scanf("%d",&x[i]);
   }

   //process
   for(i=0;i<10;i++)
   {
       if(x[i]%2!=0)
       {
           x[i]=-3;
       }
   }
   //Display

   printf("\n Displaying The Element After The Replace :");
   for(i=0;i<10;i++)
   {
       printf(" %d",x[i]);
   }

*/
//==========================================================================================================================================

  /*  QUE 13 : WAP To cheak the entered number is Duck or not

    int num,rem,NN,flag=1;
    printf("\nEnter the Number :");
    scanf("%d",&num);
    NN=num;
    while(num!=0)
    {
        rem=num%10;
        if(rem==0)
        {
            flag=0;
            break;
        }
        num=num/10;
    }
    num=NN;
    if(flag==0)
    {
        printf("\nThe num %d is duck ",num);
    }
    else
    {
        printf("\nThe num %d is Not Duck ",num);
    }
*/
//==========================================================================================================================================
   /* QUE 14 : WAP To cheak the entered number is Duck or not Using arrays

   int arr[5],i,rem,num,flag=1;

   //Input
   printf("\nEnter the numbers :");
   for(i=0;i<5;i++)
   {
        scanf("%d",&arr[i]);
   }

   //process
   for(i=0;i<5;i++)
   {
        flag=1;
        num=arr[i];
        while(num!=0)
        {
            rem=num%10;
            if(rem==0)
            {
                flag=0;
                break;
            }
            num=num/10;
        }
       if(flag==1)
       {
            printf("\n The number %d is Not Duck Number",arr[i]);
       }
        else
       {
            printf("\n The Number %d is Duck Number",arr[i]);
       }
   }
*/

//==========================================================================================================================================
   /*
    QUE 15 : WAP To cheak the entered number is happy or not.

    int num,rem,power,sum=0,flag=1,temp;

    printf("\nEnter The Number :");
    scanf("%d",&num);
    temp=num;
    while(1)
    {
        num=temp;
        sum=0;
        power=0;
        while(num!=0)
        {
            rem=num%10;
            power=rem*rem;
            sum=sum+power;
            num=num/10;
        }
         if(sum==1)
        {
            printf("\nThe Number is Happy :");
            break;
        }
        else if(sum==4)
        {
            break;
        }
        temp=sum;
    }

*/
//==========================================================================================================================================
 //   QUE 16 : WAP To Enter the price of 7 items and find the total bill the discount is 6% when
    /*        bill is up to 1000 otherwise discount is 14%.


    int arr[7],i,totalBill;
    float total=0.0,discount=0.0;
    //input
    printf("\nEnter The Values :");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
        total=total+arr[i];
    }
    printf("The total = %.2f",total);

    if(total<=1000)
    {
        discount=total*0.06;
        printf("\nThe Dicount = %.2f",discount);
    }
    else
    {
        discount=total*0.014;
        printf("\nThe Dicount = %.2f",discount);
    }

    totalBill=total-discount;
    printf("\n The Total Bill = %d",totalBill);
*/

    /*
//==========================================================================================================================================
    QUE 17: WAP To cheak the entered number is happy or not using arrays.


    int arr[5],i,j,num,temp,sum,power,rem;

    //input

    printf("\nEnter the Number :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process

    for(i=0;i<5;i++)
    {
        temp=arr[i];
        while(1)
        {
            arr[i]=temp;
            sum=0;
            power=0;
            while(arr[i]!=0)
            {
                rem=arr[i]%10;
                power=rem*rem;
                sum=sum+power;
                arr[i]=arr[i]/10;
            }

            //arr[i]=temp;
             if(sum==1)
            {
                printf("\nThe Number is Happy :");
                break;
            }
            else if(sum==4)
            {
                printf("\nThe Number is not happy ");
                break;
            }
            temp=sum;
        }
    }
        return 0;
}
*/
//==========================================================================================================================================
    //QUE 18:Insert An element in an array using define

//Online C Compiler.
/*

#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE],i,count,opt;
    //count
    printf("\nEnter The Count :");
    scanf("%d",&count);
    if(count>10)
    {
        printf("\n---INSUFFICIENT MEMEROY");
        return 0;
    }

    //input count values
    for(i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }

    //process
    do
    {
        printf("\n The Entered Elements of count 6 are :");
        //display the elements
        for(i=0;i<count;i++)
        {
            printf(" %d",arr[i]);
        }

        //you want to insertion of an elements:
        printf("\n 1.Insert Element\t 2.Stop Insertion ");
        scanf("%d",&opt);

        if(opt==1)
        {
            //insert Element
            if(count<=SIZE)
            {
                printf("\nEnter any element :");
                scanf("%d",&arr[count]);
                count++;
            }
            else
            {
                printf("\nArray is Full...");
                return 0;
            }

        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("InCorect Option :");
        }

    }while(1);
    printf("\nEnd of program :");
    return 0;
}
//==========================================================================================================================================
*/

//QUE 19: WAP To calculate Prime Or not
/*
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num,i,flag=0,j;
    printf("\nEnter The Number :");
    scanf(" %d",&num);

    for(i=1;i<num;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(j%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && i!=1)
        {
            printf("\nThe number %d is prime number",i);
        }
    }
    return 0;
}
*/
//==========================================================================================================================================
/*
Prime Numbers using arrays
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE],i,j,flag=0,count;
    printf("\nEnter the Count :");
    scanf("%d",&count);

    //process
    //Input
    for(i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }

    //display
    for(i=0;i<count;i++)
    {

        flag=0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && arr[i]!=1)
        {
            printf(" %d ",arr[i]);
        }

    }
    return 0;
}
*/
//==========================================================================================================================================
/* merge program
#include<stdio.h>
int main()
{
    int x[5],y[5],z[10],i,j,merge;

    //Input
    printf("\nEnter The X values :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
        z[i]=x[i];
    }

    //Input of J values
    printf("\n Enter The Y values :");
    for(i=5;i<10;i++)
    {
        scanf("%d",&y[i]);
        z[i]=y[i];

    }

    printf("\n\nDisplaying The values of X :");
    printf("\n The values Of x are :");
    for(i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }

    //Display
    printf("\n\nDisplaying The values of Y :");
    printf("\nThe values of Y are :");
    for(i=5;i<10;i++)
    {
        printf(" %d",y[i]);
    }

    //merging the values
    printf("\n\nThe merge elements are :");
    for(i=0;i<10;i++)
    {
        printf(" %d ",z[i]);
        Merge=z[i];
    }

    for(i=0;i<10;i++)
    {

    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------
/*
QUE Intersection

#include<stdio.h>
int main()
{
    int x[5],y[5],i,j,intersection;
    //input

    printf("\nEnter the X array Element :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nEnter the Y array Element :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }

    //process
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x[i]==y[j])
            {
                printf("  %d",x[i]);
                break;
            }
        }
    }

    return 0;
}
*/
//---------------------------------------------------------------------------------------
/*QUE :UNION

#include<stdio.h>
int main()
{
    int x[5],y[5],i,j,k;
    //input
    printf("\nEnter an Array Of X ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nEnter an Array of Y");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }

    //procee

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++)
            {
                if(x[i]==i)
                {
                    printf("%d",x[i]);
                    break;
                }
            }
        }

    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------

/*
#include<stdio.h>
int main()
{
    int i,j,x[5],y[5];
    printf("\nEnter an Array Elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nEnter an Array Elements of y");
    for(i=0;i<5;i++)
    {
        scanf("%d",&y[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x[i]==y[j])
            {

                printf("  %d",x[i]);
                break;
            }
        }
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[5],i,j;

    print("\n Enter an Array elements :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    //process
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((x[j]+x[j+1])- x[i]==0)
            {
                printf("%d",x[i]);
            }
        }
    }
    return 0;
}
