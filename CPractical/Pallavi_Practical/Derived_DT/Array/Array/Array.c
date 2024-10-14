
///1.
/*
#include<stdio.h>
int main()
{
    int i ;
    float m[5];

    printf("\n Enter five student marks : ");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%f",&m[i]);
    }

    printf("\n Dsiplay five student marks : ");
    for(i=0 ; i<5 ; i++)
    {
        printf("\t%f",m[i]);
    }

    return 0;
}
*/

//2.Initialization of array
/*
#include<stdio.h>
int main()
{
    int i;
    float m[] ={57.89,64.67,32.89,68.98,78.97};

    for(i=0 ; i<5 ; i++)
    {
        printf("\t %.2f",m[i]);
    }
    return 0;

}
*/


///3. Enter 10 elements through keyboarad and add it all and display
/*
#include<stdio.h>
int main()
{
    int x[10] , i , sum=0 ;

    //Input
    printf("\n Enter any 10 elements : ");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display all 10 elements : ");
    for(i=0 ; i<10 ; i++)
    {
        printf("\t %d",x[i]);
        sum = sum + x[i];
    }
    printf("\n Sum of 10 elements is : %d",sum);
    return 0;
}
*/


///4.Enter 10 elements through keyboard and  display max no from it
/*
#include<stdio.h>
int main()
{
    int arr[10] , i ; //max=0;
    int max;

    printf("\n Enter any 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    //for(i=0 ; i<10 ; i++)
    for(i=1 ; i<10 ; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    printf("\n Max no is : %d",max);
    return 0;
}
*/

//5. Enter 10 elements through keyboard and  display Evenmax and Oddmax no from it
/*
#include<stdio.h>
int main()
{
    int x[10],i,Emax , Omax , max;

    printf("\n Enter any 10 elements : ");

    for( i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    max = x[0];

    for(i=1 ; i<10 ; i++)
    {
        if(max<x[i])
        {
            max = x[i];
            if(max%2==0)
            {
                Emax=max;
            }
            else
            {
                Omax=max;
            }
        }
    }
    printf("\n Even Max no is : %d",Emax);
    printf("\n Odd Max no is : %d",Omax);
    return 0;
}

*/

//6.Enter 10 elements through keyboarad and  find the occurence of no in array
/*
#include<stdio.h>
int main()
{
    int arr[10] , i , no , count=0;

    printf("\n Enter any 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Display all 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        printf("\t %d",arr[i]);
    }

    printf("\n Enter no to check its occurence : ");
    scanf("%d",&no);

    for(i=0 ; i<10 ; i++)
    {
        if(no == arr[i])
        {
            count++;
        }
    }

    printf("\n %d is Occured %d times ",no,count);
    return 0;
}
*/

//7.find prime no's from entered array(without using another variable)
/*
#include<stdio.h>
int main()
{
    int x[10] , i , d , flag ;

    printf("\n Enter any 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0 ; i<10 ; i++)
    {
        d=2;
        flag=0;

        while( d <= (x[i]/2) )
        {
            if(x[i] % d == 0)
            {
                flag = 1;
                break;
            }
            d++;
        }

        if(flag==0)
        {
            printf("\n %d is prime no",x[i]);
        }
    }
    return 0;
}
*/

/*
///8.find prime no's from entered array( using another variable)
#include<stdio.h>
int main()
{
    int x[10] , i , d , flag , no ;

    printf("\n Enter any 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0 ; i<10 ; i++)
    {
        d=2;
        flag=0;

        no = x[i];
        while( d <= (no/2) )
        {
            if(no % d == 0)
            {
                flag = 1;
                break;
            }
            d++;
        }

        if(flag==0)
        {
            printf("\n %d is prime no",x[i]);
        }
    }
    return 0;
}
*/

///9. print Armstrong no's from enterd array
/*

#include<stdio.h>
int main()
{
    int x[10] ,i,j,r,ans,no,cnt,rem,sum;

    printf("\n enter any 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display all elements : ");
    for(i=0 ; i<10 ; i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n List of armstrong no : ");
    for(i=0 ; i<10 ; i++)
    {
        no = x[i];
        sum = 0;
        cnt = 0;
        while(no!=0)
        {
            cnt++;
            no = no / 10;
        }
        no = x[i];

        while(no!=0)
        {
            r = no % 10;
            j = 1;
            ans = 1;
            while(j<=cnt)
            {
                ans = ans*r;
                j++;
            }
            sum = sum + ans;
            no = no / 10;
        }
        if(x[i]==sum)
        {
            printf("\t %d",x[i]);
        }
    }
    return 0 ;
}
*/

