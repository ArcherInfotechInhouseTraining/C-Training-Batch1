/**************************************************** ARRAY **************************************************************/

/// enter the marks of the students using array without loop

// #include<stdio.h>
// int main ()
// {
//     float m[5];
//     printf("\n enter the marks of the five students :");
//     scanf("%f",&m[0]);
//     scanf("%f",&m[1]);
//     scanf("%f",&m[2]);
//     scanf("%f",&m[3]);
//     scanf("%f",&m[4]);
//
//     printf("\n the marks of the five students :");
//
//     printf("\n %f",m[0]);
//     printf("\n %f",m[1]);
//     printf("\n %f",m[2]);
//     printf("\n %f",m[3]);
//     printf("\n %f",m[4]);
//
// return 0;
// }
//==============================================================================================================================
/// enter the marks of the students using array using loop

//#include<stdio.h>
//int main ()
//{
//    float m[5];
//    int i=0;
//    printf("\n enter the marks of the five students :");
//
//    while(i<5)
//    {
//        scanf("%f",&m[i]);
//    i++;
//    }
//    i=0;
//    while(i<5)
//    {
//        printf("\n marks of the five students : %f",m[i]);
//
//    i++;
//    }
//return 0;
//
//}
//==============================================================================================================================
/// write a program to enter five number through user using array and display its total

//#include<stdio.h>
//int main ()
//{
//    int no[5],i=0,tot=0;
//    printf("\n enter the five numbers :");
//
//    do{
//        scanf("%d",&no[i]);
//
//    i++;
//      }while(i<5);
//
//// display the five numbers
//
//    i=0;
//    do{
//        printf("\n five numbers : %d",no[i]);
//
//      i++;
//      }while(i<5);
//
//// processing
//
//    i=0;
//    do {
//        tot=tot+no[i];
//
//    i++;
//       }while(i<5);
//
//// displaying total
//
//    printf("\n total = %d",tot);
//
//return 0;
//
//}
//==============================================================================================================================
/// write a program to enter the five numbers and display only even numbers

// #include<stdio.h>
// int main ()
// {
//     int no[5],i;
//
//// taking five numbers from user
//
//     printf("\n enter any five numbers :");
//
//     i=0;
//     while(i<5)
//     {
//         scanf("%d",&no[i]);
//
//   i++;
//     }
//
// //  printing only even numbers
//
//     i=0;
//     while(i<5)
//     {
//         if(no[i]%2==0)
//         {
//             printf("\n even n: %d",no[i]);
//         }
//    i++;
//     }
//
//  return 0;
//
// }
//==============================================================================================================================
/// write a program to findout max numbers form given five numbers by using array

// #include<stdio.h>
// int main ()
// {
//     int no[5],i,max=0;
//
//     printf("\n enter any five numbers :");
//
////  taking fiver numbers from user
//
//     i=0;
//     while(i<5)
//     {
//         scanf("%d",&no[i]);
//    i++;
//     }
//
//// finding max number from array
//
//     i=0;
//     while(i<5)
//     {
//         if(no[i]>max)
//         {
//             max=no[i];
//         }
//    i++;
//     }
//
////  printing the max number
//
//      printf("\n max=%d",max);
//
//
//
//
//return 0;
//
// }
//====================================================================================================================================
///  write a program to array of five element and search the entered number through keyboard in array and display number with position

// #include<stdio.h>
// int main ()
// {
//     int n[5],no,i,pos= -1 ;
//     printf("\n enter the five element:");
//
// // taking the five numbers from user
//
//    i=0;
//    while(i<5)
//    {
//        scanf("%d",&n[i]);
//
//  i++;
//    }
//
////  taking number want to search its position
//
//    printf("\n enter the number which is you want to search it's position and number itself :");
//
//    scanf("%d",&no);
//
//// processing
//
//    i=0;
//    while(i<5)
//    {
//        if(no==n[i])
//        {
//            pos=i;
//        }
//   i++;
//    }
//
//// printing number position
//
//    if(pos!=-1)
//    {
//        printf("\n %d is present at %d position ",no,pos+1);
//    }
//
// return 0;
//
// }
//====================================================================================================================================
/// write a program to reverse an array and copy into another array

// #include<stdio.h>
// int main ()
//{
//    int x[5],y[5],i;
//
//    printf("\n enter the five numbers :");
//
//// taking five numbers fro user
//
//   i=4;
//   while(i>=0)
//   {
//       scanf("%d",&x[i]);
//
//  i--;
//   }
//
//// copying the reverse array into another array
//
//   i=0;
//   while(i<5)
//   {
//       y[i]=x[i];
//
//   i++;
//   }
//
////  printing the another array
//
//    i=0;
//    while(i<5)
//    {
//        printf("\n%d",y[i]);
//
//   i++;
//    }
//
// return 0;
//
//}
//====================================================================================================================================
/// enter any three numbers and replace all odd numbers with -3

// #include<stdio.h>
// int main ()
//{
//    int n[5],i;
//
//    printf("\n enter any five numbers ");
//
//// taking five numbers from user
//
//    i=0;
//    while(i<5)
//    {
//        scanf("%d",&n[i]);
//   i++;
//    }
//
//// replacing odd numbers and replacing by -3
//
//    i=0;
//    while(i<5)
//    {
//        if(n[i]%2!=0)
//        {
//            n[i]=-3;
//        }
//   i++;
//    }
//
////  printing the final array
//
//    for(i=0;i<5;i++)
//    {
//        printf("\n %d",n[i]);
//    }
//
//return 0;
//}
//====================================================================================================================================
/// enter the n numbers and add even and odd numbers respectively

// #include<stdio.h>
// #define SIZE 1000
// int main ()
//{
//    int x[SIZE],i,n,esum=0,osum=0;
//
//    printf("\n enter the end point :");
//    scanf("%d",&n);
//
//    if(n>SIZE)
//    {
//        printf("\n Insufficient Memory !!!!");
//    }
//    else
//    {
//   printf("\n enter the %d number",n);
//
//// taking numbers from user
//
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//// adding even numbers and odd numbers
//    i=0;
//    while(i<n)
//    {
//        if(x[i]%2==0)
//        {
//            esum=esum+x[i];
//        }
//        else
//        {
//            osum=osum+x[i];
//        }
//   i++;
//    }
//
//    printf("\n even sum=%d",esum);
//    printf("\n odd sum=%d",osum);
//
//    }
//
//return 0;
//
//}
//====================================================================================================================================
/// enter the price of seven items and find the total bill the discount is 6% when bill is up to 1000 other wise 14%

