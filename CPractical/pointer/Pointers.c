/*
//cheaking size for pointers Variables


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  *p;
    float *ft;
    char *ch;
    double *db;

    printf("\nCheaking Size For Pointer:\n");
    printf("\n for int %u",sizeof(int*));
    printf("\n for float %u",sizeof(float*));
    printf("\n for Char %u",sizeof(char*));
    printf("\n for double %u",sizeof(double*));


    printf("\nCheaking Size For Variables :\n");

    printf("\n The size of int variable:%u",sizeof(p));
    printf("\n for float variable %u",sizeof(ft));
    printf("\n for char variable %u",sizeof(ch));
    printf("\n for double variable %u",sizeof(db));

    return 0;
}
*/
//======================================================================
/*
	WHY POINTER..?

		If you want to store the marks of 60 students then you have following options

			- Decl. 60 variables, float m1,m2,m3,...,m60;

			- decl. array of 60 i.e. float mrk[60]


		Now problem is changed, you have to store the marks of students present
		@ tomommrows lecture at 10 AM

			In short, You don't know the exact count.

		so go for highest possible size.

		(suppose 5 streams and 60 students/stream => 300)
*/
//===========================================================================

///using an array:
/*
#include<stdio.h>
int main()
{
    int arr[300];
    int i,j,cnt;


    printf("\n Enter Your Count:");
    scanf("%d",&cnt);

    printf("\nEnter %d Elements :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nDisplay The Elements :");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",arr[i]);
    }

    return 0;
}

// Now here output is correct
  suppose, we allocated memory assuming 300 students will be there but only 10 students are present
  then you have to input additional 290 values.

  This can be solved by using cnt variable.

  but it is inefficient use of memory. and it will not work when there are more than 300 students

	To allocated exact amount of memory AT RUNTIME some built-in functions are there,
  which does not allows you to assignment an identifier to allocated location, but they returns
  base address of allocated location. TO STORE THAT ADDRESS SPECIAL TYPE OF VARIABLE NEEDED
  CALLED POINTER.

	 so finally we have to check that if we know an address of location is it possible to
  access the value stored in that location.


	CHECK-1:

			int x=10;
			int *p;


			*p		x
			 [ 600 ] ---->  [ 10 ]
				      600

		Meaning of *
			- In Decl: It will indicate declared variable is a pointer variable
			- In expression(rather than decl):  Just replace the * with "Value at address"

			means
				*p  --> value at address p
				    ----> value at address 600
				    -----> 10
*/
//===============================================================================

///using pointer----:
/*
#include<stdio.h>
int main()
{
    int x=10;
    int *p;

    p=&x;

    printf("\nAddress Of X = %d",&x);
    printf("\n Values of x = %d",x);
    printf("\n Value of P = %u",p);
    printf("\n value of p using x = %u",*p);
    printf("\nAddress of p %u",&p);

    return 0;
}
*/
//===========================================================================
///double pointer
/*
**q		*p		x
	[ 900 ] ------>  [ 600 ] ---->  [ 10 ]
      1200		900	      600


				*p  --> value at address p
				    ----> value at address 600
				    -----> 10

				*q  --> value at address q
				    ----> value at address 900
				    -----> 600

				**q --> *(*q)
				    ---> value at address 600
				    ----> 10


#include<stdio.h>
int main()
{
    int x=10;
    int *p;  //pointer to point the Interger value i.e==> *p==>x;
    int **q; //pointer to point pointer interger value i.e ==> **q==>*p

    p=&x;
    q=&p;

    printf("\n Address of x = %d",&x);
    printf("\n value Of x =%d",x);

    printf("\n address of p = %u",&p);
    printf("\n Value of P = %u",p);
    printf("\n Value Of p Using X = %u",*p);

    printf("\n Value of q = %u",q);
    printf("\n value of q using p = %u",*q);
    printf("\n value of q using x=%u",**q);
    printf("\n Address of Q= %u",&q);

    return 0;
}

 Address of x = 6422044
 value Of x =10
 address of p = 6422032
 Value of P = 6422044
 Value Of p Using X = 10
 Value of q = 6422032
 value of q using p = 6422044
 value of q using x=10
 Address of Q= 6422024

   After observing the output, we can say that, If we get an address of location then it is possible to access
	value stored in that location.
*/
//========================================================================================================================