///10.print perfect no's from enterd array
/*
#include<stdio.h>
int main()
{
    int arr[10] , i , j,no , sum ;

    printf("\n Enter 10 no's : ");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Display all no's : ");
    for(i=0 ; i<10 ; i++)
    {
        printf("\t %d",arr[i]);
    }

    printf("\n List of Perfect no's : ");
    for(i=0 ; i<10 ; i++)
    {
        no = arr[i];
        j = 1;
        sum = 0;
        while(j<=no/2)
        {
            if(no%j==0)
            {
                sum = sum + j;
            }
            j++;
        }
        if(sum==arr[i])
        {
            printf("\t %d",no);
        }
    }
    return 0;

}

*/

///11.print storng no's from enterd array
/*
#include<stdio.h>
int main()
{
    int x[10] , r , sum , no ,j,i, fact;

    printf("\n Enter any 10 no's : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display all no's : ");
    for(i=0 ; i<10 ; i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n List of strong no's : ");
    for(i=0 ; i<10 ; i++)
    {
        sum = 0;
        no = x[i];

        while(no!=0)
        {
            r = no % 10;
            j = 1;
            fact = 1;

            while(j<=r)
            {
                fact = fact * j;
                j++;
            }
            sum = sum + fact;
            no = no / 10;
        }
        if(sum==x[i])
        {
            printf("\t %d",x[i]);
        }
    }
    return 0;
}
*/



///11.Display array in reverse order
/*
#include<stdio.h>
int main()
{
    int x[5],i;

    printf("\n Enter any 5 elements : ");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }

    //first way
    printf("\n array in reverse order : ");
    for(i=4 ; i>=0 ; i--)
    {
        printf("\t %d",x[i]);
    }

    //Second way
    printf("\n Array in reverse order : ");
    for(i=0 ; i<5 ; i++)
    {
        printf("\t %d",x[4-i]);
    }
    return 0;
}
*/

///12.Copy array to another location
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],i;

    printf("\n Enter any 5 elements : ");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        y[i]=x[i];
    }

    printf("\n Elements in y array : ");
    for(i=0 ; i<5 ; i++)
    {
        printf("\t %d",y[i]);
    }
    return 0;
}
*/

///13.copy array of elements at another location in reverse order
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],i,j;

    printf("\n Enter 5 elements : ");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n copy Array in y in  reverse order : ");

    //first way
    for(i=0 ; i<5 ; i++)
    {
        y[i]=x[4-i];
        printf("\t %d",y[i]);
    }

    printf("\n Second way....");
    //second way
    for(i=0,j=4 ; i<5 ; i++,j--)
    {
        y[j]=x[i];
    }
    for(j=0 ; j<5 ; j++)
    {

        printf("\t %d",y[j]);
    }
    return 0;
}

*/

///14.add even and odd no's from array separetally
/*
#include<stdio.h>
int main()
{
    int x[5],i,sum=0,Esum=0,Osum=0,Enum,Onum;

    printf("\n Enter any 10 no's : ");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Elements in array are : ");
    for(i=0 ; i<5 ; i++)
    {
        printf("\t %d",x[i]);

    }
    printf("\n");
    for(i=0 ; i<5 ; i++)
    {
        if(x[i]%2==0)
        {
            Esum = Esum+x[i];
            printf("\t %d",x[i]);
        }
        else
        {
            Osum = Osum+x[i];
            printf("\n  %d",x[i]);
        }
    }

    printf("\n Esum : %d",Esum);
    printf("\n Osum : %d",Osum);
return 0;
}
*/

///15. Enter 7 items & find total bill , discount is 6% when bill is upto 1000 other wise discount is 14%
/*
#include<stdio.h>
int main()
{
    int x[7],i ,TB,sum=0;
    float D;

    printf("\n Enter price of 7 elements : ");

    for(i=0 ; i<7 ; i++)
    {
        scanf("%d",&x[i]);
        //sum = sum + x[i];
    }

    for(i=0 ; i<7 ; i++)
    {
        sum=sum+x[i];
    }

    if(sum<=1000)
    {
        D=(float)sum*0.06;
        TB=sum-D;
    }
    else
    {
        D=(float)sum*0.14;
        TB=sum-D;
    }

    printf("Discount is : %f",D);
    printf("\n Your total bill is : %d",TB);
    return 0;
}
*/

