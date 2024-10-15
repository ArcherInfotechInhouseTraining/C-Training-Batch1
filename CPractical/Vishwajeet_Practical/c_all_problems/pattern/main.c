///********** NUMERIC PATTERN
/////print this pattern
////    1
////    12
////    123
////    1234
////    12345
////    123456
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%d",j+1);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
//
////                1
////                12
////                123
////                1234
////                12345
////                123456
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%d",j+1);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////                  1
////                  22
////                  333
////                  4444
////                  55555
////                  666666
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%d",i+1);
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////                  1
////                  2 3
////                  4 5 6
////                  7 8 9 10
////                  11 12 13 14
////                  15 16 17 18 19
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t=1;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%d ",t);
//                    t++;
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////                 1 1 1 1 1
////                 1 1 1 1 1
////                 1 1 1 1 1
////                 1 1 1 1 1
////                 1 1 1 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                printf("%d ",1);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////             1 1 1 1 1
////             0 0 0 0 0
////             1 1 1 1 1
////             0 0 0 0 0
////             1 1 1 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j,a=0,b=1;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(i%2==0)
//                {
//                    printf("%d ",1);
//                }
//                else
//                {
//                    printf("%d ",0);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////             01010
////             01010
////             01010
////             01010
////             01010
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(j%2==0)
//                {
//                    printf("%d ",0);
//                }
//                else
//                {
//                    printf("%d ",1);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////        Number Pattern 3     1 1 1 1 1
////                             1 0 0 0 1
////                             1 0 0 0 1
////                             1 0 0 0 1
////                             1 1 1 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==0 || j==0)
//                {
//                    printf("%d ",1);
//                }
//                else if(i==4 || j==4)
//                {
//                    printf("%d ",1);
//                }
//                else
//                {
//                    printf("%d ",0);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////        Number pattern 4     1 1 1 1 1
////                             1 1 1 1 1
////                             1 1 0 1 1
////                             1 1 1 1 1
////                             1 1 1 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==2 && j==2)
//                {
//                    printf("%d ",0);
//                }
//                else
//                {
//                    printf("%d ",1);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////         Number pattern 5    1 0 1 0 1
////                             0 1 0 1 0
////                             1 0 1 0 1
////                             0 1 0 1 0
////                             1 0 1 0 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if((i+j)%2 == 0)
//                {
//                    printf("%d",1);
//                }
//
//                else
//                {
//                    printf("%d",0);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//// NUMBER PATTERN 6     1 1 0 1 1
////                      1 1 0 1 1
////                      0 0 0 0 0
////                      1 1 0 1 1
////                      1 1 0 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==2 || j==2)
//                {
//                    printf(" %d ",0);
//                }
//                else
//                {
//                    printf(" %d ",1);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//
//    }
//
////      NUMBER PATTERN 7     1 0 0 0 1
////                           0 1 0 1 0
////                           0 0 1 0 0
////                           0 1 0 1 0
////                           1 0 0 0 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==j||i+j==4)
//                {
//                    printf("%d ",1);
//                }
//                else
//                {
//                    printf("%d ",0);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////      Number Pattern 8   0 1 1 1 0
////                         1 0 0 0 1
////                         1 0 0 0 1
////                         1 0 0 0 1
////                         0 1 1 1 0
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if((i==0 ||i==4) && (j==0 || j==4))
//                   {
//                       printf("%d ",0);
//                   }
//                else if ((i==0 || i==4) || (j==0 || j==4))
//                    {
//                        printf("%d ",1);
//                    }
//                else
//                {
//                    printf("%d ",0);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//
//    }
//
////   NUMBER PATTERN 9        1 1 1 1 1
////                           2 2 2 2 2
////                           3 3 3 3 3
////                           4 4 4 4 4
////                           5 5 5 5 5
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                printf("%d ",i+1);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////        NUMBER PATTERN 10    1 2 3 4 5
////                             1 2 3 4 5
////                             1 2 3 4 5
////                             1 2 3 4 5
////                             1 2 3 4 5
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                printf("%d ",j+1);
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
////     NUMBER PATTERN 11   1 2 3 4 5
////                         2 3 4 5 6
////                         3 4 5 6 7
////                         4 5 6 7 8
////                         5 6 7 8 9
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t=1;
//        for(i=1;i<6;i++)
//        {
//            t=i;
//            for(j=1;j<6;j++)
//            {
//                printf("%d ",t);
//                t++;
//            }
//
//            printf("\n");
//
//
//        }
//
//        return 0;
//
//    }

