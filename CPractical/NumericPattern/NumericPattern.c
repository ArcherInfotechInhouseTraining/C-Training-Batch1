 /*QUE 1    11111
            11111
            11111
            11111
            11111
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",1);
        }
        printf("\n");
    }
    return 0;
}
*/
//=============================================================================
/*QUE 2
11111
00000
11111
00000
11111

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------------

/*QUE 3
01010
01010
01010
01010
01010

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j%2==0)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",0);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------
///4
/*
 1 1 1 1 1
 1 0 0 0 1
 1 0 0 0 1
 1 0 0 0 1
 1 1 1 1 1

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || j== 4 || i==4 ||j==0)
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//==============================================================================
/*QUE5
11111
11111
11011
11111
11111
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3 && j==3)
            {
                printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
/*QUE6
10101
01010
10101
01010
10101
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("%d",1);
                }
                else
                {
                    printf("%d",0);
                }
            }
            else
            {
                if(j%2==0)
                {
                    printf("%d",0);
                }
                else
                {
                    printf("%d",1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
/*QUE 7:
11011
11011
00000
11011
11011
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==3 || j==3)
            {
                printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
        }
        printf("\n");
    }
    return 0;
}

*/
//-----------------------------------------------------------------------------------------------------
///8
 /*
 1 0 0 0 1
 0 1 0 1 0
 0 0 1 0 0
 0 1 0 1 0
 1 0 0 0 1

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           if(i==j || j==(4-i))
           {
               printf(" %d",1);

           }
           else
           {
               printf(" %d",0);
           }
        }

        printf("\n");
    }

    return 0;
}
*/
//==========================================================================
///9
/*
 1 1 1 1 1
 1 0 0 0 1
 1 0 0 0 1
 1 0 0 0 1
 1 1 1 1 1

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((i==0 || i==4) && (j>=1 && j<=3))
            {
                printf(" 1");
            }
            else if((j==0 || j==4)&&(i>=1 && i<=3))
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//====================================================================
///10
/*
 1 1 1 1 1
 2 2 2 2 2
 3 3 3 3 3
 4 4 4 4 4
 5 5 5 5 5
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf(" %d",i+1);
        }
        printf("\n");
    }
}
*/
//======================================================================
///11
/*
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5

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
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }
}
*/
//====================================================================
///12
/*
 1 2 3 4 5
 2 3 4 5 6
 3 4 5 6 7
 4 5 6 7 8
 5 6 7 8 9
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf(" %d",i+j+1);
        }
        printf("\n");
    }
}
*/
//======================================================================
///13
/*
 1 2 3 4 5
 6 7 8 9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25

#include<stdio.h>
int main()
{
    int i,j;
    int num=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf(" %d",num);
            num++;
        }

        printf("\n");
    }
    return 0;
}
*/
//=========================================================================
///14
/*
 5 5 5 5 5
 5 4 4 4 4
 5 4 3 3 3
 5 4 3 2 2
 5 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j,num=5;

    for(i=0;i<5;i++)
    {
        num=5;
        for(j=0;j<5;j++)
        {
            if(j<i)
            {
                printf(" %d",num);
                num--;
            }
            else
            {
                printf(" %d",num);
            }
        }

        printf("\n");
    }
    return 0;
}
*/
//======================================================================
 ///15
 /*
 1 2 3 4 5
 2 3 4 5 5
 3 4 5 5 5
 4 5 5 5 5
 5 5 5 5 5

#include<stdio.h>
int main()
{
    int i,j,num=1;


    for(i=0;i<5;i++)
    {
        num=i+1;
        for(j=0;j<5;j++)
        {
            if(j>=(4-i))
            {
                printf(" 5");
            }
            else
            {
                printf(" %d",num);
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//======================================================================
///16
/*
 1 2 3 4 5
 2 3 4 5 1
 3 4 5 2 1
 4 5 3 2 1
 5 4 3 2 1


#include<stdio.h>
int main()
{
    int i,j,num=1;

    for(i=0;i<5;i++)
    {
        num=i+1;
        for(j=0;j<5;j++)
        {
            if(j>(4-i))
            {
                printf(" %d",5-j);

            }
            else
            {
                printf(" %d",num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//======================================================================
///17
/*
 1 2 3 4 5
 2 1 2 3 4
 3 2 1 2 3
 4 3 2 1 2
 5 4 3 2 1


#include<stdio.h>
int main()
{
    int i,j;
    int num=1,num2;

    for(i=0;i<5;i++)
    {
        num=1;
        for(j=0;j<5;j++)
        {

            if(j>=i)
            {
                printf(" %d",num);
                num++;
            }

            else if(i>=j)
            {
                num2=i;
                printf(" %d",(num2+1)-j);
            }

        }

        printf("\n");
    }

    return 0;
}
*/
//========================================================================
///18
/*
 5 5 5 5 5 5 5 5 5
 5 4 4 4 4 4 4 4 5
 5 4 3 3 3 3 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 2 1 2 3 4 5
 5 4 3 2 2 2 3 4 5
 5 4 3 3 3 3 3 4 5
 5 4 4 4 4 4 4 4 5
 5 5 5 5 5 5 5 5 5

#include<stdio.h>
int main()
{
    int i,j;
    int num=5;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i==0 || j==0 || j==8 || i==8)
            {
                printf(" %d",num);
            }

            else if(i==1||j==1||i==7 ||j==7)
            {
                printf(" %d",num-1);
            }
            else if(i==2||j==2||i==6||j==6)
            {
                printf(" %d",num-2);
            }
            else if(i==3||j==3||i==5||j==5)
            {
                printf(" %d",num-3);
            }
            else
            {
                printf(" %d",num-4);
            }
        }
        printf("\n");
    }
}
*/
//========================================================================
///19
/*
  1  2  3  4  5
 16 17 18 19  6
 15 24 25 20  7
 14 23 22 21  8
 13 12 11 10  9

#include<stdio.h>
int main()
{
    int i,j;
    int num=1,p=16,q=p,a;
    for(i=0;i<5;i++)
    {
        a=24;
        for(j=0;j<5;j++)
        {
            if((i==0&&i<5)|| j==4)
            {
                printf("  %d",num);
                num++;
            }
            else if(i==1 && j<=3)
            {
                printf(" %d",p);
                p++;
            }
            else if(j==0 && i>=1)
            {
                printf(" %d",q-1);
                q--;
            }
            else if(j==3 && (i>=2&&i<=3))
            {
                printf(" %d",p);
                p++;
            }
            else if(i==4 && (j<=3 &&j>=1))
            {
                printf(" %d",q-1);
                q--;
            }
            else
            {
                if(i==2 && j<3)
                {
                    printf(" %d",a);
                    a++;
                }
                else
                {
                    printf(" %d",a-1);
                    a--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//==========================================================================================================================
 ///20
 /*
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

#include<stdio.h>
int main()
{
    int i,j;
    int num=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf(" %d",num);
            }
        }
        num++;
        printf("\n");
    }
}
*/
//================================================================================================
///21
/*
 5 5 5 5 5
 4 4 4 4
 3 3 3
 2 2
 1

#include<stdio.h>
int main()
{
    int i,j;
    int num=5;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num);
            }
        }
        num--;
        printf("\n");
    }
}
*/
//==============================================================================================
///22
/*
 1 1 1 1 1
 2 2 2 2
 3 3 3
 4 4
 5

#include<stdio.h>
int main()
{
    int i,j;
    int num=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num);
            }
        }
        num++;
        printf("\n");
    }
    return 0;
}
*/
//===========================================================================================
///23
/*
 5
 4 4
 3 3 3
 2 2 2 2
 1 1 1 1 1

#include<stdio.h>
int main()
{
    int i,j;
    int num=5;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf(" %d",num);
            }
        }
        num--;
        printf("\n");
    }

    return 0;
}
*/
//=================================================================================================
///24
/*
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

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
            if(i>=j)
            {
                  printf(" %d",num);
                num++;
            }

        }
        printf("\n");
    }

    return 0;
}
*/
//=================================================================================================
///25
/*
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
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num);
                num++;
            }

        }
        printf("\n");
    }

    return 0;
}
*/
//================================================================================================
///26
/*
 1
 2 1
 3 2 1
 4 3 2 1
 5 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=i;
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf(" %d",(num+1)-j);
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//===============================================================================================
///27
/*
 5 4 3 2 1
 4 3 2 1
 3 2 1
 2 1
 1

#include<stdio.h>
int main()
{
    int i,j;
    int num=5;

    for(i=0;i<5;i++)
    {
       num=5;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num-(i+j));
                //num--;
            }
        }

        printf("\n");
    }
    return 0;
}
*/
//==================================================================================================
 ///28
 /*
 5
 5 4
 5 4 3
 5 4 3 2
 5 4 3 2 1

#include<stdio.h>
int main()
{

    int i,j;
    int num;


    for(i=0;i<5;i++)
    {
        num=5;
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf(" %d",num);
                num--;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//==================================================================================================
///29
/*
 5 4 3 2 1
 5 4 3 2
 5 4 3
 5 4
 5

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=5;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num);
                num--;
            }
        }
        printf("\n");
    }


    return 0;
}
*/
//==============================================================================================
 ///30
 /*
 5
 4 5
 3 4 5
 2 3 4 5
 1 2 3 4 5

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=5;
        for(j=0;j<5;j++)
        {
            if(i==j)
            {
                printf(" %d",num);
            }
            else if(i>j)
            {
                printf(" %d",(num-i)+j);
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
//==================================================================================================
///31
/*
 1 2 3 4 5
 2 3 4 5
 3 4 5
 4 5
 5

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
            if(j<=(4-i))
            {
                printf(" %d",num+(i+j));
            }
        }
        printf("\n");
    }
}
*/
//=================================================================================================
 ///32
 /*
 1
 2 3
 3 4 5
 4 5 6 7
 5 6 7 8 9

#include<stdio.h>
int main()
{
    int i,j,num;
    for(i=0;i<5;i++)
    {
        num=1;
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf(" %d",num+(i+j));
            }
        }
        printf("\n");
    }
}
*/
//==================================================================================================
///33
 /*
 5 6 7 8 9
 4 5 6 7
 3 4 5
 2 3
 1

#include<stdio.h>
int main()
{
    int i,j;

    int num;

    for(i=0;i<5;i++)
    {
        num=5;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",(num+j)-i);
            }
        }
        printf("\n");
    }
}
*/
//=========================================================================
///34
/*
 1 3 5 7 9
 3 5 7 9
 5 7 9
 7 9
 9

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=(i*2)+1;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num);
                num=num+2;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//==============================================================================
///35
/*
 1
 1 0
 1 0 1
 1 0 1 0
 1 0 1 0 1
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j%2==0)
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//============================================================================
///51  unsolved

#include<stdio.h>
int main()
{
    int i,j;
    int num=1,k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<3)
            {
                if(j<=i)
                {
                    if(i%2!=0)
                    {
                        printf(" %d",num);
                        num--;
                    }
                    else
                    {
                        printf(" %d",num);
                        num++;
                    }
                    k++;
                }
            }
        }
        num=num+k;
        int p=k;
        printf("\n");
    }

    return 0;
}

//================================================================================
///50
/*
 1
 2 4
 7 11 16
 22 29 37 46
 56 67 79 92 106

#include<stdio.h>
int main()
{
    int i,j;
    int num=1,k=1,num1,p;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf(" %d",num);
                num=num+k;
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//============================================================================
///49
/*
 1
 2 6
 3 7 10
 4 8 11 13
 5 9 12 14 15

#include<stdio.h>
int main()
{
    int i,j;
    int k,num;
    for(i=0;i<5;i++)
    {
        k=4;
        num=i+1;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf(" %d",num);
            }
            num=num+k;
            k--;
        }
        printf("\n");
    }
    return 0;
}
*/
//==============================================================================
///48
/*

 1         1
 1 2       2 1
 1 2 3     3 2 1
 1 2 3 4   4 3 2 1
 1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j;
    int num,num2;

    for(i=0;i<5;i++)
    {
        num=1;
        num2=i+1;
        for(j=0;j<10;j++)
        {
            if(j<=i)
            {
                printf(" %d",num);
                num++;
            }
            else if(j>=5 && j<=(4+(i+1)))
            {
                printf(" %d",num2);
                num2--;
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
//=======================================================================
///47
/*
 1                                      //1
 2 3                                    //2
 4 5 6 7                                //4
 8 9 1 2 3 4 5 6                        //8
 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4        //16

#include<stdio.h>
int main()
{
    int i,j;
    int num=1,p;

    int k=1;
    for(i=1;i<6;i++)
    {
        for(j=1;j<17;j++)
        {
            if(i<=5)
            {
                if(j<=k)
                {
                    printf(" %d",num);
                    num++;
                    if(num>9)
                    {
                        num=1;
                    }
                }
            }
            else
            {
                    printf(" %d",num);
                    num++;
                    if(num>9)
                    {
                        num=1;
                    }
            }
        }
        k=k+k;
        printf("\n");
    }

    return 0;
}
*/
//===========================================================================
///46
/*
 1
 2 1
 1 2 3
 4 3 2 1
 1 2 3 4 5

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2;

    for(i=1;i<=5;i++)
    {
        num1=1;
        num2=i;

        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf(" %d",num2);
                num2--;
            }
            else
            {
                printf(" %d",num1);
                num1++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//==========================================================================
///45
/*
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15

# include<stdio.h>
int main()
{
    int i,j;
    int num=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
*/
//==========================================================================
///43
/*
 1
 1 2 1
 1 2 3 2 1
 1 2 3 4 3 2 1
 1 2 3 4 5 4 3 2 1

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2,num3;

    for(i=0;i<5;i++)
    {
        num1=1;
        num2=i;
        for(j=0;j<9;j++)
        {
            if(j<=i)
            {
                printf(" %d",num1);
                num1++;
            }
            else if(j>=2 &&i>=1 && j<=i+i)
            {
                printf(" %d",num2);
                num2--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//===========================================================================
///42
/*
 2
 2 4 2
 2 4 6 4 2
 2 4 6 8 6 4 2
 2 4 6 8 10 8 6 4 2

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2;


    for(i=0;i<5;i++)
    {
        num1=2;
        num2=i+i;
        for(j=0;j<9;j++)
        {
            if(j<=i)
            {
                printf(" %d",num1);
                num1=num1+2;
            }
            else if(j>=2 && i>=1 && j<=(i+i))
            {
                printf(" %d",num2);
                num2=num2-2;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//==============================================================================
///41
/*
 1
 1 3 1
 1 3 5 3 1
 1 3 5 7 5 3 1
 1 3 5 7 9 7 5 3 1

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2;

    for(i=0;i<5;i++)
    {
        num1=1;
        num2=(i*2)-1;
        for(j=0;j<9;j++)
        {
            if(j<=i)
            {
                printf(" %d",num1);
                num1=num1+2;
            }
            else if(j>=2 && i>=1 && j<=(i*2))
            {
                printf(" %d",num2);
                num2=num2-2;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//===============================================================================
///40
/*
 1
 2 4
 1 3 5
 2 4 6 8
 1 3 5 7 9


#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2;

    for(i=1;i<=5;i++)
    {
        num1=1;
        num2=2;

        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf(" %d",num2);
                num2=num2+2;
            }
            else
            {
                printf(" %d",num1);
                num1=num1+2;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//============================================================================
///39
/*
 1
 1 2 3
 1 2 3 4 5
 1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8 9

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2;

    for(i=0;i<5;i++)
    {
        num1=1;
        for(j=0;j<9;j++)
        {
            if(j<=(i*2))
            {
                printf(" %d",num1);
                num1++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//================================================================================
///38
/*
 1
 1 1
 1 0 1
 1 0 0 1
 1 1 1 1 1

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==4 || i==j)
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//=============================================================================
///36

/*
 1
 0 0
 1 1 1
 0 0 0 0
 1 1 1 1 1

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
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//============================================================================
///49
/*
#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2;

    for(i=0;i<5;i++)
    {
        num1=i+1;
        num2=4;
        for(j=0;j<=i;j++)
        {
            printf("%d",num1);
            num1=num1+num2;
        }

        printf("\n");
    }
    return 0;
}
*/
//===========================================================================
///51
/*
#include<stdio.h>
int main()
{
    int i,j;
    int num=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                printf(" %d",num);
                num++;
            }
            else
            {

            }
        }
        printf("\n");
    }
    return 0;
}
*/
//============================================================================
///52
 /*
 1
 2 2
 3 3 3
 2 2 2 2
 1 1 1 1 1

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2,num3;

    for(i=0;i<5;i++)
    {
        num1=i+1;
        num2=i-1;

        for(j=0;j<=i;j++)
        {
            if(i<3)
            {
                printf(" %d",num1);
            }
            else if(i==3)
            {
                printf(" %d",num2);
            }
            else
            {
                num3=num2-2;
                printf(" %d",num3);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//=====================================================================================
///53
 /*
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
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
                printf(" %d",num);
                num++;
            }
        }
        printf("\n");
    }


    return 0;
}
*/
//==========================================================================
///54
/*
 1 2 3 4 5
 2 3 4 5
 3 4 5
 4 5
 5

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=1;i<6;i++)
    {
        num=i;
        for(j=1;j<=(6-i);j++)
        {
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
*/
//====================================================================================
///55
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
    int i,j;
    int num;

    for(i=0;i<9;i++)
    {
        num=1;
        for(j=0;j<5;j++)
        {
            if(j<=i && i<=4)
            {
                printf("%d",num);
                num++;
            }
            else
            {
                if(i>=4 && j<=(8-i))
                {
                    printf("%d",num);
                    num++;
                }
            }

        }
        printf("\n");
    }
}
*/
//=====================================================================================
///56
/*
 1
 1 2 3
 1 2 3 4 5
 1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8 9
 1 2 3 4 5 6 7
 1 2 3 4 5
 1 2 3
 1

#include<stdio.h>
int main()
{
    int i,j;
    int num,num3,num2;

    for(i=0;i<9;i++)
    {
        num=1;
        num3=1;
        for(j=0;j<9;j++)
        {
            if(i<5 && j<=(i*2))
            {
                printf(" %d",num);
                num++;
            }
            else
            {
                if(i>=5 && j<=(8-i)*2)
                {
                    printf(" %d",num3);
                    num3++;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
*/
//================================================================================
///57
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
    int i,j;

    int num1,num2,num3,num4;

    for(i=0;i<10;i++)
    {
        num1=1;
        num2=i;
        num3=1;
        num4=8-i;
        for(j=0;j<9;j++)
        {
            if(i<5)
            {
                if(j<=i)
                {
                    printf("%d",num1);
                    num1++;
                }
                else if(i<5 && j>=2 && j<=(i*2))
                {
                    printf("%d",num2);
                    num2--;
                }
            }
            else
            {
                if(j<=(8-i))
                {
                    printf("%d",num3);
                    num3++;
                }
                else if(j<=(8-i)*2)
                {
                    printf("%d",num4);
                    num4--;
                }
            }

        }
        printf("\n");
    }

    return 0;
}
*/
//=====================================================================================
///58
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
    int i,j;
    int num1,num2,num3,num4;

    for(i=0;i<11;i++)
    {
        num1=1;
        num2=i-1;
        num3=1;
        num4=9-i;
        for(j=0;j<11;j++)
        {
            //1st Half
            if(j==0)
            {
                printf("*");
            }
            else if(i<6)
            {
                if(i>=1 && j>=1 && j<=i)
                {
                    printf("%d",num1);
                    num1++;
                }
                else if(j==(i*2))
                {
                    printf("*");
                }
                else if(j>=3 && i>=2 &&j<=(i*2)-1)
                {
                    printf("%d",num2);
                    num2--;
                }
            }
            //2nd half
            else if (i>=6)
            {
                if(j>=1 && j<5 && j<=(10-i))
                {
                    printf("%d",num3);
                    num3++;
                }
                else if(j==(10-i)*2)
                {
                    printf("*");
                }
                else if(j>=(10-i)+1 && j<=((10-i)*2)-1)
                {
                    printf("%d",num4);
                    num4--;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//========================================================================================================
/*        ===============PATTERN TEST QUETIONS================
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

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
            if(i>=j)
            {
                printf(" %d",num);
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
//===========================================================================================

 1
 2 3
 3 4 5
 5 6 7 8

#include<stdio.h>
int main()
{
    int i,j;
    int num,num2;

    for(i=0;i<4;i++)
    {
        num=i+1;
        num2=num+1;
        for(j=0;j<=i;j++)
        {
            if(j<=i &&i<3)
            {
                printf(" %d",num);
                num++;
            }
            else
            {
                printf(" %d",num2);
                num2++;
            }

        }
        printf("\n");
    }
}
/*
//===================================================================================================

 9 8 7 6 5 4 3 2 1
 8 7 6 5 4 3 2 1
 7 6 5 4 3 2 1
 6 5 4 3 2 1
 5 4 3 2 1
 4 3 2 1
 3 2 1
 2 1
 1

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<9;i++)
    {
        num=9;
        for(j=0;j<9;j++)
        {
            if(j<=(8-i))
            {
                printf(" %d",num-(i+j));
            }
        }
        printf("\n");
    }
    return 0;
}


//===============================================================================================
/*
    54321
    4321
    321
    21
54321
4321
321
21
1

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2,num3;


    for(i=0;i<9;i++)
    {
        num1=5-i;
        num2=9-i;
        for(j=0;j<9;j++)
        {
            if(j>3 && i<5)
            {
                if(j<=(8-i))
                {
                    printf("%d",num1);
                    num1--;
                }
            }
            else if(i>3 && j<5 )
            {
                if((i+j)<9)
                {
                    printf("%d",num2);
                    num2--;
                }

            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}
*/
//==================================================================================================
 /*
    1
   121
  12321
 1234321
123454321
123454321
 1234321
  12321
   121
    1

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2,num3,num4;

    for(i=0;i<10;i++)
    {
        num1=1;
        num2=i;
        num3=1;
        num4=9-i;
        for(j=0;j<9;j++)
        {
            if(i<5 && j<5)
            {
                if(j>=(4-i))
                {
                    printf("%d",num1);
                    num1++;
                }
                else
                {
                    printf(" ");
                }
            }
            else if(j>4 && i<5)
            {
                if(j<=(4+i))
                {
                    printf("%d",num2);
                    num2--;
                }
            }
            else if(i>4 && j<5)
            {
                if(i<=(5+j))
                {
                    printf("%d",num3);
                    num3++;
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if((i+j)<14)
                {
                    printf("%d",num4);
                    num4--;
                }
            }

        }
        printf("\n");
    }
}
*/
//=============================================================================================
/*

1
121
12321
1234321
      1234321
        12321
          121
            1

#include<stdio.h>
int main()
{
    int i,j;
    int num1,num2,num3,num4;

    for(i=0;i<8;i++)
    {
        num1=1;
        num2=i;
        num3=7-i;
        num4=1;
        for(j=0;j<13;j++)
        {
            if(i<4)
            {
                if(j<=i)
                {
                    printf("%d",num1);
                    num1++;
                }
                else if(j<=(i+i) && j>i)
                {
                    printf("%d",num2);
                    num2--;
                }
            }
            else
            {
                if(j>=(i*2)-2)
                {
                    if(j<=(5+i))
                    {
                        printf("%d",num1);
                        num1++;
                    }
                    else if(j>(i+5))
                    {
                        printf("%d",num3);
                        num3--;
                    }
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

*/
//================================================================================
//=============================================================================================
/* Mock InterView
 1
 2 4
 3 5 7
 4 6 8 10
 5 7 9 11 13

#include<stdio.h>
int main()
{
    int i,j;
    int num;

    for(i=0;i<5;i++)
    {
        num=i+1;
        for(j=0;j<5;j++)
        {
            if(i>=j)
            {
                printf(" %d",num);
                num=num+2;
            }
        }
        printf("\n");
    }
    return 0;
}
 */
 //===============================================================================


//Unsolved
/*


1
3  2
4  5  6
10 9  8  7
11 12 13 14 15
Number pattern 51

1
32
4543
567654
67898765
Number pattern 44


1
01
010
1010
10101
Number pattern 37

*/