///16.Enter any 10 no's and replace all odd no's with -3
/*
#include<stdio.h>
int main()
{
    int x[10],i;

    printf("\n Enter any 10 elements : ");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display all 10 elements : ");
    for(i=0 ; i<10 ; i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n Replace all odd no's with -3 : ");
    for(i=0 ; i<10 ; i++)
    {
        if(x[i]%2 != 0)
        {
            x[i]= -3;
        }
        printf("\t %d",x[i]);
    }
    return 0;
}
*/


///17. check no is duck or not (e.g. 102,2003,34306)
/*
//with no
#include<stdio.h>
int main()
{
    int no,rem , flag=0;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    for( ; no!=0 ; no=no/10)
    {
        rem=no%10;

        if(rem==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("No is Duck");
    }
    else
    {
        printf("\n No is not duck");
    }
    return 0;
}
*/

///**********With array********
/*
#include<stdio.h>
int main()
{
    int x[5] , i ,no, rem,flag=0;

    printf("\n Enter any 5 elements : ");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);

    }

    for(i=0 ; i<5 ; i++)
    {
        no=x[i];
        flag=0;
        while(no!=0)
        {
            rem=no%10;

            if(rem==0)
            {
                flag=1;
                break;
            }
            no=no/10;
        }
        if(flag==1)
        {
            printf("\n %d is duck no",x[i]);
        }
    }

    return 0;
}
*/


///18. check no is happy or not

/*
#include<stdio.h>
int main()
{
    int no,temp,sum,rem,d;

    printf("\n Enter any no : ");
    scanf("%d",&no);
    temp=no;
    while(1)
    {
        no=temp;
        sum=0;

        while(no!=0)
        {
            rem=no%10;
            d=rem*rem;
            sum=sum+d;
            no=no/10;
        }
       // printf("\n %d",sum);
        if(sum==1)
        {
            printf("\n Number is happy");
            break;
        }
        else if(sum==4)
        {
            printf("\n Number is unhappy");
            break;
        }
        temp=sum;
    }


    return 0;
}
*/

///with array
/*
#include<stdio.h>
int main()
{
    int x[5],i,rem,no,temp,d,sum;

    printf("\n Enter 5 elements in array : ");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        temp=x[i];

        while(1)
        {

            no=temp;
            sum=0;
            while(no!=0)
            {
                rem=no%10;
                d=rem*rem;
                sum=sum+d;
                no=no/10;
            }
            if(sum==1)
            {
                printf("\n %d Number is Happy",x[i]);
                break;
            }
            else if(sum==4)
            {
                printf("\n %d Number is Unhappy",x[i]);
                break;
            }
            temp=sum;
        }
    }
    return 0;
}
*/

///19.print prime no's from 1 to n
/*
#include<stdio.h>
#define SIZE 100
int main()
{
    int x[SIZE] ,n, i , d , flag ;

    printf("\n Enter any n elements : ");
    scanf("%d",&n);

    printf("\n Enter %d Element's : ",n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=1 ; i<=n ; i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n List of prime number is : ");
    for(i=1 ; i<=n ; i++)
    {
        d=2;
        flag=0;

        while( d <= (x[i]/2) )
        {
            if(x[i] % d == 0)
            {
                flag = 1;
                break;
            }
            d++;
        }

        if(flag==0 && x[i]!=1)
        {
            printf("\n %d ",x[i]);
        }
    }
    return 0;
}

*/


///20.merge two arrays and arrange resultant array into increasing order
/*
#include<stdio.h>
int main()
{
    int x[5],y[5],z[10],i,j,tmp;

    printf("\n Enter the elements into x array : ");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
        z[i]=x[i];
    }

    printf("\n Enter the elements into y array : ");

    for(i=5 ; i<10 ; i++)
    {
        scanf("%d",&y[i]);
        z[i]=y[i];
    }

    printf("\n Elements of Z array are : ");
    for(i=0 ; i<10 ; i++)
    {
        printf("%5d",z[i]);
    }

    printf("\n Arrange Elements of Z array in increasing order: ");
    for(i=0 ; i<9 ; i++)
    {
        ///Using Bubble sort
        for(j=0;j<10;j++)
        {
            if(z[j]>z[j+1])
            {
                tmp=z[j];
                z[j]=z[j+1];
                z[j+1]=tmp;
            }
        }
    }

    printf("\n Z After arranging in increasing order");
    for(i=0;i<10;i++)
    {
        printf("%5d",z[i]);
    }
    return 0;
}
*/