//  #include<stdio.h>
//  int main ()
//{
//    float pr[7],tot=0.0,dis=0.0;
//    int i;
//    printf("\n enter the price of seven items :");
//
//    i=0;
//    while(i<7)
//    {
//        scanf("%f",&pr[i]);
// i++;
//    }
//
// // adding the total
//
//    i=0;
//    while(i<7)
//    {
//        tot=tot+pr[i];
//   i++;
//    }
//
// // with discount
//
//   if(tot>1000)
//   {
//       dis=tot*.14;
//   }
//   else
//   {
//       dis=tot*.6;
//   }
//
//   printf("\n total price is %f",tot);
//   printf("\n discount is %f",dis);
//   printf("\n payable amount is %f",dis);
//
//return 0;
//
//}
//====================================================================================================================================
/// enter the array of 10 numbers and find the presence of entered number

// #include<stdio.h>
// int main ()
// {
//     int n[10],no,i,cnt;
//
//     printf("\n enter the 10 numbers :");
//
////  taking 10 numbers from user
//
//     i=0;
//     while(i<7)
//     {
//         scanf("%d",&n[i]);
//
//    i++;
//     }
//
//// processing
//
//     printf("\n enter the number which you want find the frequency :");
//     scanf("%d",&no);
//
//     cnt=0;
//     i=0;
//     while(i<7)
//     {
//         if(no==n[i])
//
//          cnt++;
//     i++;
//     }
//     printf("\n %d is Occured at %d times",no,cnt);
//
// return 0;
//
// }
//====================================================================================================================================

/// write a program to count Armstrong numbers in an array

// #include<stdio.h>
// int main ()
// {
//     int n[10],sum,tmp,ans,rem,i,cnt;
//
//     printf("\n enter the 10 numbers :");
//
//// taking 10 numbers from user
//
//     i=0;
//     while(i<10)
//     {
//         scanf("%d",&n[i]);
//
//    i++;
//     }
//
////
//     i=0;
//     while(i<10)
//
//     {
//         sum=0;
//         tmp=n[i];
//
//         for(cnt=0; n[i]!=0; cnt++, n[i]=n[i]/10);
//
//         n[i]=tmp;
//
//         while(n[i]!=0)
//         {
//             rem=n[i]%10;
//
//
//             int j=0;
//             ans=1;
//             while(j<cnt)
//             {
//                 ans=ans*rem;
//            j++;
//             }
//
//             sum+=ans;
//
//        n[i]=n[i]/10;
//         }
//
//         if(sum==tmp)
//         {
//             printf("\n %d",tmp);
//         }
//
//     i++;
//     }
//
//  return 0;
//
// }
//====================================================================================================================================
/**  WAP to find the prime nos from array (display the list) nos 0    1     2     3     4     5     6     7      8    9
   [23]  [45]  [90]  [81]  [72]  [45]  [34]  [67]  [45]  [57]  */

//   #include<stdio.h>
//   int main ()
//{
//    int no[10],i,flag=0;
//
//    printf("\n enter the 10 numbers :");
//
//    i=0;
//    do{
//        scanf("%d",&no[i]);
//
//    i++;
//    }while(i<10);
//
//
//
// i=0;
// while(i<10)
// {
//
//   int j=2;
//            flag=0;

//       while(j<no[i]-1)
//     {
//        if(no[i]%j==0)
//        {
//            flag++;
//            break;
//        }
//
//   j++;
//      }
//
//        if(flag==0 && no[i]>1)
//        {
//            printf("\n %d" , no[i]);
//        }
//
//i++;
// }
//
//
//return 0;
//
//}
//====================================================================================================================================
///  write a program to enter the element at the end of the array

// #include<stdio.h>
// #define SIZE 10
// int main ()
//{
//    int x[SIZE],i,cnt,opt;
//
//    printf("\n enter the element count :");
//    scanf("%d",&cnt);
//
//    if(cnt>SIZE)
//    {
//        printf("\n insufficient memory !!!!");
//        return;
//    }
//
//    printf("\n enter the %d elements :",cnt);
//
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    while(1)
//    {
//        printf("\n display all elements :");
//
//        for(i=0;i<cnt;i++)
//        {
//            printf("\t %d",x[i]);
//        }
//        printf("\n enter the option 1 to INPUT and 2 to STOP");
//
//        scanf("%d",&opt);
//
//        if(opt==1)
//        {
//            if(cnt==SIZE)
//            {
//               printf("\n insufficient memeory");
//               break;
//            }
//            else
//            {
//                printf("\n enter any number to insert at end ");
//                scanf("%d",&x[cnt]);
//                cnt++;
//            }
//        }
//        else
//        {
//            if(opt==2)
//            {
//                break;
//            }
//            else
//            {
//                printf("\n try again !!!");
//            }
//        }
//    }
//
//return 0;
//
//}
//====================================================================================================================================

/// write a program to insert the element at the start of array

//#include<stdio.h>
//#define SIZE 10
//int main()
//{
//    int x[SIZE],i,cnt,opt;
//
//    printf("\n Enter the element cnt : ");
//    scanf("%d",&cnt);
//    if(cnt<SIZE)
//    {
//       printf("\n Enter the %d Elements  : ",cnt);
//
//         for(i=0;i<cnt;i++)
//       {
//           scanf("%d",&x[i]);
//       }
//
//       while(1)
//       {
//          printf("\n Select Your Option ");
//          printf("\n 1.input \t 2. display \t 3.stop ");
//          scanf("%d",&opt);
//
//          switch(opt)
//          {
//              case 1:
//                  if(cnt<SIZE)
//                  {
//                     for(i=cnt;i>=1;i--)
//                     {
//                         x[i]=x[i-1];
//                     }
//                     printf("\n enter any element : ");
//                     scanf("%d",&x[0]);
//                     cnt++;
//                  }
//                  else
//                  {
//                      printf("\n araay full !!!!");
//                      break;
//                  }
//                  break;
//
//              case 2:
//                    printf("\n display all elements : ");
//                    for(i=0;i<cnt;i++)
//                    {
//
//                        printf("\t %d",x[i]);
//                    }
//                    break;
//              case 3:
//                    exit(0);
//
//              default:
//                    printf("\n incorrect option !!! try again ");
//          }
//
//       }
//    }
//    else
//    {
//        printf("\n insufficient memory !!!!!");
//        return 0;
//    }
//    return 0;
//}
//====================================================================================================================================
/// write a program to enter the element at the postion

