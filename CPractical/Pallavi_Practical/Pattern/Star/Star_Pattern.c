
/// 1.
/*
*****
*****
*****
*****
*****

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


//2.
/*
*****
*   *
*   *
*   *
*****

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for( j=0 ; j<5 ; j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==4)
            {
                printf("*");
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


///3.
/*
*
**
***
****
*****

#include<stdio.h>
int main()
{
    int i , j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

*/

//4.
/*
*****
****
***
**
*

#include<stdio.h>
int main()
{
    int i,j;

    for( i=0 ; i<5 ; i++)
    {
        for( j=0 ; j<=(4-i) ; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
*/


//5.
/*

*****
 ****
  ***
   **
    *
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
            if(j>=i)
            {
                printf("*");
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

/*
//6
              *
            * *
          * * *
        * * * *
      * * * * *
*/
/*

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)\
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//7.
                     *
		           * * *
                 * * * * *
               * * * * * * *
             * * * * * * * * *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<(5+i) ; j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//8.
1
12
123
1234
12345
123456

#include<stdio.h>
int main()
{
    int i,j;

    for(i=1 ; i<=6 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//9.
ABCDEF
ABCDE
ABCD
ABC
AB
A

#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=0 ; i<6 ; i++)
    {
        a=65;
        for(j=0 ; j<=(5-i) ; j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//10.

ABCDEF
 ABCDE
  ABCD
   ABC
    AB
     A

#include<stdio.h>
int main()
{
    int i,j,a;

    for(i=0 ; i<6 ; i++)
    {
        a=65;
        for(j=0 ; j<6 ; j++)
        {
            /*
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("%c",a);
                a++;
            }
            */
            //OR

            /*
            if(j>=i)
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

/*
//11.
*********
 *******
  *****
   ***
    *
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j>=i && j<=(8-i))
            {
                printf("*");
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

/*
//12.
* * * * * * * * *
* *           * *
*   *       *   *
*     *   *     *
*       *       *
*     *   *     *
*   *       *   *
* *           * *
* * * * * * * * *
 */
 /*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if( i==0 || j==0 || i==8 || j==8)
            {
                printf("* ");
            }
            else if(j==i || j==(8-i))
            {
                printf("* ");
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

/*
//13.
*
**
* *
*  *
*   *
*    *
*     *
*      *
*********
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j==0 || i==8 || i==j)
            {
                printf("*");
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
/*
//14.
                *
              * *
            *   *
          *     *
        *       *
      *         *
    *           *
  *             *
* * * * * * * * *
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(i==8 || j==8 || j==(8-i))
            {
                printf("* ");
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

/*
/*
//15.

* * * * * * * * *
  *             *
    *           *
      *         *
        *       *
          *     *
            *   *
              * *
                *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(i==0 || j==8 || j==i)
            {
                printf("* ");
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

//16.
/*
*********
*      *
*     *
*    *
*   *
*  *
* *
**
*
*/

