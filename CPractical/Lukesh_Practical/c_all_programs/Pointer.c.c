// int main()
// {
//     char str[50];
//     int cnt=0,j,k,i,sp=0,ep=0,totlength=0;
//
//     printf("\n Enter any string : ");
//     gets(str);
//     //_ _ _ _ _ hello _ good morning_to_all_of_you _ _ _.
//
//     for(i=0;str[i]==32;i++);//Starting point
//     sp=i;
//     printf("\n Starting point : %d",sp);
//
//     // Total Length of String
//
//     for(j=0;str[j]!='\0';j++);//Totallength
//     //printf("\n Totallength : %d",j--);
//
//     for(j--;str[j]==32;j--);//Ending point
//     ep=j;
//     printf("\n Ending point : %d",ep);
//
//     //-----------------------------------
//     while(sp<=ep)
//     {
//         if(str[sp]==32 && str[sp+1]!=32)
//         {
//             cnt++;
//         }
//         sp++;
//     }
//
//     printf("\n Total Word count is %d ",cnt+1);
//     return 0;
// }
// //-----------FISRT  CHAR  AND TITLE CASE STRING  ------------------------*/
//
// int main()
// {
//     char str[50];
//     int i,j,sp=0,ep=0;
//
//     printf("\n ENter any String. :");
//     gets(str);
//     //Starting Point
//     for(i=0;str[i]==32;i++);
//     sp=i;
//
//     //Total Length
//     for(i=0;str[i]!='\0';i++);
//     for(i--;str[i]==32;i--);
//     ep=i;//Ending Point
//     //_ _ _ _ _ hello _ good morning_to_all_of_you _ _ _.
//     //printf("\n %c",str[sp]);
//     while(sp<=ep)
//     {
//         if(str[sp-1]==32 && str[sp]!=32)
//         {
//             if(str[sp]>=97 && str[sp]<=122)
//             {
//                 str[sp]=str[sp]-32;
//             }
//             //printf("\t %c",str[sp]);
//         }
//         else if(str[sp]>=65 &&str[sp]<=90)
//         {
//             str[sp]=str[sp]+32;
//         }
//         sp++;
//     }
//     if(str[0]!=32 && (str[0]>=97 &&str[0]<=122))
//     {
//         str[0]=str[0]-32;
//     }
//     printf("\n Title case string is %s ",str);
//     return 0;
// }
//=========================================================================================================================================/

//#include<stdio.h>
//int main()
//{
//    int i;
// char ch[50]={{'h'},{'e'},{'l'},{'l'},{'o'}} ;
//
// for(i=0; i<5; i++)
//{
//    printf("%c",ch[i]);
//    printf("\n");
//    putd(ch[i]);
//}
//return 0;
//
//}
//=========================================================================================================================================/
/******************************  POINTER IN C  ******************************/

//#include<stdio.h>
//int main()
//{
//
//    int *p;
//    char *c;
//    float *ft;
//    double *db;
//
//    printf("\n Size of p is : %u",sizeof(p));
//
//    printf("\n Sizeof Int* is %u ",sizeof(int*));
//
//    return 0;
//}
//=========================================================================================================================================/
//#include<stdio.h>
//int main()
//{
//
//    int mrk[50],i,cnt=0;
//
//    printf("\n enter the student count :");
//    scanf("%d",&cnt);
//    printf("\n Enter The %d Students Marks :",cnt);
//
//    for(i=0 ;i<cnt; i++)
//    {
//        printf("\n Enter The %d No. Student Marks:",i+1);
//        scanf("%d",&mrk[i]);
//    }
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("\n Marks of %d No. Student",i+1);
//        printf("marks of students :%d \t",mrk[i]);
//    }
//    printf("\n");
//    return 0;
//
//
//}
//=========================================================================================================================================/
//#include<stdio.h>
//int main()
//{
//    int x=10;
//    int *p;
//
//    p=&x;
//
//    printf("\n Address of x: %u and value of x:%d",&x,x);
//
//    printf("\n Address of p: %u",&p);
//
//    printf("\n value of x using p: %d",*p);
//
//    return 0;
//
//}
//=========================================================================================================================================/
//#include<stdio.h>
//int main()
//{
//    int x=10;
//    int *p,**q;
//
//    p=&x;
//    q=&p;
//
//    printf("\n Address of x: %u and value of x: %d",&x,x);
//    printf("\n Address of p: %u and value of p: %u",&p,p);
//
//    printf("\n Value of x using p: %d",*p);
//
//    printf("\n Address of q: %u and value of q: %u",&q,q);
//    printf("\n Value of p using q: %u",*q);
//    printf("\n Value of x using q :%d \n",**q);
//
//
//    /** OUTPUT
//
//
//             Address of x: 6422300 and value of x: 10
//             Address of p: 6422296 and value of p: 6422300
//             Value of x using p: 10
//             Address of q: 6422292 and value of q: 6422296
//             Value of p using q: 6422300
//             Value of x using q :10
//    */
//
//  return 0;
//}
//=========================================================================================================================================/
/// WAP to enter the element by using dynamic memory allocation