// #include<stdio.h>
// #define SIZE 10
//int main()
//{
//    int x[SIZE],cnt,opt,i,pos;
//
//    printf("\n enter the element count :");
//    scanf("%d",&cnt);
//
//       if(cnt<SIZE)
//       {
//           printf ("\n enter the %d element :",cnt);
//
//           for(i=0;i<cnt;i++)
//           {
//               scanf("%d",&x[i]);
//           }
//
//
//           while(1)
//           {
//               printf("\n select your option :");
//               printf("\n 1.input \t 2.display \t 3.stop");
//               scanf("%d",&opt);
//
//               switch(opt)
//               {
//
//                case 1:  printf("\n enter the position :");
//                         scanf("%d",&pos);
//
//                      if(cnt<SIZE)
//                      {
//                          for(i=cnt;i>=pos;i--)
//                          {
//                              x[i]=x[i-1];
//                          }
//                          printf("\n enter any element");
//                          scanf("%d",&x[pos]);
//                          cnt++;
//                      }
//                      else
//                      {
//                          printf("\n array full");
//                          break;
//                      }
//
//                      break;
//
//                case 2:  printf("\n display all the elements");
//                         printf("\n current element count is %d",cnt);
//
//                         for(i=0;i<cnt;i++)
//                         {
//                             printf("\t %d",x[i]);
//                         }
//                         break;
//
//                case 3:
//                         exit(0);
//
//                default:
//                         printf("\n incorrect option !! try again");
//
//               }
//           }
//       }
//       else
//       {
//           printf("\n insufficient memory !!!!");
//           return 0;
//       }
//
//    return 0;
//}
//====================================================================================================================================
/// write a program to delete an element at starting, at position and ending

// #include<stdio.h>
// #define SIZE 10
//
// int main ()
// {
//     int x[SIZE],tmp,cnt,opt,pos,i;
//     printf("\n enter the element count :");
//     scanf("%d",&cnt);
//
//     if(cnt>SIZE)
//     {
//         printf("\n Insufficient Memory !!!!!!");
//         return 0;
//     }
//       printf("\n enter the %d elements :",cnt);
//
//       for(i=0;i<cnt;i++)
//      {
//        scanf("%d",&x[i]);
//      }
//
//    while(1)
//    {
//        printf("\n 1. Delete At Starting \t 2. Delete At Position \t 3. Delete At End \t 4. Display \t 5. Stop");
//        printf("\n Enter Your Option : ");
//        scanf("%d",&opt);
//
//        switch(opt)
//        {
//            case 1:
//                   tmp=x[0];
//
//                  for(i=0;i<(cnt-1);i++)
//                  {
//                      x[i]=x[i+1];
//                  }
//                  cnt--;
//                  break;
//
//            case 2: printf("\n Enter The Position :");
//                    scanf("%d",&pos);
//
//                if(pos<0 && pos>=cnt)
//                {
//                    printf("\n Incorrect Option Please Enter Valid Option : ");
//                }
//                   tmp=x[pos];
//
//                   for(i=pos;i<(cnt-1);i++)
//                   {
//                       x[i]=x[i+1];
//                   }
//                   cnt--;
//                   break;
//
//            case 3:  tmp=x[cnt-1];
//                     cnt--;
//
//                     break;
//
//            case 4: if(cnt<0)
//                   {
//                       printf("\n Array Is Empty :");
//
//                   }else
//                   {
//                       printf("\n Display All Elements :");
//
//                    for(i=0;i<cnt;i++)
//                     {
//                        printf("\t %d",x[i]);
//                     }
//                   }
//                    break;
//            case 5:
//
//                    printf("\n ThankYou ..... Visit Again !!!");
//                    exit(0);
//
//            default :
//                      printf("\n Incorrect option !!!");
//
//         }
//
//      }
//
//      return 0;
//
// }
//====================================================================================================================================
/***************************************** SELECTION SORTING OF ARRAY ***************************************/
/// WAP TO ENTER THE ARRAY AND SORT THE ARRAY IN THE INCREASING MANNER

// #include<stdio.h>
// int main ()
//{
//    int x[5],i,j,tmp;
//    printf("\n Enter The A Elements :");
//
//// taking elements from user
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//// displaying the elements
//
//    printf("\n Elements Are");
//
//    i=0;
//    while(i<5)
//    {
//        printf("\t %d",x[i]);
//   i++;
//    }
//
// // sorting of array into Increasing order
//
//    for(i=0;i<5;i++)
//    {
//        for(j=i+1;j<5;j++)
//        {
//            if(x[i]>x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//
//  // display sorted array
//
//     printf("\n Sorted Elements Are :");
//
//     i=0;
//     do{
//         printf("\t %d",x[i]);
//     i++;
//       }while(i<5);
//
//return 0;
//
//}
//====================================================================================================================================
/// Write a program to enter two array and merge them in such way that all elements is in increasing order

//  #include<stdio.h>
//  int main()
//{
//    int x[5], y[5], z[10], i,j,tmp;
//
//    // taking the two array elements from user
//
//    printf("\n Enter The X Array Elements :");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//        z[i]=x[i];
//    }
//
//    printf("\n Enter The Y Array Elements :");
//
//    for(i=5;i<10;i++)
//    {
//        scanf("%d",&y[i]);
//        z[i]=y[i];
//    }
//
//    for(i=0;i<10;i++)
//    {
//        printf("\t %d",z[i]);
//    }
//
//    //selection sorting
//
//    for(i=0;i<10;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(z[i]>z[j])
//            {
//                tmp=z[i];
//                z[i]=z[j];
//                z[j]=tmp;
//            }
//        }
//    }
//
//    // printing the sorted array
//
//    printf("\n Sorted Array :");
//
//    for(i=0;i<10;i++)
//    {
//        printf("\t %d",z[i]);
//    }
//
//return 0;
//}
//====================================================================================================================================/
 /************************************  BUBBLE SORTING  ******************************/
// #include<stdio.h>
// int main ()
//{
//    int x[5],i,j,tmp;
//
//    printf("Enter The Array Elements :");
//
//    // taking elements from user
//
//    for(i=0;i<5;i++)
//       {
//           scanf("%d",&x[i]);
//       }
//
//    printf("\n Original Array");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\t %d",x[i]);
//    }
//
//    // bubble sorting
//
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(x[j]>x[j+1])
//            {
//                tmp=x[j];
//                x[j]=x[j+1];
//                x[j+1]=tmp;
//
//            }
//        }
//    }
//
//    printf("\n Sorted Array");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\t %d",x[i]);
//    }
//
//
//}
//====================================================================================================================================/
/***********************************  INSERTION SORTING  *********************************/