///CHECK - 2:  consider the given array

/*		int x[]={12,45,78,95,34};

                             0      1       2       3       4
	*p		x ______________
			  |	|	|	|	|      |
	 [ 700 ] ----->   | 12 	|  45	|  78	|  95	|  34  |
			  |__|__|__|__|__|
			700     704    708    712     716

		NOTE:
		   	- x[i] gives the value at ith location
			- &x[i] gives the address of ith location

			- The array name x gives the base address of array <--> &x[0];


			(p+i) --> Address of ith location
			*(p+i) --> value at ith location.
*/
//============================================================================
/*
#include<stdio.h>
int main()
{
    int x[5]={1,2,3,4,5};
    int *p,i;

    p=x; //p=&x or p=&x[0]

    printf("\n display an Array Elements :");
    for(i=0;i<5;i++)
    {
        printf("\t %u",*(p+i));
    }
    return 0;
}


After observing the output, we can say that, If we get an address of location then it is possible to access
value stored in that location.

if (p+i) gives the address then we can use it at the time of input.

lets see,

#include<stdio.h>
int main()
{
    int x[5];
    int *p,i;

    p=x; //p=&x or p=&x[0]

    printf("\nEnter Your Elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nDisplay Elements :");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(p+i));
    }

    return 0;
}

//===============================================================================

 Dynamic Memory allocation Using malloc():

    malloc( ) is built-in function, defined in stdlib.h/alloc.h, used to allocate the memory at runtime.

    syntax:
        void* malloc(<size_in_bytes>);
		It will allocate the block the of mentioned bytes, and will gives the base address in return;

        e.g.

            int *p;
            p=(int*)malloc(40);

            *p		     0        1        2        3       4
            [ 500 ] -------> [][][][] [][][][] [][][][] [][][][] [][][][]......
                            500	   Block of 40 bytes

#include<stdio.h>
int main()
{
    int cnt,*p,i;

    printf("\nEnter The Count : ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\nEnter The Elements:");
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nDisplay The Elements:");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }
    return 0;
}
*/
//=======================================================================================
/*Que : WAP To input 4 players and their score for 4 matches using pointer:

#include<stdio.h>
int main()
{
    int *p[4],m[4],i,j;

    //taking Inputes for players score.
    for(i=0;i<4;i++)
    {
        printf("\nRuns For %d player ",i+1);
        for(j=0;j<4;j++)
        {
            printf("\nMatch %d ",j+1);
            scanf("%d",*(p+i)+j);
        }
    }

    printf("\nDisplay The Players Scorecard");

    for(i=0;i<4;i++)
    {
        printf("\n %d player",i+1);

        for(j=0;j<4;j++)
        {
            printf("%5d",*(*(p+i)+j));
        }

    }
    return 0;
}
*/
//=================================================================================================
/*

QUE :Enter the N numbers and copy the elements into another location

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q,cnt,i,j;

    printf("\nEnter Youur Count :");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter Your %d Elements :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    q=(int*)malloc(cnt*sizeof(int));


    for(i=0;i<cnt;i++)
    {
        *(q+i)=*(p+i);
    }

    printf("\n original Elements :");
    for(i=0;i<cnt;i++)
    {
        printf(" %5d",*(p+i));
    }

    printf("\n copied elements:");
    for(i=0;i<cnt;i++)
    {
        printf(" %5d",*(p+i));
    }

    return 0;
}
*/
//=============================================================================================

 /// Enter the N numbers and count even