///// NUMBER PATTERN 12    1   2  3  4  5
/////                      6   7  8  9 10
/////                      11 12 13 14 15
/////                      16 17 18 19 20
/////                      21 22 23 24 25
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t=1;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                printf("%5d",t);
//                t++;
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
//
///// NUMBER PATTERN 13  5 5 5 5 5
/////                    5 4 4 4 4
/////                    5 4 3 3 3
/////                    5 4 3 2 2
/////                    5 4 3 2 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k=5;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//              if(i==0||j==0)
//              {
//                  printf("%d ",5);
//              }
//              else if(i==1||j==1)
//              {
//                  printf("%d ",4);
//              }
//              else if(i==2||j==2)
//              {
//                  printf("%d ",3);
//              }
//              else if(i==3||j==3)
//              {
//                  printf("%d ",2);
//              }
//              else
//              {
//                  printf("%d ",1);
//              }
//
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// NUMBER PATTERN 14   1 2 3 4 5
/////                     2 3 4 5 5
/////                     3 4 5 5 5
/////                     4 5 5 5 5
/////                     5 5 5 5 5
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k=1;
//        for(i=1;i<=5;i++)
//        {
//            k=i;
//            for(j=1;j<=5;j++)
//            {
//                if(i==1 || j==1)
//                {
//                    printf("%d ",k);
//                    k++;
//                }
//                else if(i==5 || j==5)
//                {
//                    printf("%d ",5);
//                }
//                else if(i==2 ||j==2)
//                {
//                    printf("%d ",k);
//                    k++;
//                }
//
//                else if(i==3 ||j==3)
//                {
//                    printf("%d ",k);
//                    k++;
//                }
//                 else if(i==4 ||j==4)
//                {
//                    printf("%d ",k);
//                    k++;
//                }
//
//            }
//            printf("\n");
//        }
//    }
//
/////   NUMBER PATTERN 15    1 2 3 4 5
/////                        2 3 4 5 1
/////                        3 4 5 2 1
/////                        4 5 3 2 1
/////                        5 4 3 2 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=1;i<=5;i++)
//        {
//            for(j=i;j<=5;j++)
//            {
//                printf("%d ",j);
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
/////   NUMBER PATTERN 20     5 5 5 5 5
/////                         4 4 4 4
/////                         3 3 3
/////                         2 2
/////                         1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=5;i>=1;i--)
//        {
//            for(j=5;j>=1;j--)
//            {
//                if(j<=i)
//                {
//                    printf("%d ",i);
//                }
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
/////     NUMBER PATTERN 21        1 1 1 1 1
/////                              2 2 2 2
/////                              3 3 3
/////                              4 4
/////                              5
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=1;i<=5;i++)
//        {
//            for(j=0;j<=5;j++)
//            {
//                if(i<=j)
//                {
//                    printf("%d ",i);
//                }
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
//
/////   NUMBER PATTERN 22      5
/////                          4 4
/////                          3 3 3
/////                          2 2 2 2
/////                          1 1 1 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=5;i>=1;i--)
//        {
//            for(j=5;j>=1;j--)
//            {
//                if(i<=j)
//                {
//                    printf("%d ",i);
//                }
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
///
////
////1         NUMBER PATTERN 23
////12
////123
////1234
////12345
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k=1;
//        for(i=1;i<=5;i++)
//        {
//
//            k=1;
//            for(j=1;j<=5;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%d ",k);
//                    k++;
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/////   NUMBER PATTERN 26  5 4 3 2 1
/////                      4 3 2 1
/////                      3 2 1
/////                      2 1
/////                      1
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t;
//        for(i=5;i>=1;i--)
//        {
//            t=5;
//            for(j=5;j>=1;j--)
//            {
//                if(j<=i)
//                {
//                    printf("%d ",t);
//                }
//                t--;
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/////  NUMBER PATTERN 33   1 3 5 7 9
/////                      3 5 7 9
/////                      5 7 9
/////                      7 9
/////                      9
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t;
//        for(i=1;i<=5;i++)
//        {
//            t=1;
//            for(j=1;j<=5;j++)
//            {
//                if(i<=j)
//                {
//                    printf("%d ",t);
//                }
//                t=t+2;
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// NUMBER PATTERN 37    1
/////                      1 1
/////                      1 0 1
/////                      1 0 0 1
/////                      1 1 1 1 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<=i;j++)
//            {
//                if(j==0||i==4||i==j)
//                {
//                    printf("%d ",1);
//                }
//                else
//                {
//                    printf("%d ",0);
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
//
/////  NUMBER PATTERN 55      1
/////                         1 2 3
/////                         1 2 3 4 5
/////                         1 2 3 4 5 6 7
/////                         1 2 3 4 5 6 7 8 9
/////                         1 2 3 4 5 6 7
/////                         1 2 3 4 5
/////                         1 2 3
/////                         1
//
/////   NUMBER PATTERN 25         1
/////                             2 1
/////                             3 2 1
/////                             4 3 2 1
/////                             5 4 3 2 1
/////
//#include<stdio.h>
//    int main()
//    {
//
//        int i,j,t;
//
//        for(i=1;i<=5;i++)
//        {
//            t=i;
//            for(j=i;j>=1;j--)
//            {
//                   printf("%d ",j);
//                   t++;
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
/////     NUMBER PATTERN 27    5
/////                          5 4
/////                          5 4 3
/////                          5 4 3 2
/////                          5 4 3 2 1
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t;
//        for(i=0;i<5;i++)
//        {
//            t=5;
//            for(j=0;j<5;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%d ",t);
//                    t--;
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
//
///// NUMBER PATTERN 28     5 4 3 2 1
/////                       5 4 3 2
/////                       5 4 3
/////                       5 4
/////                       5
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t;
//        for(i=0;i<5;i++)
//        {
//            t=5;
//            for(j=0;j<5;j++)
//            {
//                if(i<=j)
//                {
//                    printf("%d ",t);
//                    t--;
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
// /// NUMBER PATTERN 29    5
// ///                      4 5
// ///                      3 4 5
// ///                      2 3 4 5
// ///                      1 2 3 4 5
// #include<stdio.h>
//    int main()
//    {
//        int i,j,t;
//        for(i=5;i>=1;i--)
//        {
//            t=i;
//            for(j=1;j<=5;j++)
//            {
//                if(i<=j)
//                {
//                    printf("%d ",j);
//
//                }
//            }
//            t--;
//            printf("\n");
//        }
//        return 0;
//    }
//
///// NUMBER PATTERN 30   1 2 3 4 5
/////                     2 3 4 5
/////                     3 4 5
/////                     4 5
/////                     5
// #include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=1;i<=5;i++)
//        {
//            for(j=1;j<=5;j++)
//            {
//                if(i<=j)
//                {
//                    printf("%d ",j);
//
//                }
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
///// NUMBER PATTERN 31    1
/////                      2 3
/////                      3 4 5
/////                      4 5 6 7
/////                      5 6 7 8 9
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t=1;
//        for(i=1;i<=5;i++)
//        {
//            t=i;
//            for(j=1;j<=5;j++)
//            {
//                if(j<=i)
//                {
//                   printf("%d ",t);
//                }
//                t++;
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
///// NUMBER PATTERN 32
////12345
////3456
////567
////78
////9
//#include<stdio.h>
//    int main()
//    {
//        int i,j,t;
//        for(i=1;i<=5;i++)
//        {
//            t=i;
//            for(j=1;j<=5;j++)
//            {
//                if(i<=j)
//                {
//                   printf("%d ",t);
//                }
//                t++;
//            }
//
//            printf("\n");
//        }
//        return 0;
//    }
//
//