// #include<stdio.h>
// int main ()
//{
//    int x[5],i,j,tmp;
//
//    printf("\n Enter The Array");
//
//    // taking array from user
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Original Array");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\t %d",x[i]);
//    }
//
//    //  insertion sorting
//
//    for(i=0;i<5;i++)
//    {
//        tmp=x[i];
//        printf("\n 1.Tmp is %d",tmp);
//
//        j=i-1;  //j=0
//        printf("\n 2. J is %d",j);
//
//        while(tmp<x[j] && j>=0)
//        {
//            x[j+1]=x[j];
//            printf("\n 3. x[j+1] is %d",x[j+1]);
//
//            j--;
//
//            printf("\n 4. J is %d",j);
//        }
//        x[j+1]=tmp;
//
//        printf("\n 5.x[j+1] is %d",x[j+1]);
//
//        printf("\n____________________________________________");
//    }
//
//    printf("\n Sorted Array ");
//    for(i=0;i<5;i++)
//    {
//        printf("\t %d",x[i]);
//    }
//
//return 0;
//}
//====================================================================================================================================/
/**************   SEQUENTIAL SEARCH   ****************/

// #include<stdio.h>
// int main ()
//{
//    int x[5],no,i,pos=-1;
//
//    printf("\n Enter The Array Elements :");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter The Number :");
//    scanf("%d",&no);
//
//    for(i=0;i<5;i++)
//    {
//        if(x[i]==no)
//        {
//            pos=i;
//            break;
//        }
//    }
//
//    if(pos!=-1)
//    {
//        printf("\n %d is present at %d position",no,pos+1);
//    }
//
//return 0;
//
//}
//====================================================================================================================================
/** WAP to enter the array element and display the frequency of each number Which greater than 1  */

// #include<stdio.h>
// int main ()
//{
//    int x[5],no,cnt=0,i,j;
//
//    printf("\n Enter The Array Element:");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Original Array :");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\t %d",x[i]);
//
//    }
//
//    for(i=0;i<5;i++)
//    {
//        no=x[i];
//        cnt=0;
//
//        for(j=0;j<5;j++)
//        {
//            if(no==x[j])
//            {
//                cnt++;
//                x[j]=-1;
//            }
//        }
//        if(cnt>1 && no!=-1)
//        printf("\n %d Is Occurs %d Times",no,cnt);
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/*****************************************  BINARY SEARCH  ********************************************
 binary search is used to find the position of number which is present in array without using

 */

// #include<stdio.h>
// int main ()
//{
//    int x[10],tmp,start,mid,end,pos=0,no,i,j;
//
//    printf("\n Enter The Array :");
//
//    // taking array from user
//
//    for(i=0; i<10; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//   // sorting array by using selection sorting
//
//   for(i=0;i<10;i++)
//   {
//       for(j=i+1;j<10;j++)
//       {
//           if(x[i]>x[j])
//           {
//               tmp=x[i];
//               x[i]=x[j];
//               x[j]=tmp;
//           }
//       }
//   }
//
//   // sorted array
//
//   for(i=0;i<10;i++)
//   {
//       printf("\t %d",x[i]);
//   }
//
//    start=0;
//    end=9;
//
//    printf("\n Enter The Number Which Is You Want To Search Its Location :");
//
//    scanf("%d",&no);
//
//   while(start<=end)
//
//   {
//
//       mid =(start+end)/2;
//
//       if(no==x[mid])
//     {
//        pos=mid;
//        break;
//     }
//
//     else if(no>x[mid])
//     {
//        start=mid+1;
//     }
//     else
//     {
//        end=mid-1;
//     }
//
//   }
//
//
//    if(pos!=-1)
//    {
//        printf("\n %d Is Present At %d Position",no,pos);
//    }
//    else
//    {
//        printf("\n %d Is Not Present At %d Position",no,pos);
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/***************************************  1-D One Dimensional Array programs  ******************************************/

/** Write a program to print the marks obtained by a student in five tests
*/

// #include<stdio.h>
// int main()
//{
//    int x[5],i;
//
//    printf("\n Enter The Marks of Student :\n");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    for(i=0; i<5; i++)
//    {
//        printf("%3d",x[i]);
//    }
//
// return 0;
//}
//====================================================================================================================================/
/// Write a program to print the average marks obtained by a student in five tests.

// #include<stdio.h>
// int main()
//{
//    int x[5],i,t,a;
//
//    printf("\n Enter The Marks of Student :\n");
//
//    for(i=0; i<5; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    // finding total marks
//
//        for(i=0; i<5; i++)
//    {
//        t=t+x[i];
//    }
//   // finding average marks of the student
//
//    a=t/5;
//
//    printf("\n Average Marks of The Student: %d",a);
//
//   return 0;
//}
//====================================================================================================================================/
/// Write a program to find the sum of negative and positive integers.

// #include<stdio.h>
// int main()
//{
//    int x[5],i,psum=0,nsum=0;
//
//    printf("\n Enter The X Array Elements :\n");
//
//    for(i=0; i<5; i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    for(i=0; i<5; i++)
//    {
//      if(x[i]>0)
//      {
//          psum+=x[i];
//      }
//      else
//      {
//          nsum+=x[i];
//      }
//    }
//
//    printf("\n Positive Sum is %d \n Nigative Sum is %d",psum,nsum);
//
// return 0;
//
//}
//====================================================================================================================================/
/// Write a program to find the sum of N numbers in an array

// #include<stdio.h>
// int main()
//{
//    int x[100],sum=0,n,i;
//
//    printf("\n Enter The Number Which You Want The Number of Array Elements :");
//    scanf("%d",&n);
//    printf("\n Enter The %d Array Elements :",n);
//
//    i=0;
//    while(i<n)
//    {
//        scanf("%d",&x[i]);
//        sum+=x[i];
//    i++;
//    }
//    printf("\n Sum Of Array Elements %d: ",sum);
//
// return 0;
//}
//====================================================================================================================================/
/// WAP to collect all negative elements at left and all positive at right side of array