///21.Insert Element into array
/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt;

    printf("\n Enter the element count : ");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\n Insufficient memory");
        return 0;
    }

    printf("\n ENter the %d element : ",cnt);

    for(i=0 ; i<cnt ; i++)
    {
        scanf("%d",&x[i]);
    }

    do
    {
        printf("\n Array elements are : ");

        for(i=0 ; i<cnt ; i++)
        {
            printf("\t %d",x[i]);
        }

        printf("\n Enter 1 to insert and Enter 2 for stop in given array");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt<=SIZE)
            {
                printf("\n Enter any element");
                scanf("%d",&x[cnt]);
                cnt++;
            }
            else
            {
                printf("\n Array is full.....Unable to insert elemengts");
                return 0;
            }
        }
        else if(opt==2)
        {
            break;
        }
        else
        {
            printf("\n Incorrect Option!!!");
        }
    }while(1);

    printf("\n End of the prg!!!!!");
    return 0;
}
*/

///21.Insert element at 1st position
/*

#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],cnt,i,opt;

    printf("\n Enter count : ");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient memory....!!!");
        return 0;
    }
    else
    {
        printf("\n Enter %d elements : ",cnt);
        for(i=0 ; i<cnt ; i++)
        {
            scanf("%d",&x[i]);
        }
    }

    while(1)
    {
        printf("\n Array Element's are : ");

        for(i=0 ; i<cnt ; i++)
        {
            printf("\n %d",x[i]);
        }

        printf("\n **** MENU ****");
        printf("\n 1.Insert Element \t 2. Display \t 3.Stop");

        printf("\n Enter any option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
             if(cnt<SIZE)
             {
                 for(i=cnt ; i>=1 ; i--)
                 {
                     x[i]=x[i-1];
                 }

                 printf("\n Enter element to insert at first position : ");
                 scanf("%d",&x[0]);
                 cnt++;
             }
             else
             {
                 printf("\n Array is full");
             }

             break;

        case 2:
             printf("\n Display all elements : ");
             for(i=0 ; i<cnt ; i++)
             {
                 printf("\t %d",x[i]);
             }
             break;

        case 3:
             printf("\n Enter any key to stop the process.....");
             exit(0);
             break;

        default:
             printf("\n Invalid option!!!");
        }
    }
    return 0;
}

*/

///22.Enter element at entered position
/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,pos,opt;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient memory");
    }
    else
    {
        printf("\n enter %d elements : ",cnt);

        for(i=0 ; i<cnt ; i++)
        {
            scanf("%d",&x[i]);
        }
    }

    while(1)
    {
        printf("\n ***** MENU *****");
        printf("\n \t 1.Enter element at enterd position \t 2.Display \t 3.Stop");

        printf("\n Enter any option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            printf("\n Enter the position : ");
            scanf("%d",&pos);
            if(cnt==SIZE)
            {
                printf("\n Insufficient memory");
            }
            else if(pos<0 || pos>SIZE)
            {
                printf("\n Incorrect Position");
            }
            else
            {
                if(pos==cnt)
                {
                    printf("\n Enter the element : ");
                    scanf("%d",&x[cnt]);//&x[pos]
                }
                else
                {
                    for(i=cnt ; i>pos ; i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\n Enter the No. : ");
                    scanf("%d",&x[pos]);
                    cnt++;
                }
            }
            break;

        case 2:
            printf("\n Display all Array elements : ");
            for(i=0 ; i<cnt ; i++)
            {
                printf("\t %d",x[i]);
            }
            break;

        case 3:
            printf("\n Enter any key to stop the process");
            exit(0);

        default:
            printf("\n Incorrect Option");
        }
    }
    return 0;
}

*/

///23.Delete element from start,position and end
/*
#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,pos,opt,cnt,temp;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n Insufficient memory");
    }
    else
    {
        printf("\n Enter the %d elements",cnt);

        for(i=0 ; i<cnt ; i++)
        {
            scanf("%d",&x[i]);
        }
    }

    while(1)
    {
        printf("\n ***** MENU *****");
        printf("\n 1.Delete at 1st position \t 2.Delete at entered position \t 3. Delete at end \t 4.Display \t 5.Stop");
        printf("\n Enter any option : ");
        scanf("%d",&opt);

        switch(opt)
        {
        case 1:
            temp = x[0];
            for(i=0 ; i<(cnt-1) ; i++)
            {
                x[i] = x[i+1];
            }
            cnt--;
            printf("\n Deleted element is : %d",temp);
            break;

        case 2:

            printf("\n Enter the position : ");
            scanf("%d",&pos);

            if(pos<0 && pos>=cnt)
            {
                printf("\n Incorrect Position....");
                break;
            }
            temp = x[pos];
            for(i=pos ; i<(cnt-1) ; i++)
            {
                x[i] = x[i+1];
            }
            cnt--;
            printf("\n Deleted Element is : %d",temp);

            break;

        case 3:
            temp = x[cnt-1];
            cnt--;
            printf("\n Deleted Element is : %d",temp);
            break;

        case 4:
            printf("\n Display all elements : ");
            for(i=0 ; i<cnt ; i++)
            {
                printf("\t %d",x[i]);
            }
            break;

        case 5:
            printf("\n Enter any key to stop the process...!!!");
            exit(0);
            break;

        default:
            printf("\n Incorrect Option");
        }
    }
    return 0;
}
*/