/*
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int *p,cnt,i,CntE=0;

     printf("\nEnter Your Count:");
     scanf("%d",&cnt);

     p=(int*)malloc(cnt*sizeof(int));

     printf("\nEnter Your %d Elements:",cnt);
     for(i=0;i<cnt;i++)
     {
         scanf("%d",(p+i));
     }

     //procee
     for(i=0;i<cnt;i++)
     {
         if(*(p+i)%2==0)
         {
             cntE++;
         }
     }
     printf("\nThe Count Of Even Numbers %d :",cntE);

     return 0;
 }
 */
//===================================================================================================
///QUE Enter the N nos and display all primes
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,i,j,flg;

    printf("\nEnter Your Count :");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    //input
   printf("\nEnter Your %d Elements:",cnt);
   for(i=0;i<cnt;i++)
   {
       scanf("%d",(p+i));
   }

   //process
   for(i=0;i<cnt;i++)
   {
       flg=0;
       j=1;
       while(j<=*(p+i)/2)
       {
           if(*(p+i)%j==0)
           {
               flg=1;
               break;
           }
           j++;
       }
       if(flg==0 && *(p+i)!=1)
       {
           printf("%5d",*(p+i));
       }
   }


   printf("\nDisplay  Elements:");
   for(i=0;i<cnt;i++)
   {
       printf("%5d",*(p+i));
   }
    return 0;
}
*/
//=================================================================================================
/*  its For one person and unknown COunt of items:
 WAP to find out total bill, discount and payable amount.
(for one person There are N items and discount 5% till bill less than 500 otherwise 14%)


#include<stdio.h>
#include<stdlib.h>
int main()
{

    float *p,tot=0.0,dis,totBill;
    int ic,i;

    printf("\nEnter Your item Count :");
    scanf("%d",&ic);

    p=(float*)malloc(ic*(sizeof(float)));

    printf("\nEnter Your %d Elements :",ic);
    for(i=0;i<ic;i++)
    {
        scanf("%f",(p+i));
        tot=tot+ *(p+i);

    }
    for(i=0;i<ic;i++)
    {
        printf("\nvalue  of ic = %f",*(p+i));

    }

    printf("\n");

    for(i=0;i<ic;i++)
    {

        //p=&ic;
        printf("\nAddress of %d : ic = %d",i+1,(p+i));

        printf("\nvalue of p = %d",p);


        printf("\n");
    }

    if(tot>=0 && tot<500)
    {
        dis=tot*0.05;
    }
    else
    {
        dis=tot*0.014;
    }
    totBill=tot-dis;
    printf("\n Tot = %.2f\t Dis = %.2f \t TotBill = %.2f",tot,dis,totBill);


    /*
    int *p,x=10;

    p=&x;


    printf("\nvalue  of x = %d",x);
    printf("\nAddress of x = %d",&x);

    printf("\nvalue of p = %d",p);
    printf("\nAddress of p = %d",&p);
    printf("\nvalue of p using x= %u",*p);


    return 0;
}
*/
//=============================================================================================
/*
//--------------------------------------------------------------------------------

 Write a same above program for 4 buyers
 Here Buyers Size is fixed And items Size is Unknow.



#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *p[4],tot,dis;
    int ic[4],i,j;

    for(i=0;i<4;i++)
    {
        printf("\nEnter Item Count For %d Buyer :",i+1);
        scanf("%d",&ic[i]);

        p[i]=(int*)malloc(ic[i]*sizeof(int));

        printf("\nEnter Your %d cnt Elements :",ic[i]);

        for(j=0;j<ic[i];j++)
        {
            printf("\n %d Item:",j+1);
            scanf("%f",*(p+i)+j);
        }
    }

    //for an address

    for(i=0;i<4;i++)
    {
        printf("\n\nAddress of P[i] %d is % u\n",i+1,&p[i]);
        printf("\n Address of IC[i] %d %d",i+1,&ic[i]);

        for(j=0;j<ic[i];j++)
        {

            printf("\n Address of J is %d ",&*(*(p+i)+j));
        }
    }


    printf("\nDisplay All Buyers items Price:");
    for(i=0;i<4;i++)
    {
        tot=0.0;
        dis=0.0;
        printf("\n Item : %d",i+1);
        for(j=0;j<ic[i];j++)
        {
            printf("%7.2f",*(*(p+i)+j));
            tot=tot+*(*(p+i)+j);
        }
        if(tot<500 && tot>0)
        {
            dis=tot*0.05;
        }
        else
        {
            dis=tot*0.014;
        }

        printf("\n\n Tot = %0.2f\t dis = %0.2f\t pay Rs = %0.2f\n",tot,dis,tot-dis);

    }

    return 0;
}
*/
//================================================================================
/*

sort the collection

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,cnt,i,j,temp;

    printf("\n Enter Your Count :");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*(sizeof(int)));

    printf("\nEnter Your %d Elements ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\n Display Array Before Sorting :");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }

    //procees
    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if(*(p+j)<*(p+i))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }

    printf("\n Display An Arrat After Sorted:");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }

    return 0;

}
*/
//==============================================================================
/*
search the number

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,no,i,j;

    printf("\n Enter your Count :");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\nEnter Your %d Elements :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nElements Are:");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }


    //process
    printf("\nEnter Number You Want To search:");
    scanf("%d",&no);

    for(i=0;i<cnt;i++)
    {
        if(no==*(p+i))
        {
            break;
        }
    }

    if(i<cnt)
    {
        printf("\n The Number %d is Found At %d location",no,i+1);
    }
    else
    {
        printf("\n %d is Absent In an Array ",no);
    }

    return 0;
}
*/
//==================================================================================
/*
WAP to find the highest score by the player in n Matches and aslo find the Position
--here One Player And N number Of matches


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,cnt,i,max=0,pos;

    printf("\nEnter Your Count :");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*(sizeof(int)));

    printf("\nEnter Your %d Scores of Maches:",cnt);
    for(i=0;i<cnt;i++)
    {
        printf("\n Match %d ",i+1);
        scanf("%d",(p+i));
    }

    printf("\n Player Matches Scores:");
    for(i=0;i<cnt;i++)
    {
        printf("%6d",*(p+i));
    }

    //process
    for(i=0;i<cnt;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
            pos=i;
        }
    }

    printf("\n\n The Max Score in Matches is %d",max);
    printf("\n\n The Max Score Fount At %d Position\n",pos+1);

    return 0;
}
*/
//================================================================================