// #include<stdio.h>
// int main ()
//{
//    int x[10],tmp,i,j;
//
//    printf("\n Enter The Array Elements:");
//
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    for(i=0;i<10;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]>x[j])
//            {
//              tmp=x[i];
//              x[i]=x[j];
//              x[j]=tmp;
//            }
//        }
//    }
//
//    for(i=0;i<10;i++)
//    {
//        printf("\t %d",x[i]);
//    }
// return 0;
//}
//====================================================================================================================================/
/**   WAP to find the intersection of two arrays.
       x
         { 23,-5,89,12,9 }

        y
         { 9,-34,12,100,-5 }

        Intersection:
            { -5, 12, 9 }
*/

//  #include<stdio.h>
//  int main ()
//{
//   int x[5],y[5],z[5],i,j;
//
//    printf("\n Enter X Array Elements :");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    for(i=0;i<5;i++)
//    {
//        printf("\t %d",x[i]);
//    }
//
//    printf("\n Enter Y Array Elements :");
//
//     for(j=0;j<5;j++)
//    {
//        scanf("%d",&y[j]);
//    }
//
//     for(j=0;j<5;j++)
//    {
//        printf("\t %d",y[j]);
//    }
//
//    printf("\n Intersection :");
//
//    for(i=0;i<5;i++)
//    {
//       for(j=0;j<5;j++)
//       {
//           if(x[i]==y[j])
//           {
//                printf("\t %d",x[i]);
//           }
//       }
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/**  WAP to merge the two different arrays in a such way that there should not be any duplicate element.

        e.g.
                x
                {12, 45, 78, 38, 45}

                y
                {78, 90, 123, 12, 100}

                z
                {12,45,78,38,90,123,100}

*/

 #include<stdio.h>
 int main()
 {
     int x[5],y[5],z[5],tmp[5],i,j;


     // taking X array

     printf("\n Enter The X Array Elements : ");

     i=0;
     while(i<5);
     {
         scanf("%d",&x[i]);
    i++;
     }

      // taking Y array

     printf("\n Enter The Y Array Elements");

     i=0;
     while(i<5);
     {
         scanf("%d",&y[i]);
    i++;
     }

     // processing

      i=0;
      while(i<5)
      {
          if(x[i]==y[i])
          {
              tmp[i]=x[i];
          }
     i++;
      }

    // Printing

      i=0;
      while(i<5)
      {
          printf("%d",x[i]);
     i++;
      }

return 0;

 }

//====================================================================================================================================/
/********************************************  2D ARRAY  *******************************************/
/*
#include<stdio.h>
int main()
{
    int x[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int i,j;

    printf("\n Array Elements Are : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %3d",x[i][j]);
        }
        printf("\n");
    }
    return 0;

}

*/
//====================================================================================================================================/

// WAP to enter the array in 3X4 format
// #include<stdio.h>
// int main ()
// {
//     int x[3][4],i,j;
//
//     printf("\n Enter The Array In 3X4 Format :");
//
//     for(i=0;i<3;i++)
//     {
//         printf("\n Enter The %d Row Elements :\n",i+1);
//         for(j=0;j<4;j++)
//         {
//             scanf("%d",&x[i][j]);
//         }
//     }
//
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             printf("\t %d",x[i][j]);
//         }
//         printf("\n");
//     }
//return 0;
// }
//====================================================================================================================================/

 //WAP to enter the array in 3X4 format display its addition

//  1 2 3 4 = 10
//  5 6 7 8 = ?
//  9 10 11 12=?

// #include<stdio.h>
// int main ()
//{
//    int x[3][4],i,j,sum=0;
//
//    printf("\n Enter The Array In 3X4 Format");
//
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter The %d Elements :\n",i+1);
//        for(j=0;j<4;j++)
//        {
//          scanf("%d",&x[i][j]);
//        }
//    }
//
//    for(i=0;i<3;i++)
//    {
//        sum=0;
//        for(j=0;j<4;j++)
//        {
//
//          printf("%3d",x[i][j]);
//        }
//         sum=sum+x[i][j];
//        printf(" =%d",sum);
//        printf("\n");
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/**
     x[i][j]     y[i][j]       z[i][j]
    1 2 3 4     1 2 3 4    =  2  4  6  8
    5 6 7 8     5 6 7 8    = 10 12 14 16
    9 10 11 12  9 10 11 12 = 18 20 22 24

*/

//  #include<stdio.h>
//  int main()
//{
//    int x[3][3],y[3][3],z[3][3],i,j;
//
//    printf("\n Enter X Array :");
//
//    // taking X array
//
//    i=0;
//    while(i<3)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//
//        j=0;
//        while(j<3)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//   i++;
//    }
//
//   // taking Y array
//
//     printf("\n Enter Y Array :");
//      i=0;
//    while(i<3)
//    {
//        printf("\n Enter The %d Row Elements :",i+1);
//
//        j=0;
//        while(j<3)
//        {
//            scanf("%d",&y[i][j]);
//       j++;
//        }
//   i++;
//    }
//
//    // processing
//
//    i=0;
//    while(i<3)
//    {
//        j=0;
//        while(j<3)
//        {
//          z[i][j]=x[i][j]+y[i][j];
//
//        j++;
//        }
//   i++;
//    }
//
//    // printing
//
//    i=0;
//    while(i<3)
//    {
//        j=0;
//        while(j<3)
//        {
//            printf("%3d",x[i][j]);
//        j++;
//        }
//        printf("\t");
//        printf("+");
//
//        j=0;
//        while(j<3)
//        {
//            printf("%3d",y[i][j]);
//       j++;
//        }
//        printf("\t=");
//
//        j=0;
//        while(j<3)
//        {
//            printf("%3d",z[i][j]);
//       j++;
//        }
//
//        printf("\n");
//
//    i++;
//    }
//return 0;
//
//}
//====================================================================================================================================/
/**
    x[i][j]     y[i][j]       z[i][j] = z[i][j] + (x[i][j]*y[i][j])
    1  2  3  4  1  2  3  4    = 30 36 42  8
    5  6  7  8  5  6  7  8    = 66 81 96 16
    9 10 11 12  9 10 11 12    = 102 126 150 24

    IMPPRTANT NOTE = this multiplication program is only valid when both no. of arrays column && rows are same

*/