///24.Find Intersection of 2 arrays

/*
#include<stdio.h>
int main()
{
    int x[5],y[5],i,j,z[10];

    printf("\n Enter elements of x array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter the elements of y array : ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&y[j]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(y[j]==x[i])
            {
                printf("%5d",x[i]);
                break;
            }
        }
    }
    return 0;
}

*/


///25 Print union of 2 arrays
/*


#include<stdio.h>
int main()
{
    int x[5],y[5],z[10],i,j;

    printf("\n Enter the elements of x array : ");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter the elements of y array : ");
    for(j=0 ; j<5 ; j++)
    {
        scanf("%d",&y[j]);
    }

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {

            if(x[i]==y[j] || y[j]==x[i])
            {
                z[i]=x[i];
                z[i]=y[5+i];
              ///  printf(" hhhhhh %5d %5d",z[i]);
                break;
            }
            else
            {
                z[i]=x[i];
                z[5+j]=y[j];
            }
        }
        printf("\n Union of two array is : ");
        for(i=0;i<10;i++)
        {
            printf("%5d",z[i]);
        }

    }
    return 0;
}

*/



///26.Sort array using bubble sort
/*
#include<stdio.h>
int main()
{
    int x[5],i,j,k,tmp;

    printf("\n Enter any 5 no's : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    ///Sort Bubble

    for(i=0;i<4;i++)
    {
        for(j=0 ; j<(4-i) ; j++)
        {
            if(x[j]>x[j+1])
            {
                tmp = x[j];
                x[j] = x[j+1];
                x[j+1] = tmp;
            }
        }
        printf("\n");

    }
    //for(k=0 ; k<5 ; k++)
      //  {
        //    printf("%5d",x[k]);
     //   }


    printf("\n Sorted no's : ");
    for(i=0 ; i<5 ; i++)
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/

///27.Sort array using insertion sort
/*
#include<stdio.h>
int main()
{
    int x[5],i,j,k,tmp;

    printf("\n Enter any five number's : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display enterd array : ");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }

    ///Sort Insertion


    for(i=0;i<5;i++)
    {
        tmp=x[i];
        j=i-1;

        while(j>=0 && x[j]>tmp)
        {
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=tmp;

        printf("\n");
    }

   ///Anathor way to display elements

   // for(k=0;k<5;k++)
    //{
      //  printf("%5d",x[k]);
    //}

    printf("\n Sorted No : ");

    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/

///28.WAP to collect all negative elements at
///left and all positive at right side of array
///e.g.
///        Input Array:
///	34 -4 23 9 -2 201 -11 85 -34 -1

///	output array
///	-4  -2 -11 -34 -1 34 23 9 201 85

/*
#include<stdio.h>
int main()
{
    int x[10],i,j,tmp;

    printf("\n Enter the elements of array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Elements before sorting : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",x[i]);
    }

        ///Using Bubble Sort

    for(i=0;i<10;i++)
    {
        for(j=0;j<(9-i);j++)
        {
            if(x[j]>0)
            {
                tmp=x[j];
                x[j]=x[j+1];
                x[j+1]=tmp;
            }

        }
        printf("\n");
    }
    printf(" Elements after sorting : ");
    for(i=0;i<10;i++)
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/


///29.Take a array of +ve and -ve array and find
///the series of elements having summation zero
/// -9 -3 -4 7 4 5 -8 -1 9

/*
#include<stdio.h>
int main()
{
    int x[9],i,j,k , sum;

    printf("\n Enter the elements of array : ");

    for(i=0;i<9;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Display the elements of array :  ");
    for(i=0;i<9;i++)
    {
        printf("%5d",x[i]);
    }

    printf("\n");
    printf("\n Numbers are : ");
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<9;j++)
        {
            for(k=j+1;k<9;k++)
            {
                sum=x[i]+x[j]+x[k];
                if(sum==0)
                {
                    printf("\t %d %d %d",x[i],x[j],x[k]);
                }
            }
        }
    }
    return 0;
}

*/