/// Number Pattern 41
///     1
///     1 3 1
///     1 3 5 3 1
///     1 3 5 7 5 3 1
///     1 3 5 7 9 7 5 3 1

//#include <stdio.h>
//int main()
//{
//    int i, j;
//
//    for(i=1; i<=5; i++)
//    {
//        // Prints first part of the pattern
//        for(j=1; j<=(i*2)-1; j=j+2)
//        {
//            printf("%d", j);
//        }
//
//        // Prints second part of the pattern
//        for(j=(i-1)*2-1; j>=1; j=j-2)
//        {
//            printf("%d", j);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

/////---------------********** STAR PATTERN********************
////             *
////            * *
////           * * *
////          * * * *
////         * * * * *
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<7;j++)
//            {
//                if(j<7-i-1)
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }

////#include<stdio.h>
//    int main()
//    {
//        int i;
//        for(i=0;i<5;i++)
//        {
//            printf("*");
//        }
//        return 0;
//    }
//
/////31---------------  *****
/////                   *****
/////                   *****
/////                   *****
/////                   *****
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/////32---------------  *****
/////                   *   *
/////                   *   *
/////                   *   *
/////                   *****
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==0 || i==4)
//                {
//                    printf("*");
//                }
//                else if(j==0 || j==4)
//                {
//                    printf("*");
//                }
//                else
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//
/////33 ----------- *
/////               **
/////               ***
/////               ****
/////               *****
/////               ******
/////               *******
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<7;i++)
//        {
//            for(j=0;j<=i;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 34
/////   --------------- *****
/////                   *
/////                   *
/////                   *
/////                   *
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==0)
//                {
//                    printf("*");
//                }
//                else if(j==0)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 35
///// ------------         *
/////                      *
/////                      *
/////                      *
/////                      *****
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==4)
//                {
//                    printf("*");
//                }
//                else if(j==0)
//                {
//                    printf("*");
//
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 36
//
/////--            *   *
/////              *   *
/////              *   *
/////              *   *
/////              *****
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==4)
//                {
//                    printf("*");
//                }
//                else if(j==0 || j==4)
//                {
//                    printf("*");
//                }
//                else
//                {
//                   printf(" ");
//                }
//
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 37
/////----       *****
/////           *
/////           *****
/////               *
/////           *****
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(i==0 || i==5/2 || i==4)
//                {
//                    printf("*");
//                }
//                else if(i==1 && j==0)
//                {
//                    printf("*");
//                }
//                else if(i==3 && j==4)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 38
//
/////----------------                *
/////                               **
/////                              ***
/////                             ****
/////                            *****
/////                           ******
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<6;j++)
//            {
//                if(j<(6-i))
//                   {
//                      printf(" ");
//                   }
//                    else
//                    {
//                        printf("*");
//                    }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/////40
//
/////----------                 *****
/////                           ****
/////                           ***
/////                           **
/////                           *
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<6;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(j<(5-i))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//          printf("\n");
//        }
//        return 0;
//    }
//
///// 41
///// ---------                    *******
/////                               ******
/////                                *****
/////                                 ****
/////                                  ***
/////                                   **
/////                                    *
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<7;i++)
//        {
//            for(j=0;j<7;j++)
//            {
//                if(j<i)
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    printf("*");
//                }
//
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
///// 42
/////                            *
/////                           ***
/////                          *****
/////                         *******
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<4;i++)
//        {
//            for(j=0;j<7;j++)
//            {
//                if(j<(3-i))
//                {
//                    printf(" ");
//                }
//                else if(j>(3+i))
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    printf("*");
//                }
//            }
//            printf("\n");
//
//        }
//        return 0;
//    }
//
//
///// 43
/////-------------            *******
/////                          *****
/////                           ***
/////                            *
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<7;j++)
//            {
//                if(j<i+3)
//                {
//                    printf(" ");
//                }
//
//                else if(j>j+3)
//                {
//                    printf(" ");
//                }
//                else
//                {
//                    printf("*");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }

/////  * * * * *
////   * * * *
///    * * *
//     * *
//     *
//     * *
//     * * *
///    * * * *
//     * * * * *
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        for(i=0;i<10;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(j<(5-i))
//                {
//                    printf("*");
//                }
//                else if(i>=5+j)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }




/// *********************** CHARACTER PETTERN *******************8
/////     Char Pattern   A
/////                    B C
/////                    D E F
/////                    G H I J
/////                    K L M N O
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k=65;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%c ",k);
//                    k++;
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/////                 A
/////                 A B
/////                 A B C
/////                 A B C D
/////                 A B C D E
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k=65;
//        for(i=0;i<5;i++)
//        {
//            k=65;
//            for(j=0;j<5;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%c ",k);
//                    k++;
//                }
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//
/////               A
/////               B B
/////               C C C
/////               D D D D
/////               E E E E E
//#include<stdio.h>
//    int main()
//    {
//        int i,j,k=65;
//        for(i=0;i<5;i++)
//        {
//            for(j=0;j<5;j++)
//            {
//                if(j<=i)
//                {
//                    printf("%c ",k);
//                }
//            }
//            k++;
//            printf("\n");
//        }
//        return 0;
//    }
//


