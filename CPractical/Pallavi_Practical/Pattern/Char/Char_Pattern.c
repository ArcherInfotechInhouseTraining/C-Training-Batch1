
//1.
/*
A
AB
ABC
ABCD
ABCDE
*/
/*
#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=0 ; i<5 ; i++)
    {
        a=65;
        for(j=0 ; j<5 ; j++)
        {
            if(j<=i)
            {
                printf("%c",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//2.
/*
E
ED
EDC
EDCB
EDCBA
*/
/*
#include<stdio.h>
int main()
{
    int i , j ,a;

    for(i=0 ; i<5 ; i++)
    {
        a=69;
        for(j=0 ; j<5 ; j++)
        {
            if(j<=i)
            {
                printf("%c",a);
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//3.
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=69 ; i<=65 ; i--)
    {
        for(j=i ; j>=65 ; j--)
        {
            if(j<=i)
            {
                printf("%c",j);
            }
        }
        printf("\n");
    }
    return 0;
}

*/

//4.
/*
A
BA
CBA
DCBA
EDCBA
*/

/*
#include<stdio.h>
int main()
{
    int i , j;

    for(i=65 ; i<=69 ; i++)
    {
        for(j=i ; j>=65 ; j--)
        {
            if(j<=i)
            {
                printf("%c",j);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//5.
/*
ABCDE
ABCD
ABC
AB
A
*/

/*
#include<stdio.h>
int main()
{
    int i , j , a=65;

    for(i=0 ; i<5 ; i++)
    {
        a=65;
        for(j=0 ; j<5 ; j++)
        {

            if(j<=(4-i))
            {
                printf("%c",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///6.
/*
A B C D E
 B C D E
  C D E
   D E
    E
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=65+i;

        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///7.
/*
E D C B A
 D C B A
  C B A
   B A
    A

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=69-i;
        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///8.
/*
E D C B A
 E D C B
  E D C
   E D
    E

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=69;

        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///9.
/*
    A
   B B
  C C C
 D D D D
E E E E E

#include<stdio.h>
int main()
{
    int i,j,k=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j>=(4-i))
            {
                printf("%c ",k);
            }
            else
            {
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }
    return 0;
}
*/

///10.
/*
    E
   D D
  C C C
 B B B B
A A A A A


#include<stdio.h>
int main()
{
    int i,j,k=69;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j>=(4-i))
            {
                printf("%c ",k);
            }
            else
            {
                printf(" ");
            }
        }
        k--;
        printf("\n");
    }
    return 0;
}
*/

///11.
/*
EEEEE
DDDD
CCC
BB
A
*/
/*
#include<stdio.h>
int main()
{
    int i,j,a=69;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j<=(4-i))
            {
                printf("%c",a);
            }
        }
                    a--;

        printf("\n");
    }
    return 0;
}

*/

///12.
/*
AAAAA
BBBB
CCC
DD
E
*/
/*
#include<stdio.h>
int main()
{
    int a , i , j;
    a=65;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j<=(4-i))
            {
                printf("%c",a);
            }
        }
        printf("\n");
        a++;
    }
    return 0;
}

*/

///13
/*
    A
   BC
  DEF
 GHIJ
KLMNO
*/
/*
#include<stdio.h>
int main()
{
    int i,j,a;
    a=65;
    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j>=(4-i))
            {
                printf("%c ",a);
                a++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

*/

///14.
/*
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/

/*
#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=0 ; i<5 ; i++)
    {
        a=65;

        for(j=0 ; j<=(4+i) ; j++)
        {
            if(j >= (4-i))
            {
                printf("%c",a);
                a++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///15.
/*
ABCDEEDCBA
ABCD**DCBA
ABC****CBA
AB******BA
A********A
*/

/*
#include<stdio.h>
int main()
{
    int i,j,a,e=69;

    for(i=0 ; i<5 ; i++)
    {
        a=65;
        e=69;

        for(j=0 ; j<10 ; j++)
        {
            if(j<=4)
            {
                if( j>(4-i) )
                {
                    printf("*");
                }
                else
                {
                    printf("%c",a);
                    a++;
                }
            }
            if(j>4)
            {
                if( j<=(4+i)  )
                {
                    printf("*");
                    e--;
                }
                else
                {
                    printf("%c",e);
                    e--;
                }
            }

        }

        printf("\n");
    }
    return 0;
}

*/

///16.

/*
  A
 BCD
EFGHI
*/
/*
#include<stdio.h>
int main()
{
    int i,j,a=65;

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<=(2+i) ; j++)
        {
            if(j>=2-i)
            {
                printf("%c",a);
                a++;
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}

*/


///17.
/*
EDCB*
EDC*A
ED*BA
E*CBA
*DCBA
*/

/*
#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=0 ; i<5 ; i++)
    {
        a=69;

        for(j=0 ; j<5 ; j++)
        {
            if(j==(4-i))
            {
                printf("*");
                a--;
            }
            else
            {
                printf("%c",a);
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}

*/
///18.
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