// WAP to display runs scored by 3 different players in N matches
// ( N may be different for each player )


/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p[3],i,j,ic[3];

    for(i=0;i<3;i++)
    {
        printf("\n Enter The Count For %d Player :",i+1);
        scanf("%d",&ic[i]);

        p[i]=(int*)malloc(ic[i]*sizeof(int));

        for(j=0;j<ic[i];j++)
        {
            printf(" Match %d ",j+1);
            scanf("%d",*(p+i)+j);
        }
    }

    for(i=0;i<3;i++)
    {
        printf("\n\nAddress of P[i] %d is % u\n",i+1,&p[i]);
        for(j=0;j<ic[i];j++)
        {
            //printf("\n Address of IC[i] %d %d",j+1,&ic[i]);
            printf("\n Address of J % d is %d ",j+1,&*(*(p+i)+j));
        }
    }

    for(i=0;i<3;i++)
    {
        printf("\n players %d :",i+1);
        for(j=0;j<ic[i];j++)
        {
            printf("\t match:%d",j+1);
            printf(" %d",*(*(p+i)+j));
        }
    }

    return 0;
}
*/
//==================================================================================
///ENTER THE MARKS OF N STUDENTS IN 3 SUB

/*

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int (*p)[4];
    int i,j,scnt;

    printf("\n Enter the student count: ");
    scanf("%d",&scnt);

    p=(int(*)[])malloc(scnt*4*sizeof(int));

    printf("\n enter the marks of %d students in 3 subjects",scnt);
    for(i=0;i<scnt;i++)
    {
        printf("\n Student %d: ",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }

    //for Address
    for(i=0;i<scnt;i++)
    {
        printf("\n\nAddress of P %d %d\n",i+1,&*(p+i));
        for(j=0;j<4;j++)
        {
            printf("\nAddress of Subject %d %d",j+1,&*(*(p+i)+j));
        }

    }

    printf("\n Student Details \n");
    for(i=0;i<scnt;i++)
    {
        printf("\n Student %d: ",i+1);
        for(j=0;j<4;j++)
        {
            printf("%6d",*(*(p+i)+j));
        }
    }
    return 0;
}
*/
//============================================================================================