///30.WAP to find contiguos(continue) increasing subsequence in array
/*
#include<stdio.h>
int main()
{
    int x[10],i,j,tmp;

    printf("\n Enter the elements of x array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n  x array before arranging: ");

    for(i=0;i<10;i++)
    {
        printf("\t %d",x[i]);
    }

    ///Process Using Bubble sort
    for(i=0;i<9;i++)
    {
        for(j=0;j<(9-i);j++)
        {
            if(x[j]>x[j+1])
            {
                tmp=x[j];
                x[j]=x[j+1];
                x[j+1]=tmp;
            }
        }
    }

    printf("\n After Arranging  in increasing order : ");
    for(i=0;i<10;i++)
        {
            printf("\t %d",x[i]);
        }
        return 0;

}

*/



///********************* 2D Array **********************

///31.WAP to store the runs scored by 3 players in
///5 matches and display all runs with total

/*
#include<stdio.h>
int main()
{
    int x[3][6],i,j,sum;

    printf("\n Enter the runs scored by the player : ");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            scanf("%d",&x[i][j]);
            sum=sum+x[i][j];
        }
        x[i][j]=sum;
    }

    printf("\n Display the runs : \n");
    for(i=0;i<3;i++)
    {
        //sum=0;

        for(j=0;j<5;j++)
        {
           // sum=sum+x[i][j];
            printf("\t %d",x[i][j]);
        }
        printf("  ==>  %d",x[i][j]);
        //printf("  ==>  %d",sum);
        printf("\n");
    }
    return 0;
}
*/

/// 2way
/*
#include<stdio.h>
int main()
{
    int x[3][6],i,j,sum;

    printf("\n Enter the runs scored by the player : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the runs : \n");
    for(i=0;i<3;i++)
    {
        sum=0;
        printf("\n %d player runs : ",i+1);
        for(j=0;j<5;j++)
        {
            sum=sum+x[i][j];
            printf("\t %d",x[i][j]);
        }

        printf("  ==>  %d",sum);
        printf("\n");
    }
    return 0;
}
*/

///32 C Program to Read and Print a RxC Matrix, R and C must be input by the User
/*

#include<stdio.h>
int main()
{
    int R,C,i,j;

    printf("\n Enter the number of rows :  ");
    scanf("%d",&R);

    printf("\n Enter the number of column : ");
    scanf("%d",&C);

    int x[R][C];

    printf("\n Enter the elements : ");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the elements : \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}

*/

///33.WAP to add muti. arrays
/*
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;

    printf("\n Enter the array of 3*3 : ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Enter the another array of 3*3 : ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
        printf("\n");
    }

    printf("\n Display array a : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]);
        }
         printf("\n");
    }

    printf("\n Display array b : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",b[i][j]);
        }
        printf("\n");
    }

    printf("\n Display array c : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

///34 to display the transpose of matrix
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j;

    printf("\n Enter the array of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    ///Processs
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            y[i][j]=x[j][i];
        }
    }

    printf("\n \t matrix \t\t Transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\t\t");
        for(j=0;j<3;j++)
        {
            printf("%5d",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}

*/

///35C Program to Read a Matrix and Print Diagonals
///	This C program will read a matrix of MxN dimensions and prints only diagonal’s elements of the matrix.
///	Input:
///		1	1	1
///		2	2	2
///		3	3	3

///		Output:
///			1
///				2
///					3

/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    printf("\n Enter the array of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n \t Matrix \t\t Diagonals \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t\t");
        for(j=0;j<3;j++)
        {
            if(j==i)
            {
                printf("\t%d",x[i][j]);
            }
            else
            {
                printf("\t ",x[i][j]);
            }
        }
        printf("\n");
    }
}
*/

///36. 2) C Program to Read a Matrix and find Sum and Product of all elements
	///Output:Matrix is :
	///		1	1	1
	///		2	2	2
	///		3	3	3

	///Sum :18
	///Product: 216

/*
#include<stdio.h>
int main()
{
    int R,C,i,j,Sum=0,Pro=1;

    printf("\n Enter the no rows : ");
    scanf("%d",&R);

    printf("\n Enter the no of columns : ");
    scanf("%d",&C);

    printf("\n Enter the array of %d * %d : ",R,C);

    int x[R][C];
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the array : \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("\t%d",x[i][j]);
        }
        printf("\n");
    }

    ///Process
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            Sum=Sum+x[i][j];
            Pro=Pro*x[i][j];
        }
    }
    printf("\n Sum is : %d",Sum);
    printf("\n Product is : %d",Pro);
    return 0;
}
*/