#include<stdio.h>
int main()
{
    int i,j,k,m;

    for(i=0;i<5;i++)
    {
        k=65;
        m=k+i-1;

        for(j=0;j<=(4+i);j++)
        {
            if(j>=(4-i) && j<=4)
            {
                printf("%c",k);
                k++;
            }
            else if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c",m);
                m--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///19.

///20.
/*
    A
   BA
  CBA
 DCBA
EDCBA

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=69;

        for(j=0;j<5;j++)
        {
            if(j>=(4-i))
            {
                printf("%c",k);
            }
            else
            {
                printf(" ");
            }
            k--;
        }
        printf("\n");
    }
    return 0;
}
*/

///21.
/*
A
B * B
C * C * C
D * D * D * D
E * E * E * E *
D * D * D * D
C * C * C
B * B
A

#include<stdio.h>
int main()
{
    int i,j,m=65,n=68;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<8 ; j++)
        {
            if(i<=4)
            {
                if(j<=(2*i))
                {
                    if(j%2==0)
                    {
                        printf("%c ",m);
                    }
                    else
                    {
                        printf("* ");
                    }
                }
            }
        }
        m++;
        printf("\n");
    }

    for(i=5;i<9;i++)
    {
        for(j=0;j<8;j++)
        {
           if(j<=(8-i)*2)
           {
               if(j%2==0)
               {
                   printf("%c ",n);
               }
               else
               {
                   printf("* ");
               }
           }
        }
        n--;
        printf("\n");
    }
    return 0;
}

*/

///22.
/*
    A
   B  C
  D  E  F
 G  H  I  J
K  L  M  N  O

#include<stdio.h>
int main()
{
    int i,j,k=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j>=4-i)
            {
                printf("%c ",k);
                k++;
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

///23.
/*
    E
   E D
  E D C
 E D C B
E D C B A

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=69;
        for(j=0;j<5;j++)
        {
            if(j>=(4-i))
            {
                printf("%c ",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///24.
/*
A
B A B
C B A B C
D C B A B C D
E D C B A B C D E

#include<stdio.h>
int main()
{
    int i,j,m=65,n;

    for(i=0;i<5;i++)
    {
        n=m;
        for(j=0;j<=4+i;j++)
        {
            if(j>=(4-i) && j<=4)
            {
                printf("%c ",n);
                n--;
            }
            else if(j>4)
            {
                printf("%c ",n+2);
                n++;
            }

        }
        printf("\n");
        m++;
    }
}
*/

///25.
/*
A B C D E
F G H I
J K L
M N
O

#include<stdio.h>
int main()
{
    int i,j,k=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%c ",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///26.
/*
A B C D E
B C D E A
C D E B A
D E C B A
E D C B A

#include<stdio.h>
int main()
{
    int i,j,k,m;

    for(i=0;i<5;i++)
    {
        m=65+i-1;
        k=65+i;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf("%c ",k);
                k++;
            }
            else
            {
                printf("%c ",m);
                m--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///27.
/*
A
A B
A B C
A B C D
A B C D E

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=65;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c ",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///28.
/*
E E E E E E E E E
E D D D D D D D E
E D C C C C C D E
E D C B B B C D E
E D C B A B C D E

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        k=69;
        for(j=0;j<9;j++)
        {
            if(j<=i )
            {
                printf("%c ",k);
                k--;
            }
            else if(j>(8-i))
            {
                k++;
                printf("%c ",k+1);
            }
            else
            {
                printf("%c ",k+1);
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///29.
/*
EEEEEEEEE
EDDDDDDDE
EDCCCCCDE
EDCBBBCDE
EDCBABCDE
EDCBBBCDE
EDCCCCCDE
EDDDDDDDE
EEEEEEEEE


#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<9;i++)
    {
        k=69;

        for(j=0;j<9;j++)
        {
            if(i<5)
            {
                if(j<=i)
                {
                    printf("%c",k);
                    k--;
                }
                else if(j>(8-i))
                {
                    k++;
                    printf("%c",k+1);
                }
                else
                {
                    printf("%c",k+1);
                }
            }
            else
            {
                if(j<=(8-i))
                {
                    printf("%c",k);
                    k--;
                }
                else if(j>=(i+1))
                {
                    k++;
                    printf("%c",k+1);
                }
                else
                {
                    printf("%c",k+1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/

///30.
/*
A       A
 B     B
  C   C
   D D
    E

#include<stdio.h>
int main()
{
    int i,j,k=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i==j || j==(8-i))
            {
                printf("%c",k);
            }
            else
            {
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }
    return 0;
}
*/


///32.same as 18.


///33.
/*
    A
   B B
  C   C
 D     D
E       E

#include<stdio.h>
int main()
{
    int i,j,k=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=4+i;j++)
        {
            if(j==(4-i) || j==(4+i))
            {
                printf("%c",k);
            }
            else
            {
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }
    return 0;
}
*/

///34.
/*
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

#include<stdio.h>
int main()
{
    int i,j,k=65,m=73;

    for(i=0;i<9;i++)
    {
        for(j=0;j<=4+i;j++)
        {
            if(j==(4-i) || j==(4+i)  && i<5)
            {
                printf("%c",k);
            }
            else if(j==(i-4) || j==(8-i)+4 )
            {

                printf("%c",m);
            }
            else
            {
                printf(" ");
            }
        }
        k++;
        printf("\n");
        m--;
    }
}