// #include<stdio.h>
// int main()
//{
//    int cnt,i;
//    int *p;
//
//    printf("\n Enter The Count of Element :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter The %d Element :\n",cnt);
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%u",(p+i));
//
//        printf("\t address is %u",p);
//        printf("\n");
//        printf("\n \t address is %d",p);
//    }
//
//    printf("\n Elements Are :");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("\t %5d",*(p+i));
//    }
//
//return 0;
//
//}
//=========================================================================================================================================/
/**

   // Enter the N numbers and copy the elements into another location

        *p                0     1     2     3     4
         [ 1200 ] ----> [123] [567] [921] [799] [110]
                         1200      (20 bytes)

        *q                0     1     2     3     4
         [ 1300 ] ----> [123] [567] [921] [799] [110]
                         1300      (20 bytes)
*/

//int main()
//{
//    int cnt,i,j;
//    int *p,*q;
//
//    printf("\n Enter the count: ");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n enter the %d elements: ",cnt);
//
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    q=(int*)malloc(cnt*sizeof(int));
//
//      for(i=0; i<cnt; i++)
//      {
//          *(q)=*(p);
//      }
//
//    printf("q is %d and p is %d \n",p,q);
//
//
//    printf("\n Entered Elements: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%6d",*(p+i));
//    }
//
//    printf("\n Copied Elements: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%6d",*(q+i));
//    }
//
//    return 0;
//}
//=========================================================================================================================================/
/// Enter The N numbers and count the even numbers

// #include<stdio.h>
// int main()
//{
//    int i,ecnt=0,cnt;
//    int *p;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter The %d Element :",cnt);
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    for(i=0; i<cnt; i++)
//    {
//        if(*(p+i)%2==0)
//        {
//            ecnt++;
//        }
//    }
//
//     for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
//    printf("\n Even Number Count is %d \n",ecnt);
//
// return 0;
//
//}
//=========================================================================================================================================/
///  Enter the N nos and display all primes

// #include<stdio.h>
// int main()
//{
//    int i,cnt,d,flg;
//    int *p;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter The %d Numbers :",cnt);
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Prime Numbers Are :");
//
//    for(i=0; i<cnt; i++)
//    {
//        flg=0;
//        d=2;
//       while(d<=*(p+i)/2)
//       {
//           if(*(p+i)%d==0)
//           {
//               flg=1;
//               break;
//           }
//      d++;
//       }
//
//
//       if(flg==0  && *(p+i)>1)
//       {
//          printf("\t %3d",*(p+i));
//       }
//    }
//
//    printf("\n Entered Elements Are :");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("\t %d",*(p+i));
//    }
//
//       printf("\n");
//
//return 0;
//
//}
//=========================================================================================================================================/
/// WAP to enter the elements with dynamic memory allocation and sort the entered numbers

// #include<stdio.h>
// int main()
//{
//    int cnt,i,j,tmp;
//    int *p;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter the %d Count",cnt);
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    // before sort
//
//    printf("\n Before Sort :");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
//    // sorting
//
//    for(i=0; i<cnt; i++)
//    {
//        for(j=i+1; j<cnt; j++)
//        {
//            if(*(p+i) > *(p+j))
//            {
//                tmp=*(p+i);
//                *(p+i)=*(p+j);
//                *(p+j)=tmp;
//            }
//        }
//    }
//
//    // printing
//
//    printf("\n Sorted Elements Are :");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
//printf("\n");
//
// return 0;
//
//}
//=========================================================================================================================================/
/// WAP to search the number from entered number

