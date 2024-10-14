//1 .
/*
11111
11111
11111
11111
11111
*/

/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
*/

//2.
/*
11111
00000
11111
00000
11111
*/
/*

#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//3.

/*
01010
01010
01010
01010
01010
*/
/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j==0 || j==2 || j==4)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//4.
/*
11111
10001
10001
10001
11111
*/
/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==0 || j==0 || i==4 || j==4)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//5.
/*
11111
11111
11011
11111
11111
*/
/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==2 && j==2)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//6.
/*
10101
01010
10101
01010
10101

#include<stdio.h>
int main()
{
    int i,j,flg=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(flg==1)
            {
                printf("\t 1");
                flg=0;
            }
            else
            {
                printf("\t 0");
                flg=1;
            }
        }
        printf("\n");
    }
    return 0;

}
*/

//7.
/*
11011
11011
00000
11011
11011
*/
/*
#include<stdio.h>
int main()
{
    int i ,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==2 || j==2)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//8.
/*
10001
01010
00100
01010
10001
*/
/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==j || j==(4-i))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//9.
/*
01110
10001
10001
10001
01110
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==0 && (j>0 && j<4))
            {
                printf("1");
            }
            else if(i==4 && (j>0 && j<4))
            {
                printf("1");
            }
            else if(j==4 && (i>0 && i<4))
            {
                printf("1");
            }
            else if(j==0 && (i>0 && i<4))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//10.

/*
1111
2222
3333
4444
5555
*/
/*
#include<stdio.h>
int main()
{
    int i , j;
    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<5 ; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
*/

//11.
/*
12345
12345
12345
12345
12345
*/

/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=5 ; j++)
        {
            printf("%d",j);

        }

        printf("\n");
    }
    return 0;
}
*/

//12.
/*
12345
23456
34567
45678
56789
*/
/*
#include<stdio.h>
int main()
{
    int i , j;
    for(i=1 ; i<=5 ; i++)
    {
        for(j=i ; j<5+i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

//13.
/*
 1 2 3 4 5
 6 7 8 9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
 */
 /*
#include<stdio.h>
int main()
{
    int i , j,a=1;
    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=5 ; j++)
        {
            printf(" %d",a);
            a++;
        }

        printf("\n");
    }
    return 0;
}
*/

//14.
/*
         5       5       5       5       5
         5       4       4       4       4
         5       4       3       3       3
         5       4       3       2       2
         5       4       3       2       1

#include<stdio.h>
int main()
{
    int i ,k=5, j;

    for(i=0 ; i<5 ;i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j>=i)
            {
                printf("\t %d",k);
            }
            else
            {
                printf("\t %d",5-j);
            }
        }
        printf("\n");
        k--;
    }
    return 0;
}
*/

///15.
/*
12345
23455
34555
45555
55555

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {

        n=m;
        for(j=0;j<5;j++)
        {

            if(j<(5-i))
            {

                printf("%d",n);
                n++;
            }
            else
            {
                n=5;
                printf("%d",n);
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}
*/

///16
/*
12345
23451
34521
45321
54321

#include<stdio.h>
int main()
{
    int i,j,m=1,n,k;

    for(i=0;i<5;i++)
    {
        n=m;
        k=i;
        for(j=0;j<5;j++)
        {
            if(j<5-i)
            {
                printf("%d",n);
                n++;
            }
            else
            {
                printf("%d",k);
                k--;
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}
*/

///17
/*
12345
23451
34521
45321
54321

#include<stdio.h>
int main()
{
    int i,j,m=1,n,k;

    for(i=0;i<5;i++)
    {
        n=m;
        k=2;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",n);
                n--;
            }
            else
            {
                printf("%d",k);
                k++;
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}
*/