// #include<stdio.h>
// int main()
//{
//    int x[4][4],y[4][4],z[4][4],i,j,k;
//
// // taking x array
//
//    printf("\n Enter The X Array :\n");
//
//    i=0;
//    while(i<4)
//    {
//        j=0;
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        while(j<4)
//        {
//            scanf("%d",&x[i][j]);
//      j++;
//        }
//        printf("\n");
//
//    i++;
//    }
//
//    // taking y array
//
//        printf("\n Enter The Y Array :\n");
//
//    i=0;
//    while(i<4)
//    {
//        j=0;
//        printf("\n Enter The %d Row Elements : ",i+1);
//        while(j<4)
//        {
//            scanf("%d",&y[i][j]);
//      j++;
//        }
//        printf("\n");
//
//    i++;
//    }
//
//    // processing
//
//    i=0;
//    while(i<4)
//    {
//        j=0;
//        while(j<4)
//        {
//            z[i][j]=0;
//
//            k=0;
//            while(k<4)
//            {
//               z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
//          k++;
//            }
//
//      j++;
//        }
//
//   i++;
//    }
//
//    // printing
//
//     i=0;
//    while(i<4)
//    {
//        j=0;
//        while(j<4)
//        {
//            printf("%3d",x[i][j]);
//      j++;
//        }
//
//        printf("\t");
//        j=0;
//        while(j<4)
//        {
//            printf("%3d",y[i][j]);
//
//      j++;
//        }
//        printf("\t");
//
//        j=0;
//        while(j<4)
//        {
//            printf("%5d",z[i][j]);
//       j++;
//        }
//
//        printf("\n");
//
//    i++;
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/**                 2D Array List     */

/** C Program to Read and Print a RxC Matrix, R and C must be input by the User
This program will read a two dimensional array (Matrix), number of rows (R) and number of columns (C) will be read through the User.
Input : Enter number of Rows :3
           Enter number of Cols :3
Output:Matrix is :
1	1	1
2	2	2
3	3	3
*/

// #include<stdio.h>
// int main()
//{
//    int r,c,i,j;
//    int arr[50][50];
//
//    printf("\n Enter The Number Of Row :");
//    scanf("%d",&r);
//    printf("\n Enter The Number Of Column :");
//    scanf("%d",&c);
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%d",i+1);
//       j++;
//        }
//        printf("\n");
//  i++;
//    }
//
//return 0;
//}
//====================================================================================================================================/
/**  C Program to Read a Matrix and find Sum and Product of all elements This program will read a matrix and prints sum and
 product of all elements of the two dimensional array.

Input : Enter number of Rows :3
        Enter number of Cols :3

Output:Matrix is :
1	1	1
2	2	2
3	3	3

Sum :18
Product: 216

*/

// #include<stdio.h>
// int main()
//{
//    int arr[50][50];
//    int i,j,sum=0,p=1,r,c;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//     scanf("%d",&c);
//
//    i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&arr[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//      i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            sum+=arr[i][j];
//            p*=arr[i][j];
//       j++;
//        }
//   i++;
//    }
//    printf("\n Sum Of Array :%d",sum);
//    printf("\n Product Of Array :%d",p);
//
//return 0;
//
//}
//====================================================================================================================================/
/** C Program to find Sum of all elements of each row of a matrix
    This C program will read a Matrix (two dimensional arrays) and print the sum of all elements of each row.

*/

// #include<stdio.h>
// int main()
//{
//    int arr[50][50];
//   int i,j,r,c,sum;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&arr[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//         i=0;
//    while(i<r)
//    {
//        sum=0;
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",arr[i][j]);
//            sum+=arr[i][j];
//       j++;
//        }
//        printf("\t");
//        printf("%5d",sum);
//        printf("\n");
//   i++;
//    }
//return 0;
//
//}
//====================================================================================================================================/
/** C Program to Transpose a Matrix This C program will read a matrix and print its transpose matrix.
*/

// #include<stdio.h>
// int main()
//{
//    int arr[50][50];
//       int i,j,r,c,sum;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&arr[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//          i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%d",arr[j][i]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//
//}
//====================================================================================================================================/
/**
C Program to Read a Matrix and Print Diagonals
This C program will read a matrix of MxN dimensions and prints only diagonal’s elements of the matrix.
Input:
1	1	1
2	2	2
3	3	3

Output:
1
	2
		3

*/
// #include<stdio.h>
// int main()
//{
//    int arr[50][50];
//       int i,j,r,c;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&arr[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(j==i)
//           {
//                printf("%d",arr[i][j]);
//           }
//           else
//           {
//               printf(" ");
//           }
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//}
//====================================================================================================================================/
/**
C Program to find sum and product of two matrices
This C program will read two matrices and find their sum (addition) and product, in addition matrix addition of both matrixes’
elements will be assigned and in the product matrix, product of both matrixes’ elements will be assigned.

*/

// #include<stdio.h>
// int main()
//{
//    int x[50][50],y[50][50],sum[50][50],p[50][50];
//    int i,j,r,c;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//    //taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//     printf("\n Enter y Array :");
//
//    // taking y array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&y[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//   // processing
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            sum[i][j]=x[i][j]+y[i][j];
//            p[i][j]=x[i][j]*y[i][j];
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // printing
//
//        i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//          printf("%2d",x[i][j]);
//       j++;
//        }
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",y[i][j]);
//       j++;
//        }
//
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",sum[i][j]);
//        j++;
//        }
//
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",p[i][j]);
//        j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C Program to find sum and subtraction of two matrices
This C program will read two matrices and find their sum (addition) and subtraction, in addition matrix addition of both matrixes’
elements will be assigned and in the subtraction matrix, subtraction of both matrixes’ elements will be assigned.
*/
// #include<stdio.h>
// int main()
//{
//    int x[50][50],y[50][50],sum[50][50],sub[50][50];
//    int i,j,r,c;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//    //taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//     printf("\n Enter y Array :");
//
//    // taking y array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&y[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    //processing
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            sum[i][j]=x[i][j]+y[i][j];
//            sub[i][j]=x[i][j]-y[i][j];
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    //printing
//
//        i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//          printf("%2d",x[i][j]);
//       j++;
//        }
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",y[i][j]);
//       j++;
//        }
//
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",sum[i][j]);
//        j++;
//        }
//
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",sub[i][j]);
//        j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C Program to find multiplication of two matrices
This C program will read two matrices and make a third matrix, which will contain the multiplication of both input matrices.

*/

// #include<stdio.h>
// int main()
//{
//    int x[50][50],y[50][50],mul[50][50];
//    int i,j,r,c;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//    //taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//         printf("\n Enter y Array :");
//
//    // taking y array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&y[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            mul[i][j]=x[i][j]*y[i][j];
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // printing x,y,and mul array
//
//    i=0;
//    while(i<r)
//    {
//        //x[i][j]
//
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\t");
//
//       // y[i][j]
//
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",y[i][j]);
//       j++;
//        }
//        printf("\t");
//
//       // mil[i][j]
//
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",mul[i][j]);
//       j++;
//        }
//        printf("\n");
//
//   i++;
//    }
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C Program to print lower diagonal of a matrix This C program will read a square matrix and print its lower diagonal.
Output:
Lower Triangular Matrix
2 0 0
4 5 0
6 7 8