// #include<stdio.h>
// int main()
//{
//    int no,i,cnt,flg=0,pos;
//    int *p;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter The %d Numbers :\n",cnt);
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Enter The Number Which You Want To Search :");
//    scanf("%d",&no);
//
//    for(i=0; i<cnt; i++)
//    {
//        flg=0;
//
//        if(no==*(p+i))
//        {
//          flg++;
//          pos=i;
//        }
//        else
//        {
//            flg=0;
//        }
//
//        if(flg!=0)
//        {
//            printf("\n %d Number is Present At %d Position",*(p+i),pos+1);
//        }
//
//    }
//
//    return 0;
//}
//=========================================================================================================================================/
/**  WAP to find the highest score by the player in n Matches

   *m
         [400] ----> [][][][][][][][]...N
                           400
*/


//     #include<stdio.h>
//     int main()
//    {
//        int cnt,i,hs=0,pos;
//        int *p;
//
//        printf("\n Enter The Matches Played By Player  :");
//        scanf("%d",&cnt);
//
//        p=(int*)malloc(cnt*sizeof(int));
//
//        for(i=0; i<cnt; i++)
//        {
//            printf("\n Enter The Runs Of %d Match :",i+1);
//            scanf("%d",(p+i));
//        }
//
//        for(i=0; i<cnt; i++)
//        {
//            pos=0;
//
//            if(hs < *(p+i))
//            {
//                hs=*(p+i);
//
//                pos=i;
//            }
//        }
//
//        printf("\n Runs Scored By The Player In Different Matches \n");
//
//        for(i=0; i<cnt; i++)
//        {
//            printf("%3d in %d Match\n",*(p+i),i+1);
//        }
//
//        printf("\n Highest Score : %d in %d Match \n",hs,pos+1);
//
//    return 0;
//
//    }
//=========================================================================================================================================/
/**  WAP to find out total bill, discount and payable amount.
 (There are N items and discount 5% till bill less than 500 otherwise 14%)

*/

// #include<stdio.h>
// int main()
//{
//  int cnt,i,tot,amt;
//  int *p;
//
//  printf("\n Enter The Count :");
//  scanf("%d",&cnt);
//
//  p=(int*)malloc(cnt*sizeof(int));
//
//  printf("\n Enter The %d item cost:",cnt);
//
//  // taking items cost
//
//  for(i=0; i<cnt; i++)
//  {
//      scanf("%d",(p+i));
//  }
//
//  // total
//
//    for(i=0; i<cnt; i++)
//  {
//      tot+= *(p+i);
//  }
//
//  if(tot<=500)
//  {
//      amt=tot*0.05;
//  }
//  else
//  {
//      amt=tot*0.14;
//  }
//
//  printf("\n Total Bill Rs:%d",tot);
//  printf("\n Discount Rs:%d",amt);
//  printf("\n Payable Amount Rs:%d \n",tot-amt);
//
//
//  return 0;
//}
//=========================================================================================================================================/
/**  WAP to find out total bill, discount and payable amount.
 (There are N items and discount 5% till bill less than 500 otherwise 14%) By array of pointer
//*/
// #include<stdio.h>
// int main()
//{
//    int p[3][4],i,j;
//    float tot=0.0,dis=0.0;
//
//    printf("\n Enter The Price of Items :");
//
//    for(i=0; i<3; i++)
//    {
//        printf("\n Enter The %d Customer Items :",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            //scanf("%d",&p[i][j]);
//            //scanf("%d",p[i][j]);
//            scanf("%d",*(p+i)+j);
//        }
//    }
//
//
//    // processing and printing
//
//    for(i=0; i<3; i++)
//    {
//        tot=0.0;
//
//        printf("\t %d Customer :",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            tot+= *(*(p+i)+j);
//
//            printf("\t %d",*(*(p+i)+j));
//
//        }
//        if(tot<=500)
//        {
//            dis=tot*0.05;
//        }
//        else
//        {
//            dis=tot*0.14;
//        }
//
//        printf("\t Total : %0.2f",tot);
//        printf("\t Discount : %0.2f",dis);
//        printf("\t Payable Amount : %0.2f",(tot-dis));
//
//
//        printf("\n \n");
//    }
//
// return 0;
//
//}