///37 . 3) C Program to find Sum of all elements of each row of a matrix
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum;

    printf("\n Enter the array of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n \t\t Matrix \t\t Sum \n ");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\t\t");
        for(j=0;j<3;j++)
        {
            sum = sum+x[i][j];
        }
        printf("%d",sum);
        printf("\n");
    }
}
*/

///38 C Program to find sum and subtraction of two matrices
/*
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],s[3][3],i,j;

    printf("\n Enter X array : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Enter y array : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    ///process

      ///for sum
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
            {
                z[i][j]=x[i][j]+y[i][j];
            }
      }

     ///for substraction
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
            {
                s[i][j]=x[i][j]-y[i][j];
            }
      }
    printf("\n \t\t Matrix \t\t\t\t\t\t\t\t Sum \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }

        printf("\t\t\t");
        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }

        printf("\t\t\t");
        for(j=0;j<3;j++)
        {
            printf("\t %d",z[i][j]);
        }
                printf("\n");
    }

    printf("\n \t\t Matrix \t\t\t\t\t\t\t\t Substraction \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }

        printf("\t\t\t");
        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }

        printf("\t\t\t");
        for(j=0;j<3;j++)
        {
            printf("\t %d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


///39. 8) C Program to print lower diagonal of a matrix
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    printf("\n Enter the elements of array : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the elements of array : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

      ///Process
      printf("\n lower diagonal of a matrix is : \n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
              if(j<=i)
              {
                  printf("\t %d",x[i][j]);
              }
              else
              {
                  printf("\t 0",x[i][j]);
              }
          }
          printf("\n");
      }
      return 0;
}
*/


///40.9) C program to check a given matrix is an identity
///matrix or not
/*
	Input :
	Matrix 1
	1	0	0
	0	1	0 ==== output: 	 matrix is an identity matrix
	0	0	1

	Matrix 1
	1	0	0
	0	1	1 ==== 	output:  matrix is not identity matrix
	0	0	1


#include<stdio.h>
int main()
{
    int x[3][3],i,j,flg=0;

    printf("\n Enter the array if 3*3: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    ///process

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i]==x[j] && x[i][j]==1)
            {
                flg=1;
            }
            else if(x[i][j]==0)
            {
                flg=1;

            }
            else
            {
                flg=0;
                break;
            }
        }
        if(flg==0)
            break;
    }
    if(flg==1)
        printf("\n Given matrix is an identity matrix");
    else
        printf("\n Given matrix is not an identity matrix");

    return 0;
}

*/

///10) C program to check two matrices are identical or not


#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],i,j,flg=0;

    printf("\n Enter matrix x : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Enter matrix y : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    printf("\n Matrix x : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    printf("\n Matrix y : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",y[i][j]);
        }
        printf("\n");
    }

    ///process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]==y[i][j])
            {
                flg=1;
            }
            else
            {
                flg=0;
                break;
            }
        }
        if(flg==0)
            break;
    }
    if(flg==1)
        printf("\n Given two matrices are identical");
    else
        printf("\n Given  two matrices are not identical");


    return 0;
}


///11) C program to check a given matrix is a sparse matrix or not
/*

#include<stdio.h>
int main()
{
    int x[4][4],i,j,cnt=0,c=0;

    printf("\n Enter array of 4*4 : ");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display array : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    ///process
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(x[i][j]==0)
            {
                cnt++;
            }
            else
            {
                c++;
            }
        }
    }
    if(cnt>c)
    {
        printf("\n given matrix is a sparse matrix");
    }
    else
    {
        printf("\n given matrix is not a sparse matrix");
    }

    return 0;

}

*/

///12) C program to interchange the rows in the matrix
///Given a matrix, and we have to interchange the specified rows in the matrix using C program.
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,r1,r2,temp;

    printf("\n Enter the matrix of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Enter the row you want to interchange : ");
    scanf("%d",&r1);

    printf("\n Enter the row you want to interchange with %d row : ",r1);
    scanf("%d",&r2);

     printf("\n Before interchange rows the matrix is : \n ");

       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("\t %d",x[i][j]);
           }
           printf("\n");
       }

 ///process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (i==r1)
            {
                temp=x[r1][j];
                x[r1][j]=x[r2][j];
                x[r2][j]=temp;
            }
        }
    }

       printf("\n After interchange rows the matrix is : \n ");

       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("\t %d",x[i][j]);
           }
           printf("\n");
       }
       return 0;
}
*/