///18
/*
555555555
544444445
543333345
543222345
543212345
543222234
543333334
544444444
555555555

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<9;i++)
    {
        k=5;
        for(j=0;j<9;j++)
        {
            if(i<5)
                {
                    if(j<i)
                {
                    printf("%d",k);
                    k--;
                }
                else if(j>=(8-i))
                {
                    printf("%d",k);
                    k++;
                }
                else
                {
                    printf("%d",k);
                }
            }
            else
            {
                if(j<(8-i))
                {
                    printf("%d",k);
                    k--;
                }
                else if(j>=(i+1))
                {
                    printf("%d",k);
                    k++;
                }
                else
                {
                    printf("%d",k);
                }
            }
        }
        printf("\n");
    }
}
*/
///19.
/*
1
22
333
4444
55555
*/
/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=5 ; j++)
        {
            if(j<=i)
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
///===========================================================================

///19.
/*
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9


#include<stdio.h>
int main()
{
    int i,j,k=1,m=16,n=m,r;

    for(i=0;i<5;i++)
    {
        r=24;
        for(j=0;j<5;j++)
        {
            if(i==0 || j==4)
            {
                printf("%d  ",k);
                k++;
            }
            else if(i==1 || j==3 && i<4)
            {
                printf("%d ",m);
                m++;
            }
            else if(i>1 && j==0 || i==4)
            {
                n--;
                printf("%d ",n);
            }
            else if(i==2 && (j>0 || j<3))
            {
                printf("%d ",r);
                r++;
            }
            else if(i==3 && (j>0 || j<3))
            {
                r--;
                printf("%d ",r);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///===========================================================================

///20.
/*
55555
4444
333
22
1
*/
/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=5 ; i>=1 ; i--)
    {
        for(j=5 ; j>=1 ; j--)
        {
            if(j<=i)
            {
                printf("%d",i);
            }

        }
        printf("\n");
    }
    return 0;
}
*/


///21.
/*
55555
4444
333
22
1

#include<stdio.h>
int main()
{
    int i,j,k=5;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
            }
        }
        printf("\n");
        k--;
    }
    return 0;
}

*/

///22.
/*
11111
2222
333
44
5

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",i+1);
            }
        }
        printf("\n");
        //k--;
    }
    return 0;
}

*/


///23.
/*
5
44
333
2222
11111

#include<stdio.h>
int main()
{
    int i,j,k=5;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
            }
        }
        k--;
        printf("\n");
    }
}

*/

///24.
/*
1
12
123
1234
12345

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
            }
            k++;
        }

        printf("\n");
    }
}
*/
///==============================================================================
///25.
/*
12345
1234
123
12
1

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///============================================================================

///26.
/*
1
21
321
4321
54321

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",n);
                n--;
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}
*/

///27.
/*
54321
4321
321
21
1

#include<stdio.h>
int main()
{
    int i,j,m=5,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",n);
                n--;
            }
        }
        m--;
        printf("\n");
    }
    return 0;
}
*/

///==================================================================================

///28.
/*
5
54
543
5432
54321

#include<stdio.h>
int main()
{
    int i,j,m;

    for(i=0;i<5;i++)
    {
        m=5;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",m);
                m--;
            }
        }
        printf("\n");
    }
    return 0;
}

*/

///====================================================================================

///29.
/*
54321
5432
543
54
5

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=5;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================

///30.
/*
5
45
345
2345
12345

#include<stdio.h>
int main()
{
    int i,j,m=5,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",n);
                n++;
            }
        }
        m--;
        printf("\n");
    }
    return 0;
}
*/

///====================================================================================

///31.
/*
12345
2345
345
45
5

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",n);
                n++;
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}
*/

///=========================================================
///32.
/*
1
23
345
4567
56789

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",n);
                n++;
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}

*/

///========================================================
///33.
/*
56789
4567
345
23
1

#include<stdio.h>
int main()
{
    int i,j,m=5,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",n);
                 n++;
            }
        }
        m--;
        printf("\n");
    }
    return 0;
}
*/

///==========================================================
///34.
/*
13579
3579
579
79
9

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d",n);
                n=n+2;
            }
        }
        m=m+2;
        printf("\n");
    }
    return 0;
}
*/

///======================================================
///Triangle 0,1 Easy Number Patterns

