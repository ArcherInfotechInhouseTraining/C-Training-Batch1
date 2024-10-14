///*************** Selection Sort ***********************
/*
#include<stdio.h>
int main()
{
    int x[5],i,j,tmp;

    printf("\n Enter the elements of array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Array Before Sort : ");
    for(i=0;i<5;i++)
    {
        printf("\t %d",x[i]);
    }

    //selection sort

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(x[i]>x[j])
            {
                tmp=x[i];
                x[i]=x[j];
                x[j]=tmp;
            }

        }

    }
    printf("\n Array After Sorting: ");
    for(i=0;i<5;i++)
    {
        printf("\t%d",x[i]);
    }
    return 0;
}
*/

///*************** Sequential search *******************
/*
#include<stdio.h>
int main()
{
    int x[10],no,i,pos,flg=0;
    //pos=-1;

    printf("\n Enter the elements into array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter the no to be searched in array : ");
    scanf("%d",&no);

    for(i=0;i<10;i++)
    {
        if(x[i]==no)
        {
            flg=1;
            pos=i;
            break;
        }
        else
        {
            flg=0;
        }
    }

     if(flg==0)
    {
        printf("\n %d is not present into array",no);
    }
    else
    {
        printf("\n %d is present at %d location",no,pos);
    }


   /* if(pos==-1)
    {
        printf("\n %d is not present into array",no);
    }
    else
    {
        printf("\n %d is present at %d location",no,pos);
    }
    */
    /*
    return 0;
}
*/

///****************** Binary Search ********************

#include<stdio.h>
int main()
{
    int x[10],i,end,mid,start,no,pos,flg=0;

    printf("\n Enter the elements into array : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Enter the number to be searched in array : ");
    scanf("%d",&no);

    start=0;
    end=9;

   do
    {
        mid=(start+end)/2;

        if(x[mid]==no)
        {
            flg=1;
            pos=mid;
            break;
        }
        else if(no<x[mid])
        {
            end=mid-1;
        }
        else if(no>x[mid])
        {
            start=mid+1;
        }
    }while(start<=end);

    if(flg==0)
    {
        printf("\n %d is not present in given array",no);
    }
    else
    {
        printf("\n %d is present at %d location",no,pos);
    }
    return 0;
}









