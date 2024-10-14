/*
#include<stdio.h>
int main()
{
    int *x;
    char *ch;
    float *ft;
    double *db;

    //size of pointer variable

    printf("\n *x:%u",sizeof(x));
    printf("\n *ch: %u",sizeof(ch));
    printf("\n *ft: %u",sizeof(ft));
    printf("\n *db: %u",sizeof(db));

    //size of pointer datatype

    printf("\n int pointer : %u",sizeof(int*));
    printf("\n float pointer : %u",sizeof(float*));
    printf("\n double pointer : %u",sizeof(double*));
    printf("\n char pointer : %u",sizeof(char*));

    return 0;
}
*/

///*****************************************************

/*
#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;

    printf("\n Address of x : %u \t Value of x: %d",&x,x);

    printf("\n\n Address of p : %u \t Value of p: %u",&p,p);
    printf("\n Value of x using p : %d",*p);

    return 0;
}

*/

///*******************************************************************************
///Double pointer

/*

#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    int **q;

    p=&x;
    q=&p;

    printf("\n Address of x : %u \t Value of x: %d",&x,x);

    printf("\n\n Address of p : %u \t Value of p: %u",&p,p);
    printf("\n Value of x using p : %d",*p);

    printf("\n Value of q(address of p): %u \t Value of p : %u \t Value of x using q : %d",q,*q,**q);

}

*/

///***********************************************************

///Display the elements of array

/*
#include<stdio.h>
int main()
{
    int x[]={11,22,33,44,55};

    int i,*p;
    p=x; //p=&x;  //p=&x[0];

    printf("\n Display the elements : ");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(p+i));
    }

    return 0;
}

*/

///Take input from user

/*
#include<stdio.h>
int main()
{
    int x[5],i,*p;

    p=&x;

    printf("\n Enter the elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display  the elements : ");
    for(i=0;i<5;i++)
    {
        printf("5%d",*(p+i));
    }
}
*/

/// Dynamic Memory allocation Using malloc():
/*

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,i;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    //memry allocation
    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter the %d elements : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display  the %d elements : ",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }

    return 0;
}

*/

///********Enter the runs scored by player
/*
#include<stdio.h>
int main()
{
    int *p[4],m[4],i,j;


    for(i=0;i<4;i++)
    {
        printf("\n Enter the runs scored by player %d",i+1);

        for(j=0;j<4;j++)
        {
            printf("\n Match %d",j+1);
            scanf("%d",(p+i));
        }
    }

    printf("\n Display the scores: \n");
    for(i=0;i<4;i++)
    {
        printf("\n Player %d",i+1);
        for(j=0;j<4;j++)
        {
            printf("\t %d",*(p+i));
        }
    }

    return 0;
}
*/

/// Enter the N numbers and copy the elements into another location

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,cnt,i;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    q=(int*)malloc(cnt*sizeof(int));

    for(i=0;i<cnt;i++)
    {
        *(q+i)=*(p+i);
    }

    printf("\n Original elements are : ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }
    printf("\n Copied elements are : ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(q+i));
    }

}

*/

///Enter the N numbers and count even

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,ec=0,i;

    printf("\n Enter the number count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    for(i=0;i<cnt;i++)
    {
        if(*(p+i)%2==0)
        {
            ec++;
        }
    }
    printf("\n Even count is : %d",ec);

///================ it's also give same answer ===============
    // display
    printf("\n Elements are: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",p[i]);
    }
    printf("\n Even count is: %d",ec);
    return 0;
}
*/


/// Enter the N nos and display all primes
/*

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cnt,i,flg=0,d,*p,j;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    printf("\n Enter the %d numbers : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    ///Process
    printf("\n Prime numbers are : ");
    for(i=0;i<cnt;i++)
    {
        flg=0;
        for(j=2;j<=*(p+i)/2;j++)
        {
            if(*(p+i)%j==0)
            {
                flg=1;
                break;
            }
        }
        if(flg==0 && *(p+i)!=1)
        {
            printf("\t %d",*(p+i));
        }
    }
    return 0;

}

*/

///Basic
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,*p,**q;
    p=&x;
    q=&p;

    x=10;

    printf("\n Value of x = %d \t Address of x = %d",x,&x);
    printf("\n Value of p = %d \t Address of p = %d",p,&p);
    printf("\n Value of q = %d \t Address of q = %d",q,&q);


    printf("\n\n");

    printf("\n Value of x (Using p) = %d",*p);
    printf("\n value of x (Using q) = %d",**q);

    printf("\n\n Value of p (i.e Address of x) = %d",p);
    printf("\n  value of q  (i.e Address of p) = %d",q);

}
*/


