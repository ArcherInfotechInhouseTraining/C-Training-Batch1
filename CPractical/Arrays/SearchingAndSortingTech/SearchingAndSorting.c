/*
QUE 1 : WAP on Selection Sort

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10],i,pos=-1,no;

    //input
    printf("\n Enter an Array Elements :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter your number You Want To Search");
    scanf("%d",&no);

    for(i=0;i<10;i++)
    {
        if(x[i]==no)
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        printf("\n Number %d is not found at location :",no);
    }
    else
    {
        printf("\n Number %d is Found at %d location :",no,pos);
    }

    return 0;
}
*/
//------------------------------------------------------------------------------------
/*
QUE 2 : Binary Search
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10],i,start,end,mid,pos=-1,no;

    //input an array
    printf("\n Enter an Array In sorted/acending order :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nEnter the Number You want to search :");
    scanf("%d",&no);

    //process
    start=0;
    end=9;
    do
    {
        mid=(start+end)/2;
        if(x[mid]==no)
        {
            pos=mid;
            break;
        }
        else if(no<x[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }while(start<=end);

    if(pos==-1)
    {
        printf("\n Number %d is not found at Location",no);
    }
    else
    {
        printf("\n Number %d is found at %d location",no,pos);
    }

    return 0;
}
*/
//-----------------------------------------------------------------------------------------
/*
QUE 3 : Selection Sort

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x[10],i,j,temp;

    //Array Input

    printf("\n Enter an Array :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nDisplay An Array Befor Sorting :");
    for(i=0;i<10;i++)
    {
        printf("  %d",x[i]);
    }

    //process
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    printf("\nDisplay An Array after Sorting :");
    for(i=0;i<10;i++)
    {
        printf("  %d",x[i]);
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------------------
/*

QUE 4 :Bubble Sort

#include<stdio.h>
int main()
{
    int x[5],i,j,temp;

    //Input

    printf("\nEnter an Arrays :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nArrays Of Element Before Sort :");
    for(i=0;i<5;i++)
    {
        printf("  %d",x[i]);
    }

    //process

    for(i=0;i<5;i++)
    {
        for(j=0;j<(4-i);j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }

    printf("\nArrays Of Element After Sort :");
    for(i=0;i<5;i++)
    {
        printf("  %d",x[i]);
    }
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------
/*
QUE 5:Insertion Sort

#include<stdio.h>
int main()
{
    int x[5],i,j,temp;

    //Input
    printf("\nEnter an Array Elements :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Array Elements Before sort:");
    for(i=0;i<5;i++)
    {
        printf("  %d",x[i]);
    }

    //process

    for(i=1;i<5;i++)
    {
        temp=x[i];
        j=i-1;
        while(j>=0 && x[j]>temp)
        {
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=temp;
    }

    printf("\n Array Element After Sorting :");
    for(i=0;i<5;i++)
    {
        printf("  %d",x[i]);
    }

    return 0;
}
*/
//------------------------------------------------------------------------------------------------------
/* QUE 5 : WAP to collect all negative elements at left and all positive at rh+ side of array
    e.g.
        Input Array:
	34 -4 23 9 -2 201 -11 85 -34 -1

	output array
	-4  -2 -11 -34 -1 34 23 9 201 85

#include<stdio.h>
int main()
{
    int x[5],i,j,temp;
    //input
    printf("\n Enter the arrays Elements");
    for(i=0;i<5;i++)
    {
        scanf("  %d",&x[i]);
    }
    printf("\n arrays Elements Before sorting");
    for(i=0;i<5;i++)
    {
        printf("  %d",x[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<(4-i);j++)
        {
            if(x[j]>x[j+1] && x[j]>0)
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }

    printf("\n arrays Elements After sorting");
    for(i=0;i<5;i++)
    {
        printf("  %d",x[i]);
    }
    return 0;
}
*/
//--------------------------------------------------------------------------
/*

QUE 6 Wap to find the contiues increasing subsequence in arrat
#include<stdio.h>
int main()
{
    int x[5],i,j,temp;
    //input

    printf("\n Enter an Array Elements :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    //process
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x[i]<x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    printf("\n Displaying The Elements :");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------------------