*/

// #include<stdio.h>
// int main()
//{
//    int x[50][50],i,j,r,c,flag=0;
//
//    printf("\n Enter The No Of Row Of X Array :");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column Of X Array:");
//    scanf("%d",&c);
//
//    printf("\n Enter Elements Of X Array :");
//
//    i=0;
//    while(i<r)
//    {
//        printf("\n Enter Elements Of %d Row \n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//   i++;
//    }
//
//   // processing
//
//       i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(j>i)
//          {
//             if(x[i][j]==0)
//             {
//                flag=0;
//             }
//            else
//             {
//                flag++;
//             }
//          }
//       j++;
//        }
//   i++;
//    }
//
////    // printing
//
//        i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    if(flag==0)
//        printf("\n Matrix Is Lower Triangular Matrix \n");
//    else
//        printf("\n Matrix Is Not Triangular Matrix \n");
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C program to check a given matrix is an identity matrix or not Given a matrix, we have to check whether the matrix is an identity matrix or not using C program.
Input :
Matrix 1
1	0	0
0	1	0 ==== output: 	 matrix is an identity matrix
0	0	1

Matrix 1
1	0	0
0	1	1 ==== 	output:  matrix is not identity matrix
0
*/

// #include<stdio.h>
// int main()
//{
//    int x[50][50],i,j,r,c,flag=0;
//
//    printf("\n Enter The No Of Row Of X Array :");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column Of X Array:");
//    scanf("%d",&c);
//
//    printf("\n Enter Elements Of X Array :");
//
//    i=0;
//    while(i<r)
//    {
//        printf("\n Enter Elements Of %d Row \n",i+1);
//
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//   i++;
//    }
//
//   // processing
//
//       i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//           if(j>i==0 && j<i==0)
//           {
//               flag=0;
//           }
//           else
//           {
//               flag++;
//           }
//
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // printing
//
//    if(flag==0)
//        printf("\n Matrix Is Identity Matrix \n");
//    else
//         printf("\n Matrix Is Not Identity Matrix \n");
//
//
//return 0;
//
//}
//====================================================================================================================================/
/**

C program to check two matrices are identical or not
Given two matrices, we have to check whether they are identical or not using C program

Input
Matrix 1
1	1	1
2	2	2
3	3	3

Matrix 2
1	1	1
2	2	2
3	3	3

Output: both are identical
*/

// #include<stdio.h>
// int main()
//{
//    int x[50][50],y[50][50];
//    int i,j,r,c,flag;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//    //taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//         printf("\n Enter y Array :");
//
//    // taking y array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&y[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing
//
//            i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(x[i][j]==y[i][j])
//            {
//                flag=0;
//            }
//            else
//            {
//                flag++;
//            }
//       j++;
//        }
//   i++;
//    }
//
//    //  printing array
//
//        i=0;
//        while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",x[i][j]);
//       j++;
//        }
//        printf("\t");
//
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",y[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    if(flag==0)
//    {
//        printf("\n Entered Array Is identical");
//    }
//    else
//    {
//        printf("\n Entered Array Not Identical");
//    }
//
// return 0;
//
//}
//====================================================================================================================================/
/**
C program to check a given matrix is a sparse matrix or not Given a matrix, and we have to check whether the matrix is a sparse matrix or not using C program.
Matrix 1:
Enter the elements of the matrix:
4 5 6
7 0 0
0 0 0
 Output : Matrix is a Sparse Matrix

 Matrix 2:
Enter the elements of the matrix:
1 2 3
4 5 6
7 8 9
 Output : Matrix is not a Sparse Matrix


*/

//  #include<stdio.h>
// int main()
//{
//    int x[50][50];
//    int i,j,r,c,zcnt=0,ocnt=0;
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//    //taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing
//
//     i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(x[i][j]==0)
//            {
//                zcnt++;
//            }
//            if(x[i][j]!=0)
//            {
//                ocnt++;
//            }
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // printing
//
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%2d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    if(zcnt>ocnt)
//        printf("\n Entered Matrix Is Sparse Matrix");
//    else
//        printf("\n Entered Matrix Is Not Sparse Matrix");
//
//return 0;
//
//}
//====================================================================================================================================/
/** C program to interchange the rows in the matrix Given a matrix, and we have to interchange the specified rows in the matrix using C program.

*/
//   #include<stdio.h>
//  int main()
//{
//    int x[3][3],tmp[1][3];
//    int i,j,r,c;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<3)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<3)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    printf("\n Array X Before \n");
//
//      i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing
//
//          i=0;
//    while(i<1)
//    {
//        j=0;
//        while(j<3)
//        {
//            tmp[i][j]=x[2][j];
//            x[2][j]=x[1][j];
//            x[1][j]=x[0][j];
//            x[0][j]=tmp[i][j];
//
//       j++;
//        }
//   i++;
//    }
//
//    // printing
//      printf("\n Array X After \n");
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//}
//====================================================================================================================================/
/**
C program to interchange the column in the matrix Given a matrix, and we have to interchange the specified column in the matrix using C program.

*/

//   #include<stdio.h>
// int main()
//{
//    int x[50][50],tmp[50][50];
//    int i,j,r,c;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//         // printing
//
//     printf("\n Array X Before \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//        // processing
//
//          i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<1)
//        {
//            tmp[i][0]=x[i][2];
//            x[i][2]=x[i][1];
//            x[i][1]=x[i][0];
//            x[i][0]=tmp[i][0];
//
//       j++;
//        }
//   i++;
//    }
//
//      // printing
//
//      printf("\n Array X After \n");
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//
//}
/** Another Way*/

//   #include<stdio.h>
// int main()
//{
//    int x[50][50],tmp;
//    int i,j,r,c;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//         // printing
//
//     printf("\n Array X Before \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing
//
//  i=0;
// while(i<r)
// {
//     j=0;
//     while(j<c)
//     {
//       tmp=x[i][0];
//
//    j++;
//     }
// i++;
// }
// j--;
//          // printing
//
//      printf("\n Array X After \n");
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//return 0;
//
//}
//====================================================================================================================================/
/**
C program to arrange row elements in ascending order Given an array, we have to arrange the row elements in ascending order using C program.

*/
//|1 2 3|
//|4 5 6|
//|7 8 9|