/// WAP to find out total bill, discount and payable amount.
///(There are N items and discount 5% toll bill less than 500 otherwise 14%)

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *p,dis=0.0,tot=0.0;
    int cnt,i;

    printf("\n Enter the item count : ");
    scanf("%d",&cnt);

    p=(float*)malloc(cnt*sizeof(float));
        printf("\n p address %d",p);

    printf("\n Enter the %d item  : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%f",(p+i));
    }

    //p=&cnt;
    //printf("\n p address %d",&p);

    ///Display itms
    printf("\n Display  the %d item  : ",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("\t %f",*(p+i));
        tot=tot+*(p+i);
    }

    if(tot<=500)
    {
        dis=tot*0.05;
    }
    else
    {
        dis=tot*0.14;
    }

    printf("\n Total bill is : %f",tot);
    printf("\n Discount is : %f",dis);
    printf("\n Payebal amount is : %f",tot-dis);
    printf("\n\n");

    for(i=0;i<cnt;i++)
    {
            printf("\n p address %d",p);
            printf("\n cnt addres %d",(p+i));

    }
    return 0;
}

*/

/// sort the collection
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,i,j,tmp;

    printf("\n Enter the count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n enter the %d elements : ",cnt);

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Elements Before Sort : ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    ///sorting

    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if(*(p+j)<*(p+i))
            {
                tmp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=tmp;
            }
        }
    }

    printf("\n After Sorting : ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    return 0;
}

*/

///WAP to search enterd number is present or not
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,i,flg=0,num;

    printf("\n Enter the number count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter the %d numbers : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    ///Display
    printf("\n Display the %d numbers : ",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",*(p+i));
    }

    printf("\n Enter the number to be searched : ");
    scanf("%d",&num);

    ///process
    for(i=0;i<cnt;i++)
    {
        if(num==*(p+i))
        {
            flg=1;
            break;
        }
    }

    if(flg==1)
    {
        printf("\n %d is present at %d position",num,i+1);
    }
    else
    {
        printf("\n %d is not present",num);
    }

    return 0;
}

*/


/// WAP to find the highest score by the player in n Matches

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,Mcnt,hr=0,pos=0,i;

    printf("\n Enter the match count : ");
    scanf("%d",&Mcnt);

    p=(int*)malloc(Mcnt*sizeof(int));

    ///input
    printf("\n Enter the runs scored by player in %d matches : \n",Mcnt);

    for(i=0;i<Mcnt;i++)
    {
        printf("Match %d : ",i+1);
        scanf("%d",(p+i));
    }

    ///process
    for(i=0;i<Mcnt;i++)
    {
        if(*(p+i)>hr)
        {
            hr=*(p+i);
            pos=i+1;
        }
    }

    printf("\n Display the all run's scored by player in %d matches : \n",Mcnt);

    for(i=0;i<Mcnt;i++)
    {
        printf("\nMatch : %d",i+1);
        printf("\t %d",*(p+i));
    }

    printf("\n Highest run %d in  Match %d",hr,pos);
    return 0;
}
*/

/// WAP to find out total bill, discount and payable amount.for 4 buyer
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,ic[4];
    float tot=0,dis,*p[4];

    for(i=0;i<4;i++)
    {
        printf("\n Enter the item count for %d buyer : ",i+1);
        scanf("%d",&ic[i]);

        ///memory allocation

        p[i]=(float*)malloc(ic[i]*sizeof(float));

        printf("\n Enter the price of %d items : ",ic[i]);
        for(j=0;j<ic[i];j++)
        {
            printf("\n Item %d : ",j+1);
            scanf("%f",*(p+i)+j);
        }
    }


    printf("\n List of items and there prices : ");

    for(i=0;i<4;i++)
    {
        tot=0.0;
        dis=0.0;
        printf("\n Buyer %d : ",i+1);

        for(j=0;j<ic[i];j++)
        {
            printf("\n \t Item : %d  price : %f",j+1,*(*(p+i)+j));
            tot=tot+*(*(p+i)+j);
        }

        if(tot<=500)
        {
            dis=tot*0.05;
            printf("\n Discount is : %f \t Total Bill is : %f\n",dis,tot-dis);
        }
        else
        {
            dis=tot*0.14;
            printf("\n Discount is : %f \t Total Bill is : %f\n",dis,tot-dis);
        }
    }
    return 0;
}
*/

/// WAP to display runs scored by 3 different players in N matches
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p[3],mat[3],i,j;

    for(i=0;i<3;i++)
    {

        printf("\n Enter the Player %d Matches : ",i+1);
        scanf("%d",&mat[i]);

        p[i]=(int*)malloc(mat[i]*sizeof(int));
        printf("\n Address of p%d is %d",i+1,&p[i]);
        printf("\n");

        for(j=0;j<mat[i];j++)
        {
            printf(" Match %d ",j+1);
            scanf("%d",*(p+i)+j);
            printf("\n Address of match %d is %d \n",j+1,&*(*(p+i)+j));
        }
    }

    for(i=0;i<3;i++)
    {
        printf("\nPlayer %d :  \n",i+1);

        for(j=0;j<mat[i];j++)
        {
            printf("Match  %d:\t",j+1);
            printf("%d\n",*(*(p+i)+j));
        }
    }
    return 0;
}
*/