//=========================================================================================================================================/
/**  WAP to find out total bill, discount and payable amount.
 (There are N items and discount 5% till bill less than 500 otherwise 14%)   *** BY Array Pointer ***
*/

//     #include<stdlib.h>
//     #include<stdio.h>
//
// int main()
//{
//  int *p[3];
//  int cnt[3],i,j;
//  float tot=0.0,dis=0.0;
//
//   printf("\n Enter The Price of Items :");
//
//   for(i=0; i<3; i++)
//   {
//       printf("\n Enter The Item Count Of %d Customer :",i+1);
//
//       scanf("%d",&cnt[i]);     // in this line we asked how much memory should we allocate for item count for each customer
//
//       p[i]=(int*)malloc(cnt[i]*sizeof(int)); // in this line we allocated memory as per user choice for item count
//
//
//       printf("\n *****ADDRESS OF %d Customer :%u",i+1,p[i]);
//
//
//       printf("\n Enter The %d Item Price :",cnt[i]);
//
//       for(j=0; j<cnt[i]; j++)
//       {
//           scanf("%d",*(p+i)+j);
//
//           printf("\n Address of %d items :%u",j+1,*(p+i)+j);
//
//       }
//
//   }
//   // processing and printing
//
//   for(i=0; i<3; i++)
//   {
//       printf("\n No:%d Customer",i+1);
//
//       for(j=0; j<cnt[i]; j++)
//       {
//           tot=*(*(p+i)+j);
//
//           printf("\t %d",*(*(p+i)+j));
//       }
//
//       if(tot<=500)
//       {
//           dis=tot*0.05;
//       }
//       else
//       {
//           dis=tot*0.14;
//       }
//
//       printf("\t Total :%0.2f",tot);
//       printf("\t Discount :%0.2f",dis);
//       printf("\t Payable Amount :%0.2f",tot-dis);
//
//       printf("\n");
//
//   }
//
// return 0;
//
//}
//=========================================================================================================================================/
/**  WAP to find out total bill, discount and payable amount.(There are N items and discount 5% till bill less than 500 otherwise 14%)
 the customer count is unknown *** BY Block Pointer ***
*/

//  #include<stdio.h>
//  int main()
//{
//    int i,j,custcnt;
//    float (*p)[4];
//    float tot=0.0,dis=0.0;
//
//    printf("\n Enter The Customer Count :");
//    scanf("%d",&custcnt);
//
//    p=(int (*)[])malloc(custcnt*(4*sizeof(int)));
//
//    printf("\n **** Address of Main Pointer is %u \n\n",*p);
//    printf("\n@@@ Address of p is %u \n\n",p);
//
//    printf("\n Enter The item Prices For %d Customer",custcnt);
//
//    for(i=0; i<custcnt; i++)
//    {
//
//        printf("\n Address of %d Customer is %u \n\n",i+1,*(p+i));
//
//        printf("\n %d Customer",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            printf("\n %d item Price :",j+1);
//            scanf("%f",*(p+i)+j);
//
//            printf("Address of %d item is %u \n\n",j+1,*(p+i)+j);
//        }
//
//    }
//
//    printf("\n Customer Detail With Price \n");
//
//    for(i=0; i<custcnt; i++)
//    {
//        printf("\n %d Customer",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            printf("\t %0.2f",*(*(p+i)+j));
//        }
//        printf("\n");
//    }
//
//    printf("\n Customer Detail With Prices,Total,Discount and Payable Amount \n");
//
//
//      for(i=0; i<custcnt; i++)
//    {
//        printf("\n %d: Customer",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            tot+=*(*(p+i)+j);
//
//            printf("\t %0.2f",*(*(p+i)+j));
//        }
//
//        if(tot<=500)
//        {
//            dis=tot*0.05;
//        }
//        else
//        {
//            dis=tot*0.14;
//        }
//
//        printf("\t total=%0.2f",tot);
//        printf("\t Discount=%0.2f",dis);
//        printf("\t Payable Amount=%0.2f",tot-dis);
//
//        printf("\n");
//    }
//
// return 0;
//
//}
//=========================================================================================================================================/
/** WAP to display runs scored by 3 different players in N matches ( N may be different for each player )
    using Array of pinter
 */

