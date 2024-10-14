
//QUE 1: Intitialize 2D arrays And display it
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    int x[3][3]={ {1,2,3},
                  {4,5,6},
                  {7,8,9}};

    printf("\n Displaying The 2D arrays :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------------

// QUE 2: Input and display the 2D Array
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    //Input an 2D array

    printf("\n Enter the Elements of 2D arrays :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //Displaying That Elements :

    printf("\nDisplaying The Elements Of 2D arrays :\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------------

//QUE 3 : WAP to add every row of array.
/*
#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum;

    //input an arrays Elements
    printf("\nEnter an 2d arrays Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //Displaying That Array:
    printf("\n Displaying An 2D arrays :\n");
    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+x[i][j];
            printf(" %d",x[i][j]);
        }
        printf(" Sum of Row is = %2d",sum);
        printf("\n");
    }

    return 0;
}
*/
//--------------------------------------------------------------------------------------------
//QUE 4 :WAP to store the runs scored by 3 player in 5 matches and
 //display all runs with total
/*
#include<stdio.h>
int main()
{
    int x[3][5],i,j,sum;

    //input

    printf("\nEnter The Runs Of Players :");
    for(i=0;i<3;i++)
    {
        printf("\nPlayer %d:\n",i+1);
        for(j=0;j<5;j++)
        {
            printf("\nMatch %d :",j+1);
            scanf("%d",&x[i][j]);
        }
    }
    //process
    for(i=0;i<3;i++)
    {
        sum=0;
        printf("\n Player %d :",i+1);
        for(j=0;j<5;j++)
        {
            sum=sum+x[i][j];
            printf(" %2d",x[i][j]);
        }
        printf(" Total Runs = %2d ",sum);
        printf("\n");
    }
    return 0;
}
*/
//---------------------------------------------------------------------------------------
/*
    //Modified Program of WAP to store the runs scored by 3 player in 5 matches and
    //display all runs with total

#include<stdio.h>
int main()
{
    int x[3][6],i,j,sum;

    //input

    printf("\nEnter The Runs Of Players :");
    for(i=0;i<3;i++)
    {
        sum=0;
        printf("\nPlayer %d:\n",i+1);
        for(j=0;j<5;j++)
        {
            printf("\nMatch %d :",j+1);
            scanf("%d",&x[i][j]);
            sum=sum+x[i][j];
        }
        x[i][j]=sum;
    }

    //process
    for(i=0;i<3;i++)
    {
        printf("\n Player %d :",i+1);
        for(j=0;j<5;j++)
        {
            printf(" %2d",x[i][j]);
        }
        printf(" Total Runs = %2d ",x[i][j]);
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------
/*
QUE 5: WAP to add two arrays

#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],i,j;

    //input x Array
    printf("\n Input Array Of X :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //input y Array:
    printf("\n Enter the Array Of Y :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
    }

    //Displaying All Arrays
    printf("\n X ARRAYS :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n Y ARRAYS :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d",y[i][j]);
        }
        printf("\n");
    }
    printf("\n Z ARRAYS :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//-----------------------------------------------------------------------------------
/*
//QUE 6 : WAP to add multi arrays
#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],i,j,k;

    //inputs
    printf("\nEnter x Array :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n Enter Y arrays :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    //process

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=0;
            for(k=0;k<3;k++)
            {
                z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
            }
        }
    }

    //Diplay The all Arrays

    printf("\nDisplay X arrays :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    printf("\nDisplay Y arrys\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",y[i][j]);
        }
        printf("\n");
    }
    printf("\nDisplay Z array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %5d",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------
/*
// QUE 7 :WAP to display the transpose of matrix

#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    //Input
    printf("\nEnter An array :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[j][i]);
        }
        printf("\n");
    }
    return 0;
}
*/
//------------------------------------------------------------------------------------------
/*
QUE 8:
C Program to Read a Matrix and find Sum and Product of all elements
This program will read a matrix and prints sum and product of all elements of the two dimensional array.
Input : Enter number of Rows :3
        Enter number of Cols :3
Output:Matrix is :
1	1	1
2	2	2
3	3	3

Sum :18
Product: 216


#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum=0,product=1;

    //input
    printf("\nEnter an Arrays Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    //dislay
    printf("\n Display The Array Elements\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+x[i][j];
            product=product*x[i][j];
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Sum = %d ",sum);
    printf("\n The Product = %d ",product);
    return 0;
}
*/
//------------------------------------------------------------------------------------------------
/*QUE 9:
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


#include<stdio.h>
int main()
{
    int x[3][3],i,j;

    //input
    printf("\nEnter an array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf(" %d",x[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nDisplay The Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
//------------------------------------------------------------------------------------------
/*
QUE 10
C Program to find sum and subtraction of two matrices
This C program will read two matrices and find their sum (addition) and subtraction,
in addition matrix addition of both matrixes’ elements will be assigned and in the
subtraction matrix, subtraction of both matrixes’ elements will be assigned.

#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],z[3][3],s[3][3],i,j,Add,sub;

    //input

    printf("\nEnter The Elements of X array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nEnter the Elements Of Y arrays:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }



   //process
    for(i=0;i<3;i++)
    {
        //Add=0;
        //sub=0;
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
            s[i][j]=x[i][j]-y[i][j];
        }
        printf("\n");

    }

    //Displaying all Arrays

    printf("\n Array Of X :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }

    printf("\n Array Of Y :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",y[i][j]);
        }
        printf("\n");
    }

    printf("\n Array Of Additon :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",z[i][j]);
        }
        printf("\n");
    }

    printf("\n Array Of subStraction :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------
/*
QUE 11 :
C program to find the trace of matrix
Trace of a n x n square matrix is sum of diagonal elements. Given a square matrix, we have to find the trace of matrix.
Input:
Matrix:
 9 8 7
 5 4 6
 1 2 3
Output:
Trace of matrix is: 16


#include<stdio.h>
int main()
{
    int x[3][3],i,j,sum=0;
    printf("\nEnter The Array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+x[i][j];
            }
        }
    }
    printf("\ndisplay The array Of x:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n The Sum Or trace Of Matrix is %d",sum);
    return 0;
}
*/
//------------------------------------------------------------------------------------------
/*
QUE 12:
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


#include<stdio.h>
int main()
{
    int x[3][3],i,j,sumM=0,sumO=0;

    printf("\nEnter an Elements Of An arrays :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sumM=sumM+x[i][j];
            }
        }
    }
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
        sumO=sumO+x[i][j];
    }

    //or

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==(2-i))
            {
                sumO=sumO+x[i][j];
            }
        }
    }

    printf("\nDisplay An Arrays Elements :\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum Of main Diagonal = %d ",sumM);
    printf("\nThe sum Of Opposite Diagonal = %d ",sumO);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------
/*
QUE 13:
C program to find the frequency of even numbers in matrix
Given a matrix, we have to find the frequency of even numbers in matrix using C program.


#include<stdio.h>
int main()
{
    int x[3][3],i,j,cnt=0;

    //input
    printf("\nEnter an Array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
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
    printf("\nDisplay The Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Count / Frequency Of Even Numbers in Array Is = %d",cnt);

    return 0;
}
*/
//--------------------------------------------------------------------------------------------
/*
QUE 14:
C program to arrange row elements in ascending order
Given an array, we have to arrange the row elements in ascending order using C program.

#include<stdio.h>
int main()
{
    int x[3][3],i,j,a,b,temp;
    //input
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(a=0;a<3;a++)
            {
                for(b=0;b<3;b++)
                {
                    if(x[i][j]<x[a][b])
                    {
                        temp=x[i][j];
                        x[i][j]=x[a][b];
                        x[a][b]=temp;
                    }
                }

            }
        }
    }

    printf("\nDisplay The Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    return 0;            //Matrix All elements wull Get Sorted
}
*/
//------------------------------------------------------------------------------------------
/*QUE : 15
C program to arrange row elements in ascending order
Given an array, we have to arrange the row elements in ascending order using C program.


#include<stdio.h>
int main()
{
    int x[3][3],i,j,a,b,temp;
    //input
    printf("\nEnter An Array Of elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                for(a=j+1;a<3;a++)
                {
                    if(x[i][j]>x[i][a])
                    {
                        temp=x[i][j];
                        x[i][j]=x[i][a];
                        x[i][a]=temp;
                    }
                }
        }
    }

    printf("\nDisplay The Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------------

/*QUE 16:
C program to arrange column elements in ascending order
Given a matrix, we have to arrange column elements in ascending order using C program.

#include<stdio.h>
int main()
{
    int x[3][3],i,j,temp,a,b;

    //input
    printf("\n Input an Array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nDisplay The Array Elements beofore ssorting :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                for(b=i+1;b<3;b++)
                {
                    if(x[i][j]>=x[b][j])
                    {
                        temp=x[i][j];
                        x[i][j]=x[b][j];
                        x[b][j]=temp;
                    }
                }

        }
    }
    //display
    printf("\nDisplay The Array Elements after sorting:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------------------
/*
QUE 17:
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


#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],a[3][3],b[3][3];
    int i,j,flag=0;

    //input for x array
    printf("\nEnter the X array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //input for y array
    printf("\nEnter the Y array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    //process
    /*
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=x[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=y[i][j];
        }
    }

    if(a[i][j]==b[i][j])
    {
        printf("\nIdentical Matrix");
    }
    else
    {
        printf("\nNot Identical");
    }

    printf("\n A array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n B array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }

    //or

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(x[i][j]!=y[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("\n Not Identical");
    }
    else
    {
        printf("\n Identical ");
    }
    return 0;
}
*/
//--------------------------------------------------------------------------
/*
QUE 18:
C program to check a given matrix is a sparse matrix or not
Given a matrix, and we have to check whether the matrix is a sparse matrix or not using C program.
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
 Output : Matrix is not aa Sparse Matrix


#include<stdio.h>
int main()
{
    int x[3][3];
    int i,j,cnt=0;

    //input
    printf("\nEnter The Elements Of X Array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]==0)
            {
                cnt++;
            }
        }
    }
   if(cnt>9/2)
   {
        printf("\nSpare matrix :");
   }
   else
   {
       printf("\nNot Spare Matrix");
   }

   printf("\nDisplay The Elements of X array :\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf(" %d",x[i][j]);
       }
       printf("\n");
   }
    return 0;
}
*/
//-------------------------------------------------------------------------
/*
QUE 19: Using flag Identical Matrix

#include<stdio.h>
int main()
{
    int x[3][3],y[3][3],a[3][3],b[3][3];
    int i,j,flag=0;

    //input for x array
    printf("\nEnter the X array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    //input for y array
    printf("\nEnter the Y array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }

    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i][j]!=y[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nIdentical");
    }
    else
    {
        printf("\nNot Identical");
    }

    printf("\n A array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }

    printf("\n B array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//------------------------------------------------------------------------
/*
QUE 20 :
C Program to print lower diagonal of a matrix
This C program will read a square matrix and print its lower diagonal.
Output:
Lower Triangular Matrix
2 0 0
4 5 0
6 7 8

#include<stdio.h>
int main()
{
    int x[3][3];
    int i,j;

    //input
    printf("\nEnter The array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\ndisplay Metrix before Process:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }

    //process
    printf("\nDisplay The Matrix Of Lower diagonal:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<=i)
            {
                printf(" %d",x[i][j]);
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
//------------------------------------------------------------------------
/*QUE 21

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

#include<stdio.h>
int main()
{
    int x[3][3];
    int i,j;

    //input
    printf("\nEnter an Array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nDisplay Upper Diagonal Elements :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            {
                printf(" %d",x[i][j]);
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
//----------------------------------------------------------------------------
/*
Que 22:
C program to check a given matrix is an identity matrix or not
Given a matrix, we have to check whether the matrix is an identity matrix or not using C program.
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
    int x[3][3];
    int i,j,flag=0;

    //input
    printf("\nEnter the array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n Display The Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }
    //process
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(x[i]==x[j] && x[i][j]==1)
            {
                flag=1;
            }
            else if(x[i][j]==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
        printf("\n");
    }
    if(flag==1)
    {
        printf("\n Identity:");
    }
    else
    {
        printf("\n Not Identity:");
    }

    return 0;
}
*/
//-----------------------------------------------------------------------------
/*
QUE 23
C program to interchange the rows in the matrix
Given a matrix, and we have to interchange the specified rows
in the matrix using C program.


#include<stdio.h>
int main()
{
    int x[3][3];
    int i,j,row1,row2,temp;

    //input
    printf("\nEnter The Array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }


    printf("\nDisplaying Elements Before changing Rows :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }


    //process
    printf("\n Row No You Want to interchange :");
    scanf(" %d %d",&row1,&row2);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp=x[row1][j];
            x[row1][j]=x[row2][j];
            x[row2][j]=temp;
        }
    }

    printf("\nDisplaying Elements After changing Rows :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
//--------------------------------------------------------------------------------------------
/*
QUE 24:
C program to interchange the columns in the matrix
Given a matrix, and we have to interchange the specified
columns using C program.

#include<stdio.h>
int main()
{
    int x[3][3];
    int i,j,col1,col2,temp;

    //input
    printf("\nEnter an Array Elements :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\nDisplay The Array Elements before Exchanging Column:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }

    //process
    printf("\nEnter Your Column Number You Want To Exchange:");
    scanf(" %d %d",&col1,&col2);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp=x[i][col1];
            x[i][col1]=x[i][col2];
            x[i][col2]=temp;
        }
    }

    printf("\nDisplay The Array Elements after Exchanging Column:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
//----------------------------------------------------------------------------






