/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(i==0 || j==0 || j==(8-i))
            {
                printf("*");
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

//17.
/*
* * * * *
  * * * *
    * * *
      * *
        *
        *
      * *
    * * *
  * * * *
* * * * *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==0 || i==9 || j==4)
            {
                printf("* ");
            }
            else if(j<i && i<4)
            {
                printf("  ");
            }
            else if(j<(9-i) && i>=4)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//18
/*
            +
            +
            +
            +
            +
            +
+ + + + + + + + + + + + +
            +
            +
            +
            +
            +
            +

*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<13 ; i++)
    {
        for(j=0 ; j<13 ; j++)
        {
            if(i==6 || j==6)
            {
                printf("+ ");
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

//19.
/*
*                 *
  *             *
    *         *
      *     *
        * *
        * *
      *     *
    *         *
  *             *
*                 *

*/
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<10 ; j++)
        {
            if(i==j || j==(9-i))
            {
                printf("* ");
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

//20
/*
* * * * *
* * * *
* * *
* *
*
*
* *
* * *
* * * *
* * * * *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==0 || i==9 || j==0)
            {
                printf("* ");
            }
            else if(j<=(4-i) && i<=4)
            {
                printf("* ");
            }
            else if(j<(i-4) && i>4)
            {
                printf("* ");
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


//21.
/*
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
   * * * * * * *
  * * * * * * * *
 * * * * * * * * *
* * * * * * * * * *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<10; j++)
        {
            if(j<(9-i))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//22
/*
* * * * *
 * * * *
  * * *
   * *
    *
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
            if(j>=i)
            {
                printf("* ");
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

/*
//23.
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j<i || j<=(9-i))
            {
                printf(" ");
            }

            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/

//24.
/*
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j>=(4-i) && i<=4)
            {
                printf("* ");
            }
            else if(j>=(i-4) && i>4)
            {
                printf("* ");
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

//25.
/*
* * * * *
 * * * *
  * * *
   * *
    *
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
            if(j>=i)
            {
                printf("* ");
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


//26
/*
***********
 *       *
  *     *
   *   *
    * *
     *
    */
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<6 ; i++)
    {
        for(j=0 ; j<11 ; j++)
        {
            if(i==0 || i==j || j==(10-i))
            {
                printf("*");
            }
            /*if( j==i)
            {
                printf("*");
            }
            else if(i==0)
            {
                printf("*");
            }
            else if(j==(10-i))
            {
                printf("*");
            }
            */
            /*
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

//27
/*
 ***
*   *
*   *
*   *
 ***
*   *
*   *
*   *
 ***
 */
 /*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i==0 && (j==1||j==2||j==3))
            {
                printf("*");
            }
            else if(i==4 && (j==1||j==2||j==3))
            {
                printf("*");
            }
            else if(j==0 && (i==1||i==2||i==3||i==5||i==6||i==7))
            {
                printf("*");
            }
            else if(j==4 && (i==1||i==2||i==3||i==5||i==6||i==7))
            {
                printf("*");
            }
            else if(i==8 && (j==1||j==2||j==3))
            {
                printf("*");
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

//28
/*
    *
   *  *
  *    *
 *      *
*        *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j==(4-i) )
            {
                printf("* ");
            }

            else if( j==(4+i))
            {
                printf("* ");
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

//29
/*
*        *
 *      *
  *    *
   *  *
    *
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(i==j || j==(8-i))
            {
                printf("* ");
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


//30
/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9; j++)
        {
            if( (j==(4-i) || j==(4+i)) && i<=4)
            {
                printf("*");
            }
            else if(i>4 && (j==(i-4) || (j+i)==12))
            {
                printf("*");
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

//31
/*
   ******
  ******
 ******
******
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j>=(3-i) && j<(9-i))
            {
                printf("*");
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

//32.
/*
   ******
  *    *
 *    *
******
*/
/*

#include<stdio.h>
int main()
{
    int i ,j;

    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j==(3-i) || (i==0 && j>3))
            {
                printf("*");
            }
            else if(i==3 && j<6)
            {
                printf("*");
            }
            else if(j==(8-i))
            {
                printf("*");
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

///33

/*

*****
  ****
    ***
      **
        *
      **
    ***
  ****
*****


#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=0 ; i<9 ; i++)
    {
        for(j=0 ; j<9 ; j++)
        {
            if(j>=(i+i) && j<=(4+i) && i<5)
            {
                printf("*");
            }
            else if(j>=(8-i)*2 && (j+i)<=12 && i>4)
            {
                printf("*");
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


///34.
/*
* * * * *
 * * * *
  * * *
   * *
    *

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(j>=i)
            {
                printf("* ");
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
///===========================================================================================
///35
/*

  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *


#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>=(2-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<3;j++)
        {
            printf("*");
        }
        for(j=0;j<3;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<4;j++)
        {
            if(j>=(3-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<3;j++)
        {
            printf("*");
        }
         for(j=0;j<3;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //=======
    for(i=0;i<10;i++)
    {
        for(j=0;j<19;j++)
        {
            if(j>=i && j<=(18-i))
            {
                printf("*");
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

///36

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<5 && (j<=(4-i) || j>(4+i) ) )
            {
                printf("*");
            }
            else if(i>4 && (j<=(i-4) || (i+j)>=13 ) )
            {
                printf("*");
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