///13) C program to interchange the columns in the matrix Given a matrix,
///and we have to interchange the specified columns using C program.

/*

#include<stdio.h>
int main()
{
    int x[3][3],c1,c2,i,j,temp;

    printf("\n Enter the matrix of 3*3 : ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Before exchange matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    ///process
    printf("\n Enter the column that u want interchange : ");
    scanf("%d",&c1);

    printf("\n Enter the column that u want interchange with %d : ",c1);
    scanf("%d",&c2);


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==c1)
            {
                temp=x[i][c1];
                x[i][c1]=x[i][c2];
                x[i][c2]=temp;
            }
        }
    }

    printf("\n After exchange matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
}
*/

///14) C program to arrange row elements in ascending order
///Given an array, we have to arrange the row elements in ascending order using C program.

/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,k,temp;

    printf("\n Enter the matrix of 3*3 : ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

        printf("\n Before :\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    ///process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=j+1;k<3;k++)
            {
                if(x[i][j]>x[i][k])
                {
                    temp=x[i][j];
                    x[i][j]=x[i][k];
                    x[i][k]=temp;
                }
            }
        }
    }
    printf("\n After : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

///15) C program to arrange column elements in ascending order
///Given a matrix, we have to arrange column elements in ascending
///order using C program.
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,k,temp;

    printf("\n Enter the matrix of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Before arrenging : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nhii");
            for(k=i+1;k<3;k++)
            {
                if(x[i][j]>=x[k][j])
                {
                    temp=x[i][j];
                    x[i][j]=x[k][j];
                    x[k][j]=temp;
                }
            }
        }

        printf("\n After arrenging : \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\t %d",x[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/

///16)C program to find the frequency of even numbers in matrix
///Given a matrix, we have to find the frequency of even numbers in matrix using C program.
/*
#include<stdio.h>
int main()
{
    int x[3][3],cnt=0,i,j;

    printf("\n Enter the matrix of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    ///process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]%2==0)
            {
                cnt++;
            }
        }
    }

    printf("\n Display the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    printf("\n Frequency of even number is : %d",cnt);
    return 0;
}

*/
///17) C program to find the sum of main and opposite diagonal elements of a matrix
/*
Given a matrix, we have to find the sum of main and opposite diagonal elements of a matrix using C program.
Input :
Matrix:
 9 8 7
 5 4 6
 1 2 3
Output :
Sum of Main diagonal elements: 16
Sum of Opposite diagonal elements: 12
*/

/*
#include<stdio.h>
int main()
{
    int x[3][3],SMD=0,SOD=0,i,j;

    printf("\n Enter the matrix of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    ///process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                SMD=SMD+x[i][j];
            }

         //   else if(j==(2-i))
           // {
           //     SOD=SOD+x[i][j];
          //  }

        }
    }
    ///for SOD
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==(2-i))
            {
                SOD=SOD+x[i][j];
            }
        }
    }

    printf("\n Sum of main diagonal is : %d",SMD);
    printf("\nSum of Opposite diagonal is : %d",SOD);
    return 0;
}

*/



///18) C program to find the trace of matrix
/*Trace of a n x n square matrix is sum of diagonal elements. Given a square matrix, we have to find the trace of matrix.
Input:
Matrix:
 9 8 7
 5 4 6
 1 2 3
Output:
Trace of matrix is: 16 */
/*
#include<stdio.h>
int main()
{
    int x[3][3],sum=0,i,j;

    printf("\n Enter the matrix of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display the matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",x[i][j]);
        }
        printf("\n");
    }

    ///process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum = sum+x[i][j];
            }
        }
    }

    printf("\n Sum i.e trace of matrix is : %d",sum);
    return 0;
}

*/

///19) C program to print the upper triangular matrix
/*Matrix:
9 8 7
5 4 6
1 2 3

Output:

Upper triangular matrix is:
9 8 7
  4 6
    3 */

/*

#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    printf("\n Enter the array of 3*3 : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }


        printf("\n \t Array \t\tUpper Triangular \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",x[i][j]);
        }

        printf("\t\t");
            for(j=0;j<3;j++)
            {
                if(j>=i)
                {
                    printf("\t %d",x[i][j]);
                }
                else
                {
                    printf("\t ");
                }
            }
        printf("\n");
    }
    return 0;
}

*/