//   #include<stdio.h>
// int main()
//{
//    int x[50][50],tmp[50][50];
//    int i,j,r,k,c;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // printing
//
//     printf("\n Array X Before \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    //processing
//
//  i=0;
//  while(i<r)
//  {
//      j=0;
//      while(j<c)
//      {
//          k=j+1;
//          while(k<c)
//          {
//              if(x[i][j]>x[i][k])
//              {
//                  tmp[i][j]=x[i][j];
//                  x[i][j]=x[i][k];
//                  x[i][k]=tmp[i][j];
//              }
//         k++;
//          }
//     j++;
//      }
//  i++;
//  }
//
//     // printing
//
//     printf("\n Array X After \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//
//    }
//====================================================================================================================================/
/**
C program to arrange column elements in ascending order Given a matrix, we have to arrange column elements in ascending order using C program.

*/
//
//   #include<stdio.h>
// int main()
//{
//    int x[50][50],tmp[50][50];
//    int i,j,r,c,k;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // printing
//
//     printf("\n Array X Before \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//        //processing
//
//  i=0;
//  while(i<r)
//  {
//      j=0;
//      while(j<c)
//      {
//          k=i+1;
//          while(k<c)
//          {
//              if(x[i][j]>x[k][j])
//              {
//                  tmp[i][j]=x[i][j];
//                  x[i][j]=x[k][j];
//                  x[k][j]=tmp[i][j];
//              }
//         k++;
//          }
//     j++;
//      }
//  i++;
//  }
//
//     // printing
//
//     printf("\n Array X After \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//
//    }
//====================================================================================================================================/
/**
C program to find the frequency of even numbers in matrix Given a matrix, we have to find the frequency of even numbers in matrix using C program.

*/


//   #include<stdio.h>
// int main()
//{
//    int x[50][50];
//    int i,j,r,c,cnt=0;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//            //processing
//
//  i=0;
//  while(i<r)
//  {
//      j=0;
//      while(j<c)
//      {
//          if(x[i][j]%2==0)
//          {
//              cnt++;
//          }
//     j++;
//      }
//  i++;
//  }
//
//  printf("\n Entered Array :\n");
//
//             i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//
//
//  // printing
//
//  printf("\n The Frequency Of Even Numbers In Matrix Is %d \n",cnt);
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C program to find the sum of main and opposite diagonal elements of a matrix
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

//   #include<stdio.h>
//    int main()
//{
//    int x[50][50];
//    int i,j,r,c,mdsum=0,odsum=0;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//
//        printf("\n");
//   i++;
//    }
//
//    //processing
//
//  i=0;
//  while(i<r)
//  {
//      j=0;
//      while(j<c)
//      {
//          if(j==i)
//          {
//              mdsum+=x[i][j];
//          }
//         if(j==2-i)
//          {
//              odsum+=x[i][j];
//          }
//     j++;
//      }
//  i++;
//  }
//
//    printf("\n Entered Array :\n");
//
//             i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//
//    printf("\n Sum Of Main Diagonal Elements Is :%d",mdsum);
//    printf("\n Sum Of Opposite Diagonal Elements Is :%d \n",odsum);
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C program to find the trace of matrix
Trace of a n x n square matrix is sum of diagonal elements. Given a square matrix, we have to find the trace of matrix.
Input:
Matrix:
 9 8 7
 5 4 6
 1 2 3
Output:
Trace of matrix is: 16

*/
// #include<stdio.h>
// int main()
//{
//    int x[50][50],r,c,i,j,flg=0;
//    int k,sum=0;
//
//    printf("\n Enter The Number of Row For X array :");
//    scanf("%d",&r);
//
//    printf("\n Enter The Column of Column For X Array :");
//    scanf("%d",&c);
//
//    // taking x Aarray
//
//    i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//   i++;
//    }
//
//    // printing
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing Sum Of Diagonal Elements Of Array
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(j==i)
//            {
//                sum+=x[i][j];
//            }
//
//       j++;
//        }
//   i++;
//    }
//
//       // processing for square root of diagonal elements
//
//    for(k=1; k*k<sum; k++);
//
//    printf("\n k is %d",k);
//    printf("\n sum is %d",sum);
//
//    //checking if square root of sum of of diagonal elements is exactly equal to the center element of diagonal element
//
//        i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(i==1 && j==1)
//            {
//                if(k==x[i][j])
//                {
//                    flg=flg+999;
//                    printf("\n 6%2d",x[i][j]);
//                }
//            }
//       j++;
//        }
//   i++;
//    }
//
//    if(flg!=0)
//        printf("\n Entered Matrics is Trace Matrics \n");
//    else
//        printf("\n Entered Matrics is Not Trace Matrics \n");
//
//return 0;
//
//}
//====================================================================================================================================/
/**
C program to print the upper triangular matrix
Given a 3x3 matrix, we have to print the upper triangular matrix using C program.
Input:

Matrix:
9 8 7
5 4 6
1 2 3

Output:

Upper triangular matrix is:
9 8 7
  4 6
    3
*/

//   #include<stdio.h>
//    int main()
//{
//    int x[50][50],tmp[50][50];
//    int i,j,r,c;
//
//    printf("\n Enter X Array ");
//
//    printf("\n Enter The No Of Row:");
//    scanf("%d",&r);
//    printf("\n Enter The No Of Column:");
//    scanf("%d",&c);
//
//    printf("\n Enter X Array :");
//
//
//   // taking x array
//
//        i=0;
//    while(i<r)
//    {
//        printf("\n Enter The %d Row Elements :\n",i+1);
//
//        j=0;
//        while(j<c)
//        {
//            scanf("%d",&x[i][j]);
//       j++;
//        }
//
//        printf("\n");
//   i++;
//    }
//
//
//         // printing
//
//     printf("\n Array X Before \n");
//
//           i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            printf("%3d",x[i][j]);
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//    // processing
//
//    printf("\n Array After :\n");
//
//    i=0;
//    while(i<r)
//    {
//        j=0;
//        while(j<c)
//        {
//            if(j>=i)
//            {
//                printf("%2d",x[i][j]);
//
//            }
//            else
//            {
//                printf("  ");
//            }
//
//
//       j++;
//        }
//        printf("\n");
//   i++;
//    }
//
//return 0;
//
//}