///ENTER THE MARKS FOR N NUMBER STUDENTS IN 3 SUBJECTS
/*

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int (*p)[3],scnt,i,j;

    printf("\n Enter the student count : ");
    scanf("%d",&scnt);

    p=(int(*)[])malloc(scnt*3*sizeof(int));

    for(i=0;i<scnt;i++)
    {
        printf("\n Marks of student %d : \n",i+1);

        for(j=0;j<3;j++)
        {
            printf("subject %d : ",j+1);
            scanf("%d",*(p+i)+j);
        }
    }

    printf("\n Display the marks: \n");
    for(i=0;i<scnt;i++)
    {
        printf("\n Marks of student %d : \n",i+1);

        for(j=0;j<3;j++)
        {
            printf("subject %d : ",j+1);
            printf("%5d\n",*(*(p+i)+j));

        }
    }

    ///display address
    printf("\n Addres of p is %d",&p);

    for(i=0;i<scnt;i++)
    {
        printf("\n Address of student %d is %d",i+1,&*(p+i));

        for(j=0;j<3;j++)
        {
            printf("\n Subject %d Address : %d",j+1,&*(*p+i)+j);
        }
    }
    return 0;
}

*/

///There are N student and M subjects ( M may be different for every student )


#include<stdio.h>
int main()

{
    int **p,*sub;
    int i,j,stdcnt;

    printf("\n Enter the student count: ");
    scanf("%d",&stdcnt);

    p=(int*)malloc(stdcnt*sizeof(int));
    sub=(int*)malloc(stdcnt*sizeof(int));

    for(i=0;i<stdcnt;i++)
    {
        printf("\n Enter the subject count of student %d: ",i+1);
        scanf("%d",(sub+i));

        *(p+i)=(int*)malloc(*(sub+i)*sizeof(int));

        printf("\n Enter the marks in %d subject",*(sub+i));
        for(j=0;j<*(sub+i);j++)
        {
            printf("\n Sub %d: ",j+1);
            scanf("%d",*(p+i)+j);
        }
    }
    printf("\n Student List With Marks: \n");
    for(i=0;i<stdcnt;i++)
    {
        printf("\n Student %d: ",i+1);
        for(j=0;j<*(sub+i);j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
        printf("\n");
    }
    return 0;
}



///======================================================================================================
///************** Pointer type *********************

///1.void pointer
/*
#include <stdio.h>
int main( )
{
void *p = NULL; //void pointer
int x=10;
double db=324.457878;

printf("The size of pointer is:%d\n",sizeof(p));

p=&x;
printf("\n value of x is: %d",(int)p);

p=&db;
//printf("\n value of db is: %lf",*p);
printf("\n value of db is: %lf",(double)p);

return 0;
}
*/

///===================================================
///2.wild pointer
/*
#include <stdio.h>
int main()
{
int *p; //wild pointer
printf("\n%d",*p);
return 0;
}

*/
///==========================================
///3.- Dangling pointer:
/*
#include<stdio.h>
int main()
{
    int *p,cnt,i;

    printf("\n Enter the element count: ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter the %d Nos: ",cnt);

    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Elements are: ");

    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }

    free(p);
    return 0;
}

*/
///======================================
///4. Direct and Indirect Access Pointers:
/*
#include<stdio.h>
int main()
{
    int x[]={11,22,33,44,55};
    int *p,i;

    printf("\n Direct 1 - values are: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }

    printf("\n Direct 2 - values are: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(x+i));
    }

    p=&x[0];

    printf("\n In-Direct-values are: ");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(p+i));
    }
}

*/

///====================================================
///Pointer Arithmetic:
/*
#include<stdio.h>
int main()
{
    int *p,*q,cnt,i;

    printf("\n Enter the count: ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    q=p;

    printf("\n Enter the %d nos: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",p++);
    }

    p=q;

    printf("\n Enter the %d nos: ",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*p++);
    }
    return 0;
}
*/

///=======================================================================

///Using the calloc()
/*
#include<stdio.h>
int main()
{
    int *p,cnt,i;

    printf("\n Enter the count: ");
    scanf("%d",&cnt);

    p=(int*)calloc(cnt,sizeof(int));

    printf("\n Nos: ");

    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }
    printf("\n Enter the %d nos: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n nos: ");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }
    free(p);
    return 0;
}
*/

///Using realloc( )
/*

int main()
{
    int *p,cnt,i;

    printf("\n Enter the count: ");
    scanf("%d",&cnt);

    p=(int*)calloc(cnt,sizeof(int));
    printf("\n Enter the %d nos: ",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }
    i=cnt;

    printf("\n Enter the new count: ");
    scanf("%d",&cnt);

    p=realloc(p,cnt*sizeof(int));

    printf("\n Enter the %d nos: ",cnt-i);

    for(;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Now nos: ");

    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }
    return 0;
}
*/