// #include<stdio.h>
// int main()
// {
//     int i,j,tot,match[3];
//     int *p[3];
//
//     printf("\n Enter Run Scored By Players :");
//
//     for(i=0; i<3; i++)
//     {
//         printf("\n Enter The Matches Played By %d Player :",i+1);
//         {
//             scanf("%d",&match[i]);     // in this line we taking number of matches played by indivisual player BCZ matches is unknown
//
//          p[i]=(int *)malloc(match[i]*sizeof(int)); // after taking matches played by indivisual player we allocated memory for no of matches to input the score for each match
//
//             printf("\n Enter The Runs Scored By %d Player in %d Matches",i+1,match[i]);
//
//             for(j=0; j<match[i]; j++)
//             {
//                 printf("\n Match No:%d ",j+1);
//
//                 scanf("%d",*(p+i)+j);
//             }
//         }
//     }
//
//     //printing and processing
//
//     for(i=0; i<3; i++)
//     {
//         tot=0;
//        printf("\n No: %d Player",i+1);
//
//         for(j=0; j<match[i]; j++)
//         {
//             tot+=*(*(p+i)+j);
//
//             printf("\t Runs :%d",*(*(p+i)+j));
//         }
//
//         printf("\t Total Runs : %d",tot);
//
//         printf("\n");
//     }
//
// return 0;
//
// }
//=========================================================================================================================================/
/** WAP to display runs scored by 3 different players in N matches ( N may be different for each player )
    using Block Pointer Where Player Count Is Unknown
 */

// #include<stdlib.h>
// #include<stdio.h>
//
// int main()
// {
//     int i,j,plr; // we don't know the player count
//
//     int (*p)[4];
//     float tot=0.0;
//
//     printf("\n Enter The Number Of Players:");
//     scanf("%d",&plr);
//
//     p=(int (*)[])malloc(plr*(4*sizeof(int)));
//
//     printf("\n Enter The Runs Scored By %d Players",plr);
//
//     for(i=0; i<plr; i++)
//     {
//         printf("\n %d: player",i+1);
//
//         for(j=0; j<4; j++)
//         {
//             printf("\n %d: Match",j+1);
//             scanf("%d",*(p+i)+j);
//         }
//     }
//
//     // printing and processing
//
//     printf("\n Runs Scored By %d Players",plr);
//
//     for(i=0; i<plr; i++)
//     {
//
//         printf("\n %d. Player",i+1);
//
//         for(j=0; j<4;j++)
//         {
//             tot+= *(*(p+i)+j);
//             printf("\t %d. Match",j+1);
//
//             printf("\t %d",*(*(p+i)+j));
//         }
//
//         printf("\t %0.2f",tot);
//
//         printf("\n");
//     }
//
//return 0;
//
// }
//=========================================================================================================================================/

 /** WAP to enter the marks of the subject of students where both student-count and subject-count are UNKNOWN

 POINTER TO POINTER */