/* There are N student and M subjects ( M may be different for every student )

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **p ,*sub;
    int i,j,stdcnt,subcnt;

    printf("\nEnter The Student Count:");
    scanf("%d",&stdcnt);


    p=(int**)malloc(studcnt*sizeof(int));
    sub=(int*)malloc(subcnt*sizeof(int));

    for(i=0;i<stdcnt;i++)
    {
        printf("\nEnter The subject Count for %d Student:",i+1);
        scanf("%d",(sub+i));


    }

    return 0;
}

*/
//==========================================================================================
//Pointers Types:--
//
/*  1.NULL Pointer: & 2.Void Pointers


#include<stdio.h>
int main()
{
    void *p=NULL;
    int x=10;
    double db=12.43087;

    p=&x;
    printf("\n%d",(int)(*p));

    p=&db;
    printf("\n%lf",(double)*p);

    return 0;
}
*/
//=========================================================================================================

//-3 wild pointer:
/*
#include<stdio.h>
int main()
{
    int *p;
    printf("\n%d",*p);

    return 0;
}
*/
//=====================================================================================================
///4. Dangling Pointer
/*
#include<stdio.h>
int main()
{
    int *p,cnt,i;

    printf("\nEnter The Count:");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\n Enter Your %d Elements:",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nDisplay The elements:");
    for(i=0;i<cnt;i++)
    {
        printf("%2d",*(p+i));
    }

    free(p);

    return 0;
}
*/
//=======================================================================================
///Direct And Indirect Access
/*
#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5};
    int *p,i;

    ///direct access

    printf("\n Direct Access 1: values");
    for(i=0;i<5;i++)
    {
        printf("%5d",x[i]);
    }

    printf("\n Direct Access Value 2:");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(x+i));
    }

    p=&x[0];
    printf("\n Indirect Access values:");
    for(i=0;i<5;i++)
    {
        printf("%5d",*(p+i));
    }

    return 0;
}
*/
//====================================================================================
///Pointer Arithmetic:
/*
#include<stdio.h>
int main()
{
    int *p,*q,cnt,i;

    printf("\n Enter Your Cnt");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));
    q=p;

    printf("\nEnter The %d Elements:",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",p++);
    }

    p=q;
    printf("\n Display The Elements :");
    for(i=0;i<cnt;i++)
    {
        printf("%51d",*p++);
    }
    return 0;
}
*/
//=======================================================================================
///Using Calloc...
/*
#include<stdio.h>
int main()
{
    int *p,cnt,i;

    printf("\nEnter Yoour Count:");
    scanf("%d",&cnt);

    p=(int*)calloc(cnt,sizeof(int));

    printf("\nDisplayig Before Taking An output:");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }

    printf("\nEnter Your %d Elements:",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nDisplay Elements of Input:");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }

    free(p);

    return 0;
}
*/
//================================================================================

///Using Realloc
/*
#include<stdio.h>
int main()
{
    int *p,cnt,i;

    printf("\nEnter Your Count:");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*sizeof(int));

    printf("\nEnter The %d Elements:",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nDisplay The Elements:");
    for(i=0;i<cnt;i++)
    {
        printf("%5d",*(p+i));
    }

    i=cnt;

    printf("\n ENter The New Count");
    scanf("%d",&cnt);

    p=realloc(p,cnt*sizeof(int));

    printf("\nEnter The %d Nos:",cnt-i);
    for(;i<cnt;i++)
    {
        scanf("%d",(p+i));
    }

    printf("\nNew Nos:");
    for(i=0;i<cnt;i++)
    {
        printf(" %d",*(p+i));
    }
    return 0;
}

*/
//=========================================================================================














