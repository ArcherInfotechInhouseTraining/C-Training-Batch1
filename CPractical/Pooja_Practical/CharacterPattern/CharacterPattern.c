///1
/*
 A
 A B
 A B C
 A B C D
 A B C D E

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=65;
        for(j=0;j<=i;j++)
        {
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
*/
//==========================================================================
///2
/*
 E
 E D
 E D C
 E D C B
 E D C B A

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=69;
        for(j=0;j<=i;j++)
        {
            printf(" %c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}
*/
//=========================================================================
///3
/*
 E
 D E
 C D E
 B C D E
 A B C D E

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=69-i;
        for(j=0;j<=i;j++)
        {
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
*/
//==========================================================================
///4
/*
 A
 B A
 C B A
 D C B A
 E D C B A

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=65+i;
        for(j=0;j<=i;j++)
        {
            printf(" %c",ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}
*/
//=======================================================================
///5
/*
 A B C D E
 A B C D
 A B C
 A B
 A

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=65;
        for(j=0;j<=(4-i);j++)
        {
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
*/
//==========================================================================
/* Numeric Pattern
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=1;
        for(j=0;j<(9-i);j++)
        {

            if(i%2==0 && j%2==0 &&j>=i)
            {
                printf("%d",num);
                num++;
            }
            else if(i%2==1 && j%2==1 &&j>=i)
            {
                printf("%d",num);
                num++;
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
/*
#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=1;
        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%d ",num);
                num++;
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
*///================================================================================
///6
/*
A B C D E
 B C D E
  C D E
   D E
    E

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=65+i;
        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",ch);
                ch++;
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
//=================================================================================
///7
/*
E D C B A
 D C B A
  C B A
   B A
    A

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=69-i;
        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",ch);
                ch--;
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
//==================================================================================
///8
/*
E D C B A
 E D C B
  E D C
   E D
    E

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=69;
        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",ch);
                ch--;
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
//=================================================================================================
///9
/*
    A
   B B
  C C C
 D D D D
E E E E E

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=65+i;

        for(j=0;j<5;j++)
        {
            if(j<=(4-i)-1)
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//======================================================================================
///10
/*
    E
   D D
  C C C
 B B B B
A A A A A

#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=69-i;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i)-1)
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch);
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//===================================================================================
///11
/*
E E E E E
 D D D D
  C C C
   B B
    A


#include<stdio.h>
int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
        ch=69-i;
        for(j=0;j<5;j++)
        {
            if(j>=i)
            {
                printf("%c ",ch);
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
//=====================================================================================

///13
/*
    A
   B C
  D E F
 G H I J
K L M N O

#include<stdio.h>
int main()
{
    int i,j;
    char ch=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i)-1)
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//====================================================================================
///14
/*
         A
       A B C
     A B C D E
   A B C D E F G
 A B C D E F G H I


#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;;

    for(i=0;i<5;i++)
    {
        ch=65;
        ch1=65+(i+1);
        for(j=0;j<9;j++)
        {
            if(j>=(4-i) && j<=4)
            {
                printf(" %c",ch);
                ch++;
            }
            else if(j>=5)
            {
                if(j<=(4+i))
                {
                    printf(" %c",ch1);
                    ch1++;
                }
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
//=================================================================================
///15
/*

 A B C D E E D C B A
 A B C D * * D C B A
 A B C * * * * C B A
 A B * * * * * * B A
 A * * * * * * * * A


#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=65;
        ch1=69-i;
        for(j=0;j<10;j++)
        {
            if(j<5)
            {
                if(j<=(4-i))
                {
                    printf(" %c",ch);
                    ch++;
                }
                else
                {
                    printf(" *");
                }
            }
            else
            {
                if(j>=(5+i))
                {
                    printf(" %c",ch1);
                    ch1--;
                }
                else
                {
                    printf(" *");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//===============================================================================================
///16
/*
     A
   B C D
 E F G H I


#include<stdio.h>
int main()
{
    int i,j;
    char ch=65;

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j>=(4-i)-2 && j<=(i+2))
            {
                printf(" %c",ch);
                ch++;

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
//==============================================================================================
///17
/*
 E D C B *
 E D C * A
 E D * B A
 E * C B A
 * D C B A

#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=69;
        ch1=64+i;
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" %c",ch);
                ch--;
            }
            else if(j>=(5-i))
            {
                printf(" %c",ch1);
                ch1--;
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//===============================================================================================
///18
/*
         A
       A B A
     A B C B A
   A B C D C B A
 A B C D E D C B A


#include<stdio.h>
int main()
{
    int i,j;
    int ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=65;
        ch1=64+i;
        for(j=0;j<9;j++)
        {
            if(j<5 && j>=(4-i))
            {
                printf(" %c",ch);
                ch++;
            }
            else if(j>=5 && j<=(4+i))
            {
                printf(" %c",ch1);
                ch1--;
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
//==================================================================================================
///19
/*

    A         A
   A B       B A
  A B C     C B A
 A B C D   D C B A
A B C D E E D C B A


#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=65;
        ch1=65+i;
        for(j=0;j<10;j++)
        {
            if(j<5)
            {
                if(j<(4-i))
                {
                    printf(" ");
                }
                else
                {
                    printf("%c ",ch);
                    ch++;
                }
            }
            else if(j>=5)
            {
                if(j<(9-i))
                {
                    printf("  ");
                }
                else
                {
                    printf("%c ",ch1);
                    ch1--;
                }
            }

        }
        printf("\n");
    }

    return 0;
}
*/
//=========================================================================================================
///20
/*
    A
   B A
  C B A
 D C B A
E D C B A

#include<stdio.h>
int main()
{
    int i,j;
    int ch;

    for(i=0;i<5;i++)
    {
        ch=65+i;
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch);
                ch--;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//===================================================================================================
///21
/*
 A
 B * B
 C * C * C
 D * D * D * D
 E * E * E * E * E
 D * D * D * D
 C * C * C
 B * B
 A

#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;

    for(i=0;i<9;i++)
    {
        ch=65+i;
        ch1=73-i;
        for(j=0;j<9;j++)
        {
            if(i<5 && j<=(i+i))
            {
                if(j==1 || j==3 || j==5 || j==7)
                {
                    printf(" *");
                }
                else
                {
                    printf(" %c",ch);
                }
            }
            else
            {
                if(i>=5 && j<=((9-i)*2)-2)
                {
                    if(j==1 || j==3 || j==5 || j==7)
                    {
                        printf(" *");
                    }
                    else
                    {
                        printf(" %c",ch1);
                    }
                }
            }

        }
        printf("\n");
    }
    return 0;
}
*/
//=========================================================================================
///22
/*
    A
   B C
  D E F
 G H I J
K L M N O


#include<stdio.h>
int main()
{
    int i,j;
    char ch=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//=======================================================================================
///23
/*
    E
   E D
  E D C
 E D C B
E D C B A

#include<stdio.h>
int main()
{
    int i,j;

    int ch;
    for(i=0;i<5;i++)
    {
        ch=69;
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch);
                ch--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//==========================================================================================
///24
/*
 A
 B A B
 C B A B C
 D C B A B C D
 E D C B A B C D E

#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=65+i;
        ch1=66;
        for(j=0;j<9;j++)
        {
            if(j<=i)
            {
                printf(" %c",ch);
                ch--;
            }
            else if(j>=2 && i>=1)
            {
                if(j<=(i+i))
                {
                    printf(" %c",ch1);
                    ch1++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//==========================================================================================
///25
/*
 A B C D E
 F G H I
 J K L
 M N
 O

#include<stdio.h>
int main()
{
    int i,j;
    char ch=65;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %c",ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//=========================================================================================
///26
/*
 A B C D E
 B C D E A
 C D E B A
 D E C B A
 E D C B A

#include<stdio.h>
int main()
{
    int i,j;
    char ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=65+i;
        ch1=64+i;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %c",ch);
                ch++;
            }
            else
            {
                printf(" %c",ch1);
                ch1--;
            }
        }
        printf("\n");
    }
}
*/
//=================================================================================
///27
/*
    A
   A B
  A B C
 A B C D
A B C D E

#include<stdio.h>
int main()
{
    int i,j;
    char ch1,ch2;
    for(i=0;i<5;i++)
    {
        ch1=65;
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c ",ch1);
                ch1++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//====================================================================================
///28
/*
 E E E E E E E E E
 E D D D D D D D E
 E D C C C C C D E
 E D C B B B C D E
 E D C B A B C D E

#include<stdio.h>
int main()
{
    int i,j;

    char ch=70,ch1,ch2,ch3;

    for(i=0;i<5;i++)
    {
        ch=69;
        ch1=69-i;
        ch2=69-i;
        ch3=70-i;
        for(j=0;j<9;j++)
        {
            if(j<5)
            {
                if(j<=i)
                {
                    printf(" %c",ch);
                    ch--;
                }
                else
                {
                    printf(" %c",ch1);
                }
            }
            else
            {
                if(j>=5)
                {
                    if(j<=(8-i))
                    {
                        printf(" %c",ch2);
                    }
                    else
                    {
                        printf(" %c",ch3);
                        ch3++;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//===================================================================================
///30
/*
 E E E E E E E E E
 E D D D D D D D E
 E D C C C C C D E
 E D C B B B C D E
 E D C B A B C D E
 E D C B B B C D E
 E D C C C C C D E
 E D D D D D D D E
 E E E E E E E E E

#include<stdio.h>
int main()
{
    int i,j;
    int ch=70;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i==0 || j==0 ||i==8 ||j==8)
            {
                printf(" %c",ch-1);
            }
            else if(j==1 || i==1 ||j==7 || i==7)
            {
                printf(" %c",ch-2);
            }
            else if(j==2 || i==2 || j==6 || i==6)
            {
                printf(" %c",ch-3);
            }
            else if(j==3 || j==5 ||i==3 ||i==5)
            {
                printf(" %c",ch-4);
            }
            else
            {
                 printf(" %c",ch-5);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//=====================================================================================
///31
/*
 A B C D E
 B A B C D
 C B A B C
 D C B A B
 E D C B A


#include<stdio.h>
int main()
{
    int i,j;
    char ch1,ch2;

    for(i=0;i<5;i++)
    {
        ch1=65+i;
        ch2=66;
        for(j=0;j<5;j++)
        {
            if(i>=j) //j<=i
            {
                printf(" %c",ch1);
                ch1--;
            }
            else
            {
                printf(" %c",ch2);
                ch2++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//==========================================================================
///32
/*

A       A
 B     B
  C   C
   D D
    E


#include<stdio.h>
int main()
{
    int i,j;
    char ch1,ch2;

    for(i=0;i<5;i++)
    {
        ch1=65+i;
        ch2=65+i;
        for(j=0;j<9;j++)
        {
            if(i==j)
            {
                printf("%c",ch1);
            }
            else if(j>=5)
            {
                if(j==(8-i))
                {
                    printf("%c",ch2);
                }
                else
                {
                    printf(" ");
                }
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
//=====================================================================================
///33
/*
         A
       A B A
     A B C B A
   A B C D C B A
 A B C D E D C B A

#include<stdio.h>
int main()
{
    int i,j;
    int ch,ch1;

    for(i=0;i<5;i++)
    {
        ch=65;
        ch1=64+i;
        for(j=0;j<9;j++)
        {
            if(j<5 && j>=(4-i))
            {
                printf(" %c",ch);
                ch++;
            }
            else if(j>=5 && j<=(4+i))
            {
                printf(" %c",ch1);
                ch1--;
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
//========================================================================================
///34
/*
    A
   B B
  C   C
 D     D
E       E

#include<stdio.h>
int main()
{
    int i,j;
    int ch1,ch2;

    for(i=0;i<5;i++)
    {
        ch1=65+i;
        ch2=65+i;
        for(j=0;j<9;j++)
        {
            if(j==(4-i))
            {
                printf("%c",ch1);
            }
            else if(i>=1)
            {
                if(j==(4+i))
                {
                    printf("%c",ch2);
                }
                else
                {
                    printf(" ");
                }
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
//=====================================================================================
///35
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

#include<stdio.h>
int main()
{
    int i,j;
    int ch1,ch2,ch3,ch4;

    for(i=0;i<9;i++)
    {
        ch1=65+i;
        ch2=65+i;
        ch3=73-i;
        ch4=73-i;
        for(j=0;j<9;j++)
        {
            if(j==(4-i))
            {
                printf("%c",ch1);
            }
            else if(i>=1 && i<5)
            {
                if(j==(4+i))
                {
                    printf("%c",ch2);
                }
                else
                {
                    printf(" ");
                }
            }
            else if(i>=5 && j>=4)
            {
                if(j==(9-i)+3)
                {
                    printf("%c",ch3);
                }
                else
                {
                    printf(" ");
                }
            }
            else if(j<4 && i>=5)
            {
                if(j==(9+i)-13)
                {
                    printf("%c",ch4);
                }
                else
                {
                    printf(" ");
                }
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
//============================================================================================