// #include<stdlib.h>
// #include<stdio.h>
//
// int main()
//{
//    int **p,*sub;
//    int i,j,scnt;
//    float tot=0.0;
//
//    printf("\n Enter The Student Count:");
//    scanf("%d",&scnt);
//
//    p=(int**)malloc(scnt*sizeof(int*));
//    sub=(int*)malloc(scnt*sizeof(int));
//
//    printf("\n Address of p is %u",p);
//    printf("\n *** Address of sub is %u",sub);
//
//    printf("\n Enter The Marks Of Subject Of %d Students",scnt);
//
//    for(i=0; i<scnt; i++)
//    {
//        printf("\n Enter The %d Student Subject Count \n",i+1);
//        scanf("%d",(sub+i)); //sub[i]
//
//        printf("\n Address of (sub+i) =%u",sub+i);
//
//        p[i]=(int*)malloc(*(sub+i)*sizeof(int)); // sub[i]==*(sub+i)
//
//        printf("\n Address of %d Student is : %u \n ",i+1,*(p+i));
//
//        printf("\n Enter The Marks Of %d Subject",sub[i]);
//
//        for(j=0; j<*(sub+i); j++)
//        {
//            printf("\n Enter The Marks Of %d Subject",j+1);
//
//            printf("\n ___Address of is %d",*(p+i)+j);
//
//            scanf("%d",*(p+i)+j);
//        }
//    }
//
//
//    printf("\n Marks Of %d Students",scnt);
//
//    for(i=0; i<scnt; i++)
//    {
//        printf("\n %d_Student",i+1);
//
//        for(j=0; j<*(sub+i); j++)
//        {
//            tot+= *(*(p+i)+j);
//
//            printf("\t Mark Of %d Subject =%d",j+1,*(*(p+i)+j));
//        }
//
//        printf("\t Total Marks: %0.2f",tot);
//
//        printf("\n");
//    }
//
//return 0;
//
//}
//=========================================================================================================================================/
/**  WAP to display runs scored by 3 different players in N matches ( N may be different for each player )
    using Block Pointer Where Player Count Is Unknown
*/

// #include<stdio.h>
// #include<stdlib.h>
//
// int main()
//{
//    int **p,*match;
//    int i,j,plr;
//    float tot=0.0;
//
//    printf("\n Enter The Player Count :");
//    scanf("%d",&plr);
//
//    p=(int**)malloc(plr*sizeof(int));
//
//    match=(int*)malloc(plr*sizeof(int));
//
//    printf("\n Enter The Runs Scored By %d Player : ",plr);
//
//    for(i=0; i<plr; i++)
//    {
//        printf("\n Enter The Match Count For %d Player : ",i+1);
//
//        scanf("%d",(match+i));
//
//        p[i]=(int*)malloc(*(match+i)*sizeof(int));
//
//        printf("\n Enter The Runs Scored By %d Player",i+1);
//
//        for(j=0; j<*(match+i); j++)
//        {
//            printf("\n Score For Match No: %d ",j+1);
//            scanf("%d",*(p+i)+j);
//        }
//    }
//
//    printf("\n Runs Scored By %d Player :");
//
//    for(i=0; i<plr; i++)
//    {
//        tot=0;
//        printf("\n Player No: %d",i+1);
//
//        for(j=0; j<*(match+i); j++)
//        {
//            tot+=*(*(p+i)+j);
//
//            printf("\t Match No: %d",j+1);
//            printf("\t Runs: %d",*(*(p+i)+j));
//        }
//
//        printf("\t |||| Total Score ||||:%0.2f",tot);
//        printf("\n");
//    }
//
//return 0;
//
//
//}
//=========================================================================================================================================/

 /** Direct and indirect Access of memory

 1) Direct access of memory :- We Used Directly Variable Name

*/

// #include<stdio.h>
// int main()
//{
//    int s[3][4],i,j;
//
//
//    for(i=0; i<3; i++)
//    {
//        printf("\n Enter The %d Students Marks :",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            scanf("%d",&s[i][j]);
//        }
//    }
//
//    // pritnting
//
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<4; j++)
//        {
//            printf("%3d",s[i][j]);
//        }
//        printf("\n");
//    }
//
//  return 0;
//
//}

 /** 2) Indirect Access Of Memory :- Here We Used Pointer To The Variable  */

// #include<stdio.h>
// int main()
//{
//    int s[3][4],i,j;
//
//    for(i=0; i<3; i++)
//    {
//        printf("\n Enter The %d Student Marks :",i+1);
//
//        for(j=0; j<4; j++)
//        {
//            scanf("%d",*(s+i)+j);
//        }
//    }
//
//
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<4; j++)
//        {
//            printf("%3d",*(*(s+i)+j));
//        }
//        printf("\n");
//    }
//
// return 0;
//
//}

///  Memory Accessing By Pointer Arithmetic

// #include<stdio.h>
// int main()
//{
//    int *p,*q,cnt,i;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)calloc(cnt,sizeof(int));
//
//    q=p;
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%d",(p++)); //(p+i) , &p[i]
//    }
//
//   // p=q;
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*p++);
//    }
//
// return 0;
//
//}
//=========================================================================================================================================/
/// Memory Allocation By Calloc