///35.
/*
1
10
101
1010
10101

#include<stdio.h>
int main()
{
    int i,j,flg;

    for(i=0;i<5;i++)
    {
        flg=1;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(flg==1)
                {
                    printf("1");
                    flg=0;
                }
                else
                {
                    printf("0");
                    flg=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/
///=============================================================================
///36.
/*
1
00
111
0000
11111

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("1");
            }
            else if(i%2==1)
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///===================================================================
///37.
/*
1
01
010
1010
10101

#include<stdio.h>
int main()
{
    int i,j,flg=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(flg==1)
                {
                    printf("1");
                    flg=0;
                }
                else
                {
                    printf("0");
                    flg=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///==============================================================
///38.
/*
1
11
101
1001
11111

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(j==0 || i==4 || i==j)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///==================================================================
///Triangle Hard Number Patterns
///39.
/*
1
123
12345
1234567
123456789

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<9;j++)
        {
            if(j<=(i+i))
            {
                printf("%d",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}

*/

///==============================================================================
///40.
/*
1
24
135
2468
13579

#include<stdio.h>
int main()
{
    int i,j,m,n;

    for(i=1;i<=5;i++)
    {
        m=2;
        n=1;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                if(i%2==0)
                {
                    printf("%d",m);
                    m=m+2;
                }
                else
                {
                    printf("%d",n);
                    n=n+2;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===============================================

///41.
/*
1
1 3 1
1 3 5 3 1
1 3 5 7 5 3 1
1 3 5 7 9 7 5 3 1


#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=(i+1);j++)
        {
           printf("%d ",2*j-1);
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",2*k-1);
        }
        printf("\n");
    }
    return 0;
}

*/

///=============================================================

///42.
/*
2
2 4 2
2 4 6 4 2
2 4 6 8 6 4 2
2 4 6 8 10 8 6 4 2

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=(i+1);j++)
        {
            printf("%d ",j*2);
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",2*k);
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================

///43.
/*
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        for(j=1;j<=(i+1);j++)
        {
            printf("%d ",j);
        }
        for(k=i;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
*/

///===================================================================

///44.
/*
1
3 2 1
4 5 4 3 2
5 6 7 6 5 4 3
6 7 8 9 8 7 6 5 4

#include<stdio.h>
int main()
{
    int i,j,n,k;

    for(i=0;i<5;i++)
    {
        n=i+2;
        k=2*i;
        for(j=0;j<=(2*i);j++)
        {
            if(i==0 )
            {
                n=1;
                printf("%d ",n);
            }
            else if(j<i )
            {
                printf("%d ",n);
                n++;
            }
            else
            {
                printf("%d ",k);
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///================================================================

///45.
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
///============================================================================================

///46.
/*
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
#include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(j=i;j>=1;j--)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///=======================================================
///47.
/*
1
2 3
4 5 6 7
8 9 1 2 3 4 5 6
7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4

#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<16;j++)
        {
            if(j<=i && i<2)
            {
                printf("%d ",k);
                k++;
            }
            else if(i==3 && j<8)
            {
                if(k>9)
                {
                    k=1;
                    printf("%d ",k);
                    k++;
                }
                else
                {
                    printf("%d ",k);
                    k++;
                }
            }
            else
            {
                if(k>9 && j<(i*i) && (i==2 || i==4))
                {
                    k=1;
                    printf("%d ",k);
                    k++;
                }
                else if(j<(i*i)&& (i==2 || i==4))
                {
                    printf("%d ",k);
                    k++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///========================================================

///48.
/*
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<10;j++)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k++;
            }
            else if(j>=9-i)
            {
                k--;
                printf("%d ",k);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///===================================================================
///49.
/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

#include<stdio.h>
int main()
{
    int i,j,num=1,k,n;

    for(i=0;i<5;i++)
    {
        k=4;
        n=num;

        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d ",n);
                n=n+k;
                k--;
            }
        }
        num++;
        printf("\n");
    }
    return 0;
}

*/
///=======================================================================
///50.
/*
1
2 4
7 11 16
22 29 37 46
56 67 79 92 106

#include<stdio.h>
int main()
{
    int i,j,k=1,m=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",k);
            k=k+m;
            m++;
        }
        printf("\n");
    }
    return 0;
}
*/