// #include<stdio.h>
// int main()
//{
//    int *p;
//    int i,cnt;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)calloc(cnt,sizeof(int));
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
//    printf("\n");
//
//    for(i=0; i<cnt; i++)
//    {
//       scanf("%d",(p+i));
//    }
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
//return 0;
//
//}
//=========================================================================================================================================/
/// REalloc

// #include<stdio.h>
// int main()
//{
//    int *p;
//    int cnt,i;
//
//    printf("\n Enter The Count :");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter The %d Numbers :",cnt);
//
//    for(i=0; i<cnt; i++)
//    {
//        scanf("%d",p+i);
//    }
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
//    i=cnt;
//
//    printf("\n Enter The New Count :");
//    scanf("%d",&cnt);
//
//    p= realloc(p,cnt*sizeof(int));
//
//    printf("\n Enter The %d Numbers",cnt-i);
//
//    for( ; i<cnt; i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Now");
//
//    for(i=0; i<cnt; i++)
//    {
//        printf("%3d",*(p+i));
//    }
//
// return 0;
//
//}

/*************************  POINTER LIST  ****************************/

/// 1. Write a C program to create, initialize and use pointers.

// #include<stdio.h>
// int main()
//{
//    int *p;
//    int x=10;
//
//    p=&x;
//
//    printf("\n Address Of X :%u",&x);
//    printf("\n Value Of X :%d",x);
//
//    printf("\n Address Of P :%u",&p);
//    printf("\n Value Of p :%u",p);
//    printf("\n Value Of X Using *P :%d",*p);
//
//return 0;
//
//}
//=========================================================================================================================================/

/// 2. Write a C program to add two numbers using pointers.

// #include<stdio.h>
// int main()
//{
//   int x,y;
//   int *p,*q;
//
//   p=&x;
//   q=&y;
//
//   printf("\n Enter The X : ");
//   scanf("%d",&x);
//
//   printf("\n Enter The Y : ");
//   scanf("%d",&y);
//
//   printf("\n The Sum is : %d ",*p+*q);
//
//return 0;
//
//}

//=========================================================================================================================================/
/// 3. Write a C program to swap two numbers using pointers.

// #include<stdio.h>
// int main()
//{
//    int x,y,tmp;
//    int *p,*q;
//
//    p=&x;
//    q=&y;
//
//    printf("\n Before Swapping ");
//
//    printf("\n Enter The X : ");
//    scanf("%d",&x);
//
//    printf("\n Enter The Y : ");
//    scanf("%d",&y);
//
//    tmp=*p;
//    *p=*q;
//    *q=tmp;
//
//    printf("\n After Swapping ");
//
//    printf("\n X : %d",*p);
//    printf("\t Y : %d",*q);
//
//    printf("\n");
//
//  return 0;
//
//}
//=========================================================================================================================================/
/// 4. Write a C program to input and print array elements using pointer.

// #include<stdio.h>
// int main()
//{
//   int *p;
//   int cnt,i;
//
//   printf("\n Enter The Count :");
//   scanf("%d",&cnt);
//
//   p=(int*)calloc(cnt,sizeof(int));
//
//   printf("\n Enter The %d Number ",cnt);
//
//   for(i=0; i<cnt; i++)
//   {
//       scanf("%d",(p+i));
//   }
//
//     for(i=0; i<cnt; i++)
//   {
//       printf("%3d",*(p+i));
//   }
//
// return 0;
//
//}
//=========================================================================================================================================/
/// 5. Write a C program to copy one array to another using pointers.

// #include<stdio.h>
// #include<stdlib.h>
//
// int main()
//{
//    int cnt,i,j;
//    int *p,*q;
//
//     printf("\n Enter The Count :");
//     scanf("%d",&cnt);
//
//     p=(int*)malloc(cnt*sizeof(int));
//
//     printf("\n Enter The %d Number");
//     for(i=0; i<cnt; i++)
//     {
//         printf("\n Enter The %d Student Marks: ",i+1);
//
//         for(j=0; j)
//     }
//
//
//
//
//
//
//    return 0;
//}
//=========================================================================================================================================/
///