///=======================================================================
///51.
/*
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {

        for(j=0;j<=i;j++)
        {
            if(i==2)
            {
                printf("%d ",m);
                m++;
            }
            else if(i==4)
            {
                printf("%d ",n);
                n++;
            }
            else
            {
                printf("%d ",m);
                m--;
                n=m+5;
            }
        }
        m=m+3;
        printf("\n");
    }
    return 0;
}
*/

///========================================================================
///52.
/*
1
22
333
2222
11111

#include<stdio.h>
int main()
{
    int i,j,num=2;

    for(i=0;i<5;i++)
    {
        num=2;
        for(j=0;j<5;j++)
        {
            if(i<3)
            {
                if(j<=i)
                {
                    printf("%d",i+1);
                }
            }
            else if(i>=3)
            {
                if(j<=i)
                {
                    printf("%d",(4-i)+1);
                }
            }
        }

        printf("\n");
    }
    return 0;
}
*/
///==============================================================
///53.
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

#include<stdio.h>
int main()
{
    int i,j,m;

    for(i=0;i<5;i++)
    {
        m=1;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d ",m);
                m++;
            }

        }
        printf("\n");
    }
    return 0;
}
*/

///====================================================
///54.
/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

#include<stdio.h>
int main()
{
    int i,j,m=1,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%d ",n);
                n++;
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}
*/
///=========================================================================================================================
///55.
/*
1
12
123
1234
12345
1234
123
12
1

#include<stdio.h>
int main()
{
    int i,j,num;

    for(i=0;i<9;i++)
    {
        num=1;

        for(j=0;j<5;j++)
        {
            if(i<=4)
            {
                if(j<=i)
                {
                    printf("%d",num);
                    num++;
                }
            }
            else
            {
                if(j<=(8-i))
                {
                    printf("%d",num);
                    num++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///==============================================================
///56
/*
1
123
12345
1234567
123456789
1234567
12345
123
1

#include<stdio.h>
int main()
{
    int i,j,n;

    for(i=0;i<9;i++)
    {
        n=1;
        for(j=0;j<9;j++)
        {
            if(i<=4)
            {
                if(j<=(2*i))
                {
                    printf("%d",n);
                    n++;
                }
            }
            else
            {
                if(j<=(8-i)*2)
                {
                    printf("%d",n);
                    n++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///57.
/*
1
121
12321
1234321
123454321
1234321
12321
121
1


#include<stdio.h>
int main()
{
    int i,j,k,m,n;

    for(i=0;i<9;i++)
    {
        k=1;
        m=i;
        n=8-i;

        for(j=0;j<9;j++)
        {
            ///Upper Traingle
            if(i<=4)
            {
                ///left part
                if(j<=i)
                {
                    printf("%d",k);
                    k++;
                }
                ///right part
                else if(j>=i+1 && j<=(i+i))
                {
                    printf("%d",m);
                    m--;
                }
            }
            else
            {
                if(j<=(8-i)*2)
                {
                    if(j<=(8-i))
                    {
                         printf("%d",k);
                         k++;
                    }
                    else
                    {
                        printf("%d",n);
                        n--;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

*/

///================================================================================================================
///58.

/*

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*

#include<stdio.h>
int main()
{
    int i,j,n,a,b;

    for(i=0;i<11;i++)
    {
        n=i-1;
        a=(10-i)-1;

        for(j=0;j<11;j++)
        {
            ///Upper Part

            if(i<=5)
            {
                if(j==0 || j==(i+i))
                {
                    printf("*");
                }
                ///left part
                else if(j>=1 && j<=i)
                {
                    printf("%d",j);
                }
                ///right part
                else if(j>i && j<(2*i))
                {
                    printf("%d",n);
                    n--;
                }
            }
            ///Lower part
            else
            {
                if(j==0 || j==(10-i)*2)
                {
                    printf("*");
                }
                ///left part
                else if(j>=1 && j<=(10-i))
                {
                    printf("%d",j);
                }
                ///right part
                else if(j>(10-i) && j<(10-i)*2)
                {
                    printf("%d",a);
                    a--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
